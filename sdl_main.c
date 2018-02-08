#define	__MODULE__	"SDL"
#define	__IDENT__	"X.50-04"

/*
**++
**
**  FACILITY:  StarLet Structure Definition Language processor
**
**  ABSTRACT: A portable implementation of SDL processor (Structure Definition Language, The) based on the
**	OpenVMS father.
**
**  DESCRIPTION: Main SDL processor module, accept and parse command line arguments, initialize parser contexts,
**	call yyparse() routine to process input SDL-file.
**
**  BUILD:
**	$ make Makefile
**	or
**	$ flex -d -i --header-file=sdl_lexer.h --outfile=sdl_lexer.c sdl_lexer.l
**	$ bison -d -t --debug --report=all --output-file=sdl_parser.c --defines=sdl_parser.h --warnings=all --feature=all sdl_parser.y
**	$ gcc -g -w -DYYDEBUG=1 -D_DEBUG=1 sdl_main.c sdl_lexer.c sdl_parser.c sdl_parser_rtns.c utility_routines.c -o sdl
**
**  USAGE:
**	$ ./sdl <input_SDL_file> [qualifiers]
**		/LANGUAGE=C	- produce .H file as output
**
**		/TARGET=i386	- target C compiler is GCC for x86 (32-bits)
**		/TARGET=x86_64	- target C compiler is GCC for x86 (64-bits)
**
**		/TARGET=WIN32	- target C compiler is M$ C/C++
**		/TARGET=WIN64	- target C compiler is M$ C/C++
**
**
**  AUTHORS: Ruslan R. Laishev (RRL)
**
**  CREATION DATE:  3-NOV-2017
**
**  MODIFICATION HISTORY:
**
**	23-NOV-2017	RRL	Added some comments.
**
**	 8-FEB-2018	RRL	Adaptation to compile under Windows
**
**
**--
*/

#include	<stdio.h>
#include	<errno.h>
#ifndef WIN32
#include	<unistd.h>
#endif // !WIN32


#include	"defsdl.h"

/*
* Defines and includes for enable extend trace and logging
*/
#ifdef _DEBUG
	#define	__TRACE__	1
#endif // _DEBUG

#define		__FAC__	"SDL"		/* Enable empty FAC prefix			*/
#define		__TFAC__ __FAC__ ": "	/* Special prefix for $TRACE			*/
#include	"utility_routines.h"

#include	"sdl_parser.h"
#include	"sdl_lexer.h"

extern int literal_state;


void	yyerror (
	YYLTYPE *	locp,
	yyscan_t *	scanner,
	char const *	msg
		)
{
	$LOG(STS$K_ERROR, "[%d:%d] -> [%d:%d], literal_state = %d, %s", locp->first_line, locp->first_column,
		locp->last_line, locp->last_column, literal_state, msg);
}

extern int yydebug;

int	main	(int argc, char *argv[] )
{
int	status;
void *	scanner;
FILE *	finp;

	if ( argc < 2 )
		return	$LOG(STS$K_WARN, "No input specified");

	if ( !(finp = (fopen(argv[1], "r"))) )
		return	$LOG(STS$K_FATAL, "Cannot open '%s', errno = %d", argv[1], errno);

	/* Start parsing ... */
	yylex_init(&scanner);
	yyset_debug(1, scanner);
	yydebug = 0;


	yyset_in(finp, scanner);

	//do {
		yyparse(scanner);
	//} while ( !feof(finp) );

	yylex_destroy(scanner);

	return	$LOG(STS$K_SUCCESS, "'%s' has been processed", argv[1]);
}
