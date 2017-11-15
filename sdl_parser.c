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
#line 55 "sdl_parser.y" /* yacc.c:339  */


#include	<stdio.h>
#include	<errno.h>
#include	<unistd.h>

#include	"defsdl.h"
#include	"utility_routines.h"

#define		YYDEBUG		1
#define		YYERROR_VERBOSE	1
#define		YYLSP_NEEDED	1

SDL_CTX	*	sdlctx = NULL;

SDL_CONSTANT	sdlconst = {0};
SDL_CONSTLIST	sdlconstlist = {0};

SDL_AGGREGATE	sdlagg = {0};
SDL_AGGITEM	sdlaggitem = {0};


#line 89 "sdl_parser.c" /* yacc.c:339  */

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
    KWD_PREFIX = 262,
    KWD_TAG = 263,
    KWD_BYTE = 264,
    KWD_WORD = 265,
    KWD_LONG = 266,
    KWD_QUAD = 267,
    KWD_OCTA = 268,
    KWD_BFLD = 269,
    KWD_FLOAT = 270,
    KWD_DOUBLE = 271,
    KWD_PAGE = 272,
    KWD_SIGNED = 273,
    KWD_UNSIGNED = 274,
    KWD_DIMENSION = 275,
    KWD_LENGTH = 276,
    KWD_PACKED = 277,
    KWD_PTR = 278,
    KWD_VOID = 279,
    KWD_ENTRY = 280,
    KWD_NOALIGN = 281,
    KWD_ALIGN = 282,
    KWD_ASCIC = 283,
    KWD_DESC = 284,
    KWD_HWADDR = 285,
    KWD_IPADDR = 286,
    KWD_IP4ADDR = 287,
    KWD_IP6ADDR = 288,
    KWD_SOCKET = 289,
    KWD_CONST = 290,
    KWD_EQ = 291,
    KWD_INC = 292,
    OPEN_LIST = 293,
    COMMA = 294,
    CLOSE_LIST = 295,
    KWD_RADIX = 296,
    KWD_DEC = 297,
    KWD_HEX = 298,
    KWD_OCT = 299,
    KWD_BIN = 300,
    KWD_AGGREGATE = 301,
    KWD_END_AGGREGATE = 302,
    KWD_STRUCT = 303,
    KWD_UNION = 304,
    KWD_END = 305,
    sdlvar = 306,
    decimal = 307,
    hexadecimal = 308,
    octal = 309,
    id = 310,
    comment = 311,
    white_space = 312,
    quoted_string = 313,
    EOL = 314
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 80 "sdl_parser.y" /* yacc.c:355  */

	int	bval;
	char	tval[8192];

#line 194 "sdl_parser.c" /* yacc.c:355  */
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

#line 224 "sdl_parser.c" /* yacc.c:358  */

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYLAST   168

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   167,   167,   168,   169,   173,   174,   175,   176,   177,
     180,   185,   190,   191,   192,   193,   197,   201,   205,   210,
     212,   217,   219,   225,   227,   229,   231,   233,   235,   237,
     239,   241,   247,   249,   251,   253,   255,   257,   259,   261,
     263,   265,   269,   271,   273,   275,   277,   279,   281,   283,
     287,   289,   291,   293,   305,   305,   307,   307,   310,   314,
     314,   317,   317,   321,   320,   324,   323,   327,   333,   332,
     337,   336,   341,   343,   348,   347,   352,   351,   362,   361,
     365,   364,   368,   367,   370,   378,   377,   381,   380,   383,
     390,   389,   393,   392,   395,   399,   403,   402,   409,   408,
     416,   415,   422,   421,   426,   431,   430,   434,   433,   437,
     436,   440,   439,   443,   442,   445,   450,   449
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KWD_INCLUDE", "KWD_IDENT", "KWD_MODULE",
  "KWD_END_MODULE", "KWD_PREFIX", "KWD_TAG", "KWD_BYTE", "KWD_WORD",
  "KWD_LONG", "KWD_QUAD", "KWD_OCTA", "KWD_BFLD", "KWD_FLOAT",
  "KWD_DOUBLE", "KWD_PAGE", "KWD_SIGNED", "KWD_UNSIGNED", "KWD_DIMENSION",
  "KWD_LENGTH", "KWD_PACKED", "KWD_PTR", "KWD_VOID", "KWD_ENTRY",
  "KWD_NOALIGN", "KWD_ALIGN", "KWD_ASCIC", "KWD_DESC", "KWD_HWADDR",
  "KWD_IPADDR", "KWD_IP4ADDR", "KWD_IP6ADDR", "KWD_SOCKET", "KWD_CONST",
  "KWD_EQ", "KWD_INC", "OPEN_LIST", "COMMA", "CLOSE_LIST", "KWD_RADIX",
  "KWD_DEC", "KWD_HEX", "KWD_OCT", "KWD_BIN", "KWD_AGGREGATE",
  "KWD_END_AGGREGATE", "KWD_STRUCT", "KWD_UNION", "KWD_END", "sdlvar",
  "decimal", "hexadecimal", "octal", "id", "comment", "white_space",
  "quoted_string", "EOL", "$accept", "prog", "line", "module",
  "end_module", "value", "tag", "pref", "inc", "sizespec", "signspec",
  "basetypes", "syntypes", "align", "radix", "constant_opts", "$@1", "$@2",
  "constlist_opts", "$@3", "$@4", "$@5", "$@6", "constlist_ids", "$@7",
  "$@8", "constant", "$@9", "$@10", "agg_struct", "$@11", "$@12", "$@13",
  "agg_union", "$@14", "$@15", "field_opts", "$@16", "$@17", "agg_items",
  "$@18", "$@19", "$@20", "$@21", "agg_opts", "$@22", "$@23", "$@24",
  "$@25", "$@26", "aggregate", "$@27", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -119

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-119)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
    -119,     5,  -119,  -119,   -46,   -44,    -9,   -36,  -119,  -119,
    -119,  -119,  -119,  -119,    24,  -119,    -2,    22,  -119,   -24,
      -2,  -119,    28,    36,    85,     0,     1,  -119,    85,    -2,
      85,  -119,  -119,  -119,  -119,  -119,    29,    30,  -119,    92,
    -119,  -119,  -119,  -119,  -119,  -119,    34,  -119,  -119,  -119,
    -119,    14,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
       0,     0,     0,     0,     0,    43,   119,  -119,  -119,    -2,
       6,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
      40,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,    85,   112,  -119,  -119,  -119,
    -119,  -119,  -119,    14,    14,  -119,     9,    17,    12,    12,
    -119,  -119,  -119,  -119,  -119,     6,     6,     6,     6,  -119,
    -119,  -119,  -119,  -119,  -119,    34,  -119,  -119,  -119,    34,
    -119,  -119,    85,    85,  -119,  -119,  -119,    34,    34,  -119,
    -119,  -119,  -119,     9,     9,     9,    50,    17,    17,    62,
    -119,  -119,    12,    12,  -119,  -119,  -119,  -119,  -119,    58,
    -119,  -119,    66,  -119,  -119,  -119,    81,  -119
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     4,     0,     0,     0,     0,     5,     3,
       6,     7,     9,     8,     0,    11,     0,     0,   116,     0,
       0,    73,    70,     0,     0,     0,     0,    72,     0,     0,
       0,    12,    13,    14,    15,    76,     0,     0,    43,    42,
     105,   107,   115,   109,   111,   113,     0,    10,    68,    71,
      74,     0,    17,    16,    44,    45,    46,    47,    48,    49,
       0,     0,     0,     0,     0,     0,     0,   104,   117,     0,
       0,    58,    56,    54,    77,   106,   108,   110,   112,   114,
       0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      23,    41,    40,    33,    34,    35,    36,    37,    38,    39,
      96,    98,   100,   102,    69,     0,     0,    67,    61,    59,
      63,    65,    75,     0,     0,    95,     0,     0,     0,     0,
      18,    50,    53,    51,    52,     0,     0,     0,     0,    57,
      55,    84,    78,    80,    82,     0,    89,    85,    87,     0,
      21,    22,     0,     0,    94,    90,    92,     0,     0,    62,
      60,    64,    66,     0,     0,     0,     0,     0,     0,     0,
      20,    19,     0,     0,   101,   103,    79,    81,    83,     0,
      86,    88,     0,    91,    93,    97,     0,    99
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -119,  -119,  -119,  -119,  -119,   -28,   -47,   -31,  -119,  -119,
    -119,  -119,  -119,   -98,  -119,   -72,  -119,  -119,    33,  -119,
    -119,  -119,  -119,   -17,  -119,  -119,  -119,  -119,  -119,   -63,
    -119,  -119,  -119,   -83,  -119,  -119,  -118,  -119,  -119,   -85,
    -119,  -119,  -119,  -119,    56,  -119,  -119,  -119,  -119,  -119,
    -119,  -119
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     9,    10,    11,    35,    43,    44,   110,   145,
     146,   102,   103,    45,   111,    74,   114,   113,   112,   126,
     125,   127,   128,    23,    69,    29,    12,    70,    51,   135,
     153,   154,   155,   139,   157,   158,   147,   162,   163,    68,
     116,   117,   118,   119,    46,    60,    61,    62,    63,    64,
      13,    25
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      48,   148,    50,    27,    72,     2,     3,    36,    37,    14,
       4,     5,    49,    36,    37,    15,    36,    37,   134,    18,
      73,    36,    37,   108,    36,    37,    38,    39,    19,    16,
     140,   141,   142,   143,    26,    38,    39,    20,    21,   109,
       6,   129,   130,   105,   173,   174,    17,   106,    40,    41,
     156,     7,   104,    22,   159,   134,   134,   134,    24,    42,
      47,     8,   164,   165,    28,   107,    72,    72,   131,   132,
     137,   144,    30,    71,   170,   171,   136,   120,   108,   108,
     108,   108,    73,    73,    65,   133,   138,    52,    53,    66,
     166,   167,   168,    67,   109,   109,   109,   109,    80,   115,
     169,    54,    55,    56,    57,    58,   132,   132,   132,    59,
     137,   137,   172,   175,   160,   161,    75,    76,    77,    78,
      79,   176,   133,   133,   133,     0,   138,   138,    81,    82,
      83,    84,    85,    86,    87,    88,    31,    32,    33,    34,
     177,    89,    90,    91,    92,     0,     0,    93,    94,    95,
      96,    97,    98,    99,   121,   122,   123,   124,   149,   150,
     151,   152,     0,     0,     0,     0,     0,   100,   101
};

static const yytype_int16 yycheck[] =
{
      28,   119,    30,    20,    51,     0,     1,     7,     8,    55,
       5,     6,    29,     7,     8,    59,     7,     8,   116,    55,
      51,     7,     8,    70,     7,     8,    26,    27,     4,    38,
      18,    19,    20,    21,    58,    26,    27,    39,    40,    70,
      35,   113,   114,    37,   162,   163,    55,    41,    48,    49,
     135,    46,    69,    55,   139,   153,   154,   155,    36,    59,
      59,    56,   147,   148,    36,    59,   113,   114,    59,   116,
     117,    59,    36,    59,   157,   158,    59,   105,   125,   126,
     127,   128,   113,   114,    50,   116,   117,    58,    58,    55,
     153,   154,   155,    59,   125,   126,   127,   128,    55,    59,
      50,     9,    10,    11,    12,    13,   153,   154,   155,    17,
     157,   158,    50,    55,   142,   143,    60,    61,    62,    63,
      64,    55,   153,   154,   155,    -1,   157,   158,     9,    10,
      11,    12,    13,    14,    15,    16,    51,    52,    53,    54,
      59,    22,    23,    24,    25,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    42,    43,    44,    45,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    48,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,     0,     1,     5,     6,    35,    46,    56,    62,
      63,    64,    86,   110,    55,    59,    38,    55,    55,     4,
      39,    40,    55,    83,    36,   111,    58,    83,    36,    85,
      36,    51,    52,    53,    54,    65,     7,     8,    26,    27,
      48,    49,    59,    66,    67,    73,   104,    59,    65,    83,
      65,    88,    58,    58,     9,    10,    11,    12,    13,    17,
     105,   106,   107,   108,   109,    50,    55,    59,    99,    84,
      87,    59,    66,    67,    75,   104,   104,   104,   104,   104,
      55,     9,    10,    11,    12,    13,    14,    15,    16,    22,
      23,    24,    25,    28,    29,    30,    31,    32,    33,    34,
      48,    49,    71,    72,    83,    37,    41,    59,    66,    67,
      68,    74,    78,    77,    76,    59,   100,   101,   102,   103,
      65,    42,    43,    44,    45,    80,    79,    81,    82,    75,
      75,    59,    66,    67,    73,    89,    59,    66,    67,    93,
      18,    19,    20,    21,    59,    69,    70,    96,    96,    78,
      78,    78,    78,    90,    91,    92,    99,    94,    95,    99,
      65,    65,    97,    98,    99,    99,    89,    89,    89,    50,
      93,    93,    50,    96,    96,    55,    55,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    61,    62,    62,    62,    62,    62,
      63,    64,    65,    65,    65,    65,    66,    67,    68,    69,
      69,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    73,    73,    73,    73,    73,    73,    73,    73,
      74,    74,    74,    74,    76,    75,    77,    75,    75,    79,
      78,    80,    78,    81,    78,    82,    78,    78,    84,    83,
      85,    83,    83,    83,    87,    86,    88,    86,    90,    89,
      91,    89,    92,    89,    89,    94,    93,    95,    93,    93,
      97,    96,    98,    96,    96,    99,   100,    99,   101,    99,
     102,    99,   103,    99,    99,   105,   104,   106,   104,   107,
     104,   108,   104,   109,   104,   104,   111,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     1,     1,
       5,     2,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     0,     3,     0,     3,     1,     0,
       3,     0,     3,     0,     3,     0,     3,     1,     0,     5,
       0,     3,     2,     1,     0,     7,     0,     6,     0,     3,
       0,     3,     0,     3,     1,     0,     3,     0,     3,     1,
       0,     3,     0,     3,     1,     3,     0,     7,     0,     8,
       0,     5,     0,     5,     1,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     1,     0,     5
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
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
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
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
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
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
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
  switch (yyn)
    {
        case 10:
#line 181 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_module (&sdlctx, (yyvsp[-3].tval), (yyvsp[-1].tval)); }
#line 1546 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 186 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_end_module (sdlctx, sdlctx->module); }
#line 1552 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 190 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].tval); }
#line 1558 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 191 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 1564 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 192 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 1570 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 193 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 1576 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 198 "sdl_parser.y" /* yacc.c:1646  */
    { strcpy((yyval.tval), (yyvsp[0].tval)); }
#line 1582 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 202 "sdl_parser.y" /* yacc.c:1646  */
    { strcpy((yyval.tval), (yyvsp[0].tval)); }
#line 1588 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 206 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 1594 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 211 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 1600 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 213 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = (yyvsp[0].bval); }
#line 1606 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 218 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_SGND; }
#line 1612 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 220 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_UNSG; }
#line 1618 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 226 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_PTR; }
#line 1624 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 228 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_BYTE; }
#line 1630 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 230 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_WORD; }
#line 1636 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 232 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_LONG; }
#line 1642 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 234 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_QUAD; }
#line 1648 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 236 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_OCTA; }
#line 1654 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 238 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_BFLD; }
#line 1660 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 240 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_FLT; }
#line 1666 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 242 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_DBL; }
#line 1672 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 248 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_PCKD; }
#line 1678 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 250 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_ASCIC; }
#line 1684 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 252 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_SDESC; }
#line 1690 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 254 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_HWADDR; }
#line 1696 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 256 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_IPADDR; }
#line 1702 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 258 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_IP4ADDR; }
#line 1708 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 260 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_IP6ADDR; }
#line 1714 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 262 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_SOCK; }
#line 1720 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 264 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_RTN; }
#line 1726 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 266 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_TYPE_VOID; }
#line 1732 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 270 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_DEF; }
#line 1738 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 272 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_BYTE; }
#line 1744 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 274 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_BYTE; }
#line 1750 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 276 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_WORD; }
#line 1756 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 278 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_LONG; }
#line 1762 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 280 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_QUAD; }
#line 1768 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 282 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_OCTA; }
#line 1774 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 284 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_ALIGN_PAGE; }
#line 1780 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 288 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_DEC; }
#line 1786 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 290 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_OCT; }
#line 1792 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 292 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_BIN; }
#line 1798 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 294 "sdl_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = SDL_K_RADIX_HEX; }
#line 1804 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 305 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_str2asc ( (yyvsp[0].tval), &sdlconst.pref); }
#line 1810 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 307 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_str2asc ((yyvsp[0].tval),  &sdlconst.tag); }
#line 1816 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 310 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_def_constant (sdlctx, &sdlconst); }
#line 1822 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 314 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_str2asc ( (yyvsp[0].tval), &sdlconstlist.pref); }
#line 1828 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 317 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_str2asc ( (yyvsp[0].tval), &sdlconstlist.tag); }
#line 1834 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 321 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist_inc ( &sdlconstlist, (yyvsp[0].bval)); }
#line 1840 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 324 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist_radix ( &sdlconstlist, (yyvsp[0].bval)); }
#line 1846 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 327 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_def_constlist (sdlctx, &sdlconstlist); }
#line 1852 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 333 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist( &sdlconstlist, (yyvsp[-2].tval), (yyvsp[0].bval), 1); }
#line 1858 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 337 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_constlist( &sdlconstlist, (yyvsp[0].tval), 0, 0); }
#line 1864 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 348 "sdl_parser.y" /* yacc.c:1646  */
    {sdl_constlist_val (&sdlconstlist, (yyvsp[0].bval)); }
#line 1870 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 352 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_constant(&sdlconst, (yyvsp[-2].tval), (yyvsp[0].bval)); }
#line 1876 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 362 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_str2asc((yyvsp[0].tval), &sdlagg.item->tag); }
#line 1882 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 365 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_str2asc((yyvsp[0].tval), &sdlagg.item->pref); }
#line 1888 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 368 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.align = (yyvsp[0].bval); }
#line 1894 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 378 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_str2asc((yyvsp[0].tval), &sdlagg.item->tag); }
#line 1900 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 381 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_str2asc((yyvsp[0].tval), &sdlagg.item->pref); }
#line 1906 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 390 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.item->dimension = (yyvsp[0].bval); }
#line 1912 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 393 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.item->typespec |= (yyvsp[0].bval); }
#line 1918 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 400 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_END); }
#line 1924 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 403 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_STRUCT); }
#line 1930 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 409 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_UNION); }
#line 1936 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 416 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 1943 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 422 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_aggitem_add(&sdlagg, (yyvsp[-1].tval), SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = (yyvsp[0].bval); }
#line 1950 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 431 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.aggtype = SDL_K_AGGTYPE_STRUCT; }
#line 1956 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 434 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.aggtype = SDL_K_AGGTYPE_UNION; }
#line 1962 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 437 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_str2asc((yyvsp[0].tval), &sdlagg.tag); }
#line 1968 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 440 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_str2asc((yyvsp[0].tval), &sdlagg.pref); }
#line 1974 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 443 "sdl_parser.y" /* yacc.c:1646  */
    { sdlagg.align = (yyvsp[0].bval); }
#line 1980 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 450 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_agg_init (&sdlagg, (yyvsp[0].tval)); }
#line 1986 "sdl_parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 453 "sdl_parser.y" /* yacc.c:1646  */
    { sdl_def_aggregate(sdlctx, &sdlagg, (yyvsp[-3].tval)); }
#line 1992 "sdl_parser.c" /* yacc.c:1646  */
    break;


#line 1996 "sdl_parser.c" /* yacc.c:1646  */
      default: break;
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
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
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

#if !defined yyoverflow || YYERROR_VERBOSE
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
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 456 "sdl_parser.y" /* yacc.c:1906  */
	/* Start of programs	*/
