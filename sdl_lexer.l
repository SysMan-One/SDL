%top{
#define	__MODULE__	"SDL_LEX"

/*
**++
**  FACILITY:  StarLet Structure Definition Language
**
**  ABSTRACT: LEX's part of the SDL - lexial scanner
**
**  AUTHORS: Ruslan R. Laishev (RRL)
**
**  CREATION DATE:  03-NOV-2017
**
**  MODIFICATION HISTORY:
**
**--
*/


#include	<stdio.h>

#include	"defsdl.h"
#include	"sdl_parser.h"

/*
* Defines and includes for enable extend trace and logging
*/
#ifdef _DEBUG
	#define	__TRACE__	1
#endif // _DEBUG

#define		__FAC__	"SDL"		/* Enable empty FAC prefix			*/
#define		__TFAC__ __FAC__ ": "	/* Special prefix for $TRACE			*/
#include	"utility_routines.h"

}



%option	bison-bridge
%option	bison-locations

%option	ecs

%option	noyywrap
%option	reentrant

%option	warn
%option	yylineno
%option	case-insensitive
%option	8bit

white_spaces	[ \t\n\r\v\f]+

identifier	[_a-z][_a-zA-Z0-9]*

comment_string	"/*".*

quoted_string	\"(\\.|[^"\\])*\"

%s	module

%%


"module"	{ return	KWD_MODULE; }
"ident"		{ return	KWD_IDENT; }
"end_module"	{ return	KWD_END_MODULE; }

"include"	{ return	KWD_INCLUDE; }

"byte"		{ return	KWD_BYTE; }
"word"		{ return	KWD_WORD; }
"longword"	{ return	KWD_LONG; }
"quadword"	{ return	KWD_QUAD; }
"octaword"	{ return	KWD_OCTA; }
"bitfield"	{ return	KWD_BFLD; }
"float"		{ return	KWD_FLOAT; }
"double"	{ return	KWD_DOUBLE; }

"signed"	{ return	KWD_SIGNED; }
"unsigned"	{ return	KWD_UNSIGNED; }
"dimension"	{ return	KWD_DIMENSION; }
"length"	{ return	KWD_LENGTH; }
"address"	{ return	KWD_PTR; }

"aggregate"	{ return	KWD_AGGREGATE; }
"structure"	{ return	KWD_STRUCT; }
"struct"	{ return	KWD_STRUCT; }
"union"		{ return	KWD_UNION; }
"end"		{ return	KWD_END; }

"noalign"	{ return	KWD_NOALIGN; }
"align"		{ return	KWD_ALIGN; }
"page"		{ return	KWD_PAGE; }

"ascic"		{ return	KWD_ASCIC; }
"descriptor"	{ return	KWD_DESC; }
"hwaddr"	{ return	KWD_HWADDR; }
"ipaddr"	{ return	KWD_IPADDR; }
"ip4addr"	{ return	KWD_IP4ADDR; }
"ip6addr"	{ return	KWD_IP6ADDR; }
"socket"	{ return	KWD_SOCKET; }

"constant"	{ return	KWD_CONST; }
"equals"	{ return	KWD_EQ; }
"="		{ return	KWD_EQ; }
"tag"		{ return	KWD_TAG; }
"prefix"	{ return	KWD_PREFIX; }

"increment"	{ return	KWD_INC; }
"radix"		{ return	KWD_RADIX; }
"dec"		{ return	KWD_DEC; }
"hex"		{ return	KWD_HEX; }
"oct"		{ return	KWD_OCT; }
"bin"		{ return	KWD_BIN; }

"%d"[0-9]+	{ yylval->bval = atoi(yytext); return decimal; }
"%x"[0-9a-fA-F]+ { yylval->bval = atoi(yytext); return hexadecimal; }
"%o"[0-7]+	{ yylval->bval = atoi(yytext); return octal; }
([0])|([1-9][0-9]*)	{ yylval->bval = atoi(yytext); return decimal; }
[0][x][0-9a-fA-F]+ { yylval->bval = atoi(yytext); return hexadecimal; }
[0][0-7]+	{ yylval->bval = atoi(yytext); return octal; }



";"		{ return 	EOL; }
"("		{ return	OPEN_LIST;}
")"		{ return	CLOSE_LIST;}
","		{ return	COMMA; }

{comment_string}  { strncpy (yylval->tval, yytext, sizeof(yylval->tval)); return comment; }
{quoted_string}	{ strncpy (yylval->tval, yytext, sizeof(yylval->tval)); return quoted_string; }
{identifier}	{ strncpy (yylval->tval, yytext, sizeof(yylval->tval)); return id; }
"#"{identifier}	{ strncpy (yylval->tval, yytext, sizeof(yylval->tval)); return sdlvar; }

{white_spaces}	{/* eat white spaces ... */}


%%
