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
#line 67 "sdl_parser.y" /* yacc.c:339  */


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
#line 97 "sdl_parser.y" /* yacc.c:355  */

	int	bval;
	char	tval[8192];

#line 258 "y.tab.c" /* yacc.c:355  */
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

#line 288 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   322

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  279

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
       0,   186,   186,   187,   188,   192,   193,   195,   196,   197,
     198,   199,   200,   204,   204,   207,   207,   213,   212,   217,
     216,   220,   226,   231,   236,   238,   239,   240,   244,   248,
     252,   258,   260,   265,   267,   273,   275,   277,   279,   281,
     283,   285,   287,   289,   295,   297,   299,   301,   303,   305,
     307,   309,   311,   313,   318,   322,   324,   326,   328,   330,
     332,   334,   336,   340,   342,   344,   346,   358,   359,   359,
     361,   361,   364,   363,   367,   371,   372,   372,   375,   375,
     379,   378,   382,   381,   386,   385,   389,   394,   396,   395,
     400,   399,   404,   403,   408,   407,   411,   413,   417,   419,
     418,   424,   423,   432,   434,   438,   437,   445,   444,   452,
     451,   458,   457,   464,   463,   472,   471,   482,   484,   488,
     487,   495,   494,   502,   501,   508,   507,   514,   513,   522,
     521,   533,   532,   536,   535,   539,   538,   541,   549,   548,
     552,   551,   554,   561,   560,   564,   563,   566,   574,   576,
     580,   579,   586,   585,   593,   592,   599,   598,   605,   604,
     613,   612,   620,   619,   623,   622,   626,   625,   629,   628,
     632,   631,   634,   639,   638
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
  "$@1", "$@2", "literal", "$@3", "$@4", "module", "end_module", "value",
  "tag", "pref", "inc", "sizespec", "signspec", "basetypes", "syntypes",
  "usertypes", "align", "radix", "constant_opts", "$@5", "$@6", "$@7",
  "constlist_opts", "$@8", "$@9", "$@10", "$@11", "$@12", "constlist_ids",
  "$@13", "$@14", "$@15", "$@16", "constant", "$@17", "$@18",
  "struct_items", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24",
  "union_items", "$@25", "$@26", "$@27", "$@28", "$@29", "$@30",
  "struct_opts", "$@31", "$@32", "$@33", "union_opts", "$@34", "$@35",
  "field_opts", "$@36", "$@37", "agg_items", "$@38", "$@39", "$@40",
  "$@41", "$@42", "$@43", "agg_opts", "$@44", "$@45", "$@46", "$@47",
  "$@48", "aggregate", "$@49", YY_NULLPTR
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

#define YYPACT_NINF -174

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-174)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -174,    32,  -174,  -174,   -54,   -49,   -48,   -30,   -40,   -33,
      -5,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,
      31,  -174,  -174,  -174,    89,    12,  -174,   250,     0,    -8,
       0,   143,  -174,    34,  -174,    43,   258,    84,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,    23,  -174,  -174,  -174,   258,
      89,    89,   258,  -174,    52,    57,  -174,   195,  -174,  -174,
    -174,  -174,  -174,  -174,    71,    68,    72,  -174,    89,  -174,
    -174,  -174,  -174,    78,  -174,  -174,  -174,  -174,  -174,  -174,
    -174,  -174,    84,    84,    84,    84,    84,    35,   209,  -174,
    -174,  -174,  -174,  -174,    89,    13,  -174,  -174,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,  -174,    75,  -174,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,
    -174,  -174,    71,  -174,  -174,   258,   272,  -174,  -174,  -174,
    -174,  -174,  -174,    13,    78,    78,  -174,    90,    10,    55,
      55,    55,  -174,    13,  -174,  -174,  -174,  -174,  -174,    13,
      13,    13,    13,  -174,  -174,  -174,  -174,  -174,  -174,  -174,
     136,  -174,  -174,  -174,   142,  -174,  -174,   258,   258,  -174,
    -174,  -174,    71,    71,    71,  -174,  -174,  -174,  -174,  -174,
      90,    90,    90,    61,   237,  -174,    71,    10,    10,    80,
     265,  -174,    71,  -174,  -174,    55,    55,  -174,  -174,  -174,
    -174,  -174,  -174,    77,  -174,  -174,  -174,  -174,  -174,   136,
    -174,  -174,  -174,    81,  -174,  -174,  -174,  -174,  -174,   142,
    -174,  -174,  -174,  -174,    90,    10,    55,    55,    55,  -174,
    -174,    90,    10,    55,    55,    55,  -174,   136,   142,   136,
     136,   136,   136,   142,   142,   142,   142,    95,   100,  -174,
    -174,  -174,   110,   111,  -174,  -174,  -174,   109,   113,   115,
     116,   117,   122,   126,   135,  -174,  -174,  -174,  -174
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     4,     0,     0,     0,     0,     0,     0,
       0,    19,     6,     3,    11,    12,     7,     8,    10,     9,
       0,    23,    17,    21,    87,     0,   173,     0,     0,     0,
       0,    87,    97,    90,    94,     0,     0,     0,    24,    25,
      26,    27,    13,    15,    20,     0,    18,    92,    96,     0,
      87,    87,     0,   101,     0,     0,    56,    55,   162,   164,
     172,   166,   168,   170,   148,     0,     0,    22,    87,    88,
      91,    95,    99,    67,    29,    28,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,   160,
     174,    14,    16,    93,    87,    75,    72,    74,    70,    68,
     102,   163,   165,   167,   169,   171,     0,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    35,    53,    52,    45,
      46,    47,    48,    49,    50,    51,   150,   152,    54,   154,
     156,   158,   148,    89,    84,     0,     0,    86,    78,    76,
      80,    82,   100,    75,    67,    67,   149,     0,     0,     0,
       0,     0,   161,    75,    30,    63,    66,    64,    65,    75,
      75,    75,    75,    73,    71,    69,   137,   131,   133,   135,
     103,   142,   138,   140,   117,    33,    34,     0,     0,   147,
     143,   145,   148,   148,   148,    85,    79,    77,    81,    83,
       0,     0,     0,     0,     0,   115,   148,     0,     0,     0,
       0,   129,   148,    32,    31,     0,     0,   155,   157,   159,
     132,   134,   136,     0,   105,   107,   109,   111,   113,   103,
     151,   139,   141,     0,   119,   121,   123,   125,   127,   117,
     153,   144,   146,   104,     0,     0,     0,     0,     0,   116,
     118,     0,     0,     0,     0,     0,   130,     0,     0,   103,
     103,   103,     0,     0,   117,   117,   117,     0,     0,   110,
     112,   114,     0,     0,   124,   126,   128,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   108,   120,   122
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -174,  -174,  -174,  -174,  -174,  -174,    14,  -174,  -174,  -174,
    -174,   -34,   -37,   -23,  -174,  -174,  -174,  -173,  -111,   -85,
    -136,  -174,  -140,  -174,  -174,  -174,    -3,  -174,  -174,  -174,
    -174,  -174,   -25,  -174,  -174,  -174,  -174,  -174,  -174,  -174,
     -70,  -174,  -174,  -174,  -174,  -174,  -174,   -64,  -174,  -174,
    -174,  -174,  -174,  -174,  -162,  -174,  -174,  -174,   -71,  -174,
    -174,  -141,  -174,  -174,  -116,  -174,  -174,  -174,  -174,  -174,
    -174,   146,  -174,  -174,  -174,  -174,  -174,  -174,  -174
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    13,    14,    65,    66,    15,    30,    28,    16,
      17,    43,   138,   139,   140,   180,   181,   129,   130,   131,
      63,   141,   100,   145,   144,   143,   142,   160,   159,   161,
     162,   153,    35,    94,    50,    68,    51,    18,    95,    73,
     196,   234,   235,   236,   237,   238,   219,   202,   241,   242,
     243,   244,   245,   229,   170,   190,   191,   192,   174,   197,
     198,   182,   205,   206,    90,   147,   148,   149,   150,   151,
     132,    64,    82,    83,    84,    85,    86,    19,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      61,    24,    53,    20,   164,   165,    48,     6,     7,   183,
     184,   169,    21,    22,    62,    69,   152,    25,    72,    54,
      55,   216,    54,    55,    26,    70,    71,   226,   210,   211,
     212,    23,     2,     3,    27,    29,    98,     4,     5,     6,
       7,   134,    44,    93,    46,    61,    61,    61,    61,    61,
      99,    36,    45,   135,   169,   169,   169,   136,    11,    62,
      62,    62,    62,    62,   231,   232,   207,   208,   209,   133,
       8,   171,   247,    49,   137,   175,   176,   177,   178,   252,
     220,     9,    52,   217,    67,    10,   230,    54,    55,   227,
      11,    12,   106,    54,    55,   249,   250,   251,   169,    54,
      55,   154,   254,   255,   256,   169,    96,    98,    98,   218,
     167,   172,    74,    56,    57,   228,   179,    75,   213,    56,
      57,    99,    99,    87,   168,   173,   221,   222,    88,    91,
      89,    31,    32,    92,    58,    59,   146,   223,   233,    97,
     163,     0,   240,   203,   204,    60,    33,   267,    34,   239,
     185,   166,   268,   167,   167,   167,   186,   187,   188,   189,
     172,   172,   269,   270,   248,   246,   271,   168,   168,   168,
     272,   253,   273,   274,   173,   173,     0,   257,   275,   259,
     260,   261,   262,   276,   258,    31,    32,   277,   193,   263,
     264,   265,   266,   194,   199,   195,   278,   167,   172,   200,
      33,   201,    47,     0,   167,   172,    76,    77,    78,    79,
      80,   168,   173,     0,    81,     0,     0,     0,   168,   173,
     107,   108,   109,   110,   111,   112,   113,   114,   101,   102,
     103,   104,   105,   115,   116,   117,   118,     0,     0,     0,
     119,   120,   121,   122,   123,   124,   125,     0,   107,   108,
     109,   110,   111,   112,   113,   114,     0,     0,     0,   126,
     127,   115,   116,   117,   118,     0,   128,     0,   119,   120,
     121,   122,   123,   124,   125,     0,   107,   108,   109,   110,
     111,   112,   113,   114,     0,     0,     0,   214,   215,   115,
     116,   117,   118,     0,   128,     0,   119,   120,   121,   122,
     123,   124,   125,    38,    39,    40,    41,     0,     0,     0,
      42,    38,    39,    40,    41,   224,   225,   155,   156,   157,
     158,     0,   128
};

static const yytype_int16 yycheck[] =
{
      37,    41,    36,    57,   144,   145,    31,     7,     8,   150,
     151,   147,    61,    61,    37,    49,   132,    57,    52,     9,
      10,   194,     9,    10,    57,    50,    51,   200,   190,   191,
     192,    61,     0,     1,    39,     4,    73,     5,     6,     7,
       8,    28,    28,    68,    30,    82,    83,    84,    85,    86,
      73,    39,    60,    40,   190,   191,   192,    44,    58,    82,
      83,    84,    85,    86,   205,   206,   182,   183,   184,    94,
      38,    61,   234,    39,    61,    20,    21,    22,    23,   241,
     196,    49,    39,   194,    61,    53,   202,     9,    10,   200,
      58,    59,    57,     9,    10,   236,   237,   238,   234,     9,
      10,   135,   243,   244,   245,   241,    28,   144,   145,   194,
     147,   148,    60,    29,    30,   200,    61,    60,    57,    29,
      30,   144,   145,    52,   147,   148,   197,   198,    57,    61,
      59,    42,    43,    61,    50,    51,    61,    57,    61,    61,
     143,    -1,    61,   177,   178,    61,    57,    52,    59,   219,
     153,    61,    52,   190,   191,   192,   159,   160,   161,   162,
     197,   198,    52,    52,   235,   229,    57,   190,   191,   192,
      57,   242,    57,    57,   197,   198,    -1,   247,    61,   249,
     250,   251,   252,    61,   248,    42,    43,    61,    52,   253,
     254,   255,   256,    57,    52,    59,    61,   234,   235,    57,
      57,    59,    59,    -1,   241,   242,    11,    12,    13,    14,
      15,   234,   235,    -1,    19,    -1,    -1,    -1,   241,   242,
      11,    12,    13,    14,    15,    16,    17,    18,    82,    83,
      84,    85,    86,    24,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    50,
      51,    24,    25,    26,    27,    -1,    57,    -1,    31,    32,
      33,    34,    35,    36,    37,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    50,    51,    24,
      25,    26,    27,    -1,    57,    -1,    31,    32,    33,    34,
      35,    36,    37,    53,    54,    55,    56,    -1,    -1,    -1,
      60,    53,    54,    55,    56,    50,    51,    45,    46,    47,
      48,    -1,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,     0,     1,     5,     6,     7,     8,    38,    49,
      53,    58,    59,    64,    65,    68,    71,    72,    99,   139,
      57,    61,    61,    61,    41,    57,    57,    39,    70,     4,
      69,    42,    43,    57,    59,    94,    39,   140,    53,    54,
      55,    56,    60,    73,    68,    60,    68,    59,    94,    39,
      96,    98,    39,    73,     9,    10,    29,    30,    50,    51,
      61,    74,    75,    82,   133,    66,    67,    61,    97,    73,
      94,    94,    73,   101,    60,    60,    11,    12,    13,    14,
      15,    19,   134,   135,   136,   137,   138,    52,    57,    59,
     126,    61,    61,    94,    95,   100,    28,    61,    74,    75,
      84,   133,   133,   133,   133,   133,    57,    11,    12,    13,
      14,    15,    16,    17,    18,    24,    25,    26,    27,    31,
      32,    33,    34,    35,    36,    37,    50,    51,    57,    79,
      80,    81,   132,    94,    28,    40,    44,    61,    74,    75,
      76,    83,    88,    87,    86,    85,    61,   127,   128,   129,
     130,   131,   126,    93,    73,    45,    46,    47,    48,    90,
      89,    91,    92,    88,    84,    84,    61,    74,    75,    82,
     116,    61,    74,    75,   120,    20,    21,    22,    23,    61,
      77,    78,   123,   123,   123,    88,    88,    88,    88,    88,
     117,   118,   119,    52,    57,    59,   102,   121,   122,    52,
      57,    59,   109,    73,    73,   124,   125,   126,   126,   126,
     116,   116,   116,    57,    50,    51,    79,    80,    81,   108,
     126,   120,   120,    57,    50,    51,    79,    80,    81,   115,
     126,   123,   123,    61,   103,   104,   105,   106,   107,   102,
      61,   110,   111,   112,   113,   114,   109,   116,   120,   123,
     123,   123,   116,   120,   123,   123,   123,   102,   109,   102,
     102,   102,   102,   109,   109,   109,   109,    52,    52,    52,
      52,    57,    57,    57,    57,    61,    61,    61,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    66,    65,    67,    65,    69,    68,    70,
      68,    68,    71,    72,    73,    73,    73,    73,    74,    75,
      76,    77,    77,    78,    78,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    83,    83,    83,    83,    84,    85,    84,
      86,    84,    87,    84,    84,    88,    89,    88,    90,    88,
      91,    88,    92,    88,    93,    88,    88,    94,    95,    94,
      96,    94,    97,    94,    98,    94,    94,    94,    99,   100,
      99,   101,    99,   102,   102,   103,   102,   104,   102,   105,
     102,   106,   102,   107,   102,   108,   102,   109,   109,   110,
     109,   111,   109,   112,   109,   113,   109,   114,   109,   115,
     109,   117,   116,   118,   116,   119,   116,   116,   121,   120,
     122,   120,   120,   124,   123,   125,   123,   123,   126,   126,
     127,   126,   128,   126,   129,   126,   130,   126,   131,   126,
     132,   126,   134,   133,   135,   133,   136,   133,   137,   133,
     138,   133,   133,   140,   139
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     0,     5,     0,     4,     0,
       3,     2,     5,     2,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
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
       0,     3,     1,     0,     3,     0,     3,     1,     0,     3,
       0,     6,     0,     6,     0,     5,     0,     5,     0,     5,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     1,     0,     5
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
          case 6:
#line 194 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_comment(sdlctx, (yyvsp[0].tval)); }
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 204 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_var_set(sdlctx, (yyvsp[-2].tval), (yyvsp[0].tval), SDL_K_VARTYPE_STR); }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 207 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_var_set(sdlctx, (yyvsp[-2].tval), (yyvsp[0].bval), SDL_K_VARTYPE_NUM); }
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 213 "sdl_parser.y" /* yacc.c:1646  */
    { literal_state = 1; }
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 217 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_literal(&sdlliteral, (yyvsp[0].tval)); }
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 221 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_def_literal(sdlctx, &sdlliteral); 
		  literal_state = 0; }
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 227 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_module (&sdlctx, (yyvsp[-3].tval), (yyvsp[-1].tval)); }
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 232 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_end_module (sdlctx, sdlctx->module); }
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 236 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_var_get(sdlctx, (yyvsp[0].tval), &(yyval.bval), SDL_K_VARTYPE_NUM); }
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 238 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 239 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = sdl_hex2ull ((yyvsp[0].tval)); }
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 240 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = sdl_oct2ull ((yyvsp[0].tval)); }
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 245 "sdl_parser.y" /* yacc.c:1646  */
    { strcpy((yyval.tval), (yyvsp[0].tval)); }
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 249 "sdl_parser.y" /* yacc.c:1646  */
    { strcpy((yyval.tval), (yyvsp[0].tval)); }
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 253 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 259 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 261 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 266 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_SGND; }
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 268 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_UNSG; }
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 274 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_PTR; }
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 276 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_BYTE; }
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 278 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_WORD; }
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 280 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_LONG; }
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 282 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_QUAD; }
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 284 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_OCTA; }
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 286 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_BFLD; }
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 288 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_FLT; }
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 290 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_DBL; }
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 296 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_PCKD; }
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 298 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_ASCIC; }
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 300 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_SDESC; }
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 302 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_HWADDR; }
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 304 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_IPADDR; }
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 306 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_IP4ADDR; }
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 308 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_IP6ADDR; }
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 310 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_SOCK; }
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 312 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_RTN; }
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 314 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_VOID; }
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 319 "sdl_parser.y" /* yacc.c:1646  */
    { strcpy ((yyval.tval), (yyvsp[0].tval)); }
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 323 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_DEF; }
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 325 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_BYTE; }
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 327 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_BYTE; }
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 329 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_WORD; }
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 331 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_LONG; }
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 333 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_QUAD; }
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 335 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_OCTA; }
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 337 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_PAGE; }
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 341 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_DEC; }
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 343 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_OCT; }
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 345 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_BIN; }
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 347 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_HEX; }
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 359 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_str2asc ( (yyvsp[0].tval), &sdlconst.pref); }
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 361 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc ((yyvsp[0].tval),  &sdlconst.tag); }
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 364 "sdl_parser.y" /* yacc.c:1646  */
    { sdlconst.mask = SDL_K_TYPE_MASK; }
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 367 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_def_constant (sdlctx, &sdlconst); }
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 372 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc ( (yyvsp[0].tval), &sdlconstlist.pref); }
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 375 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc ( (yyvsp[0].tval), &sdlconstlist.tag); }
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 379 "sdl_parser.y" /* yacc.c:1646  */
    { sdlconstlist.inc = (yyvsp[0].bval); }
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 382 "sdl_parser.y" /* yacc.c:1646  */
    { sdlconstlist.radix = (yyvsp[0].bval); }
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 386 "sdl_parser.y" /* yacc.c:1646  */
    { sdlconstlist.mask = SDL_K_TYPE_MASK; }
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 389 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_def_constlist (sdlctx, &sdlconstlist); }
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 396 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist( &sdlconstlist, (yyvsp[-2].tval), (yyvsp[0].bval), 1); }
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 400 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist( &sdlconstlist, (yyvsp[0].tval), 0, 0); }
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 404 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist_rem ((yyvsp[0].tval), &sdlconstlist); }
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 408 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist_rem ((yyvsp[0].tval), &sdlconstlist); }
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 419 "sdl_parser.y" /* yacc.c:1646  */
    { sdlconstlist.val = (yyvsp[0].bval); }
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 424 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_constant(&sdlconst, (yyvsp[-2].tval), (yyvsp[0].bval)); }
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 435 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 438 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_STRUCT); }
#line 2341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 442 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 445 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_UNION); }
#line 2353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 449 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 452 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 458 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 464 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		   sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->utype);
		   sdlagg.item->typespec = SDL_K_TYPE_USER; }
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 472 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_rem ((yyvsp[0].tval), &sdlagg.item); }
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 485 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 488 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_STRUCT); }
#line 2399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 492 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 495 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_UNION); }
#line 2411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 499 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 502 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 508 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 514 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		   sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->utype);
		   sdlagg.item->typespec = SDL_K_TYPE_USER; }
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 522 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_rem ((yyvsp[0].tval), &sdlagg.item); }
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 533 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->tag); }
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 536 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->pref); }
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 539 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.item->align = (yyvsp[0].bval); }
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 549 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->tag); }
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 552 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->pref); }
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 561 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.item->dimension = (1 + ((yyvsp[0].bval))); }
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 564 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.item->typespec |= (yyvsp[0].bval); }
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 577 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 580 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_STRUCT); }
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 586 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_UNION); }
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 593 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 599 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 605 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		   sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->utype);
		   sdlagg.item->typespec = SDL_K_TYPE_USER; }
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 613 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_agg_rem ((yyvsp[0].tval), &sdlagg); }
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 620 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.aggtype = SDL_K_AGGTYPE_STRUCT; }
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 623 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.aggtype = SDL_K_AGGTYPE_UNION; }
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 626 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.tag); }
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 629 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.pref); }
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 632 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.align = (yyvsp[0].bval); }
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 639 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_agg_init (&sdlagg, (yyvsp[0].tval)); }
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 642 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_def_aggregate(sdlctx, &sdlagg, (yyvsp[-3].tval)); }
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2579 "y.tab.c" /* yacc.c:1646  */
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
#line 645 "sdl_parser.y" /* yacc.c:1906  */
	/* Start of programs	*/
