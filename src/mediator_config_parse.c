/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     EOS = 258,
     COMMA = 259,
     LEFT_SQ_BRACKET = 260,
     RIGHT_SQ_BRACKET = 261,
     LEFT_PAREN = 262,
     RIGHT_PAREN = 263,
     WILD = 264,
     TOK_COLLECTOR = 265,
     TOK_EXPORTER = 266,
     TOK_DNS_DEDUP = 267,
     TOK_DNSDEDUP_ONLY = 268,
     TOK_NO_STATS = 269,
     TOK_PORT = 270,
     TOK_HOST = 271,
     TOK_IP = 272,
     TOK_PATH = 273,
     TOK_DAEMON = 274,
     TOK_DELIM = 275,
     TOK_PRINT_HDR = 276,
     TOK_GROUP = 277,
     TOK_MOVE = 278,
     TOK_DELETE = 279,
     TOK_LOCK = 280,
     TOK_UDP_TIMEOUT = 281,
     TOK_ROTATE = 282,
     TOK_END = 283,
     TOK_MEDIATOR = 284,
     TOK_FILTER = 285,
     TOK_ANY = 286,
     TOK_LOG_FILE = 287,
     TOK_FLOW_ONLY = 288,
     TOK_DPI_ONLY = 289,
     TOK_POLL = 290,
     TOK_MAX_HIT = 291,
     TOK_FLUSH_SECS = 292,
     TOK_LOG_LEVEL = 293,
     TOK_BASE_64 = 294,
     TOK_LAST_SEEN = 295,
     TOK_RM_EMPTY = 296,
     TOK_STATS_ONLY = 297,
     TOK_TABLE = 298,
     TOK_DPI_CONFIG = 299,
     TOK_MULTI_FILES = 300,
     TOK_ERR = 301,
     TOK_NO_INDEX = 302,
     TOK_TIMESTAMP = 303,
     TOK_NO_FLOW_STATS = 304,
     TOK_PID_FILE = 305,
     TOK_MY_REMOVE = 306,
     TOK_MY_USER = 307,
     TOK_MY_PW = 308,
     TOK_MY_DB = 309,
     TOK_MY_HOST = 310,
     TOK_MY_TABLE = 311,
     TOK_FIELDS = 312,
     TOK_DPI_FIELD_LIST = 313,
     TOK_DPI_DELIMITER = 314,
     TOK_STATS_TO = 315,
     TOK_USERIE = 316,
     TOK_AND_FILTER = 317,
     TOK_ESCAPE = 318,
     TOK_DNSRR_ONLY = 319,
     TOK_FULL = 320,
     TOK_LOG_DIR = 321,
     TOK_JSON = 322,
     TOK_RECORDS = 323,
     TOK_RESP_ONLY = 324,
     TOK_SSL_CONFIG = 325,
     TOK_ISSUER = 326,
     TOK_SUBJECT = 327,
     TOK_OTHER = 328,
     TOK_EXTENSIONS = 329,
     TOK_DEDUP_PER_FLOW = 330,
     TOK_DEDUP_CONFIG = 331,
     TOK_FILE = 332,
     TOK_MERGE = 333,
     TOK_SSL_DEDUP = 334,
     TOK_CERT_FILE = 335,
     TOK_SSL_DEDUP_ONLY = 336,
     TOK_MD5 = 337,
     TOK_SHA1 = 338,
     TOK_GZIP = 339,
     TOK_DNSRR = 340,
     TOK_DEDUP_ONLY = 341,
     TOK_NO_FLOW = 342,
     TOK_OBID_MAP = 343,
     TOK_VLAN_MAP = 344,
     TOK_MAP = 345,
     TOK_DISCARD = 346,
     TOK_ADD_EXPORT = 347,
     TOK_DECOMPRESS = 348,
     TOK_METADATA_EXPORT = 349,
     TOK_GEN_TOMBSTONE = 350,
     TOK_TOMBSTONE_CONFIGURED_ID = 351,
     TOK_TOMBSTONE_CONFIG = 352,
     TOK_PRESERVE_OBDOMAIN = 353,
     TOK_REWRITE_SSL_CERTS = 354,
     VAL_ATOM = 355,
     VAL_DATETIME = 356,
     VAL_DOUBLE = 357,
     VAL_INTEGER = 358,
     VAL_IP = 359,
     VAL_QSTRING = 360,
     VAL_TRANSPORT = 361,
     VAL_DB_TYPE = 362,
     VAL_OPER = 363,
     VAL_FIELD = 364,
     VAL_LOGLEVEL = 365
   };
#endif
/* Tokens.  */
#define EOS 258
#define COMMA 259
#define LEFT_SQ_BRACKET 260
#define RIGHT_SQ_BRACKET 261
#define LEFT_PAREN 262
#define RIGHT_PAREN 263
#define WILD 264
#define TOK_COLLECTOR 265
#define TOK_EXPORTER 266
#define TOK_DNS_DEDUP 267
#define TOK_DNSDEDUP_ONLY 268
#define TOK_NO_STATS 269
#define TOK_PORT 270
#define TOK_HOST 271
#define TOK_IP 272
#define TOK_PATH 273
#define TOK_DAEMON 274
#define TOK_DELIM 275
#define TOK_PRINT_HDR 276
#define TOK_GROUP 277
#define TOK_MOVE 278
#define TOK_DELETE 279
#define TOK_LOCK 280
#define TOK_UDP_TIMEOUT 281
#define TOK_ROTATE 282
#define TOK_END 283
#define TOK_MEDIATOR 284
#define TOK_FILTER 285
#define TOK_ANY 286
#define TOK_LOG_FILE 287
#define TOK_FLOW_ONLY 288
#define TOK_DPI_ONLY 289
#define TOK_POLL 290
#define TOK_MAX_HIT 291
#define TOK_FLUSH_SECS 292
#define TOK_LOG_LEVEL 293
#define TOK_BASE_64 294
#define TOK_LAST_SEEN 295
#define TOK_RM_EMPTY 296
#define TOK_STATS_ONLY 297
#define TOK_TABLE 298
#define TOK_DPI_CONFIG 299
#define TOK_MULTI_FILES 300
#define TOK_ERR 301
#define TOK_NO_INDEX 302
#define TOK_TIMESTAMP 303
#define TOK_NO_FLOW_STATS 304
#define TOK_PID_FILE 305
#define TOK_MY_REMOVE 306
#define TOK_MY_USER 307
#define TOK_MY_PW 308
#define TOK_MY_DB 309
#define TOK_MY_HOST 310
#define TOK_MY_TABLE 311
#define TOK_FIELDS 312
#define TOK_DPI_FIELD_LIST 313
#define TOK_DPI_DELIMITER 314
#define TOK_STATS_TO 315
#define TOK_USERIE 316
#define TOK_AND_FILTER 317
#define TOK_ESCAPE 318
#define TOK_DNSRR_ONLY 319
#define TOK_FULL 320
#define TOK_LOG_DIR 321
#define TOK_JSON 322
#define TOK_RECORDS 323
#define TOK_RESP_ONLY 324
#define TOK_SSL_CONFIG 325
#define TOK_ISSUER 326
#define TOK_SUBJECT 327
#define TOK_OTHER 328
#define TOK_EXTENSIONS 329
#define TOK_DEDUP_PER_FLOW 330
#define TOK_DEDUP_CONFIG 331
#define TOK_FILE 332
#define TOK_MERGE 333
#define TOK_SSL_DEDUP 334
#define TOK_CERT_FILE 335
#define TOK_SSL_DEDUP_ONLY 336
#define TOK_MD5 337
#define TOK_SHA1 338
#define TOK_GZIP 339
#define TOK_DNSRR 340
#define TOK_DEDUP_ONLY 341
#define TOK_NO_FLOW 342
#define TOK_OBID_MAP 343
#define TOK_VLAN_MAP 344
#define TOK_MAP 345
#define TOK_DISCARD 346
#define TOK_ADD_EXPORT 347
#define TOK_DECOMPRESS 348
#define TOK_METADATA_EXPORT 349
#define TOK_GEN_TOMBSTONE 350
#define TOK_TOMBSTONE_CONFIGURED_ID 351
#define TOK_TOMBSTONE_CONFIG 352
#define TOK_PRESERVE_OBDOMAIN 353
#define TOK_REWRITE_SSL_CERTS 354
#define VAL_ATOM 355
#define VAL_DATETIME 356
#define VAL_DOUBLE 357
#define VAL_INTEGER 358
#define VAL_IP 359
#define VAL_QSTRING 360
#define VAL_TRANSPORT 361
#define VAL_DB_TYPE 362
#define VAL_OPER 363
#define VAL_FIELD 364
#define VAL_LOGLEVEL 365




/* Copy the first part of user declarations.  */
#line 1 "mediator_config_parse.y"

#include <mediator/mediator_ctx.h>
#include <mediator/mediator_core.h>
#include <mediator/mediator_inf.h>
#include <mediator/mediator.h>
#include "mediator_dns.h"
#include "mediator_dedup.h"
#include "mediator_ssl.h"

/*Exporter stuff */
/* first in list */
md_export_node_t *ebeg = NULL;
/* used for processing various config blocks */
md_export_node_t *etemp = NULL;
mdFlowExporter_t *exp_temp = NULL;
mdTransportType_t md_ipfix_outtransport = NONE;
gboolean spread_exporter = FALSE;

/*Collector Stuff */
md_collect_node_t *ctemp = NULL;
mdFlowCollector_t *coll_temp = NULL;
mdTransportType_t md_ip_intransport = NONE;
#if HAVE_SPREAD
static int        num_in_groups;
#endif
/* Shared */
md_spread_filter_t *sftemp = NULL;
md_filter_t *ftemp = NULL;
gboolean and_filter = FALSE;
gboolean md5_filter = FALSE;
gboolean sha1_filter = FALSE;


gboolean default_tables = FALSE;
gboolean custom_tables = FALSE;
gboolean ssl_dedup_only = FALSE;

smFieldMap_t *maptemp = NULL;
smFieldMap_t *mapitem = NULL;
mdFieldList_t *temp_list = NULL;

int      valueListTemp[MAX_VALUE_LIST];
int      numValueList = 0;
int      numCustomList = 0;
int      numUserElements = 0;
int      valueListWild = 0;

char *dedup_temp_name = NULL;
int max_hit = 0;
int flush_timeout = 0;
int *dedup_type_list = NULL;
gboolean lastseen = FALSE;
gboolean exportname = FALSE;

#if ENABLE_SKIPSET
int      app_registered = 0;
#endif
/* parsing function defs */
static void validateConfFile(void);

 static void parseCollectorBegin(mdTransportType_t mode, char *name);
 static void parseCollectorEnd(void);
 static void parseCollectorPort(char *port);
 static void parseCollectorHost(char *host);
 static void parseCollectorFile(char *file);
 static void parseCollectorWatchDir(char *poll_time);
 static void parseCollectorSpreadDaemon(char *daemon_name);
 static void parseCollectorSpreadGroup(char *group);
 static void parseCollectorLock(void);
 static void parseCollectorMovePath(char *dir);
 static void parseCollectorDecompressDirectory(char *path);
 static void parseCollectorDelete(void);
 static void parseFilterBegin(void);
 static void parseFilterEnd(void);
 static void parseComparison(
     mdAcceptFilterField_t field,
     fieldOperator       oper,
     char               *val,
     int                 val_type);
 static void parseExporterBegin(mdTransportType_t mode, char *name);
 static void parseExporterEnd(void);
 static void parseExporterPort(char *port);
 static void parseExporterHost(char *host);
 static void parseExporterFile(char *file);
 static void parseExporterTextDelimiter(char *delim);
 static void parseExporterDPIDelimiter(char *delim);
 static void parseExporterSpreadDaemon(char *daemon_name);
 static void parseExporterSpreadGroup(char *group);
 static void parseExporterLock(void);
 static void parsePidFile(char *pid_file);
 static void parseExporterRotateSeconds(char *secs);
 static void parseExporterUDPTimeout(char *mins);
 static void parseExporterFlowOnly(void);
 static void parseExporterDPIOnly(void);
 static void parseExporterSetAndFilter(void);
 static void parseSpreadGroup(char *name);
 static void parseSpreadGroupEnd(void);
 static void parseStatisticsConfig(void);
 static void parsePreserveObDomainConfig(void);
 static void parseRewriteSslCertsConfig(void);
 static void parseGenTombstoneConfig(void);
 static void parseTombstoneIdConfig(char *configured_id);
 static void parseDNSDeDupConfig(void);
 static void parseExporterMovePath(char *dir);
 static void parseDNSDeDupOnly(void);
 static void parseSSLDeDupOnly(int mode);
 static void parseExporterPrintHeader(void);
 static void parseExporterEscapeChars(void);
 static void parseLogConfig(char *log_file);
 static void parseLogDir(char *log_dir);
 static void parseStatsTimeout(char *timeout);
 static void parseExporterNoStats(void);
 static void parseDNSMaxHitCount(char *count);
 static void parseDNSMaxFlushTime(char *flushtime);
 static void parseExporterRemoveEmpty(void);
 static void parseExporterAddStats(void);
 static void parseValueListItems(char  *val);
 static void parseFieldListItems(
     char                 *fint,
     mdAcceptFilterField_t field);
 static void parseTableList(char *table);
 static void parseTableListBegin(char *index_label);
 static void parseExporterMultiFiles(void);
 static void parseExporterNoIndex(void);
 static void parseExporterTimestamp(void);
 static void parseExporterNoFlowStats(void);
 static void parseMySQLParams(char *user, char *pw, char *db, char *host, char *table);
 static void parseExporterRemoveUploaded(void);
 static void parseUserInfoElement(char *num, char *name, char *app);
 static void parseExporterJson(void);
 static void parseExporterDNSRROnly(int mode);
 static void parseExporterDNSRespOnly(void);
 static void parseDedupRecordTypeList(void);
 static void parseDNSDedupConfigEnd(void);
 static void parseMapStmt(char *mapname);
 static void parseSSLConfigBegin(char *name);
 static void parseSSLIssuerTypeList(void);
 static void parseSSLSubjectTypeList(void);
 static void parseSSLOtherTypeList(void);
 static void parseSSLExtensionsTypeList(void);
 static void parseExporterDedupPerFlow(void);
 static void parseDedupConfig(char *exp_name);
 static void parseFileList(char *file, mdAcceptFilterField_t field, char* mapname);
 static void parseMaxHitCount(char *count);
 static void parseMaxFlushTime(char *flushtime);
 static void parseSSLCertDedup(void);
 static void parseSSLMaxHitCount(char *count);
 static void parseSSLMaxFlushTime(char *flushtime);
 static void parseSSLCertFile(char *filename);
 static void parseExporterSSLMD5Hash(void);
 static void parseExporterSSLSHA1Hash(void);
 static void parseExporterGzipFiles(void);
 static void parseExporterDedupOnly(void);
 static void parseExporterNoFlow(void);
 static void parseVlanMapBegin(char *name);
 static void parseObidMapBegin(char *name);
 static void parseVlanMapLine(char *label);
 static void parseObidMapLine(char *label);
 static void parseMapOther(char *name);
 static void parseMapDiscard(void);
 static void parseMapEnd(void);
 static void parseDedupAddExportName(void);
 static void parseExporterMetadataExport(void);

#define mdtimeCreate(bstc_seconds, bstc_milliseconds)                   \
    ((int64_t)(INT64_C(1000) * (bstc_seconds) + (bstc_milliseconds)))
/*
 *    Given a value containing seconds since the UNIX epoch (such as a
 *    time_t) and a millisecond count, return an bstime_t.  The second
 *    parameter can be any value containing milliseconds.  There is no
 *    restriction on the range of its value.
 */



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 176 "mediator_config_parse.y"
{
    char                   *str;
    uint32_t                integer;
    mdParserNumber_t        *number;
    mdTransportType_t       transport;
    mdAcceptFilterField_t   field;
    fieldOperator           oper;
    mdLogLevel_t            log_level;
}
/* Line 193 of yacc.c.  */
#line 501 "mediator_config_parse.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 514 "mediator_config_parse.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  84
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   552

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  165
/* YYNRULES -- Number of rules.  */
#define YYNRULES  327
/* YYNRULES -- Number of states.  */
#define YYNSTATES  566

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   365

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    58,    60,
      62,    64,    68,    73,    78,    82,    84,    87,    89,    91,
      93,    95,    97,    99,   101,   103,   105,   107,   109,   111,
     113,   117,   121,   125,   129,   133,   137,   139,   142,   146,
     149,   153,   156,   160,   161,   163,   166,   168,   170,   172,
     175,   179,   183,   187,   189,   191,   193,   197,   199,   201,
     203,   205,   207,   211,   214,   218,   221,   225,   228,   230,
     233,   238,   243,   248,   253,   258,   262,   266,   271,   276,
     280,   282,   285,   287,   289,   291,   293,   295,   297,   299,
     301,   303,   305,   307,   309,   311,   313,   315,   317,   319,
     321,   323,   325,   327,   329,   331,   333,   335,   337,   339,
     341,   343,   345,   347,   349,   351,   353,   355,   357,   359,
     361,   363,   365,   367,   369,   371,   374,   377,   381,   384,
     387,   391,   395,   399,   403,   405,   408,   412,   416,   420,
     423,   427,   431,   434,   437,   440,   443,   446,   449,   452,
     455,   459,   463,   466,   469,   472,   475,   479,   482,   485,
     487,   490,   491,   493,   495,   497,   500,   504,   508,   511,
     514,   517,   520,   523,   526,   529,   532,   535,   538,   541,
     544,   548,   551,   555,   558,   561,   564,   568,   572,   576,
     580,   584,   588,   592,   595,   598,   602,   606,   609,   612,
     614,   617,   618,   620,   622,   624,   626,   628,   630,   632,
     636,   640,   643,   646,   648,   651,   657,   662,   672,   681,
     683,   686,   687,   689,   691,   693,   695,   697,   699,   701,
     703,   709,   712,   716,   720,   723,   726,   730,   733,   737,
     741,   745,   747,   749,   751,   754,   759,   761,   765,   769,
     773,   777,   781,   786,   792,   795,   799,   803,   806,   808,
     811,   812,   814,   816,   818,   820,   822,   824,   826,   828,
     830,   832,   834,   837,   843,   847,   851,   855,   859,   862,
     866,   870,   874,   878,   882,   884,   887,   889,   891,   893,
     895,   899,   902,   906,   909,   913,   917,   919,   922,   924,
     926,   928,   930,   934,   937,   941,   944,   946
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     112,     0,    -1,   113,    -1,   114,    -1,   115,    -1,   114,
     115,    -1,   116,    -1,   134,    -1,   148,    -1,   177,    -1,
     180,    -1,   181,    -1,   182,    -1,   183,    -1,   206,    -1,
     208,    -1,   207,    -1,   209,    -1,   211,    -1,   234,    -1,
     244,    -1,   214,    -1,   190,    -1,   242,    -1,   259,    -1,
     267,    -1,     3,    -1,   117,   121,   120,    -1,   119,    -1,
     118,    -1,     3,    -1,    10,   106,     3,    -1,    10,   106,
     105,     3,    -1,    10,   106,   100,     3,    -1,    10,    28,
       3,    -1,   122,    -1,   121,   122,    -1,   123,    -1,   124,
      -1,   125,    -1,   126,    -1,   127,    -1,   129,    -1,   131,
      -1,   132,    -1,   133,    -1,   128,    -1,   146,    -1,   157,
      -1,     3,    -1,    15,   103,     3,    -1,    16,   275,     3,
      -1,    18,   275,     3,    -1,    35,   103,     3,    -1,    19,
     275,     3,    -1,    93,   275,     3,    -1,   130,    -1,   129,
     130,    -1,    22,   275,     3,    -1,    25,     3,    -1,    23,
     275,     3,    -1,    24,     3,    -1,   137,   135,   138,    -1,
      -1,   136,    -1,   135,   136,    -1,   146,    -1,   157,    -1,
       3,    -1,    30,     3,    -1,    30,    28,     3,    -1,    58,
     140,     3,    -1,   141,   143,   142,    -1,     5,    -1,     6,
      -1,   103,    -1,   143,     4,   103,    -1,     9,    -1,   145,
      -1,   109,    -1,   103,    -1,    10,    -1,   145,     4,   103,
      -1,   145,   103,    -1,   145,     4,   109,    -1,   145,   109,
      -1,   145,     4,    10,    -1,   145,    10,    -1,   147,    -1,
     146,   147,    -1,   109,   108,   103,     3,    -1,   109,   108,
     104,     3,    -1,   109,   108,   105,     3,    -1,    10,   108,
     105,     3,    -1,    10,   108,   100,     3,    -1,   149,   151,
     150,    -1,    11,   106,     3,    -1,    11,   106,   105,     3,
      -1,    11,   106,   100,     3,    -1,    11,    28,     3,    -1,
     152,    -1,   151,   152,    -1,   158,    -1,   159,    -1,   160,
      -1,   161,    -1,   162,    -1,   166,    -1,   164,    -1,   165,
      -1,   167,    -1,   168,    -1,   169,    -1,   170,    -1,   171,
      -1,   172,    -1,   191,    -1,   199,    -1,   192,    -1,   173,
      -1,   196,    -1,   174,    -1,   197,    -1,   200,    -1,   175,
      -1,   176,    -1,   146,    -1,   237,    -1,   241,    -1,   156,
      -1,   139,    -1,   243,    -1,   198,    -1,   201,    -1,   202,
      -1,   203,    -1,   193,    -1,   153,    -1,   154,    -1,   204,
      -1,   155,    -1,   194,    -1,   195,    -1,   205,    -1,     3,
      -1,    82,     3,    -1,    83,     3,    -1,    23,   275,     3,
      -1,    62,     3,    -1,    62,     3,    -1,    15,   103,     3,
      -1,    16,   275,     3,    -1,    18,   275,     3,    -1,    19,
     275,     3,    -1,   163,    -1,   162,   163,    -1,    22,   275,
       3,    -1,    20,   275,     3,    -1,    59,   275,     3,    -1,
      25,     3,    -1,    27,   103,     3,    -1,    26,   103,     3,
      -1,    33,     3,    -1,    34,     3,    -1,    14,     3,    -1,
      42,     3,    -1,    41,     3,    -1,    45,     3,    -1,    49,
       3,    -1,    67,     3,    -1,   178,   146,   179,    -1,    22,
     275,     3,    -1,    22,    28,    -1,    14,     3,    -1,    98,
       3,    -1,    99,     3,    -1,   184,   186,   185,    -1,    97,
       3,    -1,    97,    28,    -1,   187,    -1,   186,   187,    -1,
      -1,   188,    -1,   189,    -1,     3,    -1,    95,     3,    -1,
      96,   103,     3,    -1,    60,   103,     3,    -1,    12,     3,
      -1,    13,     3,    -1,    81,     3,    -1,    79,     3,    -1,
      87,     3,    -1,    86,     3,    -1,    21,     3,    -1,    47,
       3,    -1,    63,     3,    -1,    75,     3,    -1,    48,     3,
      -1,    64,     3,    -1,    64,    65,     3,    -1,    85,     3,
      -1,    85,    65,     3,    -1,    69,     3,    -1,    84,     3,
      -1,    94,     3,    -1,    32,   275,     3,    -1,    66,   275,
       3,    -1,    38,   110,     3,    -1,    50,   275,     3,    -1,
      68,   140,     3,    -1,   212,   226,   213,    -1,    12,   275,
       3,    -1,    12,     3,    -1,    12,    28,    -1,   215,   217,
     216,    -1,    76,   275,     3,    -1,    76,     3,    -1,    76,
      28,    -1,   218,    -1,   217,   218,    -1,    -1,   220,    -1,
     221,    -1,   219,    -1,   223,    -1,   222,    -1,     3,    -1,
     224,    -1,    36,   103,     3,    -1,    37,   103,     3,    -1,
      92,     3,    -1,    78,     3,    -1,   225,    -1,   224,   225,
      -1,    77,   275,   109,   140,     3,    -1,    77,   275,   140,
       3,    -1,    77,   275,   109,    90,     7,   275,     8,   140,
       3,    -1,    77,   275,    90,     7,   275,     8,   140,     3,
      -1,   227,    -1,   226,   227,    -1,    -1,   230,    -1,   231,
      -1,   232,    -1,   233,    -1,   210,    -1,   228,    -1,   229,
      -1,     3,    -1,    90,     7,   275,     8,     3,    -1,    92,
       3,    -1,    36,   103,     3,    -1,    37,   103,     3,    -1,
      39,     3,    -1,    40,     3,    -1,   235,   238,   236,    -1,
      44,     3,    -1,    44,   275,     3,    -1,    44,    28,     3,
      -1,    57,   144,     3,    -1,   239,    -1,     3,    -1,   240,
      -1,   239,   240,    -1,    43,   275,   140,     3,    -1,     3,
      -1,    52,   275,     3,    -1,    53,   275,     3,    -1,    54,
     275,     3,    -1,    55,   275,     3,    -1,    56,   275,     3,
      -1,    61,   103,   275,     3,    -1,    61,   103,   275,   103,
       3,    -1,    51,     3,    -1,   245,   247,   246,    -1,    70,
     275,     3,    -1,    70,    28,    -1,   248,    -1,   247,   248,
      -1,    -1,   251,    -1,   252,    -1,   253,    -1,   254,    -1,
     255,    -1,   256,    -1,   257,    -1,   258,    -1,   249,    -1,
     250,    -1,     3,    -1,    92,     3,    -1,    90,     7,   275,
       8,     3,    -1,    71,   140,     3,    -1,    72,   140,     3,
      -1,    73,   140,     3,    -1,    74,   140,     3,    -1,    79,
       3,    -1,    36,   103,     3,    -1,    37,   103,     3,    -1,
      80,   275,     3,    -1,   260,   261,   264,    -1,    89,   275,
       3,    -1,   262,    -1,   261,   262,    -1,   263,    -1,   265,
      -1,   266,    -1,     3,    -1,   275,   140,     3,    -1,    89,
      28,    -1,   275,    73,     3,    -1,    91,     3,    -1,   268,
     269,   272,    -1,    88,   275,     3,    -1,   270,    -1,   269,
     270,    -1,   271,    -1,   273,    -1,   274,    -1,     3,    -1,
     275,   140,     3,    -1,    88,    28,    -1,   275,    73,     3,
      -1,    91,     3,    -1,   100,    -1,   105,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   234,   234,   239,   242,   243,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   269,   273,   274,
     275,   278,   283,   287,   292,   297,   298,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     316,   321,   326,   331,   336,   341,   346,   347,   350,   355,
     360,   365,   370,   373,   374,   375,   378,   379,   380,   383,
     388,   393,   398,   401,   406,   408,   412,   415,   420,   423,
     427,   431,   435,   439,   443,   447,   451,   455,   460,   461,
     464,   468,   472,   477,   481,   492,   496,   500,   504,   509,
     514,   515,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   563,   568,   573,   578,   583,
     588,   593,   598,   603,   608,   609,   612,   617,   622,   627,
     632,   637,   642,   647,   652,   657,   662,   667,   672,   677,
     682,   686,   691,   697,   702,   707,   713,   717,   721,   725,
     726,   729,   729,   730,   731,   734,   739,   745,   750,   755,
     760,   763,   768,   773,   778,   783,   788,   793,   798,   802,
     806,   810,   814,   818,   823,   828,   834,   839,   844,   849,
     854,   859,   863,   867,   870,   875,   879,   883,   888,   892,
     893,   896,   896,   897,   898,   899,   900,   901,   904,   907,
     912,   917,   922,   927,   928,   930,   934,   939,   942,   947,
     948,   950,   951,   952,   953,   954,   955,   956,   957,   958,
     961,   966,   971,   976,   981,   986,   991,   995,   999,  1004,
    1009,  1014,  1015,  1017,  1018,  1021,  1024,  1027,  1031,  1035,
    1039,  1043,  1047,  1051,  1056,  1061,  1065,  1069,  1073,  1074,
    1076,  1077,  1078,  1079,  1080,  1081,  1082,  1083,  1084,  1085,
    1086,  1087,  1090,  1095,  1102,  1107,  1112,  1117,  1122,  1127,
    1132,  1137,  1142,  1146,  1151,  1152,  1154,  1155,  1156,  1157,
    1160,  1165,  1170,  1175,  1180,  1184,  1189,  1190,  1193,  1194,
    1195,  1196,  1199,  1204,  1209,  1214,  1219,  1219
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EOS", "COMMA", "LEFT_SQ_BRACKET",
  "RIGHT_SQ_BRACKET", "LEFT_PAREN", "RIGHT_PAREN", "WILD", "TOK_COLLECTOR",
  "TOK_EXPORTER", "TOK_DNS_DEDUP", "TOK_DNSDEDUP_ONLY", "TOK_NO_STATS",
  "TOK_PORT", "TOK_HOST", "TOK_IP", "TOK_PATH", "TOK_DAEMON", "TOK_DELIM",
  "TOK_PRINT_HDR", "TOK_GROUP", "TOK_MOVE", "TOK_DELETE", "TOK_LOCK",
  "TOK_UDP_TIMEOUT", "TOK_ROTATE", "TOK_END", "TOK_MEDIATOR", "TOK_FILTER",
  "TOK_ANY", "TOK_LOG_FILE", "TOK_FLOW_ONLY", "TOK_DPI_ONLY", "TOK_POLL",
  "TOK_MAX_HIT", "TOK_FLUSH_SECS", "TOK_LOG_LEVEL", "TOK_BASE_64",
  "TOK_LAST_SEEN", "TOK_RM_EMPTY", "TOK_STATS_ONLY", "TOK_TABLE",
  "TOK_DPI_CONFIG", "TOK_MULTI_FILES", "TOK_ERR", "TOK_NO_INDEX",
  "TOK_TIMESTAMP", "TOK_NO_FLOW_STATS", "TOK_PID_FILE", "TOK_MY_REMOVE",
  "TOK_MY_USER", "TOK_MY_PW", "TOK_MY_DB", "TOK_MY_HOST", "TOK_MY_TABLE",
  "TOK_FIELDS", "TOK_DPI_FIELD_LIST", "TOK_DPI_DELIMITER", "TOK_STATS_TO",
  "TOK_USERIE", "TOK_AND_FILTER", "TOK_ESCAPE", "TOK_DNSRR_ONLY",
  "TOK_FULL", "TOK_LOG_DIR", "TOK_JSON", "TOK_RECORDS", "TOK_RESP_ONLY",
  "TOK_SSL_CONFIG", "TOK_ISSUER", "TOK_SUBJECT", "TOK_OTHER",
  "TOK_EXTENSIONS", "TOK_DEDUP_PER_FLOW", "TOK_DEDUP_CONFIG", "TOK_FILE",
  "TOK_MERGE", "TOK_SSL_DEDUP", "TOK_CERT_FILE", "TOK_SSL_DEDUP_ONLY",
  "TOK_MD5", "TOK_SHA1", "TOK_GZIP", "TOK_DNSRR", "TOK_DEDUP_ONLY",
  "TOK_NO_FLOW", "TOK_OBID_MAP", "TOK_VLAN_MAP", "TOK_MAP", "TOK_DISCARD",
  "TOK_ADD_EXPORT", "TOK_DECOMPRESS", "TOK_METADATA_EXPORT",
  "TOK_GEN_TOMBSTONE", "TOK_TOMBSTONE_CONFIGURED_ID",
  "TOK_TOMBSTONE_CONFIG", "TOK_PRESERVE_OBDOMAIN", "TOK_REWRITE_SSL_CERTS",
  "VAL_ATOM", "VAL_DATETIME", "VAL_DOUBLE", "VAL_INTEGER", "VAL_IP",
  "VAL_QSTRING", "VAL_TRANSPORT", "VAL_DB_TYPE", "VAL_OPER", "VAL_FIELD",
  "VAL_LOGLEVEL", "$accept", "mediatorConfFile", "mediatorConf",
  "stmtList", "stmt", "collectorMode", "collectorBegin",
  "collectorBeginNoName", "collectorBeginName", "collectorEnd",
  "collectorStmtList", "collectorStmt", "col_port", "col_host", "col_path",
  "col_watch", "col_daemon", "col_decompress", "col_groups", "col_group",
  "col_lock", "col_move_path", "col_delete", "col_filter",
  "filterStmtList", "filterStmt", "filterBegin", "filterEnd",
  "exp_dpi_field_list", "valueList", "valueListStart", "valueListEnd",
  "valueListItems", "fieldList", "fieldListItems", "comparisonList",
  "comparison", "exporterMode", "exporterBegin", "exporterEnd",
  "exporterStmtList", "exporterStmt", "exp_md5_hash", "exp_sha1_hash",
  "exp_move_path", "exp_and_filter", "col_and_filter", "exp_port",
  "exp_host", "exp_path", "exp_daemon", "exp_groups", "exp_group",
  "exp_delim", "exp_dpi_delim", "exp_lock", "exp_rotate",
  "exp_udp_timeout", "exp_flow_only", "exp_dpi_only", "exp_no_stats",
  "exp_stats_only", "exp_remove_empty", "exp_multi_files",
  "exp_no_flow_stats", "exp_json", "spreadGroup", "spreadBegin",
  "spreadEnd", "statsConfig", "preserveObDomainConfig",
  "rewriteSslCertsConfig", "tombstoneConfig", "tombstone_begin",
  "tombstone_end", "tombstoneList", "tombstoneStmt", "genTombstoneConfig",
  "tombstoneIdConfig", "statsTimeout", "exp_dedup", "exp_dns_dedup_only",
  "exp_ssl_dedup_only", "exp_no_flow", "exp_dedup_only",
  "exp_print_headers", "exp_no_index", "exp_escape", "exp_dedup_flow",
  "exp_timestamp", "exp_dns_rr_only", "exp_dns_rr", "exp_dns_resp_only",
  "exp_gzip_files", "exp_metadata_export", "logConfig", "logDirConfig",
  "logLevelConfig", "pidConfig", "recordList", "dnsdedupConfig",
  "dns_dedup_begin", "dns_dedup_end", "dedupConfig", "dedup_begin",
  "dedup_end", "dedupList", "dedupStmt", "dedupFileList", "dedupHitConfig",
  "dedupFlushConfig", "dedupAddExport", "dedupMergeTruncated", "fileList",
  "fileStmt", "dnsdedupList", "dnsdedupStmt", "mapStmt",
  "dnsdedupAddExport", "hitConfig", "flushConfig", "base64Config",
  "lastSeenConfig", "dpiConfig", "dpi_config_begin", "dpi_config_end",
  "customList", "dpiList", "tableList", "tableStmt", "mysqlConfig",
  "userIE", "exp_remove_uploaded", "sslConfig", "ssl_config_begin",
  "ssl_config_end", "sslList", "sslStmt", "ssldedupAddExportName",
  "sslMapStmt", "issuerList", "subjectList", "otherList", "extensionList",
  "sslCertDedup", "sslDedupHitConfig", "sslDedupFlushConfig",
  "sslCertFile", "vlanMap", "vlanMapBegin", "vlanConfig", "vlanStmt",
  "vlanListItem", "vlanMapEnd", "vlanListOther", "vlanListDiscard",
  "obidMap", "obidMapBegin", "obidConfig", "obidStmt", "obidListItem",
  "obidMapEnd", "obidListOther", "obidListDiscard", "atomOrQstring", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   111,   112,   113,   114,   114,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   117,   117,
     117,   118,   119,   119,   120,   121,   121,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     123,   124,   125,   126,   127,   128,   129,   129,   130,   131,
     132,   133,   134,   135,   135,   135,   136,   136,   136,   137,
     138,   139,   140,   141,   142,   143,   143,   143,   144,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   146,   146,
     147,   147,   147,   147,   147,   148,   149,   149,   149,   150,
     151,   151,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     186,   187,   187,   187,   187,   188,   189,   190,   191,   192,
     193,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     201,   202,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   212,   213,   214,   215,   215,   216,   217,
     217,   218,   218,   218,   218,   218,   218,   218,   219,   220,
     221,   222,   223,   224,   224,   225,   225,   225,   225,   226,
     226,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   235,   236,
     237,   238,   238,   239,   239,   240,   240,   241,   241,   241,
     241,   241,   242,   242,   243,   244,   245,   246,   247,   247,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   261,   262,   262,   262,   262,
     263,   264,   265,   266,   267,   268,   269,   269,   270,   270,
     270,   270,   271,   272,   273,   274,   275,   275
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     4,     4,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     1,     2,     3,     2,
       3,     2,     3,     0,     1,     2,     1,     1,     1,     2,
       3,     3,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     3,     2,     3,     2,     3,     2,     1,     2,
       4,     4,     4,     4,     4,     3,     3,     4,     4,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     2,     2,
       3,     3,     3,     3,     1,     2,     3,     3,     3,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     2,     2,     2,     2,     3,     2,     2,     1,
       2,     0,     1,     1,     1,     2,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     3,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     2,     2,     1,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     2,     1,     2,     5,     4,     9,     8,     1,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     2,     3,     3,     2,     2,     3,     2,     3,     3,
       3,     1,     1,     1,     2,     4,     1,     3,     3,     3,
       3,     3,     4,     5,     2,     3,     3,     2,     1,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     5,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     1,     2,     1,     1,     1,     1,
       3,     2,     3,     2,     3,     3,     1,     2,     1,     1,
       1,     1,     3,     2,     3,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     3,     4,     6,     0,    29,    28,
       7,    63,     8,     0,     9,     0,    10,    11,    12,    13,
     181,    22,    14,    16,    15,    17,    18,   241,    21,   221,
      19,     0,    23,    20,   280,    24,     0,    25,     0,     0,
       0,   213,   326,   327,     0,   173,     0,    69,     0,     0,
     257,     0,     0,     0,     0,     0,     0,   217,     0,     0,
       0,   177,   174,   175,     1,     5,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    37,    38,    39,    40,    41,    46,    42,    56,
      43,    44,    45,    47,    88,    48,    68,     0,    64,    66,
      67,   144,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,   126,
       0,   100,   137,   138,   140,   129,   102,   103,   104,   105,
     106,   154,   108,   109,   107,   110,   111,   112,   113,   114,
     115,   119,   121,   124,   125,   116,   118,   136,   141,   142,
     120,   122,   132,   117,   123,   133,   134,   135,   139,   143,
     127,   128,   131,     0,   184,     0,     0,     0,   179,   182,
     183,   249,     0,     0,     0,     0,     0,     0,     0,   246,
       0,   239,   247,   248,   242,   243,   244,   245,   227,     0,
       0,     0,     0,     0,     0,   219,   224,   222,   223,   226,
     225,   228,   233,   266,     0,     0,   261,   263,   291,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     278,   289,   290,   281,   282,   283,   284,   285,   286,   287,
     288,   309,     0,     0,   304,   306,   307,   308,     0,   321,
       0,     0,   316,   318,   319,   320,     0,    31,     0,     0,
      96,     0,     0,   212,   171,   206,   208,   258,   209,   187,
       0,   207,   276,   216,   315,   303,     0,     0,     0,     0,
       0,     0,     0,    61,    59,     0,   149,     0,     0,     0,
      27,    36,    57,    89,     0,    65,    62,   188,   189,   164,
       0,     0,     0,     0,     0,   194,     0,     0,   159,     0,
       0,   162,   163,   166,   165,   167,   195,   198,   168,   274,
       0,     0,     0,     0,     0,    81,    80,    79,     0,    78,
      73,     0,     0,     0,   148,   196,   199,     0,   169,   203,
     197,   191,   190,   145,   146,   204,   201,     0,   193,   192,
     205,     0,    95,   101,   155,     0,   170,   185,     0,     0,
     176,   180,     0,     0,   254,   255,     0,     0,   251,     0,
     211,   240,     0,     0,     0,   232,   231,     0,   215,   220,
     234,     0,     0,   256,   266,   264,     0,     0,     0,     0,
       0,     0,   298,     0,     0,   292,     0,   275,   279,   313,
       0,   305,   302,     0,     0,   325,     0,   317,   314,     0,
       0,    33,    32,    98,    97,   272,     0,     0,     0,    50,
      51,    52,    54,    58,    60,    53,    55,     0,     0,     0,
       0,     0,   150,   151,   152,   153,   157,   156,   147,   161,
     160,   267,   268,   269,   270,   271,   260,     0,    87,    83,
      85,    71,    77,    75,     0,   158,   200,   202,     0,   172,
     186,   178,   252,   253,   210,     0,   214,   229,   230,     0,
       0,     0,   218,     0,     0,   299,   300,   294,   295,   296,
     297,   301,     0,   277,   311,   312,   310,   323,   324,   322,
     273,    94,    93,    90,    91,    92,    34,    70,    86,    82,
      84,     0,    74,    72,    99,     0,     0,     0,     0,   236,
     265,   259,     0,    76,   250,     0,     0,   235,   293,     0,
       0,     0,     0,   238,     0,   237
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    24,    25,    26,    27,    28,    29,   330,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    30,   117,   118,    31,   336,   168,   371,
     372,   543,   494,   368,   369,   113,   114,    32,    33,   392,
     170,   171,   172,   173,   174,   175,   115,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    34,    35,   396,    36,
      37,    38,    39,    40,   400,   217,   218,   219,   220,    41,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,    42,    43,    44,    45,   229,
      46,    47,   410,    48,    49,   418,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   230,   231,   232,   233,   234,
     235,   236,   237,    50,    51,   423,   210,   255,   256,   257,
     211,    52,   212,    53,    54,   437,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,    55,    56,
     283,   284,   285,   442,   286,   287,    57,    58,   291,   292,
     293,   448,   294,   295,   288
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -226
static const yytype_int16 yypact[] =
{
     345,   346,   -64,   -57,    31,    59,   -49,    66,   -49,   -38,
      32,   -49,   -28,   -19,   -49,   -49,    50,   -49,   -49,   111,
     130,   181,    97,  -226,   345,  -226,  -226,     6,  -226,  -226,
    -226,    30,  -226,   257,  -226,    -7,  -226,  -226,  -226,  -226,
     150,  -226,  -226,  -226,  -226,  -226,  -226,   437,  -226,   422,
    -226,    40,  -226,  -226,   391,  -226,    47,  -226,   143,    77,
      78,  -226,  -226,  -226,   182,  -226,   183,  -226,   189,   203,
    -226,   208,   211,   213,   -49,   214,   216,  -226,   217,   223,
     232,  -226,  -226,  -226,  -226,  -226,  -226,   128,   136,   -49,
     -49,   -49,   -49,   -49,   238,   239,   141,   244,   -49,   151,
      42,  -226,  -226,  -226,  -226,  -226,  -226,  -226,   227,  -226,
    -226,  -226,  -226,    -7,  -226,  -226,  -226,    17,  -226,    -7,
    -226,  -226,   248,   254,   255,   158,   -49,   -49,   -49,   -49,
     260,   -49,   -49,   261,   162,   163,   265,   271,   278,   283,
     285,   286,   289,   290,   291,   -49,   -49,   -49,   -49,   -49,
       8,   292,   -49,   293,   297,    41,   298,   300,   304,   314,
     315,   319,   320,   322,    56,   324,   325,   326,  -226,    -7,
     146,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
     273,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,    81,  -226,   327,   228,   127,  -226,  -226,
    -226,  -226,   230,   242,   332,   343,   292,   340,   347,  -226,
     449,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,   246,
     249,   -49,   350,   351,   417,  -226,  -226,  -226,  -226,  -226,
    -226,   281,  -226,   316,   -49,   328,    52,  -226,  -226,   270,
     275,   292,   292,   292,   292,   360,   -49,   361,   371,   377,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,   373,    29,  -226,  -226,  -226,  -226,    43,  -226,
     376,     5,  -226,  -226,  -226,  -226,   165,  -226,   379,   381,
    -226,   382,   383,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
      71,  -226,  -226,  -226,  -226,  -226,   -27,   384,   385,   387,
     388,   389,   390,  -226,  -226,   393,  -226,   394,   149,   148,
    -226,  -226,  -226,  -226,   370,  -226,  -226,  -226,  -226,  -226,
     396,   397,   398,   399,   401,  -226,   404,   406,  -226,   407,
     409,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
     413,   414,   415,   416,   419,  -226,  -226,  -226,   420,    72,
    -226,   421,    37,   423,  -226,  -226,  -226,   426,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,   428,  -226,  -226,
    -226,   408,  -226,  -226,  -226,   410,  -226,  -226,   429,   418,
    -226,  -226,   432,   434,  -226,  -226,   438,   -49,  -226,   440,
    -226,  -226,   442,   457,     0,  -226,  -226,   444,  -226,  -226,
    -226,   292,   447,  -226,  -226,  -226,   463,   475,   476,   477,
     479,   481,  -226,   484,   -49,  -226,   462,  -226,  -226,  -226,
     464,  -226,  -226,   488,   493,  -226,   469,  -226,  -226,   495,
     498,  -226,  -226,  -226,  -226,  -226,   499,   500,   501,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,   503,   504,   505,
     507,   508,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,   109,  -226,  -226,
    -226,  -226,  -226,  -226,    94,  -226,  -226,  -226,   509,  -226,
    -226,  -226,  -226,  -226,  -226,   510,  -226,  -226,  -226,   506,
      18,   512,  -226,   513,   516,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,   514,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,   425,  -226,  -226,  -226,   517,   -49,   518,   520,  -226,
    -226,  -226,   521,  -226,  -226,   522,   -49,  -226,  -226,   292,
     523,   529,   292,  -226,   530,  -226
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -226,  -226,  -226,  -226,   497,  -226,  -226,  -226,  -226,  -226,
    -226,   435,  -226,  -226,  -226,  -226,  -226,  -226,  -226,   430,
    -226,  -226,  -226,  -226,  -226,   427,  -226,  -226,  -226,  -225,
    -226,  -226,  -226,  -226,  -226,   -16,    -6,  -226,  -226,  -226,
    -226,   356,  -226,  -226,  -226,  -226,    -5,  -226,  -226,  -226,
    -226,  -226,   354,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,   323,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,   299,  -226,  -226,
    -226,  -226,  -226,  -226,   294,  -226,   306,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,   295,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,   268,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,   263,  -226,  -226,  -226,  -226,  -226,  -226,  -226,   256,
    -226,  -226,  -226,  -226,    -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -263
static const yytype_int16 yytable[] =
{
      64,   406,    66,    87,    68,   370,    71,    72,   289,    86,
      75,    76,    78,    79,    80,   119,    87,   169,   365,   213,
     116,    88,    89,   370,    90,    91,   120,    87,    92,    93,
      94,    95,   281,   116,    61,    70,   428,   429,   430,   431,
      87,    96,    59,   253,   376,    86,   492,   334,   370,    60,
     281,    62,   329,    77,   296,   424,    63,    88,    89,   386,
      90,    91,    65,   444,    92,    93,    94,    95,    97,    67,
     310,   450,    69,   457,   455,    73,   487,    96,   458,    97,
     297,   300,   488,   254,    74,   318,   319,   320,   321,   322,
     509,    87,    97,   446,   327,   254,   290,    84,   541,    98,
     542,   119,    99,   395,    97,    62,   377,   333,   547,   510,
      63,   366,   120,   333,    81,    99,   443,   367,   440,   538,
     282,   387,   341,   342,   343,   344,    99,   346,   347,    62,
     214,    62,    62,    82,    63,    98,    63,    63,   282,    99,
     493,   360,   361,   362,   363,   364,   289,    62,   373,   121,
      62,    99,    63,   214,   169,    63,    87,   391,   122,   123,
     124,   125,   126,   333,   127,   128,   129,   130,   131,   132,
     370,   133,   134,   135,   456,   489,   470,   298,   301,   136,
     137,   490,   299,   302,    83,   303,   304,   138,   139,   511,
      99,   140,   305,   141,   142,   143,   513,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   306,   333,   153,   154,
     155,   307,   539,   156,   308,   157,   309,   311,   540,   312,
     313,   158,   215,   216,   399,   159,   314,   160,   161,   162,
     163,   164,   165,   166,   290,   315,   316,   414,   449,   317,
     167,   323,   324,    62,   325,   215,   216,   326,    63,    92,
     421,   337,   467,   468,   469,    99,   316,   338,   339,   328,
     121,   340,   433,   345,   348,   349,   350,    87,   351,   122,
     123,   124,   125,   126,   352,   127,   128,   129,   130,   131,
     132,   353,   133,   134,   135,   548,   354,   296,   355,   356,
     136,   137,   357,   358,   359,   131,   374,   370,   138,   139,
     375,   378,   140,   379,   141,   142,   143,   380,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   381,   382,   153,
     154,   155,   383,   384,   156,   385,   157,   388,   389,   390,
     397,   398,   158,   402,   561,   404,   159,   564,   160,   161,
     162,   163,   164,   165,   166,   403,   405,   407,     1,   412,
     408,   167,   413,   415,   416,     2,     3,     4,   241,     5,
    -262,   -30,   -30,   432,   -30,   -30,    99,     6,   434,   -30,
     -30,   -30,   422,   426,   435,     7,   439,     8,   427,   445,
     258,   -30,   451,     9,   452,   453,   454,   459,   460,    10,
     461,   462,   463,   464,   258,    11,   465,   466,   471,   472,
     473,   474,   475,   505,   476,    12,    13,   477,   -30,   478,
     479,    14,   480,   259,   260,    15,   481,   482,   483,   484,
     238,    16,   485,   486,   491,   238,   495,   259,   260,   496,
     522,   497,   500,    17,    18,   502,   498,   503,   499,   -30,
     221,   504,    19,    20,    21,   507,   501,   436,   261,   262,
     263,   264,   221,   239,   240,   -30,   265,   266,   239,   240,
     508,   409,   261,   262,   263,   264,   515,   267,   506,   268,
     265,   266,   512,   222,   223,   514,   224,   225,   516,   517,
     518,   267,   519,   268,   520,   222,   223,   521,   224,   225,
     523,   525,   524,   417,   241,   242,   526,   527,   528,   241,
     242,   529,   530,   531,   532,   226,   533,   534,   535,   243,
     536,   537,   544,   546,   243,   549,   550,   226,   545,   551,
     554,    85,   552,   557,   558,   556,   393,   227,   553,   228,
     559,   562,   563,   565,   394,   331,   411,   438,   332,   227,
     401,   228,   555,   419,   335,   420,   441,   447,     0,     0,
       0,   425,   560
};

static const yytype_int16 yycheck[] =
{
       4,   226,     6,    10,     8,     5,    10,    11,     3,     3,
      14,    15,    16,    17,    18,    31,    10,    33,    10,    35,
       3,    15,    16,     5,    18,    19,    31,    10,    22,    23,
      24,    25,     3,     3,     3,     3,   261,   262,   263,   264,
      10,    35,   106,     3,     3,     3,     9,    30,     5,   106,
       3,   100,    10,     3,    58,     3,   105,    15,    16,     3,
      18,    19,     3,   288,    22,    23,    24,    25,    62,     3,
      74,   296,   110,   100,     3,   103,     4,    35,   105,    62,
       3,     3,    10,    43,   103,    89,    90,    91,    92,    93,
      90,    10,    62,    88,    98,    43,    91,     0,     4,    93,
       6,   117,   109,    22,    62,   100,    65,   113,    90,   109,
     105,   103,   117,   119,     3,   109,    73,   109,    89,    10,
      91,    65,   126,   127,   128,   129,   109,   131,   132,   100,
       3,   100,   100,     3,   105,    93,   105,   105,    91,   109,
     103,   145,   146,   147,   148,   149,     3,   100,   152,     3,
     100,   109,   105,     3,   170,   105,    10,    11,    12,    13,
      14,    15,    16,   169,    18,    19,    20,    21,    22,    23,
       5,    25,    26,    27,   103,   103,    28,   100,   100,    33,
      34,   109,   105,   105,     3,     3,     3,    41,    42,   414,
     109,    45,     3,    47,    48,    49,   421,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     3,   213,    62,    63,
      64,     3,   103,    67,     3,    69,     3,     3,   109,     3,
       3,    75,    95,    96,    97,    79,     3,    81,    82,    83,
      84,    85,    86,    87,    91,     3,   108,   241,    73,   103,
      94,     3,     3,   100,   103,    95,    96,     3,   105,    22,
     254,     3,   103,   104,   105,   109,   108,     3,     3,   108,
       3,   103,   266,     3,     3,   103,   103,    10,     3,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,     3,    25,    26,    27,   510,     3,   291,     3,     3,
      33,    34,     3,     3,     3,    22,     3,     5,    41,    42,
       3,     3,    45,     3,    47,    48,    49,     3,    51,    52,
      53,    54,    55,    56,    57,    58,    59,     3,     3,    62,
      63,    64,     3,     3,    67,     3,    69,     3,     3,     3,
       3,   103,    75,   103,   559,     3,    79,   562,    81,    82,
      83,    84,    85,    86,    87,   103,     3,     7,     3,   103,
       3,    94,   103,     3,     3,    10,    11,    12,    77,    14,
      44,    15,    16,     3,    18,    19,   109,    22,     7,    23,
      24,    25,    44,   103,     3,    30,     3,    32,   103,     3,
       3,    35,     3,    38,     3,     3,     3,     3,     3,    44,
       3,     3,     3,     3,     3,    50,     3,     3,    28,     3,
       3,     3,     3,   407,     3,    60,    61,     3,    62,     3,
       3,    66,     3,    36,    37,    70,     3,     3,     3,     3,
       3,    76,     3,     3,     3,     3,     3,    36,    37,     3,
     434,     3,     3,    88,    89,     3,    28,     3,    28,    93,
       3,     3,    97,    98,    99,     3,    28,    70,    71,    72,
      73,    74,     3,    36,    37,   109,    79,    80,    36,    37,
       3,    12,    71,    72,    73,    74,     3,    90,    28,    92,
      79,    80,    28,    36,    37,    28,    39,    40,     3,     3,
       3,    90,     3,    92,     3,    36,    37,     3,    39,    40,
      28,     3,    28,    76,    77,    78,     3,    28,     3,    77,
      78,     3,     3,     3,     3,    68,     3,     3,     3,    92,
       3,     3,     3,     7,    92,     3,     3,    68,     8,     3,
       3,    24,     8,     3,     3,     7,   170,    90,   103,    92,
       8,     8,     3,     3,   180,   100,   230,   269,   108,    90,
     217,    92,   546,   244,   117,   251,   283,   291,    -1,    -1,
      -1,   256,   556
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,    10,    11,    12,    14,    22,    30,    32,    38,
      44,    50,    60,    61,    66,    70,    76,    88,    89,    97,
      98,    99,   112,   113,   114,   115,   116,   117,   118,   119,
     134,   137,   148,   149,   177,   178,   180,   181,   182,   183,
     184,   190,   206,   207,   208,   209,   211,   212,   214,   215,
     234,   235,   242,   244,   245,   259,   260,   267,   268,   106,
     106,     3,   100,   105,   275,     3,   275,     3,   275,   110,
       3,   275,   275,   103,   103,   275,   275,     3,   275,   275,
     275,     3,     3,     3,     0,   115,     3,    10,    15,    16,
      18,    19,    22,    23,    24,    25,    35,    62,    93,   109,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   146,   147,   157,     3,   135,   136,   146,
     157,     3,    12,    13,    14,    15,    16,    18,    19,    20,
      21,    22,    23,    25,    26,    27,    33,    34,    41,    42,
      45,    47,    48,    49,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    62,    63,    64,    67,    69,    75,    79,
      81,    82,    83,    84,    85,    86,    87,    94,   139,   146,
     151,   152,   153,   154,   155,   156,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     237,   241,   243,   146,     3,    95,    96,   186,   187,   188,
     189,     3,    36,    37,    39,    40,    68,    90,    92,   210,
     226,   227,   228,   229,   230,   231,   232,   233,     3,    36,
      37,    77,    78,    92,   217,   218,   219,   220,   221,   222,
     223,   224,   225,     3,    43,   238,   239,   240,     3,    36,
      37,    71,    72,    73,    74,    79,    80,    90,    92,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     3,    91,   261,   262,   263,   265,   266,   275,     3,
      91,   269,   270,   271,   273,   274,   275,     3,   100,   105,
       3,   100,   105,     3,     3,     3,     3,     3,     3,     3,
     275,     3,     3,     3,     3,     3,   108,   103,   275,   275,
     275,   275,   275,     3,     3,   103,     3,   275,   108,    10,
     120,   122,   130,   147,    30,   136,   138,     3,     3,     3,
     103,   275,   275,   275,   275,     3,   275,   275,     3,   103,
     103,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     275,   275,   275,   275,   275,    10,   103,   109,   144,   145,
       5,   140,   141,   275,     3,     3,     3,    65,     3,     3,
       3,     3,     3,     3,     3,     3,     3,    65,     3,     3,
       3,    11,   150,   152,   163,    22,   179,     3,   103,    97,
     185,   187,   103,   103,     3,     3,   140,     7,     3,    12,
     213,   227,   103,   103,   275,     3,     3,    76,   216,   218,
     225,   275,    44,   236,     3,   240,   103,   103,   140,   140,
     140,   140,     3,   275,     7,     3,    70,   246,   248,     3,
      89,   262,   264,    73,   140,     3,    88,   270,   272,    73,
     140,     3,     3,     3,     3,     3,   103,   100,   105,     3,
       3,     3,     3,     3,     3,     3,     3,   103,   104,   105,
      28,    28,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,    10,   103,
     109,     3,     9,   103,   143,     3,     3,     3,    28,    28,
       3,    28,     3,     3,     3,   275,    28,     3,     3,    90,
     109,   140,    28,   140,    28,     3,     3,     3,     3,     3,
       3,     3,   275,    28,    28,     3,     3,    28,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,    10,   103,
     109,     4,     6,   142,     3,     8,     7,    90,   140,     3,
       3,     3,     8,   103,     3,   275,     7,     3,     3,     8,
     275,   140,     8,     3,   140,     3
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 235 "mediator_config_parse.y"
    {
    validateConfFile();
}
    break;

  case 27:
#line 270 "mediator_config_parse.y"
    {
}
    break;

  case 31:
#line 279 "mediator_config_parse.y"
    {
    parseCollectorBegin((yyvsp[(2) - (3)].transport), NULL);
}
    break;

  case 32:
#line 284 "mediator_config_parse.y"
    {
    parseCollectorBegin((yyvsp[(2) - (4)].transport), (yyvsp[(3) - (4)].str));
}
    break;

  case 33:
#line 288 "mediator_config_parse.y"
    {
    parseCollectorBegin((yyvsp[(2) - (4)].transport), (yyvsp[(3) - (4)].str));
}
    break;

  case 34:
#line 293 "mediator_config_parse.y"
    {
    parseCollectorEnd();
}
    break;

  case 50:
#line 317 "mediator_config_parse.y"
    {
    parseCollectorPort((yyvsp[(2) - (3)].str));
}
    break;

  case 51:
#line 322 "mediator_config_parse.y"
    {
    parseCollectorHost((yyvsp[(2) - (3)].str));
}
    break;

  case 52:
#line 327 "mediator_config_parse.y"
    {
    parseCollectorFile((yyvsp[(2) - (3)].str));
}
    break;

  case 53:
#line 332 "mediator_config_parse.y"
    {
    parseCollectorWatchDir((yyvsp[(2) - (3)].str));
}
    break;

  case 54:
#line 337 "mediator_config_parse.y"
    {
    parseCollectorSpreadDaemon((yyvsp[(2) - (3)].str));
}
    break;

  case 55:
#line 342 "mediator_config_parse.y"
    {
    parseCollectorDecompressDirectory((yyvsp[(2) - (3)].str));
}
    break;

  case 58:
#line 351 "mediator_config_parse.y"
    {
    parseCollectorSpreadGroup((yyvsp[(2) - (3)].str));
}
    break;

  case 59:
#line 356 "mediator_config_parse.y"
    {
    parseCollectorLock();
}
    break;

  case 60:
#line 361 "mediator_config_parse.y"
    {
    parseCollectorMovePath((yyvsp[(2) - (3)].str));
}
    break;

  case 61:
#line 366 "mediator_config_parse.y"
    {
    parseCollectorDelete();
}
    break;

  case 69:
#line 384 "mediator_config_parse.y"
    {
    parseFilterBegin();
}
    break;

  case 70:
#line 389 "mediator_config_parse.y"
    {
    parseFilterEnd();
}
    break;

  case 71:
#line 394 "mediator_config_parse.y"
    {
}
    break;

  case 73:
#line 402 "mediator_config_parse.y"
    {
    numValueList = 0;
    valueListWild = 0;
}
    break;

  case 75:
#line 409 "mediator_config_parse.y"
    {
    parseValueListItems((yyvsp[(1) - (1)].str));
}
    break;

  case 76:
#line 413 "mediator_config_parse.y"
    {
    parseValueListItems((yyvsp[(3) - (3)].str));
}
    break;

  case 77:
#line 416 "mediator_config_parse.y"
    {
    valueListWild = 1;
}
    break;

  case 79:
#line 424 "mediator_config_parse.y"
    {
    parseFieldListItems(NULL, (yyvsp[(1) - (1)].field));
}
    break;

  case 80:
#line 428 "mediator_config_parse.y"
    {
    parseFieldListItems((yyvsp[(1) - (1)].str), 0);
}
    break;

  case 81:
#line 432 "mediator_config_parse.y"
    {
    parseFieldListItems(0, COLLECTOR);
}
    break;

  case 82:
#line 436 "mediator_config_parse.y"
    {
    parseFieldListItems((yyvsp[(3) - (3)].str), 0);
}
    break;

  case 83:
#line 440 "mediator_config_parse.y"
    {
    parseFieldListItems((yyvsp[(2) - (2)].str), 0);
}
    break;

  case 84:
#line 444 "mediator_config_parse.y"
    {
    parseFieldListItems(NULL, (yyvsp[(3) - (3)].field));
}
    break;

  case 85:
#line 448 "mediator_config_parse.y"
    {
    parseFieldListItems(NULL, (yyvsp[(2) - (2)].field));
}
    break;

  case 86:
#line 452 "mediator_config_parse.y"
    {
    parseFieldListItems(0, COLLECTOR);
}
    break;

  case 87:
#line 456 "mediator_config_parse.y"
    {
    parseFieldListItems(0, COLLECTOR);
}
    break;

  case 90:
#line 465 "mediator_config_parse.y"
    {
    parseComparison((yyvsp[(1) - (4)].field), (yyvsp[(2) - (4)].oper), (yyvsp[(3) - (4)].str), VAL_INTEGER);
}
    break;

  case 91:
#line 469 "mediator_config_parse.y"
    {
    parseComparison((yyvsp[(1) - (4)].field), (yyvsp[(2) - (4)].oper), (yyvsp[(3) - (4)].str), VAL_IP);
}
    break;

  case 92:
#line 473 "mediator_config_parse.y"
    {
    /* ANY_IP IN_LIST "my_set.set" */
    parseComparison((yyvsp[(1) - (4)].field), (yyvsp[(2) - (4)].oper), (yyvsp[(3) - (4)].str), VAL_QSTRING);
}
    break;

  case 93:
#line 478 "mediator_config_parse.y"
    {
    parseComparison(80, (yyvsp[(2) - (4)].oper), (yyvsp[(3) - (4)].str), VAL_QSTRING);
}
    break;

  case 94:
#line 482 "mediator_config_parse.y"
    {
    parseComparison(80, (yyvsp[(2) - (4)].oper), (yyvsp[(3) - (4)].str), VAL_QSTRING);
}
    break;

  case 95:
#line 493 "mediator_config_parse.y"
    {
}
    break;

  case 96:
#line 497 "mediator_config_parse.y"
    {
    parseExporterBegin((yyvsp[(2) - (3)].transport), NULL);
}
    break;

  case 97:
#line 501 "mediator_config_parse.y"
    {
    parseExporterBegin((yyvsp[(2) - (4)].transport), (yyvsp[(3) - (4)].str));
}
    break;

  case 98:
#line 505 "mediator_config_parse.y"
    {
    parseExporterBegin((yyvsp[(2) - (4)].transport), (yyvsp[(3) - (4)].str));
}
    break;

  case 99:
#line 510 "mediator_config_parse.y"
    {
    parseExporterEnd();
}
    break;

  case 145:
#line 564 "mediator_config_parse.y"
    {
    parseExporterSSLMD5Hash();
}
    break;

  case 146:
#line 569 "mediator_config_parse.y"
    {
    parseExporterSSLSHA1Hash();
}
    break;

  case 147:
#line 574 "mediator_config_parse.y"
    {
    parseExporterMovePath((yyvsp[(2) - (3)].str));
}
    break;

  case 148:
#line 579 "mediator_config_parse.y"
    {
    parseExporterSetAndFilter();
}
    break;

  case 149:
#line 584 "mediator_config_parse.y"
    {
    and_filter = TRUE;
}
    break;

  case 150:
#line 589 "mediator_config_parse.y"
    {
    parseExporterPort((yyvsp[(2) - (3)].str));
}
    break;

  case 151:
#line 594 "mediator_config_parse.y"
    {
    parseExporterHost((yyvsp[(2) - (3)].str));
}
    break;

  case 152:
#line 599 "mediator_config_parse.y"
    {
    parseExporterFile((yyvsp[(2) - (3)].str));
}
    break;

  case 153:
#line 604 "mediator_config_parse.y"
    {
    parseExporterSpreadDaemon((yyvsp[(2) - (3)].str));
}
    break;

  case 156:
#line 613 "mediator_config_parse.y"
    {
    parseExporterSpreadGroup((yyvsp[(2) - (3)].str));
}
    break;

  case 157:
#line 618 "mediator_config_parse.y"
    {
    parseExporterTextDelimiter((yyvsp[(2) - (3)].str));
}
    break;

  case 158:
#line 623 "mediator_config_parse.y"
    {
    parseExporterDPIDelimiter((yyvsp[(2) - (3)].str));
}
    break;

  case 159:
#line 628 "mediator_config_parse.y"
    {
    parseExporterLock();
}
    break;

  case 160:
#line 633 "mediator_config_parse.y"
    {
    parseExporterRotateSeconds((yyvsp[(2) - (3)].str));
}
    break;

  case 161:
#line 638 "mediator_config_parse.y"
    {
    parseExporterUDPTimeout((yyvsp[(2) - (3)].str));
}
    break;

  case 162:
#line 643 "mediator_config_parse.y"
    {
    parseExporterFlowOnly();
}
    break;

  case 163:
#line 648 "mediator_config_parse.y"
    {
    parseExporterDPIOnly();
}
    break;

  case 164:
#line 653 "mediator_config_parse.y"
    {
    parseExporterNoStats();
}
    break;

  case 165:
#line 658 "mediator_config_parse.y"
    {
    parseExporterAddStats();
}
    break;

  case 166:
#line 663 "mediator_config_parse.y"
    {
    parseExporterRemoveEmpty();
}
    break;

  case 167:
#line 668 "mediator_config_parse.y"
    {
    parseExporterMultiFiles();
}
    break;

  case 168:
#line 673 "mediator_config_parse.y"
    {
    parseExporterNoFlowStats();
}
    break;

  case 169:
#line 678 "mediator_config_parse.y"
    {
    parseExporterJson();
}
    break;

  case 170:
#line 683 "mediator_config_parse.y"
    {
}
    break;

  case 171:
#line 687 "mediator_config_parse.y"
    {
    parseSpreadGroup((yyvsp[(2) - (3)].str));
}
    break;

  case 172:
#line 692 "mediator_config_parse.y"
    {
    parseSpreadGroupEnd();
}
    break;

  case 173:
#line 698 "mediator_config_parse.y"
    {
    parseStatisticsConfig();
}
    break;

  case 174:
#line 703 "mediator_config_parse.y"
    {
    parsePreserveObDomainConfig();
}
    break;

  case 175:
#line 708 "mediator_config_parse.y"
    {
    parseRewriteSslCertsConfig();
}
    break;

  case 176:
#line 714 "mediator_config_parse.y"
    {
}
    break;

  case 177:
#line 718 "mediator_config_parse.y"
    {
}
    break;

  case 178:
#line 722 "mediator_config_parse.y"
    {
}
    break;

  case 185:
#line 735 "mediator_config_parse.y"
    {
    parseGenTombstoneConfig();
}
    break;

  case 186:
#line 740 "mediator_config_parse.y"
    {
    parseTombstoneIdConfig((yyvsp[(2) - (3)].str));
}
    break;

  case 187:
#line 746 "mediator_config_parse.y"
    {
    parseStatsTimeout((yyvsp[(2) - (3)].str));
}
    break;

  case 188:
#line 751 "mediator_config_parse.y"
    {
    parseDNSDeDupConfig();
}
    break;

  case 189:
#line 756 "mediator_config_parse.y"
    {
    parseDNSDeDupOnly();
}
    break;

  case 190:
#line 761 "mediator_config_parse.y"
    {
    parseSSLDeDupOnly(1);
}
    break;

  case 191:
#line 764 "mediator_config_parse.y"
    {
    parseSSLDeDupOnly(0);
}
    break;

  case 192:
#line 769 "mediator_config_parse.y"
    {
    parseExporterNoFlow();
}
    break;

  case 193:
#line 774 "mediator_config_parse.y"
    {
    parseExporterDedupOnly();
}
    break;

  case 194:
#line 779 "mediator_config_parse.y"
    {
    parseExporterPrintHeader();
}
    break;

  case 195:
#line 784 "mediator_config_parse.y"
    {
    parseExporterNoIndex();
}
    break;

  case 196:
#line 789 "mediator_config_parse.y"
    {
    parseExporterEscapeChars();
}
    break;

  case 197:
#line 794 "mediator_config_parse.y"
    {
    parseExporterDedupPerFlow();
}
    break;

  case 198:
#line 799 "mediator_config_parse.y"
    {
    parseExporterTimestamp();
}
    break;

  case 199:
#line 803 "mediator_config_parse.y"
    {
    parseExporterDNSRROnly(1);
}
    break;

  case 200:
#line 807 "mediator_config_parse.y"
    {
    parseExporterDNSRROnly(2);
}
    break;

  case 201:
#line 811 "mediator_config_parse.y"
    {
    parseExporterDNSRROnly(3);
}
    break;

  case 202:
#line 815 "mediator_config_parse.y"
    {
    parseExporterDNSRROnly(4);
}
    break;

  case 203:
#line 819 "mediator_config_parse.y"
    {
    parseExporterDNSRespOnly();
}
    break;

  case 204:
#line 824 "mediator_config_parse.y"
    {
    parseExporterGzipFiles();
}
    break;

  case 205:
#line 829 "mediator_config_parse.y"
    {
    parseExporterMetadataExport();
}
    break;

  case 206:
#line 835 "mediator_config_parse.y"
    {
    parseLogConfig((yyvsp[(2) - (3)].str));
}
    break;

  case 207:
#line 840 "mediator_config_parse.y"
    {
    parseLogDir((yyvsp[(2) - (3)].str));
}
    break;

  case 208:
#line 845 "mediator_config_parse.y"
    {
    md_log_level = (yyvsp[(2) - (3)].log_level);
}
    break;

  case 209:
#line 850 "mediator_config_parse.y"
    {
    parsePidFile((yyvsp[(2) - (3)].str));
}
    break;

  case 210:
#line 855 "mediator_config_parse.y"
    {
    parseDedupRecordTypeList();
}
    break;

  case 211:
#line 860 "mediator_config_parse.y"
    {
}
    break;

  case 212:
#line 864 "mediator_config_parse.y"
    {
    dedup_temp_name = (yyvsp[(2) - (3)].str);
}
    break;

  case 213:
#line 868 "mediator_config_parse.y"
    {
}
    break;

  case 214:
#line 871 "mediator_config_parse.y"
    {
    parseDNSDedupConfigEnd();
}
    break;

  case 215:
#line 876 "mediator_config_parse.y"
    {
}
    break;

  case 216:
#line 880 "mediator_config_parse.y"
    {
    parseDedupConfig((yyvsp[(2) - (3)].str));
}
    break;

  case 217:
#line 884 "mediator_config_parse.y"
    {
    parseDedupConfig(NULL);
}
    break;

  case 218:
#line 889 "mediator_config_parse.y"
    {
}
    break;

  case 229:
#line 908 "mediator_config_parse.y"
    {
    parseMaxHitCount((yyvsp[(2) - (3)].str));
}
    break;

  case 230:
#line 913 "mediator_config_parse.y"
    {
    parseMaxFlushTime((yyvsp[(2) - (3)].str));
}
    break;

  case 231:
#line 918 "mediator_config_parse.y"
    {
    parseDedupAddExportName();
}
    break;

  case 232:
#line 923 "mediator_config_parse.y"
    {
    md_dedup_configure_state(etemp->dedup, 0, 0, TRUE, FALSE);
}
    break;

  case 235:
#line 931 "mediator_config_parse.y"
    {
    parseFileList((yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].field), NULL);
}
    break;

  case 236:
#line 935 "mediator_config_parse.y"
    {
    /* SIP by default */
    parseFileList((yyvsp[(2) - (4)].str), 2, NULL);
}
    break;

  case 237:
#line 940 "mediator_config_parse.y"
    {
    parseFileList((yyvsp[(2) - (9)].str), (yyvsp[(3) - (9)].field), (yyvsp[(6) - (9)].str));
}
    break;

  case 238:
#line 943 "mediator_config_parse.y"
    {
    parseFileList((yyvsp[(2) - (8)].str), 2, (yyvsp[(5) - (8)].str));
}
    break;

  case 250:
#line 962 "mediator_config_parse.y"
    {
    parseMapStmt((yyvsp[(3) - (5)].str));
}
    break;

  case 251:
#line 967 "mediator_config_parse.y"
    {
    exportname = TRUE;
}
    break;

  case 252:
#line 972 "mediator_config_parse.y"
    {
    parseDNSMaxHitCount((yyvsp[(2) - (3)].str));
}
    break;

  case 253:
#line 977 "mediator_config_parse.y"
    {
    parseDNSMaxFlushTime((yyvsp[(2) - (3)].str));
}
    break;

  case 254:
#line 982 "mediator_config_parse.y"
    {
    md_config.dns_base64_encode = TRUE;
}
    break;

  case 255:
#line 987 "mediator_config_parse.y"
    {
    lastseen = TRUE;
}
    break;

  case 256:
#line 992 "mediator_config_parse.y"
    {
}
    break;

  case 257:
#line 996 "mediator_config_parse.y"
    {
    parseTableListBegin(NULL);
}
    break;

  case 258:
#line 1000 "mediator_config_parse.y"
    {
    parseTableListBegin((yyvsp[(2) - (3)].str));
}
    break;

  case 259:
#line 1005 "mediator_config_parse.y"
    {
    numValueList = 0;
}
    break;

  case 260:
#line 1010 "mediator_config_parse.y"
    {
    numCustomList = 0;
}
    break;

  case 265:
#line 1022 "mediator_config_parse.y"
    {
    parseTableList((yyvsp[(2) - (4)].str));
}
    break;

  case 267:
#line 1028 "mediator_config_parse.y"
    {
    parseMySQLParams((yyvsp[(2) - (3)].str), NULL, NULL, NULL, NULL);
}
    break;

  case 268:
#line 1032 "mediator_config_parse.y"
    {
    parseMySQLParams(NULL, (yyvsp[(2) - (3)].str), NULL, NULL, NULL);
}
    break;

  case 269:
#line 1036 "mediator_config_parse.y"
    {
    parseMySQLParams(NULL, NULL, (yyvsp[(2) - (3)].str), NULL, NULL);
}
    break;

  case 270:
#line 1040 "mediator_config_parse.y"
    {
    parseMySQLParams(NULL, NULL, NULL, (yyvsp[(2) - (3)].str), NULL);
}
    break;

  case 271:
#line 1044 "mediator_config_parse.y"
    {
    parseMySQLParams(NULL, NULL, NULL, NULL, (yyvsp[(2) - (3)].str));
}
    break;

  case 272:
#line 1048 "mediator_config_parse.y"
    {
    parseUserInfoElement((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), NULL);
}
    break;

  case 273:
#line 1052 "mediator_config_parse.y"
    {
    parseUserInfoElement((yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str));
}
    break;

  case 274:
#line 1057 "mediator_config_parse.y"
    {
    parseExporterRemoveUploaded();
}
    break;

  case 275:
#line 1062 "mediator_config_parse.y"
    {
}
    break;

  case 276:
#line 1066 "mediator_config_parse.y"
    {
    parseSSLConfigBegin((yyvsp[(2) - (3)].str));
}
    break;

  case 277:
#line 1070 "mediator_config_parse.y"
    {
    numValueList = 0;
}
    break;

  case 292:
#line 1091 "mediator_config_parse.y"
    {
    md_ssl_dedup_configure_state(etemp->ssl_dedup, 0, 0, NULL, NULL, TRUE);
}
    break;

  case 293:
#line 1096 "mediator_config_parse.y"
    {
    parseMapStmt((yyvsp[(3) - (5)].str));
    md_ssl_dedup_configure_state(etemp->ssl_dedup, 0, 0, NULL, mapitem, FALSE);
    mapitem = NULL;
}
    break;

  case 294:
#line 1103 "mediator_config_parse.y"
    {
    parseSSLIssuerTypeList();
}
    break;

  case 295:
#line 1108 "mediator_config_parse.y"
    {
    parseSSLSubjectTypeList();
}
    break;

  case 296:
#line 1113 "mediator_config_parse.y"
    {
    parseSSLOtherTypeList();
}
    break;

  case 297:
#line 1118 "mediator_config_parse.y"
    {
    parseSSLExtensionsTypeList();
}
    break;

  case 298:
#line 1123 "mediator_config_parse.y"
    {
    parseSSLCertDedup();
}
    break;

  case 299:
#line 1128 "mediator_config_parse.y"
    {
    parseSSLMaxHitCount((yyvsp[(2) - (3)].str));
}
    break;

  case 300:
#line 1133 "mediator_config_parse.y"
    {
    parseSSLMaxFlushTime((yyvsp[(2) - (3)].str));
}
    break;

  case 301:
#line 1138 "mediator_config_parse.y"
    {
    parseSSLCertFile((yyvsp[(2) - (3)].str));
}
    break;

  case 302:
#line 1143 "mediator_config_parse.y"
    {
}
    break;

  case 303:
#line 1147 "mediator_config_parse.y"
    {
    parseVlanMapBegin((yyvsp[(2) - (3)].str));
}
    break;

  case 310:
#line 1161 "mediator_config_parse.y"
    {
    parseVlanMapLine((yyvsp[(1) - (3)].str));
}
    break;

  case 311:
#line 1166 "mediator_config_parse.y"
    {
    parseMapEnd();
}
    break;

  case 312:
#line 1171 "mediator_config_parse.y"
    {
    parseMapOther((yyvsp[(1) - (3)].str));
}
    break;

  case 313:
#line 1176 "mediator_config_parse.y"
    {
    parseMapDiscard();
}
    break;

  case 314:
#line 1181 "mediator_config_parse.y"
    {
}
    break;

  case 315:
#line 1185 "mediator_config_parse.y"
    {
    parseObidMapBegin((yyvsp[(2) - (3)].str));
}
    break;

  case 322:
#line 1200 "mediator_config_parse.y"
    {
    parseObidMapLine((yyvsp[(1) - (3)].str));
}
    break;

  case 323:
#line 1205 "mediator_config_parse.y"
    {
    parseMapEnd();
}
    break;

  case 324:
#line 1210 "mediator_config_parse.y"
    {
    parseMapOther((yyvsp[(1) - (3)].str));
}
    break;

  case 325:
#line 1215 "mediator_config_parse.y"
    {
    parseMapDiscard();
}
    break;


/* Line 1267 of yacc.c.  */
#line 3428 "mediator_config_parse.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1222 "mediator_config_parse.y"


static void validateConfFile(
    void)
{
    if (ebeg == NULL) {
        mediator_config_error("No Exporter Information Given. "
                              " Need an Exporter or DEDUP File.\n");
    }

    md_config.flowexit = ebeg;
    md_config.flowsrc = ctemp;
    md_config.maps = maptemp;

}

static void parseCollectorBegin(
    mdTransportType_t mode,
    char              *name)
{

    switch(mode) {
      case UDP:
        md_ip_intransport = UDP;
        break;
      case TCP:
        md_ip_intransport = TCP;
        break;
      case SPREAD:
        md_ip_intransport = SPREAD;
        break;
      case FILEHANDLER:
        md_ip_intransport = FILEHANDLER;
        break;
      case DIRECTORY:
        md_ip_intransport = DIRECTORY;
        break;
      default:
        mediator_config_error("Unacceptable transport mode for exporter");
    }

    coll_temp = mdNewFlowCollector(mode, name);
    free(name);

}

static void parseCollectorPort(
    char   *port)
{
    if ((md_ip_intransport == TCP) || (md_ip_intransport == UDP)) {

        if (atoi(port) < 1024) {
            mediator_config_error("Invalid Port.  Port must be above 1024.\n");
            free(port);
            return;
        }

        mdCollectorSetPort(coll_temp, port);
    } else {

        mediator_config_error("PORT only valid for TCP or UDP Collectors\n");
        free(port);
        return;
    }

    free(port);
}

static void parseCollectorHost(
    char   *host)
{
    if ((md_ip_intransport == TCP) || (md_ip_intransport == UDP) ||
        (md_ip_intransport == SPREAD)) {
        mdCollectorSetInSpec(coll_temp, host);
    } else {
        mediator_config_error("HOSTNAME only valid for TCP or UDP Collectors\n");
    }

    free(host);
}


static void parseCollectorFile(
    char   *file)
{
    if ((md_ip_intransport == TCP) || (md_ip_intransport == UDP) ||
        (md_ip_intransport == SPREAD)) {
        mediator_config_error("PATH and FILE only valid for FILEHANDLER Collectors\n");
    } else if (md_ip_intransport == DIRECTORY) {
        mdCollectorSetPollTime(coll_temp, "30");
        mdCollectorSetInSpec(coll_temp, file);
    } else {
        if (g_file_test(file, G_FILE_TEST_IS_DIR)) {
            mdCollectorSetPollTime(coll_temp, "30");
            mdCollectorSetInSpec(coll_temp, file);
        } else {
            mdCollectorSetInSpec(coll_temp, file);
        }
    }

    free(file);
}

static void parseCollectorWatchDir(
    char *poll_time)
{

    if ((md_ip_intransport == TCP || md_ip_intransport == UDP) ||
        (md_ip_intransport == SPREAD))
    {
        mediator_config_error("Invalid Keyword: POLL only valid for "
                "FILEHANDLER or DIR  Collectors\n");
    } else {
        if (atoi(poll_time) > 65535) {
            mediator_config_error("POLL has max of 65535\n");
        }
        mdCollectorSetPollTime(coll_temp, poll_time);
    }
    free(poll_time);
}

static void parseCollectorSpreadDaemon(
    char   *daemon_name)
{

    if ((md_ip_intransport != SPREAD)) {
        mediator_config_error("Invalid Keyword: Collector NOT configured for SPREAD.\n");
        return;
    }
#if HAVE_SPREAD
    mdCollectorSetInSpec(coll_temp, daemon_name);
#else
    mediator_config_error("Mediator not configured with Spread Support. \n"
           "Confirm Spread is installed.\n");
#endif
    free(daemon_name);
}

static void parseCollectorSpreadGroup(
    char   *group)
{
    if (md_ip_intransport != SPREAD) {
        mediator_config_error("Invalid keyword: Collector NOT configured for SPREAD.\n");
        return;
    }
#if HAVE_SPREAD
    mdCollectorAddSpreadGroup(coll_temp, group, num_in_groups);
    num_in_groups++;
#else
    mediator_config_error("Mediator not configured with Spread Support. \n"
           "Confirm Spread is installed.\n");
#endif
    free(group);
}

static void parseCollectorLock(
    void)
{

    if (md_ip_intransport != DIRECTORY) {
        mediator_config_error("Invalid Keyword: LOCK must be used with DIR Collector");
    } else {
        mdCollectorSetLockMode(coll_temp, TRUE);
    }

}

static void parseCollectorDecompressDirectory(
    char *path)
{
    if ((md_ip_intransport != FILEHANDLER) &&(md_ip_intransport != DIRECTORY))
    {
        mediator_config_error ("Invalid Keyword: DECOMPRESS must be used with a "
                               "FILEHANDLER or DIR Collector");
    }

    mdCollectorSetDecompressDir(coll_temp, path);

    free(path);
};

static void parseCollectorMovePath(
    char   *path)
{

    if ((md_ip_intransport != FILEHANDLER) &&(md_ip_intransport != DIRECTORY))
    {
        mediator_config_error ("Invalid Keyword: MOVE must be used with a "
                 "FILEHANDLER or DIR Collector");
    } else {
        if (!g_file_test(path, G_FILE_TEST_IS_DIR)) {
            mediator_config_error("MOVE expects a valid file directory");
        }

        mdCollectorSetMoveDir(coll_temp, path);
    }

    free(path);
}

static void parseCollectorDelete(
    void)
{

    if ((md_ip_intransport != FILEHANDLER) &&(md_ip_intransport != DIRECTORY))
    {
        mediator_config_error("Invalid Keyword: DELETE must be used "
                              "with FILEHANDLER or DIR Collector");
    } else {
        mdCollectorSetDeleteFiles(coll_temp, TRUE);
    }

}

static void parseCollectorEnd(
    void)
{

    md_collect_node_t *new_node;

    if (coll_temp == NULL) {
        mediator_config_error("Collector is undefined\n");
    }

    if (!mdCollectorVerifySetup(coll_temp, NULL)) {
        exit(-1);
    }

#if HAVE_SPREAD
    if (md_ip_intransport == SPREAD) {
        if (num_in_groups == 0) {
            mediator_config_error("SPREAD Collector Requires AT LEAST ONE group.");
        }
    }
#endif

    new_node = md_new_collect_node();
    new_node->coll = coll_temp;
    new_node->filter = ftemp;
    if (new_node->filter) {
        md_filter_t *nnode = NULL;
        md_filter_t *fnode = new_node->filter;

        while (fnode) {
            nnode = fnode->next;
            if (fnode->field == COLLECTOR) {
                mediator_config_error("FILTER invalid: COLLECTOR field not valid"
                                      " in COLLECTOR block.");
            }
            fnode = nnode;
        }
    }

    new_node->and_filter = and_filter;

    attachHeadToSLL((mdSLL_t **)&(ctemp), (mdSLL_t *)new_node);

    temp_list = NULL;
    coll_temp = NULL;
    ftemp = NULL;
    and_filter = FALSE;
    numValueList = 0;
    md_ip_intransport = NONE;
#if HAVE_SPREAD
    num_in_groups=0;
#endif
}

static void parseFilterBegin(
    void)
{
    g_warning("Filter blocks outside of COLLECTOR or EXPORTER blocks will "
              "apply to all COLLECTORS.");
}

static void parseFilterEnd(
    void)
{
    md_collect_node_t *cnode = NULL;

    if (ftemp == NULL) {
        mediator_config_error("No Filters Found\n");
    }

    for (cnode = ctemp; cnode; cnode = cnode->next) {
        if (!cnode->filter) {
            cnode->filter = ftemp;
        } else {
            md_filter_t *new_filter = md_new_filter_node();
            memcpy(new_filter, ftemp, sizeof(md_filter_t));
            attachHeadToSLL((mdSLL_t **)&(cnode->filter),
                            (mdSLL_t *)new_filter);
            /* remove next reference */
        }
    }

    md_config.shared_filter = TRUE;

    ftemp = NULL;
}


static void parseExporterBegin(
    mdTransportType_t mode,
    char              *name)
{

    switch (mode) {
      case TEXT:
        md_ipfix_outtransport = TEXT;
        break;
      case UDP:
        md_ipfix_outtransport = UDP;
        break;
      case TCP:
        md_ipfix_outtransport = TCP;
        break;
      case SPREAD:
        md_ipfix_outtransport = SPREAD;
        if (!spread_exporter) {
            spread_exporter = TRUE;
        } else {
            mediator_config_error("Error: Only ONE Spread Exporter Permitted");
        }
        break;
      case DIRECTORY:
      case FILEHANDLER:
        md_ipfix_outtransport = FILEHANDLER;
        break;
      default:
        mediator_config_error("Unacceptable transport mode for exporter");
    }

    exp_temp = mdNewFlowExporter(mode);
    if (name) {
        mdExporterSetName(exp_temp, name);
        free(name);
    }
    ssl_dedup_only = FALSE;
}

static void parseExporterPort(
    char   *port)
{

    if (exp_temp == NULL) {
        mediator_config_error("Flow Exporter Not Defined\n");
    }

    if ((md_ipfix_outtransport == TCP) || (md_ipfix_outtransport == UDP)) {

        if (atoi(port) < 1024) {
            free(port);
            mdExporterFree(exp_temp);
            mediator_config_error("Invalid Export Port.  "
                                  "Port must be above 1024.\n");
            return;
        }

        mdExporterSetPort(exp_temp, port);

    } else {
        free(port);
        mediator_config_error("Invalid Keyword: PORT only valid for "
                              "TCP or UDP Exporter\n");
        return;
    }

    free(port);
}

static void parseExporterHost(
    char   *host)
{
    if (exp_temp == NULL) {
        mediator_config_error("Flow Exporter Not Defined\n");
    }

    if ((md_ipfix_outtransport == TCP) || (md_ipfix_outtransport == UDP)) {

        mdExporterSetHost(exp_temp, host);

    } else {
        mediator_config_error("Invalid Keyword: HOSTNAME only valid "
                              "for TCP or UDP Collectors\n");
        mediatorconf_errors++;
    }

    free(host);
}

static void parseExporterFile(
    char   *file)
{
    if (exp_temp == NULL) {
        mediator_config_error("Flow Exporter Not Defined\n");
    }

    if (md_ipfix_outtransport == TEXT || md_ipfix_outtransport == FILEHANDLER) {
        mdExporterSetFileSpec(exp_temp, file);
    } else {
        mediator_config_error("Invalid Keyword PATH.  Not a defined "
                              "keyword for this Exporter\n");
    }

    free(file);
}

static void parseExporterSpreadDaemon(
    char   *daemon_name)
{
    if (exp_temp == NULL) {
        mediator_config_error("Flow Exporter Not Defined\n");
    }

    if ((md_ipfix_outtransport != SPREAD)) {
        mediator_config_error("Invalid keyword: DAEMON only valid for "
                              "SPREAD Exporter\n");
    }
#if HAVE_SPREAD
    mdExporterSetFileSpec(exp_temp, daemon_name);
#else
    mediator_config_error("Spread is not enabled. "
                          "Confirm Spread is Installed\n");
#endif

    free(daemon_name);
}

static void parseExporterSpreadGroup(
    char   *group)
{
    if (md_ipfix_outtransport != SPREAD) {
        mediator_config_error("Invalid keyword: Exporter NOT "
                              "configured for SPREAD.\n");
    }

#if HAVE_SPREAD
    if (md_config.out_spread.groups != NULL) {
        int     n = 0;
        n = num_out_groups + 2;
        md_out_groups = (char **)g_renew(char *, md_out_groups, n);
        md_out_groups[num_out_groups] = g_strdup(group);
        md_out_groups[n-1] = (char *)'\0';
        md_config.out_spread.groups = md_out_groups;
        sftemp = md_new_spread_node();
        sftemp->group = md_out_groups[num_out_groups];
        attachHeadToSLL((mdSLL_t **)&(md_config.mdspread),
                        (mdSLL_t *)sftemp);
        sftemp = NULL;
        num_out_groups++;
    } else {
        md_out_groups = (char **)g_new0(char *, 2);
        md_out_groups[0] = g_strdup(group);
        md_out_groups[1] = (char *)'\0';
        md_config.out_spread.groups = md_out_groups;
        sftemp = md_new_spread_node();
        sftemp->group = md_out_groups[num_out_groups];
        attachHeadToSLL((mdSLL_t **)&(md_config.mdspread),
                        (mdSLL_t *)sftemp);
        sftemp = NULL;
        num_out_groups++;
    }
#else
    mediator_config_error("Mediator not configured with Spread Support. \n"
            "Confirm Spread is installed.\n");
#endif
    free(group);
}

static void parseExporterLock(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Flow Exporter Not Defined\n");
    }

    if (md_ipfix_outtransport != FILEHANDLER && md_ipfix_outtransport != TEXT) {
        mediator_config_error("Invalid Keyword: LOCK only valid for "
                              "TEXT or FILEHANDLER Exporters.\n");
    }

    mdExporterSetLock(exp_temp);

}

static void parseExporterNoFlowStats(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Flow Exporter Not Defined\n");
    }

    mdExporterSetNoFlowStats(exp_temp);
}

static void parseExporterJson(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Flow Exporter Not Defined\n");
    }

    mdExporterSetJson(exp_temp);
}

static void parseExporterRotateSeconds(
    char     *secs)
{

    uint32_t rotate = 0;

    if (exp_temp == NULL) {
        mediator_config_error("Flow Exporter Not Defined\n");
    }

    if (md_ipfix_outtransport != FILEHANDLER && md_ipfix_outtransport != TEXT) {
        mediator_config_error("Invalid Keyword: ROTATE only valid for "
                              "TEXT or FILEHANDLER Exporters.\n");
    }

    rotate = atoi(secs);

    if (rotate <= 0) {
        mediator_config_error("Invalid ROTATE Seconds. "
                              "Must be greater than 0.\n");
    }

    mdExporterSetRotate(exp_temp, rotate);

    free(secs);
}

static void parseExporterUDPTimeout(
    char *mins)
{

    if (md_ipfix_outtransport != UDP) {
        mediator_config_error("Invalid Keyword: UDP TEMPLATE TIMEOUT "
                              "only valid for UDP Exporters.\n");
    } else {
        md_config.udp_template_timeout = atoi(mins);
    }

    if (md_config.udp_template_timeout <= 0) {
        mediator_config_error("Invalid UDP Timeout: Must be greater than "
                              "0 minutes.\n");
    }

    free(mins);
}

static void parseExporterEnd(
    void)
{
    md_export_node_t *new_node;
    gboolean dns_dedup;
    int i;

    if (exp_temp == NULL) {
        mediator_config_error("Exporter is Undefined\n");
    }

    dns_dedup = mdExporterGetDNSDedupStatus(exp_temp);

    new_node = md_new_export_node(dns_dedup, FALSE);
    new_node->exp = exp_temp;
    new_node->filter = ftemp;
    new_node->and_filter = and_filter;
    if (ssl_dedup_only) {
        new_node->ssl_dedup = md_ssl_new_dedup_state();
    }
    attachHeadToSLL((mdSLL_t **)&(ebeg),
                    (mdSLL_t *)new_node);

    if (temp_list) {
        mdExportCustomList(new_node->exp, temp_list);
    }

    if (numValueList > 0) {
        if (md_ipfix_outtransport != TEXT) {
            mediator_config_error("DPI_FIELD_LIST only valid for TEXT "
                                  "exporters.\n");
        }
        for (i = 0; i < numValueList; i++) {
            mdInsertDPIFieldItem(exp_temp, valueListTemp[i]);
        }
    }

    /*if (!mdExporterVerifySetup(exp_temp)) {
        exit(-1);
        }*/

    new_node->md5_hash = md5_filter;
    new_node->sha1_hash = sha1_filter;


    temp_list = NULL;
    exp_temp = NULL;
    ftemp = NULL;
    and_filter = FALSE;
    numValueList = 0;
    numCustomList = 0;
    md5_filter = FALSE;
    sha1_filter = FALSE;
    md_ipfix_outtransport = NONE;
    ssl_dedup_only = FALSE;
}

static void parseExporterTextDelimiter(
    char *delim)
{

    if (md_ipfix_outtransport != TEXT) {
        mediator_config_error("Invalid Keyword.  DELIMITER requires "
                              "TEXT Exporter.\n");
    }

    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    if (strlen(delim) != 1) {
        mediator_config_error("Invalid Text Delimiter.  Text Delimiter "
                              "may only be 1 character.\n");
    }

    mdExporterSetDelim(exp_temp, delim);

    free(delim);
}

static void parseExporterDPIDelimiter(
    char *delim)
{

    if (md_ipfix_outtransport != TEXT) {
        mediator_config_error("Invalid Keyword.  DELIMITER requires "
                              "TEXT Exporter.\n");
    }

    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    if (strlen(delim) != 1) {
        mediator_config_error("Invalid Text Delimiter.  Text Delimiter "
                              "may only be 1 character.\n");
    }

    mdExporterSetDPIDelim(exp_temp, delim);

    free(delim);
}

static void parseExporterFlowOnly(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    if (!mdExporterSetFlowOnly(exp_temp)) {
        mediator_config_error("DPI_ONLY, DNS_DEDUP, SSL_DEDUP, "
                              " DEDUP_ONLY, or DNS_RR_ONLY also specified. "
                              " Only one can be listed for an exporter");
    }

}

static void parseExporterSetAndFilter(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    and_filter = TRUE;

}

static void parseExporterDPIOnly(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    if (!mdExporterSetDPIOnly(exp_temp)) {
        mediator_config_error("FLOW_ONLY or DNS_DEDUP_ONLY or"
                              " SSL_DEDUP_ONLY also specified.  "
                              "Only one can be listed for an exporter\n");
    }
}


static void parseExporterRemoveEmpty(
    void)
{

    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    if (md_ipfix_outtransport != TEXT && md_ipfix_outtransport != FILEHANDLER){
        mediator_config_error("REMOVE_EMPTY_FILES only valid for TEXT "
                              "or FILEHANDLER Exporter\n");
    }

    mdExporterSetRemoveEmpty(exp_temp);
}

static void parseExporterNoStats(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    mdExporterSetStats(exp_temp, 1);

}

static void parseExporterAddStats(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }
    mdExporterSetStats(exp_temp, 2);
}

static void parseExporterPrintHeader(
    void)
{

    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    if (md_ipfix_outtransport != TEXT) {
        mediator_config_error("PRINT_HEADER Keyword only available "
                              "for TEXT Exporter\n");
    }

    mdExporterSetPrintHeader(exp_temp);
}

static void parseExporterEscapeChars(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    if (md_ipfix_outtransport != TEXT) {
        mediator_config_error("ESCAPE_CHARS keyword only available "
                              "for TEXT Exporters\n");
    }

    mdExporterSetEscapeChars(exp_temp);
}

static void parseExporterDNSRROnly(
    int              mode)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    if (md_ipfix_outtransport == TEXT) {
        mediator_config_error("DNS_RR_ONLY keyword only available "
                              "for IPFIX (TCP, UDP, SPREAD, FILEHANDLER) "
                              "Exporters\n");
    }

    if (!mdExporterSetDNSRROnly(exp_temp, mode)) {
        mediator_config_error("FLOW_ONLY, DPI_ONLY, SSL_DEDUP_ONLY, "
                              "DNS_DEDUP_ONLY, or DEDUP_ONLY not permitted with "
                              "DNS_RR_ONLY");
    }
}

static void parseExporterDNSRespOnly(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    mdExporterSetDNSRespOnly(exp_temp);
}

static void parseExporterDedupPerFlow(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    mdExporterDedupPerFlow(exp_temp);
}

static void parseExporterNoIndex(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    if (md_ipfix_outtransport != TEXT) {
        mediator_config_error("NO_INDEX Keyword only valid for "
                              "TEXT Exporters\n");
    }

    mdExporterSetNoIndex(exp_temp, TRUE);
}

static void parseExporterNoFlow(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    mdExporterSetNoFlow(exp_temp);
}

static void parseExporterTimestamp(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    if (md_ipfix_outtransport != TEXT) {
        mediator_config_error("TIMESTAMP_FILES Keyword only valid for "
                              "TEXT Exporters\n");
    }

    mdExporterSetTimestampFiles(exp_temp);
}


static void parseExporterMultiFiles(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined exporter\n");
    }

    if (md_ipfix_outtransport != TEXT) {
        mediator_config_error("MULTI_FILES keyword only valid for TEXT "
                              "Exporters\n");
    }

    if (!mdExportMultiFiles(exp_temp)) {
        mediator_config_error("MULTI_FILES configuration error.\n");
    }
}

static void parseExporterMetadataExport(void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }
#if SM_ENABLE_METADATA_EXPORT
    mdExporterSetMetadataExport(exp_temp);
#else
    mediator_config_error("Mediator not configured with metadata(type) export enabled. \n");
#endif
}

static void parseSpreadGroup(
    char *name)
{

    gboolean found = FALSE;

    if (!spread_exporter) {
        mediator_config_error("Invalid Group Block.  One Exporter must be "
                              "configured for Spread Transport\n");
    }

    for (sftemp = md_config.mdspread; sftemp; sftemp = sftemp->next) {
        if (strcmp(name, sftemp->group) == 0) {
            found = TRUE;
            break;
        }
    }

    if (!found) {
        mediator_config_error("Group must exist in EXPORTER GROUP.\n");
    }

    ftemp = sftemp->filterList;

    free(name);
}

static void parseSpreadGroupEnd(
    void)
{

    if (ftemp == NULL) {
        mediator_config_error("No Spread Exporter Filters Found\n");
    }

    sftemp->filterList = ftemp;

    ftemp = NULL;
    sftemp = NULL;
}

static void parseStatsTimeout(
    char *timeout)
{
    md_stats_timeout = atoi(timeout);
    free(timeout);
}

static void parseLogConfig(
    char *log_file)
{
    md_logfile = g_strdup(log_file);
    free(log_file);
}

static void parseLogDir(
    char *log_dir)
{
    md_logdest = g_strdup(log_dir);
    free(log_dir);
}

static void parsePidFile(
    char *pid_file)
{
    md_pidfile = g_strdup(pid_file);
    free(pid_file);
}

static void parseStatisticsConfig(
    void)
{
    md_config.no_stats = TRUE;
}

static void parsePreserveObDomainConfig(
    void)
{
    md_config.preserve_obdomain = TRUE;
}

static void parseRewriteSslCertsConfig(
    void)
{
    md_config.rewrite_ssl_certs = TRUE;
}

static void parseGenTombstoneConfig(
    void)
{
    md_config.gen_tombstone = TRUE;
}

static void parseTombstoneIdConfig(
    char *configured_id)
{
    md_config.tombstone_configured_id = atoi(configured_id);
    free(configured_id);
}

static void parseDNSDeDupConfig(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    mdExporterSetDNSDeDup(exp_temp);

}

static void parseDNSDeDupOnly(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    if (!mdExporterSetDNSDeDupOnly(exp_temp)) {
        mediator_config_error("FLOW_ONLY OR DPI_ONLY not permitted with "
                              "DNS_DEDUP_ONLY");
    }
}

static void parseComparison(
    mdAcceptFilterField_t field,
    fieldOperator         oper,
    char                  *val,
    int                   val_type)
{
#ifdef ENABLE_SKIPSET
    int rv;
#endif
    uint32_t ip;
    uint8_t  ip6[16];
    md_collect_node_t *cnode = NULL;
    md_filter_t *filter = md_new_filter_node();

    if (field > 15) {
        if (field != INGRESS && field != EGRESS && field != COLLECTOR) {
            mediator_config_error("Invalid Filter Field.  "
                                  "Please refer to documentation for "
                                  "acceptable filter fields.");
        }
    }

    filter->field = field;

    filter->oper = oper;

    if (val_type == VAL_INTEGER) {
        filter->val[filter->num_in_list] = atoi(val);
    } else if (val_type == VAL_IP) {
        switch (field) {
          case SIP_V4:
          case DIP_V4:
          case ANY_IP:
          case SIP_ANY:
          case DIP_ANY:
            if ((inet_pton(AF_INET, val, (struct in_addr *)&ip) <= 0)) {
                mediator_config_error("Invalid IPv4 Address\n");
            }
            filter->val[filter->num_in_list] = g_ntohl(ip);
            break;
          case SIP_V6:
          case DIP_V6:
          case ANY_IP6:
            if (inet_pton(AF_INET6, val, ip6) <= 0) {
                mediator_config_error("Invalid IPv6 Address\n");
            }
            memcpy(filter->val, ip6, 16);
            break;
          default:
            mediator_config_error("Invalid Filter Field for IP Address");
        }
    } else if ((field == COLLECTOR) && !(oper == EQUAL || oper == NOT_EQUAL)) {
        mediator_config_error("COLLECTOR Filter must use EQUAL/NOT_EQUAL operator");
    } else if (val_type == VAL_QSTRING && (oper == IN_LIST || oper == NOT_IN_LIST)) {
        switch (field) {
          case SIP_V4:
          case DIP_V4:
          case ANY_IP:
          case SIP_V6:
          case DIP_V6:
          case ANY_IP6:
          case SIP_ANY:
          case DIP_ANY:
            break;
          default:
            mediator_config_error("Invalid Filter Field for "
                                  "IN_LIST/NOT_IN_LIST operator");
        }
#ifdef ENABLE_SKIPSET
        if (!g_file_test(val, G_FILE_TEST_EXISTS)) {
            mediator_config_error("Can't open file IPSET file.");
        }

        filter->ipset = NULL;

        if (!app_registered) {
            skAppRegister("super_mediator");
            app_registered++;
        }

        rv = skIPSetLoad((skipset_t **)&(filter->ipset), val);

        if (rv != SKIPSET_OK) {
            fprintf(stderr, "Could not load IPset: %s\n", skIPSetStrerror(rv));
            mediator_config_error("Error occured loading IPSet file.");
        }

        if (!skIPSetIsV6(filter->ipset)) {
            if ((field == SIP_V6) || (field == DIP_V6) || (field == ANY_IP6)) {
                mediator_config_error("Given IPSet not configured to store "
                                      "IPv6 Addresses");
            }
        } else {
            if ((field == SIP_V4) || (field == DIP_V4)) {
                g_warning("IPSet configured for IPv6 but filtering on IPv4 "
                          "Address.");
            }
        }

#else
        mediator_config_error("NO SUPPORT FOR IPSETs.  Please Install "
                              "SiLK IPSet Library.");
#endif

    } else if (field == COLLECTOR) {
        int num = 1;
        for (cnode = ctemp; cnode; cnode = cnode->next) {
            char *name = mdCollectorGetName(cnode);
            if (!(strcmp(name, val))) {
                filter->val[filter->num_in_list] = mdCollectorGetID(cnode);
            }
            num++;
        }
        if (filter->val[filter->num_in_list] == 0) {
            mediator_config_error("No COLLECTOR with given name.");
        }
    } else {
        mediator_config_error("Invalid comparison for filter.");
    }

    filter->num_in_list++;

    attachHeadToSLL((mdSLL_t **)&(ftemp),
                    (mdSLL_t *)filter);

    free(val);
}

static void parseMapStmt(
    char *mapname)
{
    smFieldMap_t *map = NULL;

    if (mapitem != NULL) {
        mediator_config_error("MAP already defined for this DEDUP config block.");
    }

    if (mapname) {
        map = maptemp;
        if (!map) {
            mediator_config_error("NO Previous MAPS defined in configuration file.");
        }
        do {
            if (strcmp(map->name, mapname) == 0) {
                break;
            }
        } while ((map = map->next));

        if (map == NULL) {
            mediator_config_error("NO MAPS defined with the name.");
        }

       free(mapname);
    }

    mapitem = map;
}



static void parseDNSMaxHitCount(
    char *count)
{
    int ct = atoi(count);

    if (ct <= 65535) {
        max_hit = ct;
    } else {
        mediator_config_error("MAX_HIT_COUNT has max of 65535");
    }
    free(count);
}

static void parseDNSMaxFlushTime(
    char *flushtime)
{
    int ti = atoi(flushtime);
    if (ti <= 65535) {
        flush_timeout = ti;
    } else {
        mediator_config_error("FLUSH_TIME has max of 65535");
    }
    free(flushtime);
}

static void parseTableListBegin(
    char *index_label)
{
    void *currentTable = NULL;

    if (default_tables) {
        mediator_config_error("Error: Default Tables already defined. "
                              "Remove application label from USER_IE line "
                              "to build custom tables.");
    }

    custom_tables = TRUE;

    if (index_label == NULL) {
        currentTable = mdNewTable(INDEX_DEFAULT);
    } else {
        currentTable = mdNewTable(index_label);
    }

    if (!mdInsertTableItem(currentTable, 0)) {
        mediator_config_error("Error Creating Index Table for DPI Config.");
    }

    if (index_label) {
        g_free(index_label);
    }
}


static void parseTableList(
    char *table)
{

    int i = 0;
    void *currentTable = NULL;

    if (numValueList == 0) {
        mediator_config_error("No items in List.");
    }

    currentTable = mdNewTable(table);

    for (i = 0; i < numValueList; i++) {
        if (!mdInsertTableItem(currentTable, valueListTemp[i])) {
            mediator_config_error("Item can not be present in another list.");
        }
    }

    free(table);
}


static void parseDedupRecordTypeList(
    void)
{
    int i;

    dedup_type_list = g_new0(int, 35);

    if (numValueList == 0) {
        mediator_config_error("No items in list.");
    }

    for (i = 0; i < numValueList; i++) {
        /* turn types of records "on" */
        if (valueListTemp[i] > 34) {
            mediator_config_error("Invalid RECORD Type. "
                                  "Valid Types: 0,1,2,5,6,12,15,16,28,33");
        }
        dedup_type_list[valueListTemp[i]] = 1;
    }

    numValueList = 0;

}

static void parseValueListItems(
    char  *val)
{
    int value = atoi(val);

    if (value < 0 || value > 65535) {
        mediator_config_error("Item too large for list. "
                              " Must be between 1 - 65535.");
    }
    if (numValueList == sizeof(valueListTemp)/sizeof(valueListTemp[0])) {
        mediator_config_error("Attempted to add too many items to list.");
    }

    valueListTemp[numValueList] = value;
    numValueList++;

    free(val);

}

static void parseFieldListItems(
    char                  *fint,
    mdAcceptFilterField_t field)
{

    mdFieldList_t *item = NULL;

    if (md_ipfix_outtransport != TEXT) {
        mediator_config_error("Custom List FIELDS only valid for "
                              "TEXT exporters.");
    }


    numCustomList++;

    if (fint) {
        field = atoi(fint);
    }

    if (field == DPI) {
        mdExporterCustomListDPI(exp_temp);
        return;
    }

    item = mdCreateFieldList(field);
    if (!item) {
        fprintf(stderr, "Invalid Custom Field Item. Item # %d in list (%d)\n",
                numCustomList, field);
        mediator_config_error("Invalid Custom Field Item");
    }


    if (temp_list == NULL) {
        temp_list = item;
    } else {
        mdFieldList_t *f = temp_list;
        while (f->next) {
            f = f->next;
            continue;
        }
        f->next = item;
    }

    if (fint) {
        free(fint);
    }
}


static void parseMySQLParams(
    char *user,
    char *pw,
    char *db,
    char *host,
    char *table)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    if (!mdExporterAddMySQLInfo(exp_temp, user, pw, db, host, table)) {
        exit(-1);
    }
    free(user);
    free(pw);
    free(db);
    free(host);
    free(table);
}

static void parseExporterRemoveUploaded(
    void)
{

    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    mdExporterSetRemoveUploaded(exp_temp);
}


static void parseUserInfoElement(
    char     *num,
    char     *name,
    char     *app)
{

    int ie_num = atoi(num);
    int app_num = 0;
    void *table = NULL;
    fbInfoElement_t add_element;

    if (app) {
        app_num = atoi(app);
    }

    if (ie_num > 65535) {
        mediator_config_error("Invalid Information Element ID number. "
                              "Number must be between 0 and 65535");
    }

    if (app_num > 65535) {
        mediator_config_error("Invalid Information Element ID number. "
                              "Number must be between 0 and 65535");
    }

    if (user_elements == NULL) {
        user_elements = g_new0(fbInfoElement_t, 50);
    } else if (numUserElements > 50) {
        mediator_config_error("Max Limit reached on adding user-defined"
                              " Information Elements");
    }

    memset(&add_element, 0, sizeof(fbInfoElement_t));

    add_element.num = ie_num;
    add_element.ent = 6871;
    add_element.len = FB_IE_VARLEN;
    add_element.ref.name = g_strdup(name);
    add_element.midx = 0;
    add_element.flags = 0;

    memcpy((user_elements + numUserElements), &add_element,
           sizeof(fbInfoElement_t));

    numUserElements++;

    if (app_num) {

        if (custom_tables) {
            mediator_config_error("Invalid application label for USER_IE "
                                  "Add Information Element Number to DPI_CONFIG tables.");
        }

        if (!default_tables) {
            mdBuildDefaultTableHash();
            default_tables = TRUE;
        }

        table = mdGetTable(app_num);

        if (!table) {
            mediator_config_error("Not a valid application label for USER_IE");
        }

        if (!mdInsertTableItem(table, ie_num)) {
            mediator_config_error("Information Element already defined.");
        }
    }

    free(num);
    free(app);
    free(name);
}


static void parseDNSDedupConfigEnd(
    void)
{
    gboolean found = FALSE;
    md_export_node_t *cnode = NULL;

    for (cnode = ebeg; cnode; cnode = cnode->next) {
        if (dedup_temp_name) {
            if (mdExporterCompareNames(cnode->exp, dedup_temp_name)) {
                if (cnode->dns_dedup) {
                    exp_temp = cnode->exp;
                    found = TRUE;
                    break;
                } else {
                    mediator_config_error("Exporter for DNS_DEDUP config"
                                          " block does not have DNS_DEDUP enabled.");
                }
            }
        } else if (cnode->dns_dedup) {
            exp_temp = cnode->exp;
            found = TRUE;
            break;
        }
    }

    if (!found) {
        mediator_config_error("Exporter name for DNS_DEDUP not found.");
    }

    md_ipfix_outtransport = mdExporterGetType(exp_temp);

    if (cnode->dedup && (md_ipfix_outtransport == TEXT) && !(mdExporterGetJson(exp_temp))) {
        mediator_config_error("Exporter already configured for DEDUP. "
                              "Define a separate TEXT EXPORTER for DNS_DEDUP");
    }

    md_dns_dedup_configure_state(cnode->dns_dedup, dedup_type_list, max_hit,
                                 flush_timeout, lastseen, mapitem, exportname);

    max_hit = 0;
    flush_timeout = 0;
    lastseen = FALSE;
    exportname = FALSE;
    dedup_type_list = NULL;
    free(dedup_temp_name);
    dedup_temp_name = NULL;
    mapitem = NULL;
}

static void parseSSLConfigBegin(
    char *exp_name)
{
    gboolean found = FALSE;
    md_export_node_t *cnode = NULL;

    for (cnode = ebeg; cnode; cnode = cnode->next) {
        if (mdExporterCompareNames(cnode->exp, exp_name)) {
            exp_temp = cnode->exp;
            found = TRUE;
            break;
        }
    }

    if (!found) {
        mediator_config_error("Exporter name for SSL_CONFIG not found.");
    }

    etemp = cnode;

    md_ipfix_outtransport = mdExporterGetType(cnode->exp);

    numValueList = 0;

    free(exp_name);
}

static void parseSSLIssuerTypeList(
    void)
{
    int i;
    uint32_t *sslIssuerlist;

    if (exp_temp == NULL) {
        mediator_config_error("Exporter for SSL_CONFIG not found.");
    }

    sslIssuerlist = g_new0(uint32_t, MD_BMAP_ARRAYSIZE(MD_SSL_CONFIG_MAX_ID));

    if (valueListWild) {
        /* TURN THEM ALL ON */
        memset(sslIssuerlist, 0xff,
               sizeof(uint32_t) * MD_BMAP_ARRAYSIZE(MD_SSL_CONFIG_MAX_ID));
        mdExporterSetSSLConfig(exp_temp, sslIssuerlist, 1);
        return;
    }

    if (numValueList == 0) {
        mediator_config_error("No items in ISSUER list.");
    }

    for (i = 0; i < numValueList; i++) {
        if (valueListTemp[i] >= MD_SSL_CONFIG_MAX_ID) {
            mediator_config_error("SSL Issuer List takes only values 0-"
                                  MD_SSL_CONFIG_MAX_ID_STR);
        }
        /* turn types of records "on" */
        MD_BMAP_SET(sslIssuerlist, valueListTemp[i]);
    }

    mdExporterSetSSLConfig(exp_temp, sslIssuerlist, 1);
}

static void parseSSLSubjectTypeList(
    void)
{
    int i;
    uint32_t *sslSubjectlist;

    if (exp_temp == NULL) {
        mediator_config_error("Exporter for SSL_CONFIG not found.");
    }

    sslSubjectlist = g_new0(uint32_t, MD_BMAP_ARRAYSIZE(MD_SSL_CONFIG_MAX_ID));

    if (valueListWild) {
        /* TURN THEM ALL ON */
        memset(sslSubjectlist, 0xff,
               sizeof(uint32_t) * MD_BMAP_ARRAYSIZE(MD_SSL_CONFIG_MAX_ID));
        mdExporterSetSSLConfig(exp_temp, sslSubjectlist, 2);
        return;
    }

    if (numValueList == 0) {
        mediator_config_error("No items in SUBJECT list.");
    }

    for (i = 0; i < numValueList; i++) {
        if (valueListTemp[i] >= MD_SSL_CONFIG_MAX_ID) {
            mediator_config_error("SSL Subject List takes only values 0-"
                                  MD_SSL_CONFIG_MAX_ID_STR);
        }
        /* turn types of records "on" */
        MD_BMAP_SET(sslSubjectlist, valueListTemp[i]);
    }

    mdExporterSetSSLConfig(exp_temp, sslSubjectlist, 2);
}


static void parseSSLOtherTypeList(
    void)
{
    int i;
    uint32_t *sslOtherList;

    if (exp_temp == NULL) {
        mediator_config_error("Exporter for SSL_CONFIG not found.");
    }

    sslOtherList = g_new0(uint32_t, MD_BMAP_ARRAYSIZE(MD_SSL_CONFIG_MAX_ID));

    if (valueListWild) {
        /* TURN THEM ALL ON */
        memset(sslOtherList, 0xff,
               sizeof(uint32_t) * MD_BMAP_ARRAYSIZE(MD_SSL_CONFIG_MAX_ID));
        mdExporterSetSSLConfig(exp_temp, sslOtherList, 3);
        return;
    }

    if (numValueList == 0) {
        mediator_config_error("No items in OTHER list.");
    }

    for (i = 0; i < numValueList; i++) {
        if (valueListTemp[i] >= MD_SSL_CONFIG_MAX_ID) {
            mediator_config_error("SSL Other List takes only values 0-"
                                 MD_SSL_CONFIG_MAX_ID_STR);
        }
        MD_BMAP_SET(sslOtherList, valueListTemp[i]);
    }

    mdExporterSetSSLConfig(exp_temp, sslOtherList, 3);
}

static void parseSSLExtensionsTypeList(
    void)
{
    int i;
    uint32_t *sslExtList;

    if (exp_temp == NULL) {
        mediator_config_error("Exporter for SSL_CONFIG not found.");
    }

    /* yaf only exports id-ce 14-37 */
    sslExtList = g_new0(uint32_t, MD_BMAP_ARRAYSIZE(MD_SSL_CONFIG_MAX_ID));

    if (valueListWild) {
        /* TURN THEM ALL ON */
        memset(sslExtList, 0xff,
               sizeof(uint32_t) * MD_BMAP_ARRAYSIZE(MD_SSL_CONFIG_MAX_ID));
        mdExporterSetSSLConfig(exp_temp, sslExtList, 4);
        return;
    }

    if (numValueList == 0) {
        mediator_config_error("No items in Extensions list.");
    }

    for (i = 0; i < numValueList; i++) {
        if (valueListTemp[i] >= MD_SSL_CONFIG_MAX_ID) {
            mediator_config_error("SSL Extensions List takes only values 0-"
                                 MD_SSL_CONFIG_MAX_ID_STR);
        }
        MD_BMAP_SET(sslExtList, valueListTemp[i]);
        /* switch (valueListTemp[i]) { */
        /*   case 14: */
        /*   case 15: */
        /*   case 16: */
        /*   case 17: */
        /*   case 18: */
        /*   case 29: */
        /*   case 31: */
        /*   case 32: */
        /*     sslExtList[valueListTemp[i]] = 1; */
        /*     continue; */
        /*   default: */
        /*     mediator_config_error( */
        /*         "Invalid Extension in SSL EXTENSIONS List." */
        /*         " super_mediator accepts 14-18, 29, 31, 32"); */
        /* } */
    }

    mdExporterSetSSLConfig(exp_temp, sslExtList, 4);
}

static void parseDedupConfig(
    char *exp_name)
{
    md_export_node_t *cnode = NULL;
    gboolean found = FALSE;

    for (cnode = ebeg; cnode; cnode = cnode->next) {
        if (exp_name) {
            if (mdExporterCompareNames(cnode->exp, exp_name)) {
                exp_temp = cnode->exp;
                found = TRUE;
                break;
            }
        } else {
            exp_temp = cnode->exp;
            found = TRUE;
            break;
        }
    }
    if (!found) {
        mediator_config_error("Exporter associated with DEDUP_CONFIG does not exist."
                              "  Ignoring DEDUP configuration\n");
    }
    /* set temp node */
    etemp = cnode;

    md_ipfix_outtransport = mdExporterGetType(exp_temp);

    if (cnode->dns_dedup && (md_ipfix_outtransport == TEXT) &&
        !(mdExporterGetJson(exp_temp)))
    {
        mediator_config_error("Exporter already configured for DNS_DEDUP."
                              " Define a separate TEXT EXPORTER for DEDUP");
    } else if (cnode->ssl_dedup && (md_ipfix_outtransport == TEXT) &&
               !(mdExporterGetJson(exp_temp)))
    {
        mediator_config_error("Exporter already configured for SSL_DEDUP."
                              " Define a separate TEXT EXPORTER for DEDUP");
    }

    etemp->dedup = md_dedup_new_dedup_state();

    mdExporterSetDeDupConfig(etemp->exp);

    if (exp_name) {
        g_free(exp_name);
    }

    numValueList = 0;
}

static void parseFileList(
    char *file,
    mdAcceptFilterField_t field,
    char *mapname)
{

    int i = 0;
    int sip = 1;
    md_dedup_ie_t *ietab = NULL;
    smFieldMap_t *map = NULL;

    if (numValueList == 0) {
        mediator_config_error("No items in FILE List.");
    }

    switch (field) {
      case SIP_V4:
      case SIP_ANY:
        break;
      case DIP_V4:
      case DIP_ANY:
        sip = 0;
        break;
      case FLOWKEYHASH:
        sip = 2;
        break;
      default:
        mediator_config_error("Invalid Field in DEDUP_CONFIG."
                              "  SIP, DIP, and FLOWKEYHASH are only valid fields.");
    }

    if (mapname) {
        map = maptemp;
        if (!map) {
            mediator_config_error("NO Previous MAPS defined in configuration file.");
        }
        do {
            if (strcmp(map->name, mapname) == 0) {
                break;
            }
        } while ((map = map->next));

        if (map == NULL) {
            mediator_config_error("NO MAPS defined with the name.");
        }
        free(mapname);
    }

    if (md_ipfix_outtransport != TEXT) {
        /* create a table for each element in the list bc it needs a template
           for each element in the list */
        for (i = 0; i < numValueList; i++) {
            ietab = md_dedup_add_ie_table(etemp->dedup, file, map, valueListTemp[i], sip);
            if (!ietab) {
                mediator_config_error("Information Element already in FILE Table.");
            }
        }
    } else {
        ietab = md_dedup_add_ie_table(etemp->dedup, file, map, valueListTemp[0], sip);
        if (!ietab) {
            mediator_config_error("Information Element already in FILE Table.");
        }
        if ((valueListTemp[0] == 244) && (numValueList > 1)) {
            mediator_config_error("244 (SSL) must exist in a list by itself.");
        }
        for (i = 1; i < numValueList; i++) {
            if (valueListTemp[i] == 244) {
                mediator_config_error("244 (SSL) must exist in a list by itself.");
            }
            md_dedup_add_ie(etemp->dedup, ietab, valueListTemp[i]);
        }
    }

    free(file);
    numValueList = 0;
}

static void parseMaxHitCount(
    char *count)
{
    int ct = atoi(count);

    md_dedup_configure_state(etemp->dedup, ct, 0, FALSE, FALSE);

    free(count);
}

static void parseMaxFlushTime(
    char *flushtime)
{
    int ti = atoi(flushtime);

    md_dedup_configure_state(etemp->dedup, 0, ti, FALSE, FALSE);

    free(flushtime);
}

static void parseDedupAddExportName(
    void)
{
    md_dedup_configure_state(etemp->dedup, 0, 0, FALSE, TRUE);
}

static void parseSSLCertDedup(
    void)
{
    if (etemp == NULL) {
        mediator_config_error("No Exporter defined for SSL_CONFIG.");
    }

    if (etemp->dns_dedup && (md_ipfix_outtransport == TEXT) && !(mdExporterGetJson(exp_temp))) {
        mediator_config_error("Exporter already configured for DNS_DEDUP."
                              " Define a separate TEXT EXPORTER for SSL_DEDUP");
    } else if (etemp->dedup && (md_ipfix_outtransport == TEXT) && !(mdExporterGetJson(exp_temp))) {
        mediator_config_error("Exporter already configured for DEDUP."
                              " Define a separate TEXT EXPORTER for SSL_DEDUP");
    }

    /* may have already been enabled with SSL_DEDUP_ONLY */
    if (etemp->ssl_dedup == NULL) {
        etemp->ssl_dedup = md_ssl_new_dedup_state();
        mdExporterSetSSLDeDupConfig(etemp->exp);
    }
}

static void parseSSLMaxHitCount(
    char *count)
{
    int ct = atoi(count);

    md_ssl_dedup_configure_state(etemp->ssl_dedup, ct, 0, NULL, NULL, FALSE);

    free(count);
}

static void parseSSLMaxFlushTime(
    char *flushtime)
{
    int ti = atoi(flushtime);

    md_ssl_dedup_configure_state(etemp->ssl_dedup, 0, ti, NULL, NULL, FALSE);

    free(flushtime);
}

static void parseSSLCertFile(
    char *filename)
{
    if (md_ipfix_outtransport != TEXT) {
        mediator_config_error("CERT_FILE only valid for TEXT Exporters.");
    }

    if (mdExporterGetJson(exp_temp)) {
        mediator_config_error("CERT_FILE not valid with JSON");
    }

    md_ssl_dedup_configure_state(etemp->ssl_dedup, 0, 0, filename, NULL,FALSE);



    free(filename);
}

static void parseSSLDeDupOnly(
    int mode)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    if (!mdExporterSetSSLDeDupOnly(exp_temp, mode)) {
        mediator_config_error("FLOW_ONLY or DNS_DEDUP_ONLY or"
                              " DEDUP_ONLY or DNS_RR_ONLY also specified."
                              " Only one can be used per exporter.");
    }

    ssl_dedup_only = TRUE;

}


static void parseExporterDedupOnly(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }


    if (!mdExporterDedupOnly(exp_temp)) {
        mediator_config_error("FLOW_ONLY or DNS_DEDUP_ONLY or"
                              " SSL_DEDUP_ONLY or DNS_RR_ONLY "
                              "also specified.  Only "
                              " can be used per exporter.");
    }

}

static void parseExporterSSLMD5Hash(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }
#if HAVE_OPENSSL
    if (!mdExporterSetSSLMD5Hash(exp_temp)) {
        mediator_config_error("ERROR MD5: Exporter already configured with conflicting settings");
    }
    md5_filter = TRUE;

#else
    mediator_config_error("Super_mediator not configured with OpenSSL support");
#endif

}

static void parseExporterSSLSHA1Hash(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

#if HAVE_OPENSSL

    if (!mdExporterSetSSLSHA1Hash(exp_temp)) {
        mediator_config_error("ERROR SHA_1: Exporter already configured with conflicting settings");
    }

    sha1_filter = TRUE;
#else
    mediator_config_error("Super_mediator not configured with OpenSSL support");
#endif

}

static void parseExporterGzipFiles(
    void)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    mdExporterGZIPFiles(exp_temp);
}

static void parseExporterMovePath(
    char   *path)
{
    if (exp_temp == NULL) {
        mediator_config_error("Undefined Exporter\n");
    }

    if ((md_ipfix_outtransport != FILEHANDLER) && (md_ipfix_outtransport != TEXT))
    {
        mediator_config_error ("Invalid Keyword: MOVE must be used with a "
                               "FILEHANDLER or TEXT EXPORTER");
    } else {
        if (!g_file_test(path, G_FILE_TEST_IS_DIR)) {
            mediator_config_error("MOVE expects a valid file directory");
        }

        mdExporterSetMovePath(exp_temp, path);
    }

    free(path);
}

static void parseVlanMapLine(
    char *label)
{
    uint32_t k = 0;
    uint32_t val = 0;
    smFieldMapKV_t *value;
    smFieldMapKV_t *key;
    int i;

    if (mapitem == NULL) {
        mediator_config_error("Something went wrong");
    }

    if (numValueList == 0) {
        mediator_config_error("No items in VLAN_MAP list.");
    }

    /* need to figure out if count > MAX_MAPS */

    if (mapitem->labels == NULL) {
        mapitem->labels = (char **)calloc(MAX_MAPS, sizeof(char *));
    }
    mapitem->labels[mapitem->count+1] = g_strdup(label);

    val = mapitem->count+1;

    for (i = 0; i < numValueList; i++) {
        k = (uint32_t)valueListTemp[i];
        key = g_slice_new0(smFieldMapKV_t);
        value = g_slice_new0(smFieldMapKV_t);
        value->val = val;
        key->val = k;
        smHashTableInsert(mapitem->table, (uint8_t*)key, (uint8_t*)value);
    }
    mapitem->count++;

    numValueList = 0;
}

static void parseObidMapLine(
    char *label)
{
    uint32_t k = 0;
    uint32_t val = 0;
    smFieldMapKV_t *value;
    smFieldMapKV_t *key;
    int i;

    if (mapitem == NULL) {
        mediator_config_error("Something went wrong");
    }

    if (numValueList == 0) {
        mediator_config_error("No items in VLAN_MAP list.");
    }

    /* need to figure out if count > MAX_MAPS */

    if (mapitem->labels == NULL) {
        mapitem->labels = (char **)calloc(MAX_MAPS, sizeof(char *));
    }

    mapitem->labels[mapitem->count+1] = g_strdup(label);

    val = mapitem->count+1;

    for (i = 0; i < numValueList; i++) {
        k = (uint32_t)valueListTemp[i];
        key = g_slice_new0(smFieldMapKV_t);
        value = g_slice_new0(smFieldMapKV_t);
        value->val = val;
        key->val = k;
        smHashTableInsert(mapitem->table, (uint8_t*)key, (uint8_t*)value);
    }
    mapitem->count++;

    numValueList = 0;
}

static void parseVlanMapBegin(
    char *name)
{
    mapitem = g_slice_new0(smFieldMap_t);

    mapitem->name = g_strdup(name);
    mapitem->table = smCreateHashTable(sizeof(uint32_t),
                                       md_free_hash_key, md_free_hash_key);
    mapitem->field = VLAN;
    numValueList = 0;
    attachHeadToSLL((mdSLL_t **)&(maptemp), (mdSLL_t *)mapitem);
    free(name);
}

static void parseObidMapBegin(
    char *name)
{
    mapitem = g_slice_new0(smFieldMap_t);
    mapitem->name = g_strdup(name);
    mapitem->field = OBDOMAIN;
    numValueList = 0;
    mapitem->table = smCreateHashTable(sizeof(uint32_t), md_free_hash_key,
                                       md_free_hash_key);
    attachHeadToSLL((mdSLL_t **)&(maptemp), (mdSLL_t *)mapitem);
    free(name);
}

static void parseMapEnd(void)
{
    if (mapitem == NULL) {
        mediator_config_error("Something went wrong");
    }

    if (mapitem->labels == NULL) {
        mediator_config_error("Error: No labels were created in MAP block.");
    }

    if ((mapitem->labels[0] == NULL) && !mapitem->discard) {
        mediator_config_error("Must specify either OTHER Map List or DISCARD_OTHER");
    }

    mapitem = NULL;
}

static void parseMapOther(
    char *name)
{
    if (mapitem == NULL) {
        mediator_config_error("Something went wrong");
    }

    if (mapitem->labels == NULL) {
        mapitem->labels = (char **)calloc(MAX_MAPS, sizeof(char *));
    }

    if (mapitem->discard) {
        mediator_config_error("DISCARD_OTHER not valid with OTHER list");
    }

    mapitem->labels[0] = g_strdup(name);
    mapitem->count++;

}

static void parseMapDiscard()

{

    if (mapitem == NULL) {
        mediator_config_error("Something went wrong");
    }

    if (mapitem->labels[0] != NULL) {
        mediator_config_error("OTHER is not valid with DISCARD_OTHER");
    }

    mapitem->discard = TRUE;

}


int yyerror(const char *s)
{

    /* mediator config error subtracts one */
    lineNumber++;
    mediator_config_error(s);
    return 0;
}


