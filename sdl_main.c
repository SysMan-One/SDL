#define	__MODULE__	"SDL"

/*
**++
**
**  FACILITY:  StarLet Structure Definition Language processor
**
**  ABSTRACT: A portable implementation of SDL processor (Structure Definition Language, The) based on the
**	OpenVMS father.
**
**  AUTHORS: Ruslan R. Laishev (RRL)
**
**  CREATION DATE:  3-NOV-2017
**
**  MODIFICATION HISTORY:
**
**--
*/

#include	<stdio.h>
#include	<errno.h>
#include	<unistd.h>

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


void	yyerror (
	YYLTYPE *	locp,
	yyscan_t *	scanner,
	char const *	msg
		)
{
	$LOG(STS$K_ERROR, "[%d:%d] -> [%d:%d], %s", locp->first_line, locp->first_column,
		locp->last_line, locp->last_column, msg);
}


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

	yyset_in(finp, scanner);

	//do {
		yyparse(scanner);
	//} while ( !feof(finp) );

	yylex_destroy(scanner);

	return	$LOG(STS$K_SUCCESS, "'%s' has been processed", argv[1]);
}
