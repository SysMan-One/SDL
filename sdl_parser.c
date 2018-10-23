/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 71 "../SDL/sdl_parser.y" /* yacc.c:339  */


#include	<stdio.h>
#include	<errno.h>

#ifndef	WIN32
#include	<unistd.h>
#endif

#include	"defsdl.h"
#include	"utility_routines.h"

#define		YYDEBUG		1
#define		YYERROR_VERBOSE	1
#define		YYLSP_NEEDED	1

SDL_CTX	*	sdlctx = NULL;

SDL_CONSTANT	sdlconst = {0};		/* Single CONSTANT definition	*/
SDL_CONSTLIST	sdlconstlist = {0};	/* A list of CONSTANTS (...)	*/
SDL_LITERAL	sdlliteral = {0};	/* A list of lines in the between LITERAL/END_LITERAL */

SDL_AGGREGATE	sdlagg = {0};		/* AGGREGATE context area	*/

int	literal_state = 0;


#line 94 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    KWD_INCLUDE = 258,
    KWD_IDENT = 259,
    KWD_MODULE = 260,
    KWD_END_MODULE = 261,
    KWD_LITERAL = 262,
    KWD_END_LITERAL = 263,
    KWD_PREFIX = 264,
    KWD_TAG = 265,
    KWD_BYTE = 266,
    KWD_WORD = 267,
    KWD_LONG = 268,
    KWD_QUAD = 269,
    KWD_OCTA = 270,
    KWD_BFLD = 271,
    KWD_FLOAT = 272,
    KWD_DOUBLE = 273,
    KWD_PAGE = 274,
    KWD_SIGNED = 275,
    KWD_UNSIGNED = 276,
    KWD_DIMENSION = 277,
    KWD_LENGTH = 278,
    KWD_PACKED = 279,
    KWD_PTR = 280,
    KWD_VOID = 281,
    KWD_ENTRY = 282,
    KWD_MASK = 283,
    KWD_NOALIGN = 284,
    KWD_ALIGN = 285,
    KWD_ASCIC = 286,
    KWD_DESC = 287,
    KWD_HWADDR = 288,
    KWD_IPADDR = 289,
    KWD_IP4ADDR = 290,
    KWD_IP6ADDR = 291,
    KWD_SOCKET = 292,
    KWD_CONST = 293,
    KWD_EQ = 294,
    KWD_INC = 295,
    OPEN_LIST = 296,
    COMMA = 297,
    CLOSE_LIST = 298,
    KWD_RADIX = 299,
    KWD_DEC = 300,
    KWD_HEX = 301,
    KWD_OCT = 302,
    KWD_BIN = 303,
    KWD_AGGREGATE = 304,
    KWD_STRUCT = 305,
    KWD_UNION = 306,
    KWD_END = 307,
    sdlvar = 308,
    decimal = 309,
    hexadecimal = 310,
    octal = 311,
    id = 312,
    tline = 313,
    comment = 314,
    quoted_string = 315,
    EOL = 316
  };
#endif
/* Tokens.  */
#define KWD_INCLUDE 258
#define KWD_IDENT 259
#define KWD_MODULE 260
#define KWD_END_MODULE 261
#define KWD_LITERAL 262
#define KWD_END_LITERAL 263
#define KWD_PREFIX 264
#define KWD_TAG 265
#define KWD_BYTE 266
#define KWD_WORD 267
#define KWD_LONG 268
#define KWD_QUAD 269
#define KWD_OCTA 270
#define KWD_BFLD 271
#define KWD_FLOAT 272
#define KWD_DOUBLE 273
#define KWD_PAGE 274
#define KWD_SIGNED 275
#define KWD_UNSIGNED 276
#define KWD_DIMENSION 277
#define KWD_LENGTH 278
#define KWD_PACKED 279
#define KWD_PTR 280
#define KWD_VOID 281
#define KWD_ENTRY 282
#define KWD_MASK 283
#define KWD_NOALIGN 284
#define KWD_ALIGN 285
#define KWD_ASCIC 286
#define KWD_DESC 287
#define KWD_HWADDR 288
#define KWD_IPADDR 289
#define KWD_IP4ADDR 290
#define KWD_IP6ADDR 291
#define KWD_SOCKET 292
#define KWD_CONST 293
#define KWD_EQ 294
#define KWD_INC 295
#define OPEN_LIST 296
#define COMMA 297
#define CLOSE_LIST 298
#define KWD_RADIX 299
#define KWD_DEC 300
#define KWD_HEX 301
#define KWD_OCT 302
#define KWD_BIN 303
#define KWD_AGGREGATE 304
#define KWD_STRUCT 305
#define KWD_UNION 306
#define KWD_END 307
#define sdlvar 308
#define decimal 309
#define hexadecimal 310
#define octal 311
#define id 312
#define tline 313
#define comment 314
#define quoted_string 315
#define EOL 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 101 "../SDL/sdl_parser.y" /* yacc.c:355  */

	int	bval;		/* SIGNED LONGWORD - 32 bits	*/
	long long qval;		/* SIGNED QUADWORD - 64 bits	*/
	char	tval[8192];

#line 259 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (void *scanner);



/* Copy the second part of user declarations.  */

#line 289 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
# define YYCOPY_NEEDED 1
#endif


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   324

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  280

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   192,   192,   193,   194,   198,   200,   201,   202,   203,
     204,   205,   206,   207,   211,   211,   214,   214,   221,   226,
     231,   236,   241,   246,   248,   249,   250,   254,   258,   262,
     268,   270,   275,   277,   282,   289,   291,   293,   295,   297,
     299,   301,   303,   305,   311,   313,   315,   317,   319,   321,
     323,   325,   327,   329,   334,   338,   340,   342,   344,   346,
     348,   350,   352,   356,   358,   360,   362,   374,   375,   375,
     377,   377,   380,   379,   383,   387,   388,   388,   391,   391,
     395,   394,   398,   397,   402,   401,   405,   410,   412,   411,
     416,   415,   420,   419,   424,   423,   427,   429,   433,   435,
     434,   440,   439,   448,   450,   454,   453,   461,   460,   468,
     467,   474,   473,   480,   479,   488,   487,   498,   500,   504,
     503,   511,   510,   518,   517,   524,   523,   530,   529,   538,
     537,   549,   548,   552,   551,   555,   554,   557,   565,   564,
     568,   567,   570,   577,   576,   580,   579,   583,   582,   585,
     593,   595,   599,   598,   605,   604,   612,   611,   618,   617,
     624,   623,   632,   631,   639,   638,   642,   641,   645,   644,
     648,   647,   651,   650,   653,   658,   657
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KWD_INCLUDE", "KWD_IDENT", "KWD_MODULE",
  "KWD_END_MODULE", "KWD_LITERAL", "KWD_END_LITERAL", "KWD_PREFIX",
  "KWD_TAG", "KWD_BYTE", "KWD_WORD", "KWD_LONG", "KWD_QUAD", "KWD_OCTA",
  "KWD_BFLD", "KWD_FLOAT", "KWD_DOUBLE", "KWD_PAGE", "KWD_SIGNED",
  "KWD_UNSIGNED", "KWD_DIMENSION", "KWD_LENGTH", "KWD_PACKED", "KWD_PTR",
  "KWD_VOID", "KWD_ENTRY", "KWD_MASK", "KWD_NOALIGN", "KWD_ALIGN",
  "KWD_ASCIC", "KWD_DESC", "KWD_HWADDR", "KWD_IPADDR", "KWD_IP4ADDR",
  "KWD_IP6ADDR", "KWD_SOCKET", "KWD_CONST", "KWD_EQ", "KWD_INC",
  "OPEN_LIST", "COMMA", "CLOSE_LIST", "KWD_RADIX", "KWD_DEC", "KWD_HEX",
  "KWD_OCT", "KWD_BIN", "KWD_AGGREGATE", "KWD_STRUCT", "KWD_UNION",
  "KWD_END", "sdlvar", "decimal", "hexadecimal", "octal", "id", "tline",
  "comment", "quoted_string", "EOL", "$accept", "prog", "line", "varset",
  "$@1", "$@2", "literal_line", "literal", "end_literal", "module",
  "end_module", "value", "tag", "pref", "inc", "sizespec", "signspec",
  "ptrspec", "basetypes", "syntypes", "usertypes", "align", "radix",
  "constant_opts", "$@3", "$@4", "$@5", "constlist_opts", "$@6", "$@7",
  "$@8", "$@9", "$@10", "constlist_ids", "$@11", "$@12", "$@13", "$@14",
  "constant", "$@15", "$@16", "struct_items", "$@17", "$@18", "$@19",
  "$@20", "$@21", "$@22", "union_items", "$@23", "$@24", "$@25", "$@26",
  "$@27", "$@28", "struct_opts", "$@29", "$@30", "$@31", "union_opts",
  "$@32", "$@33", "field_opts", "$@34", "$@35", "$@36", "agg_items",
  "$@37", "$@38", "$@39", "$@40", "$@41", "$@42", "agg_opts", "$@43",
  "$@44", "$@45", "$@46", "$@47", "aggregate", "$@48", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

#define YYPACT_NINF -183

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-183)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -183,    31,  -183,  -183,   -55,   -38,   -35,  -183,   -37,   -24,
      -4,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,  -183,    71,  -183,  -183,    93,    38,  -183,   252,    28,
     129,  -183,    52,  -183,    55,   178,    63,  -183,  -183,  -183,
    -183,  -183,  -183,    57,  -183,  -183,   178,    93,    93,   178,
    -183,    39,    56,  -183,   197,  -183,  -183,  -183,  -183,  -183,
    -183,   -49,    60,    64,  -183,    93,  -183,  -183,  -183,  -183,
      73,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,    63,
      63,    63,    63,    63,    72,   211,  -183,  -183,  -183,  -183,
    -183,    93,   102,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,  -183,  -183,    76,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,   -49,
    -183,  -183,   178,   268,  -183,  -183,  -183,  -183,  -183,  -183,
     102,    73,    73,  -183,   118,     9,   169,   169,   169,  -183,
     102,  -183,  -183,  -183,  -183,  -183,   102,   102,   102,   102,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,    19,  -183,  -183,
    -183,    58,  -183,  -183,   178,   178,  -183,  -183,  -183,  -183,
    -183,   -49,   -49,   -49,  -183,  -183,  -183,  -183,  -183,   118,
     118,   118,    75,   239,  -183,   -49,     9,     9,    81,   267,
    -183,   -49,  -183,  -183,   169,   169,   169,  -183,  -183,  -183,
    -183,  -183,  -183,    78,  -183,  -183,  -183,  -183,  -183,    19,
    -183,  -183,  -183,    82,  -183,  -183,  -183,  -183,  -183,    58,
    -183,  -183,  -183,  -183,  -183,   118,     9,   169,   169,   169,
    -183,  -183,   118,     9,   169,   169,   169,  -183,    19,    58,
      19,    19,    19,    19,    58,    58,    58,    58,    92,   110,
    -183,  -183,  -183,   112,   113,  -183,  -183,  -183,    88,   109,
     116,   119,   123,   126,   132,   135,  -183,  -183,  -183,  -183
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     4,     0,     0,     0,    20,     0,     0,
       0,    18,     5,     3,    10,    12,    11,    13,     6,     7,
       9,     8,     0,    22,    19,    87,     0,   175,     0,     0,
      87,    97,    90,    94,     0,     0,     0,    23,    24,    25,
      26,    14,    16,     0,    92,    96,     0,    87,    87,     0,
     101,     0,     0,    56,    55,   164,   166,   174,   168,   170,
     172,   150,     0,     0,    21,    87,    88,    91,    95,    99,
      67,    28,    27,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,   162,   176,    15,    17,
      93,    87,    75,    72,    74,    70,    68,   102,   165,   167,
     169,   171,   173,     0,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    35,    53,    52,    45,    46,    47,    48,
      49,    50,    51,   152,   154,    54,   156,   158,   160,   150,
      89,    84,     0,     0,    86,    78,    76,    80,    82,   100,
      75,    67,    67,   151,     0,     0,     0,     0,     0,   163,
      75,    29,    63,    66,    64,    65,    75,    75,    75,    75,
      73,    71,    69,   137,   131,   133,   135,   103,   142,   138,
     140,   117,    32,    33,     0,     0,    34,   149,   143,   145,
     147,   150,   150,   150,    85,    79,    77,    81,    83,     0,
       0,     0,     0,     0,   115,   150,     0,     0,     0,     0,
     129,   150,    31,    30,     0,     0,     0,   157,   159,   161,
     132,   134,   136,     0,   105,   107,   109,   111,   113,   103,
     153,   139,   141,     0,   119,   121,   123,   125,   127,   117,
     155,   144,   146,   148,   104,     0,     0,     0,     0,     0,
     116,   118,     0,     0,     0,     0,     0,   130,     0,     0,
     103,   103,   103,     0,     0,   117,   117,   117,     0,     0,
     110,   112,   114,     0,     0,   124,   126,   128,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   108,   120,   122
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,   -34,   -36,   -22,  -183,  -183,  -183,  -183,  -182,  -177,
    -172,  -135,  -183,  -101,  -183,  -183,  -183,    45,  -183,  -183,
    -183,  -183,  -183,   -23,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,   -70,  -183,  -183,  -183,  -183,  -183,  -183,   -98,  -183,
    -183,  -183,  -183,  -183,  -183,  -161,  -183,  -183,  -183,  -110,
    -183,  -183,  -142,  -183,  -183,  -183,  -116,  -183,  -183,  -183,
    -183,  -183,  -183,   -30,  -183,  -183,  -183,  -183,  -183,  -183,
    -183
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    13,    14,    62,    63,    15,    16,    17,    18,
      19,    42,   135,   136,   137,   178,   179,   180,   126,   127,
     128,    60,   138,    97,   142,   141,   140,   139,   157,   156,
     158,   159,   150,    34,    91,    47,    65,    48,    20,    92,
      70,   195,   235,   236,   237,   238,   239,   219,   201,   242,
     243,   244,   245,   246,   229,   167,   189,   190,   191,   171,
     196,   197,   181,   204,   205,   206,    87,   144,   145,   146,
     147,   148,   129,    61,    79,    80,    81,    82,    83,    21,
      36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      58,    50,    22,    84,    25,   182,   183,    45,    85,   166,
      86,   216,    66,   149,    59,    69,   217,   226,    51,    52,
      26,   218,   227,    23,    67,    68,    24,   228,   210,   211,
     212,     2,     3,    27,    95,    28,     4,     5,     6,     7,
     161,   162,    90,    58,    58,    58,    58,    58,    96,    98,
      99,   100,   101,   102,   166,   166,   166,    59,    59,    59,
      59,    59,   231,   232,   233,   207,   208,   209,   130,     8,
     168,   192,    51,    52,   248,    29,   193,    35,   194,   220,
       9,   253,    51,    52,    10,   230,   221,   222,    43,    11,
      12,    46,    53,    54,    49,   250,   251,   252,   151,    71,
     166,    93,   255,   256,   257,    95,    95,   166,   164,   169,
     198,    51,    52,    55,    56,   199,    72,   200,    64,    96,
      96,    88,   165,   170,    57,    89,   249,    51,    52,   103,
     131,   247,   213,   254,    94,    30,    31,   143,   223,   234,
     202,   203,   132,   241,   268,   272,   133,    53,    54,   240,
      32,   259,    33,   164,   164,   164,   264,   265,   266,   267,
     169,   169,   269,   134,   270,   271,   273,   165,   165,   165,
       0,    30,    31,   274,   170,   170,   275,     0,   258,   163,
     260,   261,   262,   263,   276,   160,    32,   277,    44,   172,
     173,   174,   175,   278,   176,   184,   279,     0,     0,   164,
     169,   185,   186,   187,   188,     0,   164,   169,    73,    74,
      75,    76,    77,   165,   170,     0,    78,     0,     0,     0,
     165,   170,   104,   105,   106,   107,   108,   109,   110,   111,
     177,    37,    38,    39,    40,   112,   113,   114,   115,     0,
       0,     0,   116,   117,   118,   119,   120,   121,   122,     0,
     104,   105,   106,   107,   108,   109,   110,   111,     0,     0,
       0,   123,   124,   112,   113,   114,   115,     0,   125,     0,
     116,   117,   118,   119,   120,   121,   122,     0,   104,   105,
     106,   107,   108,   109,   110,   111,     0,     0,     0,   214,
     215,   112,   113,   114,   115,     0,   125,     0,   116,   117,
     118,   119,   120,   121,   122,    37,    38,    39,    40,     0,
       0,     0,    41,   152,   153,   154,   155,   224,   225,     0,
       0,     0,     0,     0,   125
};

static const yytype_int16 yycheck[] =
{
      36,    35,    57,    52,    41,   147,   148,    30,    57,   144,
      59,   193,    46,   129,    36,    49,   193,   199,     9,    10,
      57,   193,   199,    61,    47,    48,    61,   199,   189,   190,
     191,     0,     1,    57,    70,    39,     5,     6,     7,     8,
     141,   142,    65,    79,    80,    81,    82,    83,    70,    79,
      80,    81,    82,    83,   189,   190,   191,    79,    80,    81,
      82,    83,   204,   205,   206,   181,   182,   183,    91,    38,
      61,    52,     9,    10,   235,     4,    57,    39,    59,   195,
      49,   242,     9,    10,    53,   201,   196,   197,    60,    58,
      59,    39,    29,    30,    39,   237,   238,   239,   132,    60,
     235,    28,   244,   245,   246,   141,   142,   242,   144,   145,
      52,     9,    10,    50,    51,    57,    60,    59,    61,   141,
     142,    61,   144,   145,    61,    61,   236,     9,    10,    57,
      28,   229,    57,   243,    61,    42,    43,    61,    57,    61,
     174,   175,    40,    61,    52,    57,    44,    29,    30,   219,
      57,   249,    59,   189,   190,   191,   254,   255,   256,   257,
     196,   197,    52,    61,    52,    52,    57,   189,   190,   191,
      -1,    42,    43,    57,   196,   197,    57,    -1,   248,    61,
     250,   251,   252,   253,    61,   140,    57,    61,    59,    20,
      21,    22,    23,    61,    25,   150,    61,    -1,    -1,   235,
     236,   156,   157,   158,   159,    -1,   242,   243,    11,    12,
      13,    14,    15,   235,   236,    -1,    19,    -1,    -1,    -1,
     242,   243,    11,    12,    13,    14,    15,    16,    17,    18,
      61,    53,    54,    55,    56,    24,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    50,    51,    24,    25,    26,    27,    -1,    57,    -1,
      31,    32,    33,    34,    35,    36,    37,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    50,
      51,    24,    25,    26,    27,    -1,    57,    -1,    31,    32,
      33,    34,    35,    36,    37,    53,    54,    55,    56,    -1,
      -1,    -1,    60,    45,    46,    47,    48,    50,    51,    -1,
      -1,    -1,    -1,    -1,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,     0,     1,     5,     6,     7,     8,    38,    49,
      53,    58,    59,    64,    65,    68,    69,    70,    71,    72,
     100,   141,    57,    61,    61,    41,    57,    57,    39,     4,
      42,    43,    57,    59,    95,    39,   142,    53,    54,    55,
      56,    60,    73,    60,    59,    95,    39,    97,    99,    39,
      73,     9,    10,    29,    30,    50,    51,    61,    74,    75,
      83,   135,    66,    67,    61,    98,    73,    95,    95,    73,
     102,    60,    60,    11,    12,    13,    14,    15,    19,   136,
     137,   138,   139,   140,    52,    57,    59,   128,    61,    61,
      95,    96,   101,    28,    61,    74,    75,    85,   135,   135,
     135,   135,   135,    57,    11,    12,    13,    14,    15,    16,
      17,    18,    24,    25,    26,    27,    31,    32,    33,    34,
      35,    36,    37,    50,    51,    57,    80,    81,    82,   134,
      95,    28,    40,    44,    61,    74,    75,    76,    84,    89,
      88,    87,    86,    61,   129,   130,   131,   132,   133,   128,
      94,    73,    45,    46,    47,    48,    91,    90,    92,    93,
      89,    85,    85,    61,    74,    75,    83,   117,    61,    74,
      75,   121,    20,    21,    22,    23,    25,    61,    77,    78,
      79,   124,   124,   124,    89,    89,    89,    89,    89,   118,
     119,   120,    52,    57,    59,   103,   122,   123,    52,    57,
      59,   110,    73,    73,   125,   126,   127,   128,   128,   128,
     117,   117,   117,    57,    50,    51,    80,    81,    82,   109,
     128,   121,   121,    57,    50,    51,    80,    81,    82,   116,
     128,   124,   124,   124,    61,   104,   105,   106,   107,   108,
     103,    61,   111,   112,   113,   114,   115,   110,   117,   121,
     124,   124,   124,   117,   121,   124,   124,   124,   103,   110,
     103,   103,   103,   103,   110,   110,   110,   110,    52,    52,
      52,    52,    57,    57,    57,    57,    61,    61,    61,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    66,    65,    67,    65,    68,    69,
      70,    71,    72,    73,    73,    73,    73,    74,    75,    76,
      77,    77,    78,    78,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    84,    84,    84,    85,    86,    85,
      87,    85,    88,    85,    85,    89,    90,    89,    91,    89,
      92,    89,    93,    89,    94,    89,    89,    95,    96,    95,
      97,    95,    98,    95,    99,    95,    95,    95,   100,   101,
     100,   102,   100,   103,   103,   104,   103,   105,   103,   106,
     103,   107,   103,   108,   103,   109,   103,   110,   110,   111,
     110,   112,   110,   113,   110,   114,   110,   115,   110,   116,
     110,   118,   117,   119,   117,   120,   117,   117,   122,   121,
     123,   121,   121,   125,   124,   126,   124,   127,   124,   124,
     128,   128,   129,   128,   130,   128,   131,   128,   132,   128,
     133,   128,   134,   128,   136,   135,   137,   135,   138,   135,
     139,   135,   140,   135,   135,   142,   141
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     0,     5,     1,     2,
       1,     5,     2,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     0,     0,     3,
       0,     3,     0,     3,     1,     0,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     1,     0,     0,     5,
       0,     3,     0,     4,     0,     3,     2,     1,     0,     0,
       7,     0,     6,     0,     3,     0,     8,     0,     8,     0,
       5,     0,     5,     0,     5,     0,     3,     0,     3,     0,
       8,     0,     8,     0,     5,     0,     5,     0,     5,     0,
       3,     0,     3,     0,     3,     0,     3,     1,     0,     3,
       0,     3,     1,     0,     3,     0,     3,     0,     3,     1,
       0,     3,     0,     6,     0,     6,     0,     5,     0,     5,
       0,     5,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     1,     0,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      YY_LAC_DISCARD ("YYBACKUP");                              \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, void *scanner)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner); \
} while (0)

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
#ifndef YYINITDEPTH
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

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYSIZE_T *yycapacity, YYSIZE_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yytype_int16 **yybottom,
                      yytype_int16 *yybottom_no_free,
                      yytype_int16 **yytop, yytype_int16 *yytop_empty)
{
  YYSIZE_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYSIZE_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYSIZE_T yyalloc = 2 * yysize_new;
      yytype_int16 *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        (yytype_int16*) YYSTACK_ALLOC (yyalloc * sizeof *yybottom_new);
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yytype_int16 *yyesa, yytype_int16 **yyes,
        YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  yytype_int16 *yyes_prev = yyssp;
  yytype_int16 *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYSIZE_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYSIZE_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        int yystate;
        {
          int yylhs = yyr1[yyrule] - YYNTOKENS;
          yystate = yypgoto[yylhs] + *yyesp;
          if (yystate < 0 || YYLAST < yystate
              || yycheck[yystate] != *yyesp)
            yystate = yydefgoto[yylhs];
          else
            yystate = yytable[yystate];
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            *yyesp = yystate;
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            *++yyesp = yystate;
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyesa, yytype_int16 **yyes,
                YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, void *scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void *scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

    yytype_int16 yyesa[20];
    yytype_int16 *yyes;
    YYSIZE_T yyes_capacity;

  int yy_lac_established = 0;
  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = sizeof yyesa / sizeof *yyes;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
          case 5:
#line 199 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_comment(sdlctx, (yyvsp[0].tval)); }
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 211 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_var_set(sdlctx, (yyvsp[-2].tval), (yyvsp[0].tval), SDL_K_VARTYPE_STR); }
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 214 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_var_set(sdlctx, (yyvsp[-2].tval), (yyvsp[0].bval), SDL_K_VARTYPE_NUM); }
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 222 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_literal(&sdlliteral, (yyvsp[0].tval)); }
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 227 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { literal_state = 1; }
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 232 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_def_literal(sdlctx, &sdlliteral); literal_state = 0; }
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 237 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_module (sdlctx, (yyvsp[-3].tval), (yyvsp[-1].tval)); }
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 242 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_end_module (sdlctx, sdlctx->module); }
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 246 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_var_get(sdlctx, (yyvsp[0].tval), &(yyval.bval), SDL_K_VARTYPE_NUM); }
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 248 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 249 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = sdl_hex2ull ((yyvsp[0].tval)); }
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 250 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = sdl_oct2ull ((yyvsp[0].tval)); }
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 255 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { strcpy((yyval.tval), (yyvsp[0].tval)); }
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 259 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { strcpy((yyval.tval), (yyvsp[0].tval)); }
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 263 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 269 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 271 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 276 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_SGND; }
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 278 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_UNSG; }
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 283 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_PTR; }
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 290 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_PTR; }
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 292 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_BYTE; }
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 294 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_WORD; }
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 296 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_LONG; }
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 298 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_QUAD; }
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 300 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_OCTA; }
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 302 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_BFLD; }
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 304 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_FLT; }
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 306 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_DBL; }
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 312 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_PCKD; }
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 314 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_ASCIC; }
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 316 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_SDESC; }
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 318 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_HWADDR; }
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 320 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_IPADDR; }
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 322 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_IP4ADDR; }
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 324 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_IP6ADDR; }
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 326 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_SOCK; }
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 328 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_RTN; }
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 330 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_VOID; }
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 335 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { strcpy ((yyval.tval), (yyvsp[0].tval)); }
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 339 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_DEF; }
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 341 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_BYTE; }
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 343 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_BYTE; }
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 345 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_WORD; }
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 347 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_LONG; }
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 349 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_QUAD; }
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 351 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_OCTA; }
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 353 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_PAGE; }
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 357 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_DEC; }
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 359 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_OCT; }
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 361 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_BIN; }
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 363 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_HEX; }
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 375 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_str2asc ( (yyvsp[0].tval), &sdlconst.pref); }
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 377 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc ((yyvsp[0].tval),  &sdlconst.tag); }
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 380 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdlconst.mask = SDL_K_TYPE_MASK; }
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 383 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_def_constant (sdlctx, &sdlconst); }
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 388 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc ( (yyvsp[0].tval), &sdlconstlist.pref); }
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 391 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc ( (yyvsp[0].tval), &sdlconstlist.tag); }
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 395 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdlconstlist.inc = (yyvsp[0].bval); }
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 398 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdlconstlist.radix = (yyvsp[0].bval); }
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 402 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdlconstlist.mask = SDL_K_TYPE_MASK; }
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 405 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_def_constlist (sdlctx, &sdlconstlist); }
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 412 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist( &sdlconstlist, (yyvsp[-2].tval), (yyvsp[0].bval), 1); }
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 416 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist( &sdlconstlist, (yyvsp[0].tval), 0, 0); }
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 420 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist_rem ((yyvsp[0].tval), &sdlconstlist); }
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 424 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist_rem ((yyvsp[0].tval), &sdlconstlist); }
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 435 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdlconstlist.val = (yyvsp[0].bval); }
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 440 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_constant(&sdlconst, (yyvsp[-2].tval), (yyvsp[0].bval)); }
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 451 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 454 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_STRUCT); }
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 458 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 461 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_UNION); }
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 465 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 468 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 474 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 480 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		   sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->utype);
		   sdlagg.item->typespec = SDL_K_TYPE_USER; }
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 488 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_rem ((yyvsp[0].tval), &sdlagg.item); }
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 501 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 504 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_STRUCT); }
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 508 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 511 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_UNION); }
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 515 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 518 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 524 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 530 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		   sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->utype);
		   sdlagg.item->typespec = SDL_K_TYPE_USER; }
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 538 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_rem ((yyvsp[0].tval), &sdlagg.item); }
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 549 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->tag); }
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 552 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->pref); }
#line 2465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 555 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.item->align = (yyvsp[0].bval); }
#line 2471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 565 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->tag); }
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 568 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->pref); }
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 577 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.item->dimension = (1 + ((yyvsp[0].bval))); }
#line 2489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 580 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.item->typespec |= (yyvsp[0].bval); }
#line 2495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 583 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.item->typespec |= (yyvsp[0].bval); }
#line 2501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 596 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 599 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_STRUCT); }
#line 2513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 605 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_UNION); }
#line 2519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 612 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 618 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 624 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		   sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->utype);
		   sdlagg.item->typespec = SDL_K_TYPE_USER; }
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 632 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_agg_rem ((yyvsp[0].tval), &sdlagg); }
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 639 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.aggtype = SDL_K_AGGTYPE_STRUCT; }
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 642 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.aggtype = SDL_K_AGGTYPE_UNION; }
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 645 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.tag); }
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 648 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.pref); }
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 651 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.align = (yyvsp[0].bval); }
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 658 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_agg_init (&sdlagg, (yyvsp[0].tval)); }
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 661 "../SDL/sdl_parser.y" /* yacc.c:1646  */
    { sdl_def_aggregate(sdlctx, &sdlagg, (yyvsp[-3].tval)); }
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2593 "y.tab.c" /* yacc.c:1646  */
        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
  }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
                      yytoken, &yylval, &yylloc, scanner);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 664 "../SDL/sdl_parser.y" /* yacc.c:1906  */
	/* Start of programs	*/
