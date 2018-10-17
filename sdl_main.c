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
**	 8-FEB-2018	RRL	Adopted to be compiled under Windows
**
**	12-OCT-2018	RRL	Added CLI stuff.
**
**	15-OCT-2018	SYS	X.50-04 : Resolved a problem with processing literal/end_literal.
**--
*/

#include	<stdio.h>
#include	<errno.h>
#ifndef WIN32
#include	<unistd.h>
#endif // !WIN32


#include	"defsdl.h"

#include	"utility_routines.h"
#include	"cli_routines.h"

#include	"sdl_parser.h"
#include	"sdl_lexer.h"


/*
* Defines and includes for enable extend trace and logging
*/
#define		__FAC__	"SDL"		/* Enable empty FAC prefix			*/
#define		__TFAC__ __FAC__ ": "	/* Special prefix for $TRACE			*/


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

/* CLI - Command Line Interface definition section:
 *
 *	P1	-	input .SDL file
 *
 *		/LANGUAGE=C	- produce .H file as output
 *
 *		/TARGET=i386	- target C compiler is GCC for x86 (32-bits)
 *		/TARGET=x86_64	- target C compiler is GCC for x86 (64-bits)
 *
 *		/TARGET=WIN32	- target C compiler is M$ C/C++
 *		/TARGET=WIN64	- target C compiler is M$ C/C++
 */
enum	{
	SDL$K_TARGET_i386 = 1,
	SDL$K_TARGET_x86_64,
	SDL$K_TARGET_WIN32,
	SDL$K_TARGET_WIN64,
	SDL$K_TARGET_VAX,
	SDL$K_TARGET_ALPHA,
	SDL$K_TARGET_IA64,
	SDL$K_TARGET_MIPS,
	SDL$K_TARGET_ARM,
	SDL$K_TARGET_AARCH64,
	SDL$K_TARGET_Z80,
	SDL$K_TARGET_MOTO68000
};

enum	{
	SDL$K_LANG_C = 0,
	SDL$K_LANG_BLISS,
	SDL$K_LANG_ASM,
	SDL$K_LANG_MACRO32
};

#define	SDL$K_LANG_DEFAULT	SDL$K_LANG_C
#define	SDL$K_TARGET_DEFAULT	SDL$K_TARGET_x86_64


CLI_KEYWORD	sdl_target_opts[] = {
			{ .name = {$ASCINI("i386")},	.val = SDL$K_TARGET_i386},
			{ .name = {$ASCINI("x86_64")},	.val = SDL$K_TARGET_x86_64},
			{ .name = {$ASCINI("WIN32")},	.val = SDL$K_TARGET_WIN32},
			{ .name = {$ASCINI("WIN64")},	.val = SDL$K_TARGET_WIN64},
			{ .name = {$ASCINI("VAX")},	.val = SDL$K_TARGET_VAX},
			{ .name = {$ASCINI("ALPHA")},	.val = SDL$K_TARGET_ALPHA},
			{ .name = {$ASCINI("IA64")},	.val = SDL$K_TARGET_IA64},
			{ .name = {$ASCINI("MIPS")},	.val = SDL$K_TARGET_MIPS},
			{ .name = {$ASCINI("ARM")},	.val = SDL$K_TARGET_ARM},
			{ .name = {$ASCINI("AAR64")},	.val = SDL$K_TARGET_AARCH64},
			{ .name = {$ASCINI("Z80")},	.val = SDL$K_TARGET_Z80},
			{ .name = {$ASCINI("MOTO68000")},.val = SDL$K_TARGET_MOTO68000},
			{0}},

		sdl_lang_opts [] = {
			{ .name = {$ASCINI("C")},	.val = SDL$K_LANG_C},
			{ .name = {$ASCINI("BLISS")},	.val = SDL$K_LANG_BLISS},
			{ .name = {$ASCINI("ASM")},	.val = SDL$K_LANG_ASM},
			{ .name = {$ASCINI("MACRO32")},	.val = SDL$K_LANG_MACRO32},
			{0}};

CLI_PQDESC	sdl_quals [] = {
			{ .name = {$ASCINI("LANGUAGE")}, .type = CLI$K_KWD, .kwd = sdl_lang_opts},
			{ .name = {$ASCINI("TARGET")}, .type = CLI$K_KWD, .kwd = sdl_target_opts},
			{ .name = {$ASCINI("DEBUG")}, .type = CLI$K_OPT},
			{0}};

CLI_PQDESC	sdl_params [] = {
			{.pn = CLI$K_P1, .type = CLI$K_FILE, .name = {$ASCINI("Source .SDL file")} },
			{0}};

int	sdl_action	(CLI_CTX * clictx, void *);

CLI_VERB	top_commands []  = {
	{ .name = {$ASCINI("SDL")}, .params = sdl_params, .quals = sdl_quals , .act_rtn = sdl_action  },
	{0}};


int	sdl_action	(CLI_CTX * clictx, void *arg)
{
int	status, v_lang = SDL$K_LANG_C, v_target = SDL$K_TARGET_x86_64, v_debug = 0;
void *	scanner;
ASC	p_infile = {0}, q_lang = {0}, q_target = {0};
FILE *	finp;

	/*
	 * Retreive input arguments from the  has been parsed command line
	 */

	/* Source .SDL file ... */
	if ( !(1 & (status = cli$get_value(clictx, sdl_params, &p_infile))) )
		return	$LOG(STS$K_FATAL, "No input .SDL file is provided");

	/* A target language, C is default ... */
	if ( !(1 & (status = cli$get_value(clictx, &sdl_quals[0], &q_lang))) )
		{
		$LOG(STS$K_INFO, "Default target language is C");
		v_lang = SDL$K_LANG_DEFAULT;
		}

	/* A target platform, default is x86_64 ... */
	if ( !(1 & (status = cli$get_value(clictx, &sdl_quals[1], &q_target))) )
		{
		$LOG(STS$K_INFO, "Default target platform is x86_64");
		v_target = SDL$K_TARGET_DEFAULT;
		}

	/* Do we need to performs some debuging ? */
	v_debug = (1 & (status = cli$get_value(clictx, &sdl_quals[2], NULL)));

	/* Open input .SDL file ... */
	if ( !(finp = (fopen($ASCPTR(&p_infile), "r"))) )
		return	$LOG(STS$K_FATAL, "Cannot open '%.*s', errno = %d", $ASCPTR(&p_infile), errno);


	/* Start main work: processing source .SDL file ... */
	yylex_init(&scanner);
	yyset_debug(v_debug, scanner);
	yydebug = v_debug;


	yyset_in(finp, scanner);

	//do {
		yyparse(scanner);
	//} while ( !feof(finp) );

	yylex_destroy(scanner);



	return	$LOG(STS$K_SUCCESS, "'%.*s' has been processed", $ASC(&p_infile));
}


$ASCDECL(prompt, "SDL");

int	main	(int argc, char *argv[] )
{
int	status;
void	*clictx = NULL;

	/* Dump to screen verbs definitions */
	cli$show_verbs (top_commands, 0);

	/* Process command line arguments */
	argv[0] = $ASCPTR(&prompt);
	if ( !(1 & (status = cli$parse (top_commands, CLI$M_OPTRACE | CLI$M_OPSIGNAL, argc, argv, &clictx))) )
		return	-EINVAL;

	cli$show_ctx(clictx);

	if ( !(1 & (status = cli$dispatch(clictx))) )
		return	-EINVAL;


#if	0

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
#endif

	return	0;
}
