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
#line 80 "sdl_parser.y" /* yacc.c:1909  */

	int	bval;
	char	tval[8192];

#line 119 "sdl_parser.h" /* yacc.c:1909  */
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
