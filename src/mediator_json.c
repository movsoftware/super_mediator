/**
 * @file mediator_json.c
 *
 * Contains most of the JSON-y functions.
 *
 ** ------------------------------------------------------------------------
 ** Copyright (C) 2012-2020 Carnegie Mellon University. All Rights Reserved.
 ** ------------------------------------------------------------------------
 * Authors: Emily Sarneso <netsa-help@cert.org>
 * ------------------------------------------------------------------------
 * @OPENSOURCE_HEADER_START@
 * Use of this (and related) source code is subject to the terms
 * of the following licenses:
 *
 * GNU Public License (GPL) Rights pursuant to Version 2, June 1991
 * Government Purpose License Rights (GPLR) pursuant to DFARS 252.227.7013
 *
 * NO WARRANTY
 *
 * ANY INFORMATION, MATERIALS, SERVICES, INTELLECTUAL PROPERTY OR OTHER
 * PROPERTY OR RIGHTS GRANTED OR PROVIDED BY CARNEGIE MELLON UNIVERSITY
 * PURSUANT TO THIS LICENSE (HEREINAFTER THE "DELIVERABLES") ARE ON AN
 * "AS-IS" BASIS. CARNEGIE MELLON UNIVERSITY MAKES NO WARRANTIES OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED AS TO ANY MATTER INCLUDING, BUT NOT
 * LIMITED TO, WARRANTY OF FITNESS FOR A PARTICULAR PURPOSE,
 * MERCHANTABILITY, INFORMATIONAL CONTENT, NONINFRINGEMENT, OR ERROR-FREE
 * OPERATION. CARNEGIE MELLON UNIVERSITY SHALL NOT BE LIABLE FOR INDIRECT,
 * SPECIAL OR CONSEQUENTIAL DAMAGES, SUCH AS LOSS OF PROFITS OR INABILITY
 * TO USE SAID INTELLECTUAL PROPERTY, UNDER THIS LICENSE, REGARDLESS OF
 * WHETHER SUCH PARTY WAS AWARE OF THE POSSIBILITY OF SUCH DAMAGES.
 * LICENSEE AGREES THAT IT WILL NOT MAKE ANY WARRANTY ON BEHALF OF
 * CARNEGIE MELLON UNIVERSITY, EXPRESS OR IMPLIED, TO ANY PERSON
 * CONCERNING THE APPLICATION OF OR THE RESULTS TO BE OBTAINED WITH THE
 * DELIVERABLES UNDER THIS LICENSE.
 *
 * Licensee hereby agrees to defend, indemnify, and hold harmless Carnegie
 * Mellon University, its trustees, officers, employees, and agents from
 * all claims or demands made against them (and any related losses,
 * expenses, or attorney's fees) arising out of, or relating to Licensee's
 * and/or its sub licensees' negligent use or willful misuse of or
 * negligent conduct or willful misconduct regarding the Software,
 * facilities, or other rights or assistance granted by Carnegie Mellon
 * University under this License, including, but not limited to, any
 * claims of product liability, personal injury, death, damage to
 * property, or violation of any laws or regulations.
 *
 * Carnegie Mellon University Software Engineering Institute authored
 * documents are sponsored by the U.S. Department of Defense under
 * Contract FA8721-05-C-0003. Carnegie Mellon University retains
 * copyrights in all material produced under this contract. The U.S.
 * Government retains a non-exclusive, royalty-free license to publish or
 * reproduce these documents, or allow othersto do so, for U.S.
 * Government purposes only pursuant to the copyright license under the
 * contract clause at 252.227.7013.
 *
 *
 * @OPENSOURCE_HEADER_END@
 * -----------------------------------------------------------
 */

#include <mediator/mediator_ctx.h>
#include <mediator/mediator_util.h>
#include <mediator/mediator_inf.h>
#include "mediator_print.h"
#include "mediator_json.h"

#define FBSTLNEXT(a, b) fbSubTemplateListGetNextPtr(a, b)
#define MD_REM_MSG(_buf_) (buf->buflen - (_buf_->cp - _buf_->buf))

#define MD_WR_BDC(_ret_, _size_)             \
    if (_ret_ < 0) return FALSE;             \
    if ((size_t)_ret_ >= _size_) return FALSE;  \
    _size_ -= _ret_;

#define MD_CHECK_RET(_buf_, _ret_, _size_)    \
    if (_ret_ < 0) return FALSE;              \
    if ((size_t)_ret_ >= _size_) return FALSE;  \
    _size_ -= _ret_;                          \
    _buf_->cp += _ret_;

#define MD_CHECK_RET0(_buf_, _ret_, _size_)    \
    if (_ret_ < 0) return 0;                  \
    if ((size_t)_ret_ >= _size_) return 0;    \
    _size_ -= _ret_;                          \
    _buf_->cp += _ret_;

#define MD_APPEND_CHAR(_buf_, _ch_)           \
    *(_buf_->cp) = _ch_;                      \
    ++(_buf_->cp);
#define MD_APPEND_CHAR_CHECK(_rem_, _buf_, _ch_)        \
    if (_rem_ > 1) {                           \
        MD_APPEND_CHAR(_buf_, _ch_);           \
        _rem_ -= 1;                            \
    } else {                                   \
        return FALSE;                          \
    }


/* RFC 4627 -
Any character may be escaped.  If the character is in the Basic
   Multilingual Plane (U+0000 through U+FFFF), then it may be
   represented as a six-character sequence: a reverse solidus, followed
   by the lowercase letter u, followed by four hexadecimal digits that
   encode the character's code point.  The hexadecimal letters A though
   F can be upper or lowercase.  So, for example, a string containing
   only a single reverse solidus character may be represented as
   "\u005C".
*/

gboolean mdJsonifyEscapeChars(
    mdBuf_t  *mdbuf,
    size_t   *rem,
    uint8_t  *buf,
    size_t   buflen)
{
    size_t i;
    ssize_t ret;
    uint8_t ch;

    for (i = 0; i < buflen; i++) {
        ch = buf[i];
        if (ch < 32 || ch >= 127) {
            ret = snprintf(mdbuf->cp, *rem, "\\u%04x", ch);
        } else if (ch == '\\') {
            ret = snprintf(mdbuf->cp, *rem, "\\\\");
        } else if (ch == '"') {
            ret = snprintf(mdbuf->cp, *rem, "\\\"");
        } else {
            ret = snprintf(mdbuf->cp, *rem, "%c", ch);
        }
        MD_WR_BDC(ret, *rem);
        mdbuf->cp += ret;
    }

    return TRUE;

}


/**
 *  Quotes any non-printable characters in 'cp' using UTF-8 style
 *  encoding and appends the result to 'str'.
 */
gboolean mdJsonifyEscapeCharsGStringAppend(
    GString        *str,
    const uint8_t  *cp,
    size_t          len)
{
    while (len) {
        if (*cp < 32 || *cp >= 127) {
            g_string_append_printf(str, "\\u%04x", *cp);
        } else if (*cp == '\\') {
            g_string_append(str, "\\\\");
        } else if (*cp == '"') {
            g_string_append(str, "\\\"");
        } else {
            g_string_append_c(str, *cp);
        }
        ++cp;
        --len;
    }
    return TRUE;
}


gboolean mdJsonifyDNSRRRecord(
    md_dns_rr_t          *rec,
    mdBuf_t            *buf)
{
    size_t brem = MD_REM_MSG(buf);
    size_t buftest;
    uint64_t start_secs = rec->flowStartMilliseconds / 1000;
    uint32_t start_rem = rec->flowStartMilliseconds % 1000;
    char     sabuf[40];
    char    testsip[16];
    int ret;

    ret = snprintf(buf->cp, brem, "{\"dns\":{\"flowStartMilliseconds\":\"");
    MD_CHECK_RET0(buf, ret, brem);

    memset(testsip, 0, sizeof(testsip));

    if (!md_util_time_buf_append(buf, &brem, start_secs, PRINT_TIME_FMT)) {
        return 0;
    }

    ret = snprintf(buf->cp, brem, ".%03u\",", start_rem);

    MD_CHECK_RET0(buf, ret, brem);

    if (rec->sourceIPv4Address == 0) {
        if (memcmp(rec->sourceIPv6Address, testsip, sizeof(rec->sourceIPv6Address))) {
            md_util_print_ip6_addr(sabuf, rec->sourceIPv6Address);
            ret = snprintf(buf->cp, brem, "\"sourceIPv6Address\":\"%s\",", sabuf);
            MD_CHECK_RET0(buf, ret, brem);
            md_util_print_ip6_addr(sabuf, rec->destinationIPv6Address);
            ret = snprintf(buf->cp, brem, "\"destinationIPv6Address\":\"%s\",", sabuf);
            MD_CHECK_RET0(buf, ret, brem);
        }
    } else {
        md_util_print_ip4_addr(sabuf, rec->sourceIPv4Address);
        ret = snprintf(buf->cp, brem, "\"sourceIPv4Address\":\"%s\",", sabuf);
        MD_CHECK_RET0(buf, ret, brem);
        md_util_print_ip4_addr(sabuf, rec->destinationIPv4Address);
        ret = snprintf(buf->cp, brem, "\"destinationIPv4Address\":\"%s\",", sabuf);
        MD_CHECK_RET0(buf, ret, brem);

    }

    if (rec->protocolIdentifier) {
        ret = snprintf(buf->cp, brem, "\"protocolIdentifier\":%d,", rec->protocolIdentifier);
        MD_CHECK_RET0(buf, ret, brem);
    }

    if (rec->vlanId) {
        ret = snprintf(buf->cp, brem, "\"vlanId\":\"%u,", rec->vlanId);
        MD_CHECK_RET0(buf, ret, brem);
    }

    if (rec->sourceTransportPort) {
        ret = snprintf(buf->cp, brem, "\"sourceTransportPort\":%d,", rec->sourceTransportPort);
        MD_CHECK_RET0(buf, ret, brem);
    }

    if (rec->destinationTransportPort) {
        ret = snprintf(buf->cp,brem, "\"destinationTransportPort\":%d,", rec->destinationTransportPort);
        MD_CHECK_RET0(buf, ret,brem);
    }

    if (rec->yafFlowKeyHash) {
        ret = snprintf(buf->cp,brem, "\"yafFlowKeyHash\":%u,", rec->yafFlowKeyHash);
        MD_CHECK_RET0(buf, ret,brem);
    }

    if (rec->observationDomainId) {
        ret = snprintf(buf->cp, brem, "\"observationDomainId\":%u,", rec->observationDomainId);
        MD_CHECK_RET0(buf, ret, brem);
    }

    ret = snprintf(buf->cp, brem, "\"dnsRRSection\":%d,\"dnsNXDomain\":%d,",
                   rec->dnsRRSection, rec->dnsNXDomain);
    MD_CHECK_RET(buf, ret, brem);

    if (rec->dnsAuthoritative) {
        ret = snprintf(buf->cp, brem, "\"dnsAuthoritative\":\"True\",");
    } else {
        ret = snprintf(buf->cp, brem, "\"dnsAuthoritative\":\"False\",");
    }
    MD_CHECK_RET(buf, ret, brem);

    ret = snprintf(buf->cp, brem, "\"dnsQRType\":%d, \"dnsTTL\":%u, "
                   "\"dnsID\":%d,",
                   rec->dnsQRType, rec->dnsTTL, rec->dnsID);

    MD_CHECK_RET(buf, ret, brem);

    if (rec->rrname.buf) {
        ret = snprintf(buf->cp, brem, "\"dnsQName\":\"");
        MD_CHECK_RET(buf, ret, brem);
        mdJsonifyEscapeChars(buf, &brem, rec->rrname.buf, rec->rrname.len);
        ret = snprintf(buf->cp, brem, "\",");
        MD_CHECK_RET(buf, ret, brem);
    } /* else - query may be for the root server which is NULL*/

    buftest = MD_REM_MSG(buf);

    if (rec->dnsQueryResponse == 0) {
        /* query */
        buf->cp -= 1;
        brem += 1;
        MD_APPEND_CHAR_CHECK(brem, buf, '}');
        MD_APPEND_CHAR_CHECK(brem, buf, '}');
        MD_APPEND_CHAR_CHECK(brem, buf, '\n');

        return TRUE;
    }

    if (rec->dnsQRType == 1) {
        uint32_t sip;
        if (rec->rrdata.len) {
            memcpy(&sip, rec->rrdata.buf, sizeof(uint32_t));
            md_util_print_ip4_addr(sabuf, sip);
            ret = snprintf(buf->cp, brem, "\"A\":\"%s\"", sabuf);
            MD_CHECK_RET(buf, ret, brem);
        }
    } else if (rec->dnsQRType == 2) {
        ret = snprintf(buf->cp, brem, "\"dnsNSDName\":\"");
        MD_CHECK_RET(buf, ret, brem);
        mdJsonifyEscapeChars(buf, &brem, rec->rrdata.buf,
                             rec->rrdata.len);
        MD_APPEND_CHAR_CHECK(brem, buf, '\"');

    } else if (rec->dnsQRType == 5) {
        ret = snprintf(buf->cp, brem, "\"dnsCName\":\"");
        MD_CHECK_RET(buf, ret, brem);
        mdJsonifyEscapeChars(buf, &brem, rec->rrdata.buf,
                             rec->rrdata.len);
        MD_APPEND_CHAR_CHECK(brem, buf, '\"');
    } else if (rec->dnsQRType == 12) {
        ret = snprintf(buf->cp, brem, "\"dnsPTRDName\":\"");
        MD_CHECK_RET(buf, ret, brem);
        mdJsonifyEscapeChars(buf, &brem, rec->rrdata.buf,
                             rec->rrdata.len);
        MD_APPEND_CHAR_CHECK(brem, buf, '\"');
    } else if (rec->dnsQRType == 15) {
        ret = snprintf(buf->cp, brem, "\"dnsMXExchange\":\"");
        MD_CHECK_RET(buf, ret, brem);
        mdJsonifyEscapeChars(buf, &brem, rec->rrdata.buf,
                             rec->rrdata.len);
        MD_APPEND_CHAR_CHECK(brem, buf, '\"');
    } else if (rec->dnsQRType == 28) {
        uint8_t sip[16];
        if (rec->rrdata.len) {
            memcpy(sip, rec->rrdata.buf, sizeof(sip));
            md_util_print_ip6_addr(sabuf, sip);
            ret = snprintf(buf->cp, brem, "\"AAAA\":\"%s\"", sabuf);
            MD_CHECK_RET(buf, ret, brem);
        }
    } else if (rec->dnsQRType == 16) {
        ret = snprintf(buf->cp, brem, "\"dnsTXTData\":\"");
        MD_CHECK_RET(buf, ret, brem);
        mdJsonifyEscapeChars(buf, &brem, rec->rrdata.buf,
                             rec->rrdata.len);
        MD_APPEND_CHAR_CHECK(brem, buf, '\"');
    } else if (rec->dnsQRType == 33) {
        ret = snprintf(buf->cp, brem, "\"dnsSRVTarget\":\"");
        MD_CHECK_RET(buf, ret, brem);
        mdJsonifyEscapeChars(buf, &brem, rec->rrdata.buf,
                             rec->rrdata.len);
        MD_APPEND_CHAR_CHECK(brem, buf, '\"');
    } else if (rec->dnsQRType == 6) {
        ret = snprintf(buf->cp, brem, "\"dnsSOAMName\":\"");
        MD_CHECK_RET(buf, ret, brem);
        mdJsonifyEscapeChars(buf, &brem, rec->rrdata.buf,
                             rec->rrdata.len);
        MD_APPEND_CHAR_CHECK(brem, buf, '\"');
    } else if (rec->dnsQRType == 46) {
        ret = snprintf(buf->cp, brem, "\"dnsSigner\":\"");
        MD_CHECK_RET(buf, ret, brem);
        mdJsonifyEscapeChars(buf, &brem, rec->rrdata.buf,
                             rec->rrdata.len);
        MD_APPEND_CHAR_CHECK(brem, buf, '\"');
    } else if (rec->dnsQRType == 47) {
        ret = snprintf(buf->cp, brem, "\"dnsHashData\":\"");
        MD_CHECK_RET(buf, ret, brem);
        mdJsonifyEscapeChars(buf, &brem, rec->rrdata.buf,
                             rec->rrdata.len);
        MD_APPEND_CHAR_CHECK(brem, buf, '\"');
    }

    brem = MD_REM_MSG(buf);

    /* no rrname/rrdata */
    if (brem == buftest) {
        /* remove the comma at the end of dnsQName */
        buf->cp -= 1;
        brem += 1;
    }

    MD_APPEND_CHAR_CHECK(brem, buf, '}');
    MD_APPEND_CHAR_CHECK(brem, buf, '}');
    MD_APPEND_CHAR_CHECK(brem, buf, '\n');
    return TRUE;

}



gboolean mdJsonifyDNSRecord(
    yaf_dnsQR_t     *dns,
    mdBuf_t           *buf)
{
    size_t brem = MD_REM_MSG(buf);
    size_t buftest;
    int ret;

    ret = snprintf(buf->cp, brem, "\"dnsRRSection\":%d,\"dnsNXDomain\":%d,",
                   dns->dnsRRSection, dns->dnsNXDomain);
    MD_CHECK_RET(buf, ret, brem);

    if (dns->dnsAuthoritative) {
        ret = snprintf(buf->cp, brem, "\"dnsAuthoritative\":\"True\",");
    } else {
        ret = snprintf(buf->cp, brem, "\"dnsAuthoritative\":\"False\",");
    }
    MD_CHECK_RET(buf, ret, brem);

    ret = snprintf(buf->cp, brem, "\"dnsQRType\":%d, \"dnsTTL\":%u, \"dnsID\":%d,",
                   dns->dnsQRType, dns->dnsTTL, dns->dnsID);

    MD_CHECK_RET(buf, ret, brem);

    if (dns->dnsQName.buf) {
        ret = snprintf(buf->cp, brem, "\"dnsQName\":\"");
        MD_CHECK_RET(buf, ret, brem);
        mdJsonifyEscapeChars(buf, &brem, dns->dnsQName.buf, dns->dnsQName.len);
        ret = snprintf(buf->cp, brem, "\",");
        MD_CHECK_RET(buf, ret, brem);
    } /* else - query may be for the root server which is NULL*/

    buftest = MD_REM_MSG(buf);

    if (dns->dnsQRType == 1) {
        yaf_dnsA_t *aflow = NULL;
        char ipaddr[20];
        while ((aflow = (yaf_dnsA_t *)FBSTLNEXT(&(dns->dnsRRList), aflow))) {
            if (aflow->sourceIPv4Address) {
                md_util_print_ip4_addr(ipaddr, aflow->sourceIPv4Address);
                ret = snprintf(buf->cp, brem, "\"A\":\"%s\"", ipaddr);
                MD_CHECK_RET(buf, ret, brem);
            }
        }
    } else if (dns->dnsQRType == 2) {
        yaf_dnsNS_t *ns = NULL;
        while ((ns = (yaf_dnsNS_t *)FBSTLNEXT(&(dns->dnsRRList), ns))){
            ret = snprintf(buf->cp, brem, "\"dnsNSDName\":\"");
            MD_CHECK_RET(buf, ret, brem);
            mdJsonifyEscapeChars(buf, &brem, ns->dnsNSDName.buf,
                                      ns->dnsNSDName.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }

    } else if (dns->dnsQRType == 5) {
        yaf_dnsCNAME_t *c = NULL;
        while ((c = (yaf_dnsCNAME_t *)FBSTLNEXT(&(dns->dnsRRList), c)))
        {
            ret = snprintf(buf->cp, brem, "\"dnsCName\":\"");
            MD_CHECK_RET(buf, ret, brem);
            mdJsonifyEscapeChars(buf, &brem, c->dnsCName.buf,
                                  c->dnsCName.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    } else if (dns->dnsQRType == 12) {
        yaf_dnsPTR_t *ptr = NULL;
        while ((ptr = (yaf_dnsPTR_t *)FBSTLNEXT(&(dns->dnsRRList), ptr)))
        {
            ret = snprintf(buf->cp, brem, "\"dnsPTRDName\":\"");
            MD_CHECK_RET(buf, ret, brem);
            mdJsonifyEscapeChars(buf, &brem, ptr->dnsPTRDName.buf,
                                      ptr->dnsPTRDName.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    } else if (dns->dnsQRType == 15) {
        yaf_dnsMX_t *mx = NULL;
        while (( mx = (yaf_dnsMX_t *)FBSTLNEXT(&(dns->dnsRRList), mx)))
        {
            ret = snprintf(buf->cp, brem, "\"dnsMXExchange\":\"");
            MD_CHECK_RET(buf, ret, brem);
            mdJsonifyEscapeChars(buf, &brem, mx->dnsMXExchange.buf,
                                  mx->dnsMXExchange.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    } else if (dns->dnsQRType == 28) {
        yaf_dnsAAAA_t *aa = NULL;
        char ipaddr[40];
        while ((aa = (yaf_dnsAAAA_t *)FBSTLNEXT(&(dns->dnsRRList), aa)))
        {
            md_util_print_ip6_addr(ipaddr,(uint8_t *)&(aa->sourceIPv6Address));
            ret = snprintf(buf->cp, brem, "\"AAAA\":\"%s\"", ipaddr);
            MD_CHECK_RET(buf, ret, brem);
        }
    } else if (dns->dnsQRType == 16) {
        yaf_dnsTXT_t *txt = NULL;
        while ((txt = (yaf_dnsTXT_t *)FBSTLNEXT(&(dns->dnsRRList), txt)))
        {
            ret = snprintf(buf->cp, brem, "\"dnsTXTData\":\"");
            MD_CHECK_RET(buf, ret, brem);
            mdJsonifyEscapeChars(buf, &brem, txt->dnsTXTData.buf,
                                  txt->dnsTXTData.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    } else if (dns->dnsQRType == 33) {
        yaf_dnsSRV_t *srv = NULL;
        while ((srv = (yaf_dnsSRV_t *)FBSTLNEXT(&(dns->dnsRRList), srv)))
        {
            ret = snprintf(buf->cp, brem, "\"dnsSRVTarget\":\"");
            MD_CHECK_RET(buf, ret, brem);
            mdJsonifyEscapeChars(buf, &brem,srv->dnsSRVTarget.buf,
                                      srv->dnsSRVTarget.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    } else if (dns->dnsQRType == 6) {
        yaf_dnsSOA_t *soa = NULL;
        while ((soa = (yaf_dnsSOA_t *)FBSTLNEXT(&(dns->dnsRRList), soa))) {
            ret = snprintf(buf->cp, brem, "\"dnsSOAMName\":\"");
            MD_CHECK_RET(buf, ret, brem);
            mdJsonifyEscapeChars(buf, &brem,soa->dnsSOAMName.buf,
                                      soa->dnsSOAMName.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    } else if (dns->dnsQRType == 46) {
        yaf_dnsRRSig_t *rr = NULL;
        while ((rr = (yaf_dnsRRSig_t *)FBSTLNEXT(&(dns->dnsRRList), rr))) {
            ret = snprintf(buf->cp, brem, "\"dnsSigner\":\"");
            MD_CHECK_RET(buf, ret, brem);
            mdJsonifyEscapeChars(buf, &brem, rr->dnsSigner.buf,
                                      rr->dnsSigner.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    } else if (dns->dnsQRType == 47) {
        yaf_dnsNSEC_t *nsec = NULL;
        while ((nsec = (yaf_dnsNSEC_t *)FBSTLNEXT(&(dns->dnsRRList), nsec)))
        {
            ret = snprintf(buf->cp, brem, "\"dnsHashData\":\"");
            MD_CHECK_RET(buf, ret, brem);
            mdJsonifyEscapeChars(buf, &brem, nsec->dnsHashData.buf,
                                      nsec->dnsHashData.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    }

    brem = MD_REM_MSG(buf);

    /* no rrname/rrdata */
    if (brem == buftest) {
        /* remove the comma at the end of dnsQName */
        buf->cp -= 1;
        brem += 1;
    }

    return TRUE;

}

size_t mdPrintJsonStats(
    yaf_stats_option_t  *stats,
    char            *name,
    FILE            *lfp,
    GError          **err)
{

    GString *str = NULL;
    char ipaddr[20];
    size_t rc;

    md_util_print_ip4_addr(ipaddr, stats->exporterIPv4Address);
    str = g_string_new("");

    g_string_append(str, "{\"stats\":{");

    g_string_append_printf(str, "\"exportedFlowTotalCount\":%"PRIu64",",
            stats->exportedFlowRecordTotalCount);
    g_string_append_printf(str, "\"packetTotalCount\":%"PRIu64",",
            stats->packetTotalCount);
    g_string_append_printf(str, "\"droppedPacketTotalCount\":%"PRIu64",",
            stats->droppedPacketTotalCount);
    g_string_append_printf(str, "\"ignoredPacketTotalCount\":%"PRIu64",",
            stats->ignoredPacketTotalCount);
    g_string_append_printf(str, "\"expiredFragmentCount\":%u,",
            stats->expiredFragmentCount);
    g_string_append_printf(str, "\"assembledFragmentCount\":%u,",
            stats->assembledFragmentCount);
    g_string_append_printf(str, "\"flowTableFlushEvents\":%u,",
            stats->flowTableFlushEvents);
    g_string_append_printf(str, "\"flowTablePeakCount\":%u,",
            stats->flowTablePeakCount);
    g_string_append_printf(str, "\"exporterIPv4Address\":\"%s\",", ipaddr);
    g_string_append_printf(str, "\"exportingProcessId\":%d,",
            stats->exportingProcessId);
    g_string_append_printf(str, "\"meanFlowRate\":%u,",
            stats->meanFlowRate);
    g_string_append_printf(str, "\"meanPacketRate\":%u,",
            stats->meanPacketRate);
    g_string_append_printf(str, "\"observationDomainId\":%d,",
                stats->observationDomainId);
    g_string_append_printf(str, "\"exporterName\":\"%s\"", name);

    g_string_append(str, "}}\n");

    rc = fwrite(str->str, 1, str->len, lfp);

    if (rc != str->len) {
        g_set_error(err, MD_ERROR_DOMAIN, MD_ERROR_IO,
                "Error writing %d b ytes to file: %s\n",
                (unsigned int)str->len, strerror(errno));
        return 0;
    }

    g_string_free(str, TRUE);

    return rc;
}

size_t mdPrintJsonTombstone(
    yaf_tombstone_option_t  *tombstone,
    char            *name,
    FILE            *lfp,
    GError          **err)
{

    GString *str = NULL;
    size_t rc;
    int firstIter = 1;
    void *entry = NULL;

    str = g_string_new("");

    g_string_append(str, "{\"tombstone\":{");

    g_string_append_printf(str, "\"observationDomainId\":%"PRIu32",",
            tombstone->observationDomainId);
    g_string_append_printf(str, "\"exportingProcessId\":%"PRIu32",",
            tombstone->exportingProcessId);
    g_string_append_printf(str, "\"exporterConfiguredId\":%"PRIu16",",
            tombstone->exporterConfiguredId);
    g_string_append_printf(str, "\"tombstoneId\":%"PRIu32",",
            tombstone->tombstoneId);
    g_string_append_printf(str, "\"observationTimeSeconds\":%"PRIu32",",
            tombstone->observationTimeSeconds);

    g_string_append(str, "\"tombstoneAccessList\":[");

    while ((entry = fbSubTemplateListGetNextPtr(&(tombstone->accessList), entry))) {
        if (firstIter) {
            firstIter = 0;
            g_string_append_printf(str, "{\"tombstoneAccessEntry\":{"
                "\"certToolId\":%"PRIu32",\"observationTimeSeconds\":%"PRIu32"}}",
            ((yaf_tombstone_access_t *)entry)->certToolId,
            ((yaf_tombstone_access_t *)entry)->observationTimeSeconds);
        } else {
            g_string_append_printf(str, ",{\"tombstoneAccessEntry\":{"
                "\"certToolId\":%"PRIu32",\"observationTimeSeconds\":%"PRIu32"}}",
            ((yaf_tombstone_access_t *)entry)->certToolId,
            ((yaf_tombstone_access_t *)entry)->observationTimeSeconds);
        }
    }

    g_string_append(str, "]");

    g_string_append(str, "}}\n");

    rc = fwrite(str->str, 1, str->len, lfp);

    if (rc != str->len) {
        g_set_error(err, MD_ERROR_DOMAIN, MD_ERROR_IO,
                "Error writing %d bytes to file: %s\n",
                (unsigned int)str->len, strerror(errno));
        return 0;
    }

    g_string_free(str, TRUE);

    return rc;
}

int mdJsonifyDNSDedupRecord(
    FILE        *fp,
    mdBuf_t     *buf,
    uint8_t     *rec,
    gboolean    print_last,
    gboolean    base64,
    GError      **err)
{
    size_t rc = 0;
    char sabuf[40];
    md_dns_t *record = (md_dns_t *)rec;
    uint64_t start_secs = record->flowStartMilliseconds / 1000;
    uint32_t start_rem = record->flowStartMilliseconds % 1000;
    uint64_t end_secs = record->flowEndMilliseconds / 1000;
    uint32_t end_rem = record->flowEndMilliseconds % 1000;
    gchar *base1 = NULL;
    size_t brem = MD_REM_MSG(buf);
    gboolean encode = FALSE;
    int ret;

    ret = snprintf(buf->cp, brem, "{\"dns\":{\"flowStartMilliseconds\":\"");
    MD_CHECK_RET0(buf, ret, brem);

    if (!md_util_time_buf_append(buf, &brem, start_secs, PRINT_TIME_FMT)) {
        return 0;
    }

    ret = snprintf(buf->cp, brem, ".%03u\",", start_rem);

    MD_CHECK_RET0(buf, ret, brem);

    if (print_last) {
        ret = snprintf(buf->cp, brem, "\"flowEndMilliseconds\":\"");
        MD_CHECK_RET0(buf, ret, brem);

        if (!md_util_time_buf_append(buf, &brem, end_secs, PRINT_TIME_FMT)) {
            return 0;
        }

        ret = snprintf(buf->cp, brem, ".%03u\",", end_rem);
        MD_CHECK_RET0(buf, ret, brem);
    }

    ret = snprintf(buf->cp, brem, "\"dnsQRType\":%d,", record->rrtype);
    MD_CHECK_RET0(buf, ret, brem);

    if (print_last) {
        ret = snprintf(buf->cp, brem, "\"dnsHitCount\":%d,\"dnsTTL\":%d,",
                       record->dnsHitCount, record->dnsTTL);
        MD_CHECK_RET0(buf, ret, brem);
    }

    if (record->rrname.len) {

        if (base64) {
            base1 = g_base64_encode((const guchar *)record->rrname.buf,
                    record->rrname.len-1);
            ret = snprintf(buf->cp, brem, "\"dnsQName\":\"%s\",", base1);
            MD_CHECK_RET0(buf, ret, brem);
            g_free(base1);
        } else {
            ret = snprintf(buf->cp, brem, "\"dnsQName\":\"");
            MD_CHECK_RET0(buf, ret, brem);
            if (!mdJsonifyEscapeChars(buf, &brem, (uint8_t *)record->rrname.buf,
                                    record->rrname.len-1)) {
                return 0;
            }
            if (brem > 2) {
                MD_APPEND_CHAR(buf, '\"');
                MD_APPEND_CHAR(buf, ',');
            }
        }
    }

    if (record->rrtype == 1) {
        if (record->sourceIPv4Address) {
            md_util_print_ip4_addr(sabuf, record->sourceIPv4Address);
            ret = snprintf(buf->cp, brem, "\"A\":\"%s\"", sabuf);
            MD_CHECK_RET0(buf, ret, brem);
        }
    } else if (record->rrtype == 2) {
        ret = snprintf(buf->cp, brem, "\"dnsNSDName\":\"");
        MD_CHECK_RET(buf, ret, brem);
        if (base64) {
            encode = TRUE;
        }  else {
            mdJsonifyEscapeChars(buf, &brem, record->rrdata.buf,
                                 record->rrdata.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }

    } else if (record->rrtype == 5) {
        ret = snprintf(buf->cp, brem, "\"dnsCName\":\"");
        MD_CHECK_RET(buf, ret, brem);
        if (base64) {
            encode = TRUE;
        }  else {
            mdJsonifyEscapeChars(buf, &brem, record->rrdata.buf,
                                 record->rrdata.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    } else if (record->rrtype == 12) {
        ret = snprintf(buf->cp, brem, "\"dnsPTRDName\":\"");
        MD_CHECK_RET(buf, ret, brem);
        if (base64) {
            encode = TRUE;
        }  else {
            mdJsonifyEscapeChars(buf, &brem, record->rrdata.buf,
                                 record->rrdata.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    } else if (record->rrtype == 15) {
        ret = snprintf(buf->cp, brem, "\"dnsMXExchange\":\"");
        MD_CHECK_RET(buf, ret, brem);
        if (base64) {
            encode = TRUE;
        }  else {
            mdJsonifyEscapeChars(buf, &brem, record->rrdata.buf,
                                 record->rrdata.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    } else if (record->rrtype == 28) {
        md_util_print_ip6_addr(sabuf, record->rrdata.buf);
        ret = snprintf(buf->cp, brem, "\"AAAA\":\"%s\"", sabuf);
        MD_CHECK_RET0(buf, ret, brem);
    } else if (record->rrtype == 16) {
        ret = snprintf(buf->cp, brem, "\"dnsTXTData\":\"");
        MD_CHECK_RET(buf, ret, brem);
        if (base64) {
            encode = TRUE;
        }  else {
            mdJsonifyEscapeChars(buf, &brem, record->rrdata.buf,
                                 record->rrdata.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    } else if (record->rrtype == 33) {
        ret = snprintf(buf->cp, brem, "\"dnsSRVTarget\":\"");
        MD_CHECK_RET(buf, ret, brem);
        if (base64) {
            encode = TRUE;
        }  else {
            mdJsonifyEscapeChars(buf, &brem, record->rrdata.buf,
                                 record->rrdata.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    } else if (record->rrtype == 6) {
        ret = snprintf(buf->cp, brem, "\"dnsSOAMName\":\"");
        MD_CHECK_RET(buf, ret, brem);
        if (base64) {
            encode = TRUE;
        }  else {
            mdJsonifyEscapeChars(buf, &brem, record->rrdata.buf,
                                 record->rrdata.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    } else if (record->rrtype == 46) {
        ret = snprintf(buf->cp, brem, "\"dnsSigner\":\"");
        MD_CHECK_RET(buf, ret, brem);
        if (base64) {
            encode = TRUE;
        }  else {
            mdJsonifyEscapeChars(buf, &brem, record->rrdata.buf,
                                 record->rrdata.len);
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    } else if (record->rrtype == 47) {
        ret = snprintf(buf->cp, brem, "\"dnsHashData\":\"");
        MD_CHECK_RET(buf, ret, brem);
        mdJsonifyEscapeChars(buf, &brem, record->rrdata.buf,
                             record->rrdata.len);
        if (base64) {
            encode = TRUE;
        }  else {
            MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        }
    } else {
        /* if we found no rrData then we need to snip the trailing comma from
         * the previous field.
         */
        buf->cp -= 1;
        brem += 1;
    }

    if (base64 && encode) {
        base1 = g_base64_encode((const guchar *)record->rrdata.buf,
                                record->rrdata.len-1);
        ret = snprintf(buf->cp, brem, "%s\"", base1);
        MD_CHECK_RET0(buf, ret, brem);
        g_free(base1);
    }

    if (record->mapname.len) {
        MD_APPEND_CHAR_CHECK(brem, buf, ',');
        ret = snprintf(buf->cp, brem, "\"observationDomainName\":\"");
        MD_CHECK_RET0(buf, ret, brem);
        if (!md_util_append_varfield(buf, &brem, &(record->mapname))) {
            return 0;
        }
        MD_APPEND_CHAR_CHECK(brem, buf, '\"');
    }

    if (brem > 3) {
        MD_APPEND_CHAR(buf, '}');
        MD_APPEND_CHAR(buf, '}');
        MD_APPEND_CHAR(buf, '\n');
    } else { return 0; }

    rc = md_util_write_buffer(fp, buf, "", err);

    if (!rc) {
        return -1;
    }

    return rc;
}

int mdJsonifySSLDedupRecord(
    FILE        *fp,
    mdBuf_t     *buf,
    uint8_t     *rec,
    GError      **err)
{

    size_t rc = 0;
    size_t brem = MD_REM_MSG(buf);
    int ret;
    md_ssl_t *ssl = (md_ssl_t *)rec;
    uint64_t start_secs = ssl->flowStartMilliseconds / 1000;
    uint32_t start_rem = ssl->flowStartMilliseconds % 1000;
    uint64_t end_secs = ssl->flowEndMilliseconds / 1000;
    uint32_t end_rem = ssl->flowEndMilliseconds % 1000;

    ret = snprintf(buf->cp, brem, "{\"ssl\":{\"firstSeen\":\"");
    MD_CHECK_RET0(buf, ret, brem);

    if (!md_util_time_buf_append(buf, &brem, start_secs, PRINT_TIME_FMT)) {
        return 0;
    }
    ret = snprintf(buf->cp, brem, ".%03u\",\"lastSeen\":\"", start_rem);
    MD_CHECK_RET0(buf, ret, brem);

    if (!md_util_time_buf_append(buf, &brem, end_secs, PRINT_TIME_FMT)) {
        return 0;
    }

    ret = snprintf(buf->cp, brem,  ".%03u\",\"sslCertSerialNumber\":\"",
                   end_rem);
    MD_CHECK_RET0(buf, ret, brem);

    ret = md_util_hexdump_append_nospace(buf->cp, &brem,
                                         ssl->sslCertSerialNumber.buf, ssl->sslCertSerialNumber.len);
    if (!ret) {
        return 0;
    }
    buf->cp += ret;

    if (ssl->mapname.len) {
        ret = snprintf(buf->cp, brem, "\",\"observationDomainName\":\"");
        MD_CHECK_RET0(buf, ret, brem);
        if (!md_util_append_varfield(buf, &brem, &(ssl->mapname))) {
            return 0;
        }
    }

    ret = snprintf(buf->cp, brem, "\",\"observedDataTotalCount\":%"PRIu64
                   ",\"sslCertIssuerCommonName\":\"", ssl->observedDataTotalCount);
    MD_CHECK_RET0(buf, ret, brem);

    if (!md_util_append_varfield(buf, &brem, &(ssl->sslCertIssuerCommonName))) {
        return 0;
    }

    ret = snprintf(buf->cp, brem, "\"}}\n");

    MD_CHECK_RET0(buf, ret, brem);

    rc = md_util_write_buffer(fp, buf, "", err);

    if (!rc) {
        return -1;
    }

    return rc;
}

int mdJsonifyDedupRecord(
    FILE                *fp,
    mdBuf_t             *buf,
    char                *prefix,
    md_dedup_t          *rec,
    GError              **err)
{

    size_t rc = 0;
    size_t brem = MD_REM_MSG(buf);
    uint64_t start_secs = rec->monitoringIntervalStartMilliSeconds / 1000;
    uint32_t start_rem = rec->monitoringIntervalStartMilliSeconds % 1000;
    uint64_t end_secs = rec->monitoringIntervalEndMilliSeconds / 1000;
    uint32_t end_rem = rec->monitoringIntervalEndMilliSeconds % 1000;
    uint64_t flow_secs = rec->flowStartMilliseconds / 1000;
    uint32_t flow_rem = rec->flowStartMilliseconds % 1000;
    char     sabuf[40];
    int      ret;



    ret = snprintf(buf->cp, brem, "{\"dedup\":{\"firstSeen\":\"");
    MD_CHECK_RET0(buf, ret, brem);

    if (!md_util_time_buf_append(buf, &brem, start_secs, PRINT_TIME_FMT)) {
        return 0;
    }
    ret = snprintf(buf->cp, brem, ".%03u\",\"lastSeen\":\"", start_rem);
    MD_CHECK_RET0(buf, ret, brem);

    if (!md_util_time_buf_append(buf, &brem, end_secs, PRINT_TIME_FMT)) {
        return 0;
    }

    if (rec->sourceIPv4Address != rec->yafFlowKeyHash) {
        if (rec->sourceIPv4Address == 0) {
            ret = snprintf(buf->cp, brem, ".%03u\",\"sourceIPv6Address\":\"",
                           end_rem);
            MD_CHECK_RET0(buf, ret, brem);
            md_util_print_ip6_addr(sabuf, rec->sourceIPv6Address);
        } else {
            ret = snprintf(buf->cp, brem, ".%03u\",\"sourceIPv4Address\":\"",
                           end_rem);
            MD_CHECK_RET0(buf, ret, brem);
            md_util_print_ip4_addr(sabuf, rec->sourceIPv4Address);
        }
        ret = snprintf(buf->cp, brem, "%s\",\"yafFlowKeyHash\":%u,"
                       "\"observedDataTotalCount\":%"PRIu64",",
                       sabuf, rec->yafFlowKeyHash, rec->observedDataTotalCount);
    } else {
        /* deduped on hash, not IP so don't print IP */
        ret = snprintf(buf->cp, brem, ".%03u\",\"yafFlowKeyHash\":%u,"
                       "\"observedDataTotalCount\":%"PRIu64",",
                       end_rem, rec->yafFlowKeyHash, rec->observedDataTotalCount);
    }

    MD_CHECK_RET0(buf, ret, brem);

    /* flow's start time */
    ret = snprintf(buf->cp, brem, "\"flowStartMilliseconds\":\"");
    MD_CHECK_RET0(buf, ret, brem);

    if (!md_util_time_buf_append(buf, &brem, flow_secs, PRINT_TIME_FMT)) {
        return 0;
    }

    ret = snprintf(buf->cp, brem, ".%03u\",", flow_rem);
    MD_CHECK_RET0(buf, ret, brem);


    if (rec->mapname.len) {
        ret = snprintf(buf->cp, brem, "\"observationDomainName\":\"");
        MD_CHECK_RET0(buf, ret, brem);
        if (!md_util_append_varfield(buf, &brem, &(rec->mapname))) {
            return 0;
        }
        MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        MD_APPEND_CHAR_CHECK(brem, buf, ',');
    }


    if (rec->observedData.len) {
        ret = snprintf(buf->cp, brem, "\"%s\":\"", prefix);
        MD_CHECK_RET0(buf, ret, brem);
        if (!md_util_append_varfield(buf, &brem, &(rec->observedData))) {
            return 0;
        }
        MD_APPEND_CHAR_CHECK(brem, buf, '\"');
    } else if (rec->sslCertSerialNumber1.len) {
        ret = snprintf(buf->cp, brem, "\"sslCertificateChain\":[{\""
                       "sslCertSerialNumber\":\"");
        MD_CHECK_RET0(buf, ret, brem);
        ret = md_util_hexdump_append_nospace(buf->cp, &brem, rec->sslCertSerialNumber1.buf,
                                             rec->sslCertSerialNumber1.len);
        if (!ret) {
            return 0;
        }
        buf->cp += ret;
        ret = snprintf(buf->cp, brem, "\", \"sslCertIssuerCommonName\":\"");
        MD_CHECK_RET0(buf, ret, brem);
        if (!md_util_append_varfield(buf, &brem, &(rec->sslCertIssuerCommonName1))) {
            return 0;
        }
        MD_APPEND_CHAR_CHECK(brem, buf, '\"');
        MD_APPEND_CHAR_CHECK(brem, buf, '}');
        if (rec->sslCertSerialNumber2.len) {
            ret = snprintf(buf->cp, brem, ",{\"sslCertSerialNumber\":\"");
            MD_CHECK_RET0(buf, ret, brem);
            ret = md_util_hexdump_append_nospace(buf->cp, &brem,
                                                 rec->sslCertSerialNumber2.buf,
                                                 rec->sslCertSerialNumber2.len);
            if (!ret) {
                return 0;
            }
            buf->cp += ret;
            ret = snprintf(buf->cp, brem, "\", \"sslCertIssuerCommonName\":\"");
            MD_CHECK_RET0(buf, ret, brem);
            if (!md_util_append_varfield(buf, &brem, &(rec->sslCertIssuerCommonName2))) {
                return 0;
            }
            ret = snprintf(buf->cp, brem, "\"}]");
            MD_CHECK_RET0(buf, ret, brem);
        } else {
            MD_APPEND_CHAR_CHECK(brem, buf, ']');
        }
    }

    ret = snprintf(buf->cp, brem, "}}\n");
    MD_CHECK_RET0(buf, ret, brem);

    rc = md_util_write_buffer(fp, buf, "", err);

    if (!rc) {
        return -1;
    }

    return rc;
}

gboolean mdJsonifySSLCertBase64(
    mdBuf_t             *buf,
    fbVarfield_t        *cert)
{
    size_t brem = MD_REM_MSG(buf);
    gchar *base1 = NULL;
    int ret;

    /* remove '},' */
    buf->cp -= 2;
    brem += 2;

    base1 = g_base64_encode((const guchar *)cert->buf,
                            cert->len);

    ret = snprintf(buf->cp, brem, ",\"sslCertificate\":\"%s\"},", base1);
    MD_CHECK_RET0(buf, ret, brem);

    if (base1) {
        g_free(base1);
    }

    return TRUE;
}
