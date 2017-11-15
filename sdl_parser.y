
/*
**++
**  FACILITY:  StarLet Structure Definition Language
**
**  ABSTRACT: YACC'c part of the SDL - gramar definitions and parser of the SDL
**
**	A general form of the SDL input looks like:
**
**	MODULE <id> IDENT <quoted_string> ;
**	
**	CONSTANT <id> EQUALS <value> PREFIX <prefix> TAG <tag>;
**	( will generate a constant definition : 
**	#define <prefix>_$K_<tag>_<id>	<value>
**	)
**
**	CONSTANT {
**		<id>,
**		<id2>,
**		<id3> = <value3>
**		<id4>
**	) EUQALS 1 <value> PREFIX <prefix> TAG <tag> INCREMENT <inc>
**		RADIX
**	( will generate a set of definitions:
**	#define <prefix>_$K_<tag>_<id>	<value>
**	#define <prefix>_$K_<tag>_<id>	<value> + <inc>
**	#define <prefix>_$K_<tag>_<id>	<value3>
**	#define <prefix>_$K_<tag>_<id>	<value3>+<inc>
**
**	END_MODULE;
**
**
**  AUTHORS: Ruslan R. Laishev (RRL)
**
**  CREATION DATE:  03-NOV-2017
**
**  MODIFICATION HISTORY:
**
**--
*/

%define parse.error verbose
%define api.pure true
%locations
%token-table
%define parse.lac	full

/*
%glr-parser
*/
%verbose

%lex-param {void *scanner}
%parse-param {void *scanner}


%{

#include	<stdio.h>
#include	<errno.h>
#include	<unistd.h>

#include	"defsdl.h"
#include	"utility_routines.h"

#define		YYDEBUG		1
#define		YYERROR_VERBOSE	1
#define		YYLSP_NEEDED	1

SDL_CTX	*	sdlctx = NULL;

SDL_CONSTANT	sdlconst = {0};		/* Single CONSTANT definition	*/
SDL_CONSTLIST	sdlconstlist = {0};	/* A list of CONSTANTS (...)	*/

SDL_AGGREGATE	sdlagg = {0};		/* AGGREGATE context area	*/
SDL_AGGITEM	sdlaggitem = {0};	/* AGGREGATE's items contexts	*/

%}



%union	{
	int	bval;
	char	tval[8192];
}


%start	prog

%token	KWD_INCLUDE		/* INCLUDE <fspec> directive	*/
%token	KWD_IDENT		/* IDENT <ident>		*/
%token	KWD_MODULE		/* MODULE <module> directive	*/
%token	KWD_END_MODULE		/* END_MODULE			*/

/*
** Keywords to form a resulting identifier name
*/
%token	KWD_PREFIX		/* PREFIX <prefix_string>	*/
%token	KWD_TAG			/* TAG <prefix_string>		*/

/* Basic types keyword	*/
%token	KWD_BYTE		/* char, 8 bits			*/
%token	KWD_WORD		/* short, 16 bits		*/
%token	KWD_LONG		/* int/long, 32 bits		*/
%token	KWD_QUAD		/* long long, 64 bits		*/
%token	KWD_OCTA		/* 2xlong long, 128 bits	*/
%token	KWD_BFLD		/* Bitfield			*/
%token	KWD_FLOAT		/* float			*/
%token	KWD_DOUBLE		/* double float			*/
%token	KWD_PAGE		/* A 512-octets block		*/

/* Modificators	keywords */
%token	KWD_SIGNED
%token	KWD_UNSIGNED
%token	KWD_DIMENSION
%token	KWD_LENGTH
%token	KWD_PACKED
%token	KWD_PTR
%token	KWD_VOID
%token	KWD_ENTRY

%token	KWD_NOALIGN
%token	KWD_ALIGN

/* Syntetic types keywords */
%token	KWD_ASCIC		/* ASCIC, count prefixed string	*/
%token	KWD_DESC		/* simple DESCRIPTOR		*/
%token	KWD_HWADDR		/* Ethernet MAC address, 48 bits*/
%token	KWD_IPADDR		/* struct sockaddr		*/
%token	KWD_IP4ADDR		/* ...				*/
%token	KWD_IP6ADDR		/* ...				*/
%token	KWD_SOCKET		/* struct sockaddr_in		*/

%token	KWD_CONST KWD_EQ KWD_INC
%token	OPEN_LIST COMMA CLOSE_LIST
%token	KWD_RADIX KWD_DEC KWD_HEX KWD_OCT KWD_BIN

%token	KWD_AGGREGATE KWD_STRUCT KWD_UNION KWD_END

%token	<tval>	sdlvar		/* An internal SDL's variable	*/
%type	<bval>	value

%token	<bval>	decimal		/* Decimal digit		*/
%token	<bval>	hexadecimal	/* A digit in the hex notaion	*/
%token	<bval>	octal		/* ... */

%token	<tval>	id

%token	<tval>	comment
%token	<tval>	quoted_string	/* {tbs} */
%token		EOL
%type	<tval>	tag
%type	<tval>	pref
%type	<bval>	inc

%type	<bval>	sizespec
%type	<bval>	basetypes
%type	<bval>	syntypes
%type	<bval>	aggtypes
%type	<bval>	signspec
%type	<bval>	align
%type	<bval>	radix


%%	/* Beginning of rules	*/

prog	:	%empty
	| prog	line
	| prog	error
	;
		
line
	: comment
	| module
	| end_module
	| aggregate
	| constant
	;			

module	: KWD_MODULE id KWD_IDENT quoted_string EOL
		{ sdl_module (&sdlctx, $2, $4); }
	;

end_module	
	: KWD_END_MODULE EOL
		{ sdl_end_module (sdlctx, sdlctx->module); }
	;

					
value	: sdlvar 	{ $$ = $1; }	/* A has been defined internal SDL's variable	*/
	| decimal	{ $$ = $1; } 	/* Immediate value: 0x11, %d42343 ...		*/
	| hexadecimal	{ $$ = $1; } 	
	| octal		{ $$ = $1; } 	
	;


tag	: KWD_TAG quoted_string 
		{ strcpy($$, $2); } 
	;

pref	: KWD_PREFIX quoted_string
		{ strcpy($$, $2); } 
	;

inc	: KWD_INC value
		{ $$ = $2; }
	;

sizespec
	: KWD_LENGTH value
		{ $$ = $2; }
	| KWD_DIMENSION value
		{ $$ = $2; }
	;

signspec	
	: KWD_SIGNED
		{ $$ = SDL_K_TYPE_SGND; }
	| KWD_UNSIGNED
		{ $$ = SDL_K_TYPE_UNSG; }
	;

/* Base types recognazing rule */
basetypes
	: KWD_PTR
		{ $$ = SDL_K_TYPE_PTR; }
	| KWD_BYTE
		{ $$ = SDL_K_TYPE_BYTE; }
	| KWD_WORD 
		{ $$ = SDL_K_TYPE_WORD; }
	| KWD_LONG
		{ $$ = SDL_K_TYPE_LONG; }
	| KWD_QUAD
		{ $$ = SDL_K_TYPE_QUAD; }
	| KWD_OCTA
		{ $$ = SDL_K_TYPE_OCTA; }
	| KWD_BFLD
		{ $$ = SDL_K_TYPE_BFLD; }
	| KWD_FLOAT
		{ $$ = SDL_K_TYPE_FLT; }
	| KWD_DOUBLE
		{ $$ = SDL_K_TYPE_DBL; }
	;

/* Syntetic types recognizing rule */
syntypes
	: KWD_PACKED
		{ $$ = SDL_K_TYPE_PCKD; }
	| KWD_ASCIC
		{ $$ = SDL_K_TYPE_ASCIC; }
	| KWD_DESC
		{ $$ = SDL_K_TYPE_SDESC; }
	| KWD_HWADDR
		{ $$ = SDL_K_TYPE_HWADDR; }
	| KWD_IPADDR
		{ $$ = SDL_K_TYPE_IPADDR; }
	| KWD_IP4ADDR
		{ $$ = SDL_K_TYPE_IP4ADDR; }
	| KWD_IP6ADDR
		{ $$ = SDL_K_TYPE_IP6ADDR; }
	| KWD_SOCKET
		{ $$ = SDL_K_TYPE_SOCK; }
	| KWD_ENTRY
		{ $$ = SDL_K_TYPE_RTN; }
	| KWD_VOID
		{ $$ = SDL_K_TYPE_VOID; }
	;

align	: KWD_ALIGN
		{ $$ = SDL_K_ALIGN_DEF; }
	| KWD_NOALIGN
		{ $$ = SDL_K_ALIGN_BYTE; }
	| KWD_ALIGN KWD_BYTE
		{ $$ = SDL_K_ALIGN_BYTE; }
	| KWD_ALIGN KWD_WORD
		{ $$ = SDL_K_ALIGN_WORD; }
	| KWD_ALIGN KWD_LONG
		{ $$ = SDL_K_ALIGN_LONG; }
	| KWD_ALIGN KWD_QUAD
		{ $$ = SDL_K_ALIGN_QUAD; }
	| KWD_ALIGN KWD_OCTA
		{ $$ = SDL_K_ALIGN_OCTA; }
	| KWD_ALIGN KWD_PAGE
		{ $$ = SDL_K_ALIGN_PAGE; }
	;

radix	: KWD_RADIX KWD_DEC
		{ $$ = SDL_K_RADIX_DEC; }
	| KWD_RADIX KWD_OCT
		{ $$ = SDL_K_RADIX_OCT; }
	| KWD_RADIX KWD_BIN
		{ $$ = SDL_K_RADIX_BIN; }
	| KWD_RADIX KWD_HEX
		{ $$ = SDL_K_RADIX_HEX; }
	;

aggtypes
	: KWD_STRUCT
		{ $$ = SDL_K_TYPE_STRUCT; }
	| KWD_UNION
		{ $$ = SDL_K_TYPE_UNION; }
	;

constant_opts
	: pref	{ sdl_str2asc ( $1, &sdlconst.pref); } 
			constant_opts
	| tag	{ sdl_qstr2asc ($1,  &sdlconst.tag); } 
			constant_opts

	| EOL { sdl_def_constant (sdlctx, &sdlconst); }
	;

constlist_opts
	: pref	{ sdl_qstr2asc ( $1, &sdlconstlist.pref); } 
			constlist_opts

	| tag	{ sdl_qstr2asc ( $1, &sdlconstlist.tag); } 
			constlist_opts

	| inc
		{ sdl_constlist_inc ( &sdlconstlist, $1); }
			constlist_opts
	| radix
		{ sdl_constlist_radix ( &sdlconstlist, $1); }
			constlist_opts

	| EOL { sdl_def_constlist (sdlctx, &sdlconstlist); }

	;

constlist_ids
	: id KWD_EQ value
		{ sdl_constlist( &sdlconstlist, $1, $3, 1); }
			constlist_ids

	| id 
		{ sdl_constlist( &sdlconstlist, $1, 0, 0); }
			constlist_ids


	| COMMA constlist_ids

	| CLOSE_LIST
	;		

constant
	: KWD_CONST OPEN_LIST constlist_ids KWD_EQ value 
			{sdl_constlist_val (&sdlconstlist, $5); }
			constlist_opts

	| KWD_CONST id KWD_EQ value
		{ sdl_constant(&sdlconst, $2, $4); }
			constant_opts
	;



struct_items 
	: %empty

	| KWD_END id EOL
		{ sdl_aggitem_add(&sdlagg, $2, SDL_K_ITMTYPE_END); }

	| id KWD_STRUCT
		{ sdl_aggitem_add(&sdlagg, $1, SDL_K_ITMTYPE_STRUCT); }
		struct_opts
		struct_items
		KWD_END id EOL
			{ sdl_aggitem_add(&sdlagg, $7, SDL_K_ITMTYPE_END); }

	| id basetypes
		{ sdl_aggitem_add(&sdlagg, $1, SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = $2; }
		field_opts
		struct_items

	| id syntypes
		{ sdl_aggitem_add(&sdlagg, $1, SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = $2; }
		field_opts
		struct_items

	;



union_items 
	: %empty

	| KWD_END id EOL
		{ sdl_aggitem_add(&sdlagg, $2, SDL_K_ITMTYPE_END); }

	| id KWD_STRUCT
		{ sdl_aggitem_add(&sdlagg, $1, SDL_K_ITMTYPE_STRUCT); }
		struct_opts
		struct_items
		KWD_END id EOL
			{ sdl_aggitem_add(&sdlagg, $7, SDL_K_ITMTYPE_END); }

	| id basetypes
		{ sdl_aggitem_add(&sdlagg, $1, SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = $2; }
		field_opts
		struct_items

	| id syntypes
		{ sdl_aggitem_add(&sdlagg, $1, SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = $2; }
		field_opts
		struct_items

	;



/*	STRUCTURE <id> [PREFIX <pref> [TAG <tag]|[ALIGN [<align>]]
*/
struct_opts
	: tag
		{ sdl_qstr2asc($1, &sdlagg.item->tag); }
		struct_opts
	| pref
		{ sdl_qstr2asc($1, &sdlagg.item->pref); }
		struct_opts
	| align
		{ sdlagg.align = $1; }
		struct_opts
	| EOL
	;


/*	UNION <id> [PREFIX <pref> [TAG <tag]]
*/
union_opts
	: tag
		{ sdl_qstr2asc($1, &sdlagg.item->tag); }
		union_opts
	| pref
		{ sdl_qstr2asc($1, &sdlagg.item->pref); }
		union_opts
	| EOL
	;



field_opts
	: sizespec
		{ sdlagg.item->dimension = (1 + ($1)); }
		field_opts
	| signspec
		{ sdlagg.item->typespec |= $1; }
		field_opts
	| EOL
	;





agg_items 
	: %empty

	| KWD_END id EOL
		{ sdl_aggitem_add(&sdlagg, $2, SDL_K_ITMTYPE_END); }

	| id KWD_STRUCT
		{ sdl_aggitem_add(&sdlagg, $1, SDL_K_ITMTYPE_STRUCT); }
		struct_opts 
		struct_items
		agg_items

	| id KWD_UNION
		{ sdl_aggitem_add(&sdlagg, $1, SDL_K_ITMTYPE_UNION); }
		union_opts 
		union_items
		agg_items


	| id basetypes
		{ sdl_aggitem_add(&sdlagg, $1, SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = $2; }
		field_opts
		agg_items

	| id syntypes
		{ sdl_aggitem_add(&sdlagg, $1, SDL_K_ITMTYPE_FIELD);
		  sdlagg.item->typespec = $2; }
		field_opts
		agg_items

	;


agg_opts
	: KWD_STRUCT
		{ sdlagg.aggtype = SDL_K_AGGTYPE_STRUCT; }
		agg_opts
	| KWD_UNION
		{ sdlagg.aggtype = SDL_K_AGGTYPE_UNION; }
		agg_opts
	| tag
		{ sdl_qstr2asc($1, &sdlagg.tag); }
		agg_opts
	| pref
		{ sdl_qstr2asc($1, &sdlagg.pref); }
		agg_opts
	| align
		{ sdlagg.align = $1; }
		agg_opts
	| EOL
	;

aggregate
	: KWD_AGGREGATE id 
		{ sdl_agg_init (&sdlagg, $2); }
			agg_opts
			agg_items
				{ sdl_def_aggregate(sdlctx, &sdlagg, $2); }
	;

%%	/* Start of programs	*/
