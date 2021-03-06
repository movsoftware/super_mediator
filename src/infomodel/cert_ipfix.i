static fbInfoElement_t infomodel_array_static_cert_ipfix[] = {
    FB_IE_INIT_FULL("obsoleteReverseOctetTotalCount", 6871, 12, 8, FB_IE_TOTALCOUNTER | FB_IE_F_ENDIAN, 0, 0, FB_UINT_64, NULL),
    FB_IE_INIT_FULL("obsoleteReversePacketTotalCount", 6871, 13, 8, FB_IE_TOTALCOUNTER | FB_IE_F_ENDIAN, 0, 0, FB_UINT_64, NULL),
    FB_IE_INIT_FULL("initialTCPFlags", 6871, 14, 2, FB_IE_FLAGS | FB_IE_F_ENDIAN | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("unionTCPFlags", 6871, 15, 2, FB_IE_FLAGS | FB_IE_F_ENDIAN | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("obsoleteReverseInitialTCPFlags", 6871, 16, 1, FB_IE_FLAGS, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("obsoleteReverseUnionTCPFlags", 6871, 17, 1, FB_IE_FLAGS, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("payload", 6871, 18, FB_IE_VARLEN, FB_IE_DEFAULT | FB_IE_F_REVERSIBLE, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("obsoleteReversePayload", 6871, 19, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("obsoleteReverseTcpSequenceNumber", 6871, 20, 4, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("reverseFlowDeltaMilliseconds", 6871, 21, 4, FB_IE_QUANTITY | FB_UNITS_MILLISECONDS | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("obsoleteReverseVlanId", 6871, 29, 2, FB_IE_IDENTIFIER | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("silkFlowType", 6871, 30, 1, FB_IE_IDENTIFIER, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("silkFlowSensor", 6871, 31, 2, FB_IE_IDENTIFIER | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("silkTCPState", 6871, 32, 1, FB_IE_FLAGS, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("silkAppLabel", 6871, 33, 2, FB_IE_IDENTIFIER | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("payloadEntropy", 6871, 35, 1, FB_IE_QUANTITY | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("osName", 6871, 36, FB_IE_VARLEN, FB_IE_DEFAULT | FB_IE_F_REVERSIBLE, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("osVersion", 6871, 37, FB_IE_VARLEN, FB_IE_DEFAULT | FB_IE_F_REVERSIBLE, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("firstPacketBanner", 6871, 38, FB_IE_VARLEN, FB_IE_DEFAULT | FB_IE_F_REVERSIBLE, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("secondPacketBanner", 6871, 39, FB_IE_VARLEN, FB_IE_DEFAULT | FB_IE_F_REVERSIBLE, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("flowAttributes", 6871, 40, 2, FB_IE_FLAGS | FB_IE_F_ENDIAN | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("expiredFragmentCount", 6871, 100, 4, FB_IE_TOTALCOUNTER | FB_UNITS_PACKETS | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("assembledFragmentCount", 6871, 101, 4, FB_IE_TOTALCOUNTER | FB_UNITS_PACKETS | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("meanFlowRate", 6871, 102, 4, FB_IE_QUANTITY | FB_UNITS_FLOWS | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("meanPacketRate", 6871, 103, 4, FB_IE_QUANTITY | FB_UNITS_PACKETS | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("flowTableFlushEventCount", 6871, 104, 4, FB_IE_TOTALCOUNTER | FB_UNITS_FLOWS | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("flowTablePeakCount", 6871, 105, 4, FB_IE_QUANTITY | FB_UNITS_FLOWS | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("yafFlowKeyHash", 6871, 106, 4, FB_IE_IDENTIFIER | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("osFingerPrint", 6871, 107, FB_IE_VARLEN, FB_IE_DEFAULT | FB_IE_F_REVERSIBLE, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpServerString", 6871, 110, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpUserAgent", 6871, 111, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpGet", 6871, 112, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpConnection", 6871, 113, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpVersion", 6871, 114, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpReferer", 6871, 115, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpLocation", 6871, 116, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpHost", 6871, 117, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpContentLength", 6871, 118, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpAge", 6871, 119, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpAccept", 6871, 120, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpAcceptLanguage", 6871, 121, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpContentType", 6871, 122, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpResponse", 6871, 123, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("pop3TextMessage", 6871, 124, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("ircTextMessage", 6871, 125, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("tftpFilename", 6871, 126, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("tftpMode", 6871, 127, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("slpVersion", 6871, 128, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("slpMessageType", 6871, 129, 1, FB_IE_QUANTITY, 1, 11, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("slpString", 6871, 130, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("ftpReturn", 6871, 131, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("ftpUser", 6871, 132, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("ftpPass", 6871, 133, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("ftpType", 6871, 134, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("ftpRespCode", 6871, 135, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("imapCapability", 6871, 136, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("imapLogin", 6871, 137, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("imapStartTLS", 6871, 138, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("imapAuthenticate", 6871, 139, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("imapCommand", 6871, 140, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("imapExists", 6871, 141, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("imapRecent", 6871, 142, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("rtspURL", 6871, 143, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("rtspVersion", 6871, 144, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("rtspReturnCode", 6871, 145, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("rtspContentLength", 6871, 146, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("rtspCommand", 6871, 147, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("rtspContentType", 6871, 148, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("rtspTransport", 6871, 149, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("rtspCSeq", 6871, 150, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("rtspLocation", 6871, 151, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("rtspPacketsReceived", 6871, 152, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("rtspUserAgent", 6871, 153, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("rtspJitter", 6871, 154, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sipInvite", 6871, 155, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sipCommand", 6871, 156, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sipVia", 6871, 157, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sipMaxForwards", 6871, 158, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sipAddress", 6871, 159, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sipContentLength", 6871, 160, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sipUserAgent", 6871, 161, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("smtpHello", 6871, 162, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("smtpFrom", 6871, 163, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("smtpTo", 6871, 164, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("smtpContentType", 6871, 165, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("smtpSubject", 6871, 166, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("smtpFilename", 6871, 167, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("smtpContentDisposition", 6871, 168, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("smtpResponse", 6871, 169, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("smtpEnhanced", 6871, 170, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sshVersion", 6871, 171, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("nntpResponse", 6871, 172, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("nntpCommand", 6871, 173, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("dnsQueryResponse", 6871, 174, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("dnsQRType", 6871, 175, 2, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("dnsAuthoritative", 6871, 176, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("dnsNXDomain", 6871, 177, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("dnsRRSection", 6871, 178, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("dnsQName", 6871, 179, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("dnsCName", 6871, 180, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("dnsMXPreference", 6871, 181, 2, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("dnsMXExchange", 6871, 182, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("dnsNSDName", 6871, 183, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("dnsPTRDName", 6871, 184, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCipher", 6871, 185, 4, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("sslClientVersion", 6871, 186, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("sslServerCipher", 6871, 187, 4, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("sslCompressionMethod", 6871, 188, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("sslCertVersion", 6871, 189, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("sslCertSignature", 6871, 190, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("sslCertIssuerCountryName", 6871, 191, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertIssuerOrgName", 6871, 192, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertIssuerOrgUnitName", 6871, 193, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertIssuerZipCode", 6871, 194, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertIssuerState", 6871, 195, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertIssuerCommonName", 6871, 196, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertIssuerLocalityName", 6871, 197, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertIssuerStreetAddress", 6871, 198, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("dnsTTL", 6871, 199, 4, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("sslCertSubCountryName", 6871, 200, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertSubOrgName", 6871, 201, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertSubOrgUnitName", 6871, 202, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertSubZipCode", 6871, 203, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertSubState", 6871, 204, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertSubCommonName", 6871, 205, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertSubLocalityName", 6871, 206, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertSubStreetAddress", 6871, 207, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("dnsTXTData", 6871, 208, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("dnsSOASerial", 6871, 209, 4, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("dnsSOARefresh", 6871, 210, 4, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("dnsSOARetry", 6871, 211, 4, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("dnsSOAExpire", 6871, 212, 4, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("dnsSOAMinimum", 6871, 213, 4, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("dnsSOAMName", 6871, 214, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("dnsSOARName", 6871, 215, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("dnsSRVPriority", 6871, 216, 2, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("dnsSRVWeight", 6871, 217, 2, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("dnsSRVPort", 6871, 218, 2, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("dnsSRVTarget", 6871, 219, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpCookie", 6871, 220, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpSetCookie", 6871, 221, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("smtpSize", 6871, 222, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("mysqlUsername", 6871, 223, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("mysqlCommandCode", 6871, 224, 1, FB_IE_QUANTITY, 0, 28, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("mysqlCommandText", 6871, 225, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("dnsID", 6871, 226, 2, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("dnsAlgorithm", 6871, 227, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("dnsKeyTag", 6871, 228, 2, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("dnsSigner", 6871, 229, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("dnsSignature", 6871, 230, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("dnsDigest", 6871, 231, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("dnsPublicKey", 6871, 232, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("dnsSalt", 6871, 233, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("dnsHashData", 6871, 234, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("dnsIterations", 6871, 235, 2, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("dnsSignatureExpiration", 6871, 236, 4, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("dnsSignatureInception", 6871, 237, 4, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("dnsDigestType", 6871, 238, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("dnsLabels", 6871, 239, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("dnsTypeCovered", 6871, 240, 2, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("dnsFlags", 6871, 241, 2, FB_IE_FLAGS | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("dhcpFingerPrint", 6871, 242, FB_IE_VARLEN, FB_IE_DEFAULT | FB_IE_F_REVERSIBLE, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("dhcpVendorCode", 6871, 243, FB_IE_VARLEN, FB_IE_DEFAULT | FB_IE_F_REVERSIBLE, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertSerialNumber", 6871, 244, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("sslObjectType", 6871, 245, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("sslObjectValue", 6871, 246, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("sslCertValidityNotBefore", 6871, 247, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertValidityNotAfter", 6871, 248, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslPublicKeyAlgorithm", 6871, 249, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("sslPublicKeyLength", 6871, 250, 2, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("smtpDate", 6871, 251, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpAuthorization", 6871, 252, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpVia", 6871, 253, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpX-Forwarded-For", 6871, 254, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpExpires", 6871, 255, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpRefresh", 6871, 256, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpIMEI", 6871, 257, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpIMSI", 6871, 258, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpMSISDN", 6871, 259, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpSubscriber", 6871, 260, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpAcceptCharset", 6871, 261, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpAcceptEncoding", 6871, 262, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpAllow", 6871, 263, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpDate", 6871, 264, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpExpect", 6871, 265, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpFrom", 6871, 266, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpProxyAuthentication", 6871, 267, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpUpgrade", 6871, 268, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpWarning", 6871, 269, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpDNT", 6871, 270, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpX-Forwarded-Proto", 6871, 271, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpX-Forwarded-Host", 6871, 272, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpX-Forwarded-Server", 6871, 273, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpX-DeviceID", 6871, 274, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpX-Profile", 6871, 275, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpLastModified", 6871, 276, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpContentEncoding", 6871, 277, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpContentLanguage", 6871, 278, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpContentLocation", 6871, 279, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("httpX-UA-Compatible", 6871, 280, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("dnp3SourceAddress", 6871, 281, 2, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("dnp3DestinationAddress", 6871, 282, 2, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("dnp3Function", 6871, 283, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("dnp3ObjectData", 6871, 284, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("modbusData", 6871, 285, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("ethernetIPData", 6871, 286, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("rtpPayloadType", 6871, 287, 1, FB_IE_QUANTITY | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("sslRecordVersion", 6871, 288, 2, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("mptcpInitialDataSequenceNumber", 6871, 289, 8, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_64, NULL),
    FB_IE_INIT_FULL("mptcpReceiverToken", 6871, 290, 4, FB_IE_IDENTIFIER | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("mptcpMaximumSegmentSize", 6871, 291, 2, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("mptcpAddressID", 6871, 292, 1, FB_IE_IDENTIFIER, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("mptcpFlags", 6871, 293, 1, FB_IE_FLAGS, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("sslServerName", 6871, 294, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertificateHash", 6871, 295, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("sslCertificate", 6871, 296, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("dhcpOption", 6871, 297, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("sslCertificateSHA1", 6871, 298, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("sslCertificateMD5", 6871, 299, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("nDPIL7Protocol", 6871, 300, 2, FB_IE_IDENTIFIER | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("nDPIL7SubProtocol", 6871, 301, 2, FB_IE_IDENTIFIER | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("rrIPv4", 6871, 302, 4, FB_IE_DEFAULT | FB_IE_F_ENDIAN, 0, 0, FB_IP4_ADDR, NULL),
    FB_IE_INIT_FULL("rrIPv6", 6871, 303, 16, FB_IE_DEFAULT, 0, 0, FB_IP6_ADDR, NULL),
    FB_IE_INIT_FULL("DNSKEY_ProtocolIdentifier", 6871, 304, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("DNS_A_Record", 6871, 305, FB_IE_VARLEN, FB_IE_LIST, 0, 0, FB_SUB_TMPL_LIST, NULL),
    FB_IE_INIT_FULL("DNS_AAAA_Record", 6871, 306, FB_IE_VARLEN, FB_IE_LIST, 0, 0, FB_SUB_TMPL_LIST, NULL),
    FB_IE_INIT_FULL("DNS_RESOURCE_RECORD", 6871, 307, FB_IE_VARLEN, FB_IE_LIST, 0, 0, FB_SUB_TMPL_LIST, NULL),
    FB_IE_INIT_FULL("sslCertIssuerTitle", 6871, 308, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertSubTitle", 6871, 309, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertIssuerName", 6871, 310, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertSubName", 6871, 311, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertIssuerEmailAddress", 6871, 312, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertSubEmailAddress", 6871, 313, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertIssuerDomainComponent", 6871, 314, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertSubDomainComponent", 6871, 315, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("sslCertExtSubjectKeyIdent", 6871, 316, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("sslCertExtKeyUsage", 6871, 317, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("sslCertExtPrivKeyUsagePeriod", 6871, 318, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("sslCertExtSubjectAltName", 6871, 319, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("sslCertExtIssuerAltName", 6871, 320, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("sslCertExtCertIssuer", 6871, 321, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("sslCertExtCrlDistribution", 6871, 322, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("sslCertExtCertPolicies", 6871, 323, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("sslCertExtAuthorityKeyIdent", 6871, 324, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("sslCertExtExtendedKeyUsage", 6871, 325, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("smtpStartTLS", 6871, 326, 1, FB_IE_QUANTITY, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("smtpKey", 6871, 327, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("smtpValue", 6871, 328, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("smtpURL", 6871, 329, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("smtpMessageSize", 6871, 330, 4, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("smtpResponseList", 6871, 331, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_BASIC_LIST, NULL),
    FB_IE_INIT_FULL("smtpToList", 6871, 332, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_BASIC_LIST, NULL),
    FB_IE_INIT_FULL("smtpFromList", 6871, 333, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_BASIC_LIST, NULL),
    FB_IE_INIT_FULL("smtpFilenameList", 6871, 334, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_BASIC_LIST, NULL),
    FB_IE_INIT_FULL("smtpURLList", 6871, 335, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_BASIC_LIST, NULL),
    FB_IE_INIT_FULL("smtpMessageList", 6871, 336, FB_IE_VARLEN, FB_IE_LIST, 0, 0, FB_SUB_TMPL_LIST, NULL),
    FB_IE_INIT_FULL("smtpHeaderList", 6871, 337, FB_IE_VARLEN, FB_IE_LIST, 0, 0, FB_SUB_TMPL_LIST, NULL),
    FB_IE_INIT_FULL("smallPacketCount", 6871, 500, 4, FB_IE_TOTALCOUNTER | FB_UNITS_PACKETS | FB_IE_F_ENDIAN | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("nonEmptyPacketCount", 6871, 501, 4, FB_IE_TOTALCOUNTER | FB_UNITS_PACKETS | FB_IE_F_ENDIAN | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("dataByteCount", 6871, 502, 8, FB_IE_TOTALCOUNTER | FB_UNITS_OCTETS | FB_IE_F_ENDIAN | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_64, NULL),
    FB_IE_INIT_FULL("averageInterarrivalTime", 6871, 503, 8, FB_IE_QUANTITY | FB_UNITS_MILLISECONDS | FB_IE_F_ENDIAN | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_64, NULL),
    FB_IE_INIT_FULL("standardDeviationInterarrivalTime", 6871, 504, 8, FB_IE_QUANTITY | FB_UNITS_MILLISECONDS | FB_IE_F_ENDIAN | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_64, NULL),
    FB_IE_INIT_FULL("firstNonEmptyPacketSize", 6871, 505, 2, FB_IE_QUANTITY | FB_UNITS_OCTETS | FB_IE_F_ENDIAN | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("maxPacketSize", 6871, 506, 2, FB_IE_QUANTITY | FB_UNITS_OCTETS | FB_IE_F_ENDIAN | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("firstEightNonEmptyPacketDirections", 6871, 507, 1, FB_IE_FLAGS | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_8, NULL),
    FB_IE_INIT_FULL("standardDeviationPayloadLength", 6871, 508, 2, FB_IE_QUANTITY | FB_UNITS_OCTETS | FB_IE_F_ENDIAN | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("tcpUrgentCount", 6871, 509, 4, FB_IE_TOTALCOUNTER | FB_UNITS_PACKETS | FB_IE_F_ENDIAN | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("largePacketCount", 6871, 510, 4, FB_IE_TOTALCOUNTER | FB_UNITS_PACKETS | FB_IE_F_ENDIAN | FB_IE_F_REVERSIBLE, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("tombstoneId", 6871, 550, 4, FB_IE_IDENTIFIER | FB_IE_F_ENDIAN, 0, 0, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("exporterConfiguredId", 6871, 551, 2, FB_IE_IDENTIFIER | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("exporterUniqueId", 6871, 552, 2, FB_IE_IDENTIFIER | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("certToolId", 6871, 553, 4, FB_IE_IDENTIFIER | FB_IE_F_ENDIAN, 1, 6, FB_UINT_32, NULL),
    FB_IE_INIT_FULL("tombstoneAccessList", 6871, 554, FB_IE_VARLEN, FB_IE_LIST, 0, 0, FB_SUB_TMPL_LIST, NULL),
    FB_IE_INIT_FULL("dnsRName", 6871, 927, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("dnsHitCount", 6871, 928, 2, FB_IE_QUANTITY | FB_IE_F_ENDIAN, 0, 0, FB_UINT_16, NULL),
    FB_IE_INIT_FULL("observedDataTotalCount", 6871, 929, 8, FB_IE_TOTALCOUNTER | FB_IE_F_ENDIAN, 0, 0, FB_UINT_64, NULL),
    FB_IE_INIT_FULL("observedData", 6871, 930, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_OCTET_ARRAY, NULL),
    FB_IE_INIT_FULL("templateName", 6871, 1000, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),
    FB_IE_INIT_FULL("templateDescription", 6871, 1001, FB_IE_VARLEN, FB_IE_DEFAULT, 0, 0, FB_STRING, NULL),

    FB_IE_NULL
};
