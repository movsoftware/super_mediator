/**
 * @file mediator_json.h
 *
 * header file for mediator_json.c
 *
 * -------------------------------------------------------------------------
 * Copyright (C) 2012-2020 Carnegie Mellon University. All Rights Reserved.
 * -------------------------------------------------------------------------
 * Authors: Emily Sarneso
 * -------------------------------------------------------------------------
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
 * University under this License, inluding, but not limited to, any
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

#include <mediator/templates.h>

gboolean mdJsonifyEscapeChars(
    mdBuf_t  *mdbuf,
    size_t   *rem,
    uint8_t  *buf,
    size_t   buflen);

gboolean mdJsonifyEscapeCharsGStringAppend(
    GString        *str,
    const uint8_t  *cp,
    size_t          len);

gboolean mdJsonifyDNSRecord(
    yaf_dnsQR_t     *dns,
    mdBuf_t           *buf);

size_t mdPrintJsonStats(
    yaf_stats_option_t  *stats,
    char            *name,
    FILE            *lfp,
    GError          **er);

size_t mdPrintJsonTombstone(
    yaf_tombstone_option_t  *tombstone,
    char            *name,
    FILE            *lfp,
    GError          **er);


int mdJsonifyDNSDedupRecord(
    FILE        *fp,
    mdBuf_t     *buf,
    uint8_t     *record,
    gboolean    print_last,
    gboolean    base64,
    GError      **err);

int mdJsonifySSLDedupRecord(
    FILE        *fp,
    mdBuf_t     *buf,
    uint8_t     *rec,
    GError      **err);

int mdJsonifyDedupRecord(
    FILE                *fp,
    mdBuf_t             *buf,
    char                *prefix,
    md_dedup_t          *rec,
    GError              **err);

gboolean mdJsonifyDNSRRRecord(
    md_dns_rr_t          *rec,
    mdBuf_t            *buf);

gboolean mdJsonifySSLCertBase64(
    mdBuf_t             *buf,
    fbVarfield_t        *cert);
