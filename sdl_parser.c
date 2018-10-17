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


#line 94 "sdl_parser.c" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "sdl_parser.h".  */
#ifndef YY_YY_SDL_PARSER_H_INCLUDED
# define YY_YY_SDL_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 97 "sdl_parser.y" /* yacc.c:355  */

	int	bval;		/* SIGNED LONGWORD - 32 bits	*/
	long long qval;		/* SIGNED QUADWORD - 64 bits	*/
	char	tval[8192];

#line 202 "sdl_parser.c" /* yacc.c:355  */
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

#endif /* !YY_YY_SDL_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 232 "sdl_parser.c" /* yacc.c:358  */

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
#define YYLAST   320

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  276

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
       0,   187,   187,   188,   189,   193,   195,   196,   197,   198,
     199,   200,   201,   202,   206,   206,   209,   209,   216,   221,
     226,   231,   236,   241,   243,   244,   245,   249,   253,   257,
     263,   265,   270,   272,   278,   280,   282,   284,   286,   288,
     290,   292,   294,   300,   302,   304,   306,   308,   310,   312,
     314,   316,   318,   323,   327,   329,   331,   333,   335,   337,
     339,   341,   345,   347,   349,   351,   363,   364,   364,   366,
     366,   369,   368,   372,   376,   377,   377,   380,   380,   384,
     383,   387,   386,   391,   390,   394,   399,   401,   400,   405,
     404,   409,   408,   413,   412,   416,   418,   422,   424,   423,
     429,   428,   437,   439,   443,   442,   450,   449,   457,   456,
     463,   462,   469,   468,   477,   476,   487,   489,   493,   492,
     500,   499,   507,   506,   513,   512,   519,   518,   527,   526,
     538,   537,   541,   540,   544,   543,   546,   554,   553,   557,
     556,   559,   566,   565,   569,   568,   571,   579,   581,   585,
     584,   591,   590,   598,   597,   604,   603,   610,   609,   618,
     617,   625,   624,   628,   627,   631,   630,   634,   633,   637,
     636,   639,   644,   643
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
  "basetypes", "syntypes", "usertypes", "align", "radix", "constant_opts",
  "$@3", "$@4", "$@5", "constlist_opts", "$@6", "$@7", "$@8", "$@9",
  "$@10", "constlist_ids", "$@11", "$@12", "$@13", "$@14", "constant",
  "$@15", "$@16", "struct_items", "$@17", "$@18", "$@19", "$@20", "$@21",
  "$@22", "union_items", "$@23", "$@24", "$@25", "$@26", "$@27", "$@28",
  "struct_opts", "$@29", "$@30", "$@31", "union_opts", "$@32", "$@33",
  "field_opts", "$@34", "$@35", "agg_items", "$@36", "$@37", "$@38",
  "$@39", "$@40", "$@41", "agg_opts", "$@42", "$@43", "$@44", "$@45",
  "$@46", "aggregate", "$@47", YY_NULLPTR
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

#define YYPACT_NINF -173

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-173)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -173,    76,  -173,  -173,   -47,   -28,   -21,  -173,   -39,   -16,
       3,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,    45,  -173,  -173,   140,    11,  -173,   125,    -9,
     169,  -173,    35,  -173,    36,   133,    60,  -173,  -173,  -173,
    -173,  -173,  -173,    12,  -173,  -173,   133,   140,   140,   133,
    -173,    44,    47,  -173,   290,  -173,  -173,  -173,  -173,  -173,
    -173,   -46,    26,    57,  -173,   140,  -173,  -173,  -173,  -173,
      27,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,    60,
      60,    60,    60,    60,    67,   207,  -173,  -173,  -173,  -173,
    -173,   140,    -5,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,    65,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,   -46,
    -173,  -173,   133,   159,  -173,  -173,  -173,  -173,  -173,  -173,
      -5,    27,    27,  -173,   103,    17,   116,   116,   116,  -173,
      -5,  -173,  -173,  -173,  -173,  -173,    -5,    -5,    -5,    -5,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,   -35,  -173,  -173,
    -173,    40,  -173,  -173,   133,   133,  -173,  -173,  -173,   -46,
     -46,   -46,  -173,  -173,  -173,  -173,  -173,   103,   103,   103,
      70,   235,  -173,   -46,    17,    17,    71,   263,  -173,   -46,
    -173,  -173,   116,   116,  -173,  -173,  -173,  -173,  -173,  -173,
      69,  -173,  -173,  -173,  -173,  -173,   -35,  -173,  -173,  -173,
      81,  -173,  -173,  -173,  -173,  -173,    40,  -173,  -173,  -173,
    -173,   103,    17,   116,   116,   116,  -173,  -173,   103,    17,
     116,   116,   116,  -173,   -35,    40,   -35,   -35,   -35,   -35,
      40,    40,    40,    40,    79,    97,  -173,  -173,  -173,    98,
     104,  -173,  -173,  -173,   100,   105,   118,   119,    94,    99,
     137,   139,  -173,  -173,  -173,  -173
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     4,     0,     0,     0,    20,     0,     0,
       0,    18,     5,     3,    10,    12,    11,    13,     6,     7,
       9,     8,     0,    22,    19,    86,     0,   172,     0,     0,
      86,    96,    89,    93,     0,     0,     0,    23,    24,    25,
      26,    14,    16,     0,    91,    95,     0,    86,    86,     0,
     100,     0,     0,    55,    54,   161,   163,   171,   165,   167,
     169,   147,     0,     0,    21,    86,    87,    90,    94,    98,
      66,    28,    27,    56,    57,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,     0,   159,   173,    15,    17,
      92,    86,    74,    71,    73,    69,    67,   101,   162,   164,
     166,   168,   170,     0,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    34,    52,    51,    44,    45,    46,    47,
      48,    49,    50,   149,   151,    53,   153,   155,   157,   147,
      88,    83,     0,     0,    85,    77,    75,    79,    81,    99,
      74,    66,    66,   148,     0,     0,     0,     0,     0,   160,
      74,    29,    62,    65,    63,    64,    74,    74,    74,    74,
      72,    70,    68,   136,   130,   132,   134,   102,   141,   137,
     139,   116,    32,    33,     0,     0,   146,   142,   144,   147,
     147,   147,    84,    78,    76,    80,    82,     0,     0,     0,
       0,     0,   114,   147,     0,     0,     0,     0,   128,   147,
      31,    30,     0,     0,   154,   156,   158,   131,   133,   135,
       0,   104,   106,   108,   110,   112,   102,   150,   138,   140,
       0,   118,   120,   122,   124,   126,   116,   152,   143,   145,
     103,     0,     0,     0,     0,     0,   115,   117,     0,     0,
       0,     0,     0,   129,     0,     0,   102,   102,   102,     0,
       0,   116,   116,   116,     0,     0,   109,   111,   113,     0,
       0,   123,   125,   127,     0,     0,     0,     0,     0,     0,
       0,     0,   105,   107,   119,   121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,   -34,   -36,   -22,  -173,  -173,  -173,  -172,  -126,  -106,
    -135,  -173,  -110,  -173,  -173,  -173,    34,  -173,  -173,  -173,
    -173,  -173,   -27,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -101,  -173,  -173,  -173,  -173,  -173,  -173,   -82,  -173,  -173,
    -173,  -173,  -173,  -173,  -159,  -173,  -173,  -173,   -78,  -173,
    -173,  -140,  -173,  -173,  -113,  -173,  -173,  -173,  -173,  -173,
    -173,   236,  -173,  -173,  -173,  -173,  -173,  -173,  -173
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    13,    14,    62,    63,    15,    16,    17,    18,
      19,    42,   135,   136,   137,   177,   178,   126,   127,   128,
      60,   138,    97,   142,   141,   140,   139,   157,   156,   158,
     159,   150,    34,    91,    47,    65,    48,    20,    92,    70,
     193,   231,   232,   233,   234,   235,   216,   199,   238,   239,
     240,   241,   242,   226,   167,   187,   188,   189,   171,   194,
     195,   179,   202,   203,    87,   144,   145,   146,   147,   148,
     129,    61,    79,    80,    81,    82,    83,    21,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      58,    50,    25,    45,    51,    52,    84,   180,   181,   166,
      22,    85,    66,    86,    59,    69,   149,   190,    26,   213,
      67,    68,   191,   131,   192,   223,    51,    52,   207,   208,
     209,   161,   162,    23,    95,   132,    51,    52,    90,   133,
      24,    27,    28,    58,    58,    58,    58,    58,    96,    29,
      35,    43,   166,   166,   166,    93,   134,    59,    59,    59,
      59,    59,   228,   229,   130,   214,   204,   205,   206,    51,
      52,   224,   244,    64,    46,    49,     2,     3,   168,   249,
     217,     4,     5,     6,     7,   215,   227,    88,    94,    53,
      54,   225,   196,   246,   247,   248,   166,   197,   151,   198,
     251,   252,   253,   166,    71,    95,    95,    72,   164,   169,
      55,    56,    51,    52,     8,   236,   218,   219,    89,    96,
      96,    57,   165,   170,   103,     9,   143,   210,   220,    10,
     230,   264,    53,    54,    11,    12,   172,   173,   174,   175,
     200,   201,   237,   254,   243,   256,   257,   258,   259,   265,
     266,   164,   164,   164,   245,   272,   267,   268,   169,   169,
     273,   250,   269,   255,   163,   165,   165,   165,   260,   261,
     262,   263,   170,   170,   160,   270,   271,   176,    37,    38,
      39,    40,    30,    31,   182,    41,    37,    38,    39,    40,
     183,   184,   185,   186,     0,   164,   169,    32,   274,    33,
     275,     0,   164,   169,   152,   153,   154,   155,     0,   165,
     170,    30,    31,     0,     0,     0,   165,   170,   104,   105,
     106,   107,   108,   109,   110,   111,    32,     0,    44,     0,
       0,   112,   113,   114,   115,     0,     0,     0,   116,   117,
     118,   119,   120,   121,   122,     0,   104,   105,   106,   107,
     108,   109,   110,   111,     0,     0,     0,   123,   124,   112,
     113,   114,   115,     0,   125,     0,   116,   117,   118,   119,
     120,   121,   122,     0,   104,   105,   106,   107,   108,   109,
     110,   111,     0,     0,     0,   211,   212,   112,   113,   114,
     115,     0,   125,     0,   116,   117,   118,   119,   120,   121,
     122,    73,    74,    75,    76,    77,     0,     0,     0,    78,
       0,     0,     0,   221,   222,    98,    99,   100,   101,   102,
     125
};

static const yytype_int16 yycheck[] =
{
      36,    35,    41,    30,     9,    10,    52,   147,   148,   144,
      57,    57,    46,    59,    36,    49,   129,    52,    57,   191,
      47,    48,    57,    28,    59,   197,     9,    10,   187,   188,
     189,   141,   142,    61,    70,    40,     9,    10,    65,    44,
      61,    57,    39,    79,    80,    81,    82,    83,    70,     4,
      39,    60,   187,   188,   189,    28,    61,    79,    80,    81,
      82,    83,   202,   203,    91,   191,   179,   180,   181,     9,
      10,   197,   231,    61,    39,    39,     0,     1,    61,   238,
     193,     5,     6,     7,     8,   191,   199,    61,    61,    29,
      30,   197,    52,   233,   234,   235,   231,    57,   132,    59,
     240,   241,   242,   238,    60,   141,   142,    60,   144,   145,
      50,    51,     9,    10,    38,   216,   194,   195,    61,   141,
     142,    61,   144,   145,    57,    49,    61,    57,    57,    53,
      61,    52,    29,    30,    58,    59,    20,    21,    22,    23,
     174,   175,    61,   244,   226,   246,   247,   248,   249,    52,
      52,   187,   188,   189,   232,    61,    52,    57,   194,   195,
      61,   239,    57,   245,    61,   187,   188,   189,   250,   251,
     252,   253,   194,   195,   140,    57,    57,    61,    53,    54,
      55,    56,    42,    43,   150,    60,    53,    54,    55,    56,
     156,   157,   158,   159,    -1,   231,   232,    57,    61,    59,
      61,    -1,   238,   239,    45,    46,    47,    48,    -1,   231,
     232,    42,    43,    -1,    -1,    -1,   238,   239,    11,    12,
      13,    14,    15,    16,    17,    18,    57,    -1,    59,    -1,
      -1,    24,    25,    26,    27,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    50,    51,    24,
      25,    26,    27,    -1,    57,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    50,    51,    24,    25,    26,
      27,    -1,    57,    -1,    31,    32,    33,    34,    35,    36,
      37,    11,    12,    13,    14,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    50,    51,    79,    80,    81,    82,    83,
      57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,     0,     1,     5,     6,     7,     8,    38,    49,
      53,    58,    59,    64,    65,    68,    69,    70,    71,    72,
      99,   139,    57,    61,    61,    41,    57,    57,    39,     4,
      42,    43,    57,    59,    94,    39,   140,    53,    54,    55,
      56,    60,    73,    60,    59,    94,    39,    96,    98,    39,
      73,     9,    10,    29,    30,    50,    51,    61,    74,    75,
      82,   133,    66,    67,    61,    97,    73,    94,    94,    73,
     101,    60,    60,    11,    12,    13,    14,    15,    19,   134,
     135,   136,   137,   138,    52,    57,    59,   126,    61,    61,
      94,    95,   100,    28,    61,    74,    75,    84,   133,   133,
     133,   133,   133,    57,    11,    12,    13,    14,    15,    16,
      17,    18,    24,    25,    26,    27,    31,    32,    33,    34,
      35,    36,    37,    50,    51,    57,    79,    80,    81,   132,
      94,    28,    40,    44,    61,    74,    75,    76,    83,    88,
      87,    86,    85,    61,   127,   128,   129,   130,   131,   126,
      93,    73,    45,    46,    47,    48,    90,    89,    91,    92,
      88,    84,    84,    61,    74,    75,    82,   116,    61,    74,
      75,   120,    20,    21,    22,    23,    61,    77,    78,   123,
     123,   123,    88,    88,    88,    88,    88,   117,   118,   119,
      52,    57,    59,   102,   121,   122,    52,    57,    59,   109,
      73,    73,   124,   125,   126,   126,   126,   116,   116,   116,
      57,    50,    51,    79,    80,    81,   108,   126,   120,   120,
      57,    50,    51,    79,    80,    81,   115,   126,   123,   123,
      61,   103,   104,   105,   106,   107,   102,    61,   110,   111,
     112,   113,   114,   109,   116,   120,   123,   123,   123,   116,
     120,   123,   123,   123,   102,   109,   102,   102,   102,   102,
     109,   109,   109,   109,    52,    52,    52,    52,    57,    57,
      57,    57,    61,    61,    61,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    66,    65,    67,    65,    68,    69,
      70,    71,    72,    73,    73,    73,    73,    74,    75,    76,
      77,    77,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    83,    83,    83,    83,    84,    85,    84,    86,
      84,    87,    84,    84,    88,    89,    88,    90,    88,    91,
      88,    92,    88,    93,    88,    88,    94,    95,    94,    96,
      94,    97,    94,    98,    94,    94,    94,    99,   100,    99,
     101,    99,   102,   102,   103,   102,   104,   102,   105,   102,
     106,   102,   107,   102,   108,   102,   109,   109,   110,   109,
     111,   109,   112,   109,   113,   109,   114,   109,   115,   109,
     117,   116,   118,   116,   119,   116,   116,   121,   120,   122,
     120,   120,   124,   123,   125,   123,   123,   126,   126,   127,
     126,   128,   126,   129,   126,   130,   126,   131,   126,   132,
     126,   134,   133,   135,   133,   136,   133,   137,   133,   138,
     133,   133,   140,   139
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     0,     5,     1,     2,
       1,     5,     2,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     0,     0,     3,     0,
       3,     0,     3,     1,     0,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     1,     0,     0,     5,     0,
       3,     0,     4,     0,     3,     2,     1,     0,     0,     7,
       0,     6,     0,     3,     0,     8,     0,     8,     0,     5,
       0,     5,     0,     5,     0,     3,     0,     3,     0,     8,
       0,     8,     0,     5,     0,     5,     0,     5,     0,     3,
       0,     3,     0,     3,     0,     3,     1,     0,     3,     0,
       3,     1,     0,     3,     0,     3,     1,     0,     3,     0,
       6,     0,     6,     0,     5,     0,     5,     0,     5,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       3,     1,     0,     5
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
#line 194 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_comment(sdlctx, (yyvsp[0].tval)); }
#line 1876 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 206 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_var_set(sdlctx, (yyvsp[-2].tval), (yyvsp[0].tval), SDL_K_VARTYPE_STR); }
#line 1882 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 209 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_var_set(sdlctx, (yyvsp[-2].tval), (yyvsp[0].bval), SDL_K_VARTYPE_NUM); }
#line 1888 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 217 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_literal(&sdlliteral, (yyvsp[0].tval)); }
#line 1894 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 222 "sdl_parser.y" /* yacc.c:1646  */
    { literal_state = 1; }
#line 1900 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 227 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_def_literal(sdlctx, &sdlliteral); literal_state = 0; }
#line 1906 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 232 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_module (&sdlctx, (yyvsp[-3].tval), (yyvsp[-1].tval)); }
#line 1912 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 237 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_end_module (sdlctx, sdlctx->module); }
#line 1918 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 241 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_var_get(sdlctx, (yyvsp[0].tval), &(yyval.bval), SDL_K_VARTYPE_NUM); }
#line 1924 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 243 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 1930 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 244 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = sdl_hex2ull ((yyvsp[0].tval)); }
#line 1936 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 245 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = sdl_oct2ull ((yyvsp[0].tval)); }
#line 1942 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 250 "sdl_parser.y" /* yacc.c:1646  */
    { strcpy((yyval.tval), (yyvsp[0].tval)); }
#line 1948 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 254 "sdl_parser.y" /* yacc.c:1646  */
    { strcpy((yyval.tval), (yyvsp[0].tval)); }
#line 1954 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 258 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 1960 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 264 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 1966 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 266 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 1972 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 271 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_SGND; }
#line 1978 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 273 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_UNSG; }
#line 1984 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 279 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_PTR; }
#line 1990 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 281 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_BYTE; }
#line 1996 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 283 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_WORD; }
#line 2002 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 285 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_LONG; }
#line 2008 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 287 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_QUAD; }
#line 2014 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 289 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_OCTA; }
#line 2020 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 291 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_BFLD; }
#line 2026 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 293 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_FLT; }
#line 2032 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 295 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_DBL; }
#line 2038 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 301 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_PCKD; }
#line 2044 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 303 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_ASCIC; }
#line 2050 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 305 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_SDESC; }
#line 2056 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 307 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_HWADDR; }
#line 2062 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 309 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_IPADDR; }
#line 2068 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 311 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_IP4ADDR; }
#line 2074 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 313 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_IP6ADDR; }
#line 2080 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 315 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_SOCK; }
#line 2086 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 317 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_RTN; }
#line 2092 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 319 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_VOID; }
#line 2098 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 324 "sdl_parser.y" /* yacc.c:1646  */
    { strcpy ((yyval.tval), (yyvsp[0].tval)); }
#line 2104 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 328 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_DEF; }
#line 2110 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 330 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_BYTE; }
#line 2116 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 332 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_BYTE; }
#line 2122 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 334 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_WORD; }
#line 2128 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 336 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_LONG; }
#line 2134 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 338 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_QUAD; }
#line 2140 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 340 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_OCTA; }
#line 2146 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 342 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_PAGE; }
#line 2152 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 346 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_DEC; }
#line 2158 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 348 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_OCT; }
#line 2164 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 350 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_BIN; }
#line 2170 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 352 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_HEX; }
#line 2176 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 364 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_str2asc ( (yyvsp[0].tval), &sdlconst.pref); }
#line 2182 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 366 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc ((yyvsp[0].tval),  &sdlconst.tag); }
#line 2188 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 369 "sdl_parser.y" /* yacc.c:1646  */
    { sdlconst.mask = SDL_K_TYPE_MASK; }
#line 2194 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 372 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_def_constant (sdlctx, &sdlconst); }
#line 2200 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 377 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc ( (yyvsp[0].tval), &sdlconstlist.pref); }
#line 2206 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 380 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc ( (yyvsp[0].tval), &sdlconstlist.tag); }
#line 2212 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 384 "sdl_parser.y" /* yacc.c:1646  */
    { sdlconstlist.inc = (yyvsp[0].bval); }
#line 2218 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 387 "sdl_parser.y" /* yacc.c:1646  */
    { sdlconstlist.radix = (yyvsp[0].bval); }
#line 2224 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 391 "sdl_parser.y" /* yacc.c:1646  */
    { sdlconstlist.mask = SDL_K_TYPE_MASK; }
#line 2230 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 394 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_def_constlist (sdlctx, &sdlconstlist); }
#line 2236 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 401 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist( &sdlconstlist, (yyvsp[-2].tval), (yyvsp[0].bval), 1); }
#line 2242 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 405 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist( &sdlconstlist, (yyvsp[0].tval), 0, 0); }
#line 2248 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 409 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist_rem ((yyvsp[0].tval), &sdlconstlist); }
#line 2254 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 413 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist_rem ((yyvsp[0].tval), &sdlconstlist); }
#line 2260 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 424 "sdl_parser.y" /* yacc.c:1646  */
    { sdlconstlist.val = (yyvsp[0].bval); }
#line 2266 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 429 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_constant(&sdlconst, (yyvsp[-2].tval), (yyvsp[0].bval)); }
#line 2272 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 440 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2278 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 443 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_STRUCT); }
#line 2284 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 447 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2290 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 450 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_UNION); }
#line 2296 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 454 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2302 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 457 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2309 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 463 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2316 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 469 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		   sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->utype);
		   sdlagg.item->typespec = SDL_K_TYPE_USER; }
#line 2324 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 477 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_rem ((yyvsp[0].tval), &sdlagg.item); }
#line 2330 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 490 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2336 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 493 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_STRUCT); }
#line 2342 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 497 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2348 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 500 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_UNION); }
#line 2354 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 504 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2360 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 507 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2367 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 513 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2374 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 519 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		   sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->utype);
		   sdlagg.item->typespec = SDL_K_TYPE_USER; }
#line 2382 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 527 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_rem ((yyvsp[0].tval), &sdlagg.item); }
#line 2388 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 538 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->tag); }
#line 2394 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 541 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->pref); }
#line 2400 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 544 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.item->align = (yyvsp[0].bval); }
#line 2406 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 554 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->tag); }
#line 2412 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 557 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->pref); }
#line 2418 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 566 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.item->dimension = (1 + ((yyvsp[0].bval))); }
#line 2424 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 569 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.item->typespec |= (yyvsp[0].bval); }
#line 2430 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 582 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 2436 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 585 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_STRUCT); }
#line 2442 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 591 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_UNION); }
#line 2448 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 598 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2455 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 604 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 2462 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 610 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		   sdl_qstr2asc((yyvsp[0].tval), &sdlagg.item->utype);
		   sdlagg.item->typespec = SDL_K_TYPE_USER; }
#line 2470 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 618 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_agg_rem ((yyvsp[0].tval), &sdlagg); }
#line 2476 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 625 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.aggtype = SDL_K_AGGTYPE_STRUCT; }
#line 2482 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 628 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.aggtype = SDL_K_AGGTYPE_UNION; }
#line 2488 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 631 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.tag); }
#line 2494 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 634 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_qstr2asc((yyvsp[0].tval), &sdlagg.pref); }
#line 2500 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 637 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.align = (yyvsp[0].bval); }
#line 2506 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 644 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_agg_init (&sdlagg, (yyvsp[0].tval)); }
#line 2512 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 647 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_def_aggregate(sdlctx, &sdlagg, (yyvsp[-3].tval)); }
#line 2518 "sdl_parser.c" /* yacc.c:1646  */
    break;


#line 2522 "sdl_parser.c" /* yacc.c:1646  */
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
#line 650 "sdl_parser.y" /* yacc.c:1906  */
	/* Start of programs	*/
