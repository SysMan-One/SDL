/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 92 "sdl_parser.y" /* yacc.c:1909  */

	int	bval;
	char	tval[8192];

#line 121 "sdl_parser.h" /* yacc.c:1909  */
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
