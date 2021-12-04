/**
 * @file templates.h
 *
 * contains all the templates the mediator needs to collect/export
 *
 ** ------------------------------------------------------------------------
 ** Copyright (C) 2012-2020 Carnegie Mellon University. All Rights Reserved.
 ** ------------------------------------------------------------------------
 ** Authors: Emily Sarneso
 ** ------------------------------------------------------------------------ *
 * @OPENSOURCE_HEADER_START@
 * Use of this (and related) source code is subject to the terms
 * of the following licenses:
 *
 * GNU Public License (GPL) Rights pursuant to Version 2, June 1991
 * Government Purpose License Rights (GPLR) pursuant to DFARS 252.227.7013
 *
 *
 * This material is based upon work funded and supported by
 * the Department of Defense under Contract FA8721-05-C-0003 with
 * Carnegie Mellon University for the operation of the Software Engineering
 * Institue, a federally funded research and development center. Any opinions,
 * findings and conclusions or recommendations expressed in this
 * material are those of the author(s) and do not
 * necessarily reflect the views of the United States
 * Department of Defense.
 *
 * NO WARRANTY
 *
 * THIS CARNEGIE MELLON UNIVERSITY AND SOFTWARE ENGINEERING INSTITUTE
 * MATERIAL IS FURNISHED ON AN "AS-IS" BASIS. CARNEGIE MELLON UNIVERSITY
 * MAKES NO WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED
 * AS TO ANY MATTER INCLUDING, BUT NOT LIMITED TO, WARRANTY OF
 * FITNESS FOR PURPOSE OR MERCHANTABILITY, EXCLUSIVITY, OR RESULTS
 * OBTAINED FROM THE USE OF THE MATERIAL. CARNEGIE MELLON UNIVERSITY
 * DOES NOT MAKE ANY WARRANTY OF ANY KIND WITH RESPECT TO FREEDOM FROM
 * PATENT, TRADEMARK, OR COPYRIGHT INFRINGEMENT.
 *
 * This material has been approved for public release and unlimited
 * distribution.
 *
 * Carnegie Mellon®, CERT® and CERT Coordination Center® are
 * registered marks of Carnegie Mellon University.
 *
 * DM-0001877
 *
 * Carnegie Mellon University retains
 * copyrights in all material produced under this contract. The U.S.
 * Government retains a non-exclusive, royalty-free license to publish or
 * reproduce these documents, or allow others to do so, for U.S.
 * Government purposes only pursuant to the copyright license under the
 * contract clause at 252.227.7013.
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
 * @OPENSOURCE_HEADER_END@
 */

#ifndef MD_CONF
#define MD_CONF

#include "mediator_ctx.h"
#if HAVE_OPENSSL
#include <openssl/md5.h>
#include <openssl/sha.h>
#endif

/* Special dimensions */
#define YTF_TOTAL       0x0001
#define YTF_PAD         0x0002
#define YTF_REV         0x0010
#define YTF_TCP         0x0020
#define YTF_DAGIF       0x0040
#define YTF_DELTA       0x0080
#define YTF_LIST        0x0100
#define YTF_IP4         0x0200
#define YTF_IP6         0x0400
#define YTF_MPLS        0x0004
#define YTF_NDPI        0x0008

#define MD_LAST_SEEN    0x0002
#define MD_DNSRR_FULL   0x0002
#define MD_DNS_AREC     0x0004
#define MD_DNS_OREC     0x0008
#define MD_DEDUP_SSL    0x0002

/* YAF TID's */
#define YAF_SILK_FLOW_TID            0xB000
#define YAF_STAT_OPTN_FLOW_TID       0xD000 /* old yaf stats tid */
#define YAF_OLD_TOMBSTONE_OPTION_TID 0xD001
#define YAF_OLD_TOMBSTONE_ACCESS_TID 0xD002
#define YAF_PROCESS_STATS_TID        0xD003
#define YAF_TOMBSTONE_OPTION_TID     0xD004
#define YAF_TOMBSTONE_ACCESS_TID     0xD005
#define YAF_ENTROPY_TID              0xC002
#define YAF_TCP_TID                  0xC003
#define YAF_MAC_TID                  0xC004
#define YAF_FLOW_STATS_TID           0xC005
#define YAF_P0F_TID                  0xC006
#define YAF_HTTP_TID                 0xC600
#define YAF_FPEXPORT_TID             0xC007
#define YAF_PAYLOAD_TID              0xC008
#define YAF_MPTCP_TID                0xC009
#define YTF_BIF                      0xFF0F
#define YAF_IRC_TID                  0xC200
#define YAF_POP3_TID                 0xC300
#define YAF_TFTP_TID                 0xC400
#define YAF_SLP_TID                  0xC500
#define YAF_FTP_TID                  0xC700
#define YAF_IMAP_TID                 0xC800
#define YAF_RTSP_TID                 0xC900
#define YAF_SIP_TID                  0xCA00
#define YAF_SMTP_211_TID             0xCB00
#define YAF_SMTP_TID                 0xCB01
#define YAF_SMTP_MESSAGE_TID         0xCB02
#define YAF_SMTP_HEADER_TID          0xCB03
#define YAF_SSH_TID                  0xCC00
#define YAF_NNTP_TID                 0xCD00
#define YAF_DNS_TID                  0xCE00
#define YAF_DNSQR_TID                0xCF00
#define YAF_DNSA_TID                 0xCE01
#define YAF_DNSAAAA_TID              0xCE02
#define YAF_DNSCNAME_TID             0xCE03
#define YAF_DNSMX_TID                0xCE04
#define YAF_DNSNS_TID                0xCE05
#define YAF_DNSPTR_TID               0xCE06
#define YAF_DNSTXT_TID               0xCE07
#define YAF_DNSSRV_TID               0xCE08
#define YAF_DNSSOA_TID               0xCE09
#define YAF_SSL_TID                  0xCE0A
#define YAF_SSL_CERT_TID             0xCE0B
#define YAF_NEWSSL_TID               0xCA0A
#define YAF_NEWSSL_CERT_TID          0xCA0B
#define SM_INTSSL_FLOW_TID           0xDA0A
#define SM_INTCERT_FLOW_TID          0xDA0B
#define YAF_SSL_SUBCERT_TID          0xCE14
#define YAF_MYSQL_TID                0xCE0C
#define YAF_MYSQL_TXT_TID            0xCE0D
#define YAF_DNSDS_TID                0xCE0E
#define YAF_DNSRRSIG_TID             0xCE0F
#define YAF_DNSNSEC_TID              0xCE11
#define YAF_DNSKEY_TID               0xCE12
#define YAF_DNSNSEC3_TID             0xCE13
#define YAF_DHCP_FP_TID              0xC201
#define YAF_DNP_TID                  0xC202
#define YAF_DNP_REC_TID              0xC203
#define YAF_MODBUS_TID               0xC204
#define YAF_ENIP_TID                 0xC205
#define YAF_RTP_TID                  0xC206
#define YAF_FULL_CERT_TID            0xC207
#define YAF_DHCP_OPTIONS_TID         0xC208
#define MD_DNS_OUT                   0xCEE0
#define MD_DNS_FULL                  0xCEEF
#define MD_DNSRR                     0xC0C1
#define MD_SSL_TID                   0xDAAF
#define MD_DEDUP_TID                 0xDAA8
#define MD_DEDUP_FULL                0xDAAA
#define YAF_TYPE_METADATA_TID        0xD006
#define YAF_TEMPLATE_METADATA_TID    0xD007
#define MD_SSL_CERTIFICATE_TID       0xEE0F

#define MD_ERROR_DOMAIN     g_quark_from_string("MediatorError")
/* Template Issue - Not Critical*/
#define MD_ERROR_TMPL   1
/* IO Error - Critical */
#define MD_ERROR_IO     2
/* Setup Error */
#define MD_ERROR_SETUP  3
/* memory problem */
#define MD_ERROR_MEM    4
/* Error to ignore */
#define MD_ERROR_NODROP 5
/* silk record */

/* MD specific names */
#define MD_LAST_SEEN_NAME "last_seen"
#define MD_DNS_AREC_NAME "dns_arec"
#define MD_DNS_OREC_NAME "dns_orec"
#define MD_DNSRR_FULL_NAME "dnsrr_full"
#define MD_DEDUP_SSL_NAME "dedup_ssl"

/* also defined in yafcore.c, should consider pulling from YAF */
#define YTF_TOTAL_NAME "total"
#define YTF_REV_NAME         "rev"
#define YTF_DELTA_NAME       "delta"
#define YTF_IP6_NAME "ip6"
#define YTF_IP4_NAME "ip4"
#define YTF_DAGIF_NAME       "dagif"
#define YTF_MPLS_NAME        "mpls"
#define YTF_NDPI_NAME        "ndpi"

/* not defined in YAF, should consider including in YAF */
#define YTF_TCP_NAME "tcp"
#define YTF_PAD_NAME "pad"
#define YTF_LIST_NAME "list"

/* YAF-defined values for flowEndReason.  See yafcore.h in YAF sources. */
/** Flow ended due to idle timeout. */
#define YAF_END_IDLE            1
/** Flow ended due to active timeout. */
#define YAF_END_ACTIVE          2
/** Flow ended due to FIN or RST close. */
#define YAF_END_CLOSED          3
/** Flow ended due to YAF shutdown. */
#define YAF_END_FORCED          4
/** Flow flushed due to YAF resource exhaustion. */
#define YAF_END_RESOURCE        5
/** Flow flushed due to udp-uniflow on all or selected ports.*/
#define YAF_END_UDPFORCE        0x1F
/** Flow reason mask */
#define YAF_END_MASK            0x7F
/** SiLK mode flow reason flag - flow was created after active termination */
#define YAF_ENDF_ISCONT         0x80


/* tpl_review: sizes OK, ie names OK, tpl name OK */
/* Full DNS flow record */
typedef struct md_dns_st {
    uint64_t      flowStartMilliseconds;
    uint64_t      flowEndMilliseconds;
    uint32_t      sourceIPv4Address;
    uint32_t      dnsTTL;
    uint16_t      rrtype;
    uint16_t      dnsHitCount;
    uint8_t       padding[4];
    fbVarfield_t  rrname;
    fbVarfield_t  rrdata;
    fbVarfield_t  mapname;
} md_dns_t;


/* tpl_review: sizes OK, ie names OK, tpl name OK */
/*SSL Record */
typedef struct md_ssl_st {
    uint64_t      flowStartMilliseconds;
    uint64_t      flowEndMilliseconds;
    uint64_t      observedDataTotalCount;
    fbVarfield_t  sslCertSerialNumber;
    fbVarfield_t  sslCertIssuerCommonName;
    fbVarfield_t  mapname;
} md_ssl_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct md_main_template_st {
    uint64_t    flowStartMilliseconds;
    uint64_t    flowEndMilliseconds;
    uint64_t    octetTotalCount;
    uint64_t    reverseOctetTotalCount;
    uint64_t    octetDeltaCount;
    uint64_t    reverseOctetDeltaCount;
    uint64_t    packetTotalCount;
    uint64_t    reversePacketTotalCount;
    uint64_t    packetDeltaCount;
    uint64_t    reversePacketDeltaCount;

    uint8_t     sourceIPv6Address[16];
    uint8_t     destinationIPv6Address[16];

    uint32_t    sourceIPv4Address;
    uint32_t    destinationIPv4Address;

    uint16_t    sourceTransportPort;
    uint16_t    destinationTransportPort;
    uint16_t    flowAttributes;
    uint16_t    reverseFlowAttributes;

    uint8_t     protocolIdentifier;
    uint8_t     flowEndReason;
    uint16_t    silkAppLabel;
    int32_t     reverseFlowDeltaMilliseconds;

    uint32_t    tcpSequenceNumber;
    uint32_t    reverseTcpSequenceNumber;

    uint8_t     initialTCPFlags;
    uint8_t     unionTCPFlags;
    uint8_t     reverseInitialTCPFlags;
    uint8_t     reverseUnionTCPFlags;
    uint16_t    vlanId;
    uint16_t    reverseVlanId;

    uint32_t    ingressInterface;
    uint32_t    egressInterface;

    uint8_t     ipClassOfService;
    uint8_t     reverseIpClassOfService;
    uint8_t     mplsTopLabelStackSection[3];
    uint8_t     mplsLabelStackSection2[3];

    uint8_t     mplsLabelStackSection3[3];
    uint8_t     paddingOctets;
    uint32_t    observationDomainId;

    uint32_t    yafFlowKeyHash;
    uint16_t    nDPIL7Protocol;
    uint16_t    nDPIL7SubProtocol;

    fbSubTemplateMultiList_t subTemplateMultiList;

} md_main_template_t;


/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_stats_option_st {
    uint32_t    observationDomainId;
    uint32_t    exportingProcessId;
    uint32_t    exporterIPv4Address;
    uint32_t    observationTimeSeconds;
    uint64_t    systemInitTimeMilliseconds;
    uint64_t    exportedFlowRecordTotalCount;
    uint64_t    packetTotalCount;
    uint64_t    droppedPacketTotalCount;
    uint64_t    ignoredPacketTotalCount;
    uint64_t    notSentPacketTotalCount;
    uint32_t    expiredFragmentCount;
    uint32_t    assembledFragmentCount;
    uint32_t    flowTableFlushEvents;
    uint32_t    flowTablePeakCount;
    uint32_t    meanFlowRate;
    uint32_t    meanPacketRate;
} yaf_stats_option_t;

typedef struct yaf_old_tombstone_option_st {
    uint16_t            exporterUniqueId;
    uint16_t            exporterConfiguredId;
    uint32_t            tombstoneId;
    fbSubTemplateList_t accessList;
} yaf_old_tombstone_option_t;

typedef struct yaf_old_tombstone_access_st {
    uint32_t    exportingProcessId;
    uint32_t    observationTimeSeconds;
} yaf_old_tombstone_access_t;

typedef struct yaf_tombstone_option_st {
    uint32_t            observationDomainId;
    uint32_t            exportingProcessId;
    uint16_t            exporterConfiguredId;
    uint8_t             paddingOctets[6];
    uint32_t            tombstoneId;
    uint32_t            observationTimeSeconds;
    fbSubTemplateList_t accessList;
} yaf_tombstone_option_t;

typedef struct yaf_tombstone_access_st {
    uint32_t    certToolId;
    uint32_t    observationTimeSeconds;
} yaf_tombstone_access_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK, added padding */
typedef struct yaf_ssl_st {
    fbBasicList_t sslCipherList;
    uint32_t      sslServerCipher;
    uint8_t       sslClientVersion;
    uint8_t       sslCompressionMethod;
    uint8_t       padding[2];
} yaf_ssl_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_newssl_st {
    fbBasicList_t        sslCipherList;
    uint32_t             sslServerCipher;
    uint8_t              sslClientVersion;
    uint8_t              sslCompressionMethod;
    uint16_t             sslRecordVersion;
    fbSubTemplateList_t  sslCertList;
    fbVarfield_t         sslServerName;
} yaf_newssl_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_newssl_cert_st {
    fbSubTemplateList_t     issuer;
    fbSubTemplateList_t     subject;
    fbSubTemplateList_t     extension;
    /* remaining fields must match end of md_ssl_certificate_t */
    fbVarfield_t            sslCertSignature;
    fbVarfield_t            sslCertSerialNumber;
    fbVarfield_t            sslCertValidityNotBefore;
    fbVarfield_t            sslCertValidityNotAfter;
    fbVarfield_t            sslPublicKeyAlgorithm;
    uint16_t                sslPublicKeyLength;
    uint8_t                 sslCertVersion;
    uint8_t                 padding[5];
    fbVarfield_t            sslCertificateHash;
#if 0
    /* these are never referenced by name; are they still needed? */
    fbVarfield_t            sha1;
    fbVarfield_t            md5;
#endif  /* 0 */
} yaf_newssl_cert_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_ssl_subcert_st {
    fbVarfield_t            sslObjectValue;
    uint8_t                 sslObjectType;
    uint8_t                 padding[7];
} yaf_ssl_subcert_t;


/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_ssl_cert_st {
    fbVarfield_t sslSignature;
    fbVarfield_t sslIssuerCountryName;
    fbVarfield_t sslIssuerOrgName;
    fbVarfield_t sslIssuerOrgUnitName;
    fbVarfield_t sslIssuerZipCode;
    fbVarfield_t sslIssuerState;
    fbVarfield_t sslIssuerCommonName;
    fbVarfield_t sslIssuerLocalityName;
    fbVarfield_t sslIssuerStreetAddress;
    fbVarfield_t sslSubCountryName;
    fbVarfield_t sslSubOrgName;
    fbVarfield_t sslSubOrgUnitName;
    fbVarfield_t sslSubZipCode;
    fbVarfield_t sslSubState;
    fbVarfield_t sslSubCommonName;
    fbVarfield_t sslSubLocalityName;
    fbVarfield_t sslSubStreetAddress;
    uint8_t      sslVersion;
} yaf_ssl_cert_t;

typedef struct yfSSLFullCert_st {
    fbBasicList_t          cert;
} yfSSLFullCert_t;

/* The flattened SSL record representing a single SSL Certificate */
typedef struct md_ssl_certificate_st {
    /** Issuer **/
    /* id-at-commonName {id-at 3} */
    fbBasicList_t       sslCertIssuerCommonName;
    /* id-at-countryName {id-at 6} */
    fbVarfield_t        sslCertIssuerCountryName;
    /* id-at-localityName {id-at 7} */
    fbVarfield_t        sslCertIssuerLocalityName;
    /* id-at-stateOrProvidenceName {id-at 8} */
    fbVarfield_t        sslCertIssuerState;
    /* id-at-streetAddress {id-at 9} */
    fbBasicList_t       sslCertIssuerStreetAddress;
    /* id-at-organizationName {id-at 10} */
    fbBasicList_t       sslCertIssuerOrgName;
    /* id-at-organizationUnitName {id-at 11} */
    fbBasicList_t       sslCertIssuerOrgUnitName;
    /* id-at-postalCode {id-at 17} */
    fbVarfield_t        sslCertIssuerZipCode;
    /* id-at-title {id-at 12} */
    fbVarfield_t        sslCertIssuerTitle;
    /* id-at-name {id-at 41} */
    fbVarfield_t        sslCertIssuerName;
    /* pkcs-9-emailAddress {pkcs-9 1} */
    fbVarfield_t        sslCertIssuerEmailAddress;
    /* 0.9.2342.19200300.100.1.25 {dc 25} */
    fbBasicList_t       sslCertIssuerDomainComponent;

    /** Subject **/
    /* id-at-commonName {id-at 3} */
    fbBasicList_t       sslCertSubCommonName;
    /* id-at-countryName {id-at 6} */
    fbVarfield_t        sslCertSubCountryName;
    /* id-at-localityName {id-at 7} */
    fbVarfield_t        sslCertSubLocalityName;
    /* id-at-stateOrProvidenceName {id-at 8} */
    fbVarfield_t        sslCertSubState;
    /* id-at-streetAddress {id-at 9} */
    fbBasicList_t       sslCertSubStreetAddress;
    /* id-at-organizationName {id-at 10} */
    fbBasicList_t       sslCertSubOrgName;
    /* id-at-organizationUnitName {id-at 11} */
    fbBasicList_t       sslCertSubOrgUnitName;
    /* id-at-postalCode {id-at 17} */
    fbVarfield_t        sslCertSubZipCode;
    /* id-at-title {id-at 12} */
    fbVarfield_t        sslCertSubTitle;
    /* id-at-name {id-at 41} */
    fbVarfield_t        sslCertSubName;
    /* pkcs-9-emailAddress {pkcs-9 1} */
    fbVarfield_t        sslCertSubEmailAddress;
    /* 0.9.2342.19200300.100.1.25 {dc 25} */
    fbBasicList_t       sslCertSubDomainComponent;

    /** Extensions **/
    /* id-ce-subjectKeyIdentifier {id-ce 14} */
    fbVarfield_t        sslCertExtSubjectKeyIdent;
    /* id-ce-keyUsage {id-ce 15} */
    fbVarfield_t        sslCertExtKeyUsage;
    /* id-ce-privateKeyUsagePeriod {id-ce 16} */
    fbVarfield_t        sslCertExtPrivKeyUsagePeriod;
    /* id-ce-subjectAltName {id-ce 17} */
    fbVarfield_t        sslCertExtSubjectAltName;
    /* id-ce-issuerAltName {id-ce 18} */
    fbVarfield_t        sslCertExtIssuerAltName;
    /* id-ce-certificateIssuer {id-ce 29} */
    fbVarfield_t        sslCertExtCertIssuer;
    /* id-ce-cRLDistributionPoints {id-ce 37} */
    fbVarfield_t        sslCertExtCrlDistribution;
    /* id-ce-certificatePolicies {id-ce 32} */
    fbVarfield_t        sslCertExtCertPolicies;
    /* id-ce-authorityKeyIdentifier {id-ce 35} */
    fbVarfield_t        sslCertExtAuthorityKeyIdent;
    /* id-ce-extKeyUsage {id-ce 37} */
    fbVarfield_t        sslCertExtExtendedKeyUsage;

    /* the remaining fields must be kept in sync with yaf_newssl_cert_t */
    fbVarfield_t        sslCertSignature;
    fbVarfield_t        sslCertSerialNumber;
    fbVarfield_t        sslCertValidityNotBefore;
    fbVarfield_t        sslCertValidityNotAfter;
    fbVarfield_t        sslPublicKeyAlgorithm;
    uint16_t            sslPublicKeyLength;
    uint8_t             sslCertVersion;
    uint8_t             paddingOctets[5];
    fbVarfield_t        sslCertificateHash;
} md_ssl_certificate_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_entropy_st {
    uint8_t     payloadEntropy;
    uint8_t     reversePayloadEntropy;
} yaf_entropy_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_tcp_st {
    uint32_t    tcpSequenceNumber;
    uint8_t     initialTCPFlags;
    uint8_t     unionTCPFlags;
    uint8_t     reverseInitialTCPFlags;
    uint8_t     reverseUnionTCPFlags;
    uint32_t    reverseTcpSequenceNumber;
} yaf_tcp_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_mac_st {
    uint8_t     sourceMacAddress[6];
    uint8_t     destinationMacAddress[6];
} yaf_mac_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_p0f_st {
    fbVarfield_t    osName;
    fbVarfield_t    osVersion;
    fbVarfield_t    osFingerPrint;
    fbVarfield_t    reverseOsName;
    fbVarfield_t    reverseOsVersion;
    fbVarfield_t    reverseOsFingerPrint;
} yaf_p0f_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_fpexport_st {
    fbVarfield_t    firstPacketBanner;
    fbVarfield_t    secondPacketBanner;
    fbVarfield_t    reverseFirstPacketBanner;
} yaf_fpexport_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_payload_st {
    fbVarfield_t payload;
    fbVarfield_t reversePayload;
} yaf_payload_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_mptcp_st {
    /** initial data seq no. */
    uint64_t          mptcpInitialDataSequenceNumber;
    /** receiver token */
    uint32_t          mptcpReceiverToken;
    /** max segment size */
    uint16_t          mptcpMaximumSegmentSize;
    /* addr id */
    uint8_t           mptcpAddressID;
    /* hash_flags */
    uint8_t           mptcpFlags;
} yaf_mptcp_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_http_st {
    fbBasicList_t server;
    fbBasicList_t userAgent;
    fbBasicList_t get;
    fbBasicList_t connection;
    fbBasicList_t referer;
    fbBasicList_t location;
    fbBasicList_t host;
    fbBasicList_t contentLength;
    fbBasicList_t age;
    fbBasicList_t response;
    fbBasicList_t acceptLang;
    fbBasicList_t accept;
    fbBasicList_t contentType;
    fbBasicList_t version;
    fbBasicList_t cookie;
    fbBasicList_t setcookie;
    fbBasicList_t httpAuthorization;
    fbBasicList_t httpVia;
    fbBasicList_t xforward;
    fbBasicList_t httpRefresh;
    uint8_t       httpBasicListBuf[0];
} yaf_http_t;

typedef struct yaf_irc_st {
    fbBasicList_t ircMsg;
} yaf_irc_t;

typedef struct yaf_pop3_st {
    fbBasicList_t pop3msg;
} yaf_pop3_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_tftp_st {
    fbVarfield_t tftpFilename;
    fbVarfield_t tftpMode;
} yaf_tftp_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK, added padding */
typedef struct yaf_slp_st {
    fbBasicList_t slpString;
    uint8_t     slpVersion;
    uint8_t     slpMessageType;
    uint8_t     padding[6];
} yaf_slp_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_ftp_st {
    fbBasicList_t ftpReturn;
    fbBasicList_t ftpUser;
    fbBasicList_t ftpPass;
    fbBasicList_t ftpType;
    fbBasicList_t ftpRespCode;
    uint8_t       ftpBasicListBuf[0];
} yaf_ftp_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_imap_st {
    fbBasicList_t imapCapability;
    fbBasicList_t imapLogin;
    fbBasicList_t imapStartTLS;
    fbBasicList_t imapAuthenticate;
    fbBasicList_t imapCommand;
    fbBasicList_t imapExists;
    fbBasicList_t imapRecent;
    uint8_t       imapBasicListBuf[0];
} yaf_imap_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_rtsp_st {
    fbBasicList_t rtspURL;
    fbBasicList_t rtspVersion;
    fbBasicList_t rtspReturnCode;
    fbBasicList_t rtspContentLength;
    fbBasicList_t rtspCommand;
    fbBasicList_t rtspContentType;
    fbBasicList_t rtspTransport;
    fbBasicList_t rtspCSeq;
    fbBasicList_t rtspLocation;
    fbBasicList_t rtspPacketsReceived;
    fbBasicList_t rtspUserAgent;
    fbBasicList_t rtspJitter;
    uint8_t       rtspBasicListBuf[0];
} yaf_rtsp_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_sip_st {
    fbBasicList_t sipInvite;
    fbBasicList_t sipCommand;
    fbBasicList_t sipVia;
    fbBasicList_t sipMaxForwards;
    fbBasicList_t sipAddress;
    fbBasicList_t sipContentLength;
    fbBasicList_t sipUserAgent;
    uint8_t       sipBasicListBuf[0];
} yaf_sip_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
/* SMTP record up to yaf 2.11.0 inclusive */
typedef struct yaf_smtp_211_st {
    fbBasicList_t smtpHello;
    fbBasicList_t smtpFrom;
    fbBasicList_t smtpTo;
    fbBasicList_t smtpContentType;
    fbBasicList_t smtpSubject;
    fbBasicList_t smtpFilename;
    fbBasicList_t smtpContentDisposition;
    fbBasicList_t smtpResponse;
    fbBasicList_t smtpEnhanced;
    fbBasicList_t smtpSize;
    fbBasicList_t smtpDate;
    uint8_t       smtpBasicListBuf[0];
} yaf_smtp_211_t;

/* SMTP record after yaf 2.11.0 */
typedef struct yaf_smtp_st {
    fbVarfield_t          smtpHello;
    fbVarfield_t          smtpEnhanced;
    uint32_t              smtpMessageSize;
    uint8_t               smtpStartTLS;
    uint8_t               padding[3];
    fbBasicList_t         smtpFailedCodes;
    fbSubTemplateList_t   smtpMessageList;
} yaf_smtp_t;

typedef struct yaf_smtp_message_st {
    fbVarfield_t          smtpSubject;
    fbBasicList_t         smtpToList;
    fbBasicList_t         smtpFromList;
    fbBasicList_t         smtpFilenameList;
    fbBasicList_t         smtpURLList;
    fbSubTemplateList_t   smtpHeaderList;
} yaf_smtp_message_t;

typedef struct yaf_smtp_header_st {
    fbVarfield_t   smtpKey;
    fbVarfield_t   smtpValue;
} yaf_smtp_header_t;

typedef struct yaf_ssh_st {
    fbBasicList_t sshVersion;
    uint8_t       sshBasicListBuf[0];
} yaf_ssh_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_nntp_st {
    fbBasicList_t nntpResponse;
    fbBasicList_t nntpCommand;
} yaf_nntp_t;


/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dns_st {
    fbSubTemplateList_t   dnsQRList;
} yaf_dns_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnsQR_st {
    fbSubTemplateList_t dnsRRList;
    fbVarfield_t dnsQName;
    uint32_t dnsTTL;
    uint16_t dnsQRType;
    uint8_t dnsQueryResponse;
    uint8_t dnsAuthoritative;
    uint8_t dnsNXDomain;
    uint8_t dnsRRSection;
    uint16_t dnsID;
    uint8_t padding[4];
} yaf_dnsQR_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnsA_st {
    uint32_t sourceIPv4Address;
} yaf_dnsA_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnsAAAA_st {
    uint8_t  sourceIPv6Address[16];
} yaf_dnsAAAA_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnsCNAME_st {
    fbVarfield_t dnsCName;
} yaf_dnsCNAME_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnsMX_st {
    fbVarfield_t dnsMXExchange;
    uint16_t     dnsMXPreference;
    uint8_t      padding[6];
} yaf_dnsMX_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnsNS_st {
    fbVarfield_t dnsNSDName;
} yaf_dnsNS_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnsPTR_st {
    fbVarfield_t dnsPTRDName;
} yaf_dnsPTR_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnsTXT_st {
    fbVarfield_t dnsTXTData;
} yaf_dnsTXT_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnsSOA_st {
    fbVarfield_t dnsSOAMName;
    fbVarfield_t dnsSOARName;
    uint32_t     dnsSOASerial;
    uint32_t     dnsSOARefresh;
    uint32_t     dnsSOARetry;
    uint32_t     dnsSOAExpire;
    uint32_t     dnsSOAMinimum;
    uint8_t      padding[4];
} yaf_dnsSOA_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnsSRV_st {
    fbVarfield_t dnsSRVTarget;
    uint16_t     dnsSRVPriority;
    uint16_t     dnsSRVWeight;
    uint16_t     dnsSRVPort;
    uint8_t      padding[2];
} yaf_dnsSRV_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnsRRSig_st {
    fbVarfield_t dnsSigner;
    fbVarfield_t dnsSignature;
    uint32_t     dnsSigInception;
    uint32_t     dnsSigExpiration;
    uint32_t     dnsTTL;
    uint16_t     dnsKeyTag;
    uint16_t     dnsTypeCovered;
    uint8_t      dnsAlgorithm;
    uint8_t      dnsLabels;
    uint8_t      padding[6];
} yaf_dnsRRSig_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnsDS_st {
    fbVarfield_t dnsDigest;
    uint16_t     dnsKeyTag;
    uint8_t      dnsAlgorithm;
    uint8_t      dnsDigestType;
    uint8_t      padding[4];
} yaf_dnsDS_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnsKey_st {
    fbVarfield_t dnsPublicKey;
    uint16_t     dnsFlags;
    uint8_t      protocolIdentifier;
    uint8_t      dnsAlgorithm;
    uint8_t      padding[4];
} yaf_dnsKey_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnsNSEC_st {
    fbVarfield_t dnsHashData;
} yaf_dnsNSEC_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnsNSEC3_st {
    fbVarfield_t dnsSalt;
    fbVarfield_t dnsNextDomainName;
    uint16_t     iterations;
    uint8_t      dnsAlgorithm;
    uint8_t      padding[5];
} yaf_dnsNSEC3_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_mysql_st {
    fbSubTemplateList_t mysqlList;
    fbVarfield_t        mysqlUsername;
} yaf_mysql_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_mysql_txt_st {
    fbVarfield_t  mysqlCommandText;
    uint8_t       mysqlCommandCode;
    uint8_t       padding[7];
} yaf_mysql_txt_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dhcp_fp_st {
    fbVarfield_t dhcpFingerPrint;
    fbVarfield_t dhcpVendorCode;
    fbVarfield_t reverseDhcpFingerPrint;
    fbVarfield_t reverseDhcpVendorCode;
} yaf_dhcp_fp_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dhcp_options_st {
    fbBasicList_t options;
    fbVarfield_t dhcpVendorCode;
    fbBasicList_t revOptions;
    fbVarfield_t reverseDhcpVendorCode;
} yaf_dhcp_options_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_rtp_st {
    uint8_t rtpPayloadType;
    uint8_t reverseRtpPayloadType;
} yaf_rtp_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnp_st {
    fbSubTemplateList_t dnp_list;
} yaf_dnp_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_dnp_rec_st {
    uint16_t dnp3SourceAddress;
    uint16_t dnp3DestinationAddress;
    uint8_t  dnp3Function;
    uint8_t  padding[3];
    fbVarfield_t dnp3ObjectData;
} yaf_dnp_rec_t;

typedef struct yaf_modbus_st {
    fbBasicList_t mbmsg;
} yaf_modbus_t;

typedef struct yaf_enip_st {
    fbBasicList_t enipmsg;
} yaf_enip_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct yaf_flow_stats_st {
    uint64_t dataByteCount;
    uint64_t averageInterarrivalTime;
    uint64_t standardDeviationInterarrivalTime;
    uint32_t tcpUrgTotalCount;
    uint32_t smallPacketCount;
    uint32_t nonEmptyPacketCount;
    uint32_t largePacketCount;
    uint16_t firstNonEmptyPacketSize;
    uint16_t maxPacketSize;
    uint16_t standardDeviationPayloadLength;
    uint8_t  firstEightNonEmptyPacketDirections;
    uint8_t  padding[1];
    /* reverse Fields */
    uint64_t reverseDataByteCount;
    uint64_t reverseAverageInterarrivalTime;
    uint64_t reverseStandardDeviationInterarrivalTime;
    uint32_t reverseTcpUrgTotalCount;
    uint32_t reverseSmallPacketCount;
    uint32_t reverseNonEmptyPacketCount;
    uint32_t reverseLargePacketCount;
    uint16_t reverseFirstNonEmptyPacketSize;
    uint16_t reverseMaxPacketSize;
    uint16_t reverseStandardDeviationPayloadLength;
    uint8_t  padding2[2];
} yaf_flow_stats_t;


/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct md_dns_rr_st {
    uint64_t      flowStartMilliseconds;
    uint8_t       sourceIPv6Address[16];
    uint8_t       destinationIPv6Address[16];
    uint32_t      sourceIPv4Address;
    uint32_t      destinationIPv4Address;
    uint32_t      dnsTTL;
    uint32_t      observationDomainId;
    uint32_t      yafFlowKeyHash;
    uint16_t      dnsQRType;
    uint16_t      sourceTransportPort;
    uint16_t      destinationTransportPort;
    uint16_t      vlanId;
    uint16_t      dnsID;
    uint8_t       protocolIdentifier;
    uint8_t       dnsQueryResponse;
    uint8_t       dnsAuthoritative;
    uint8_t       dnsNXDomain;
    uint8_t       dnsRRSection;
    uint8_t       padding[5];
    fbVarfield_t  rrname;
    fbVarfield_t  rrdata;
} md_dns_rr_t;

/* tpl_review: sizes OK, ie names OK, tpl name OK */
typedef struct md_dedup_st {
    uint64_t      monitoringIntervalStartMilliSeconds;
    uint64_t      monitoringIntervalEndMilliSeconds;
    /* with hash this (stime) makes unique key */
    uint64_t      flowStartMilliseconds;
    uint64_t      observedDataTotalCount;
    uint8_t       sourceIPv6Address[16];
    uint32_t      sourceIPv4Address;
    uint32_t      yafFlowKeyHash;
    fbVarfield_t  mapname;
    fbVarfield_t  observedData;
    /* ssl only fields */
    fbVarfield_t  sslCertSerialNumber1;
    fbVarfield_t  sslCertIssuerCommonName1;
    fbVarfield_t  sslCertSerialNumber2;
    fbVarfield_t  sslCertIssuerCommonName2;
} md_dedup_t;

typedef struct md_dedup_old_st {
    uint64_t      fseen;
    uint64_t      lseen;
    uint64_t      count;
    uint8_t       sip6[16];
    uint32_t      sip;
    uint32_t      hash;
    fbVarfield_t  data;
    /* ssl only fields */
    fbVarfield_t  serial1;
    fbVarfield_t  issuer1;
    fbVarfield_t  serial2;
    fbVarfield_t  issuer2;
} md_dedup_old_t;


typedef struct mdFullFlow_st {
    md_main_template_t          *rec;
    yaf_entropy_t     *entropy;
    yaf_mac_t         *mac;
    yaf_payload_t     *pay;
    yaf_p0f_t         *p0f;
    yaf_flow_stats_t *stats;
    yaf_fpexport_t    *fp;
    fbSubTemplateMultiListEntry_t *dhcpfp;
    /*     yfDHCP_FP_Flow_t    *dhcpfp; */
    yaf_mptcp_t       *mptcp;
    void                *app;
    fbSubTemplateMultiListEntry_t  *cert;
    yfSSLFullCert_t     *fullcert;
    yaf_newssl_cert_t  **sslcerts;
    char                *collector_name;
    uint16_t            app_tid;
    uint16_t            app_elements;
    uint16_t            tid;
    uint8_t             collector_id;
} mdFullFlow_t;

typedef gboolean (*mdPrint_fn)(mdFullFlow_t *, mdBuf_t *, size_t *, char *);

typedef struct mdFieldList_st mdFieldList_t;

struct mdFieldList_st {
    mdFieldList_t           *next;
    mdPrint_fn              print_fn;
    mdAcceptFilterField_t   field;
    GString                 *decorator;
};

#endif  /* MD_CONF */
