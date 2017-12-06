#define	__MODULE__	"SDL_ACTRTN"
#define	__IDENT__	"X.05-02"

/*
**++
**
**  FACILITY:  StarLet Structure Definition Language
**
**  ABSTRACT: A set of 'actions' routines is supposed to be called from the sdl_parser.c
**
**  AUTHORS: Ruslan R. Laishev (RRL)
**
**  CREATION DATE:  9-NOV-2017
**
**  MODIFICATION HISTORY:
**
**	22-NOV-2017	RRL	Added handling of the ALIGN attribute of the structure/union
**
**--
*/

#include	<stdio.h>
#include	<fcntl.h>
#include	<errno.h>
#include	<unistd.h>
#include	<strings.h>
#include	<ctype.h>
#include	<sys/uio.h>

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

extern	int	trace;


/**
 * @brief sdl_qstr2asc - Copying quoted ASCIIZ string (with conversion to lower case)
 *	 to ASCIC container.
 *
 * @param src - A source quoted ASCIIZ string
 * @param dst - An ASCIC container to accept result of copying
 *
 * @return	- an actual data length in the ASCIC
 */
int	sdl_qstr2asc
			(
		char *	src,
		ASC *	dst
			)
{
int	len, q;
char	*cp = $ASCPTR(dst);

	len = strnlen(src, ASC$K_SZ);
	$ASCLEN(dst) = 0;

	for (q = 0; len; src++ )
		{
		if ( (*src) == '"' )
			{
			if ( q )
				break;
			else	{
				q = 1;
				continue;
				}
			}


		if ( !q )
			continue;


		*(cp++) = (unsigned char) tolower(*src);
		$ASCLEN(dst)++;
		}

	return	$ASCLEN(dst);
}

/**
 * @brief sdl_asc2up - convert ASCIC string to upper case
 *
 * @param src - ASCIC string to be converted
 *
 * @return	- an actual data length in the ASCIC
 */
int	sdl_asc2up	(
		ASC *	src
			)
{
int	len;
unsigned char *	cp;

	for ( len = $ASCLEN(src), cp = $ASCPTR(src); len; len--, cp++ )
	      *(cp) = (unsigned char) toupper(*cp);
}

/**
 * @brief sdl_asc2low - convert ASCIC string to lower case
 *
 * @param src - ASCIC string to be converted
 *
 * @return	- an actual data length in the ASCIC
 */
int	sdl_asc2low
			(
		ASC *	src
			)
{
int	len;
unsigned char *	cp;

	for ( len = 1 + $ASCLEN(src), cp = $ASCPTR(src); len; len--, cp++ )
	      *(cp) = (unsigned char) tolower(*cp);
}

int	sdl_end_module	(
	SDL_CTX *	sdlctx
			)
{
char	buf[8192];
int	len, status;

	/* Generate and write to file footer part of definitions */
	len = sprintf(buf,
		CRLF CRLF "#ifdef __cplusplus" CRLF \
		"	}" CRLF \
		"#endif" CRLF \
		CRLF \
		"#pragma	pack (pop)" CRLF);

	len += sprintf(buf + len,
		"#endif /* __%s_LOADED */" CRLF, $ASCPTR(&sdlctx->module));

	if ( len != (status = write(sdlctx->fd, buf, len)) )
		return	$LOG(STS$K_FATAL, "write(%d octets) -> %d, errno = %d", len, status, errno);

	close(sdlctx->fd);
	free(sdlctx);

	return	STS$K_SUCCESS;

}

int	sdl_module	(
	SDL_CTX **	sdlctx,
		char *	modname,
		char *	ident
			)
{
char	buf[8192];
int	len, status;
SDL_CTX * ctx;

	$TRACE("Module: %s, IDENT: %s", modname, ident);

	if ( !(ctx = calloc(1, sizeof(SDL_CTX))))
		return	$LOG(STS$K_FATAL, "Insufficient memory, errno = %d", errno);

	ctx->fd = -1;
	$ASCLEN( &ctx->ext) = len = 1;
	memcpy( $ASCPTR( &ctx->ext), "h", len);

	/* Generate a filename (<module_name> + <ext>) */
	len = sprintf(buf, "%s.%.*s", modname, $ASC(&ctx->ext));

	if ( 0 < ctx->fd )
		{
		$LOG(STS$K_FATAL, "MODULE %.*s has not been closed by END_MODULE directive", $ASC( &ctx->module) );
		return	$LOG(STS$K_FATAL, "Cannot start MODULE %s (IDENT %s) processing", modname, ident);
		}

	/* Open a file to store generated definitions */
	if ( 0 > (ctx->fd = open(buf, O_WRONLY | O_TRUNC | O_CREAT)) )
		return	$LOG(STS$K_FATAL, "Cannot create output %s, errno = %d", buf, errno);

	/* Save module name */
	$ASCLEN( &ctx->module) = (unsigned char) strnlen( modname, ASC$K_SZ );
	memcpy( $ASCPTR( &ctx->module), modname, $ASCLEN( &ctx->module) );

	/* Generate and write to file a module's header, and .H preamble */
	len = sprintf(buf,
		"/*** MODULE %s IDENT %s ***/" CRLF \
		"#ifndef __%s_LOADED" CRLF \
		"#define __%s_LOADED 1" CRLF, modname, ident ? ident : "X.00-00", modname, modname);

	len += sprintf(buf + len,
		"#pragma	pack (push)" CRLF \
		"#pragma	pack" CRLF \
		CRLF \
		"#ifdef __cplusplus" CRLF \
		"	extern \"C\" {" CRLF \
		"#endif" CRLF CRLF CRLF);

	if ( len != (status = write(ctx->fd, buf, len)) )
		return	$LOG(STS$K_FATAL, "write(%d octets) -> %d, errno = %d", len, status, errno);

	*sdlctx = ctx;

	return	STS$K_SUCCESS;
}


inline static char *	radix2fmt
		(
		int	radix
		)
{
	switch ( radix )
		{
		case	SDL_K_RADIX_BIN:
			return	"%llb";
		case	SDL_K_RADIX_HEX:
			return	"%#llx";
		case	SDL_K_RADIX_OCT:
			return	"%#llo";
		}

	/* SDL_K_RADIX_DEC */
	return	"%lld";
}



struct __tbl_types {
	int	type;

	char	pref[16],
		ctype[32];
};

const struct __tbl_types tbl_types [] = {
	{SDL_K_TYPE_BYTE, "b", "char "},
	{SDL_K_TYPE_WORD, "w", "short "},
	{SDL_K_TYPE_LONG, "l", "int "},
	{SDL_K_TYPE_QUAD, "q", "long long "},
	{SDL_K_TYPE_OCTA, "o", "quadword "},
	{SDL_K_TYPE_BFLD, "v", "bitfield "},
	{SDL_K_TYPE_FLT, "f", "float "},
	{SDL_K_TYPE_DBL, "d", "double "},
	{SDL_K_TYPE_PCKD, "p", "packed "},
	{SDL_K_TYPE_ASCIC, "ac", "ASC "},
	{SDL_K_TYPE_SDESC, "ds", "DESCRIPTOR "},
	{SDL_K_TYPE_HWADDR, "hw", "HWADDR "},
	{SDL_K_TYPE_IPADDR, "ip", "struct in_addr "},
	{SDL_K_TYPE_IP4ADDR, "ip4", "struct in_addr "},
	{SDL_K_TYPE_IP6ADDR, "ip6", "struct in_addr6 "},
	{SDL_K_TYPE_SOCK, "sk", "struct sockaddr_in "},
	{SDL_K_TYPE_RTN, "r",	"()(...) "},
	{SDL_K_TYPE_PTR, "a",	"* "},
	{SDL_K_TYPE_UNSG, "", "unsigned "},
	{0, 0} };



inline static char *	type2pref
		(
		int	type
		)
{
int	mask, bit;
struct __tbl_types * tbl_ptr = &tbl_types;

	for ( mask = 1, bit = 0; bit < 32; bit++, mask <<= 1)
		{
		for ( tbl_ptr = tbl_types; tbl_ptr->pref && tbl_ptr->type; tbl_ptr++ )
			if ( tbl_ptr->type & (mask & type) )
				return	tbl_ptr->pref;
		}

	return	"?x?";
}


inline static char *	type2ctype
		(
		int	type,
		char *	ctype
		)
{
int	mask, bit;
struct __tbl_types * tbl_ptr = &tbl_types;
char	buf[64] = {0};

	for ( mask = 1, bit = 0; bit < 32; bit++, mask <<= 1)
		{
		for ( tbl_ptr = tbl_types; tbl_ptr->ctype && tbl_ptr->type; tbl_ptr++ )
			if ( tbl_ptr->type & (mask & type) )
				{
				strcat(buf, tbl_ptr->ctype);
				break;
				}
		}

	if ( strlen(buf) )
		return	strcpy(ctype, buf);


	return	"?x?";
}



int	sdl_constant	(
	SDL_CONSTANT *	ctx,
		char *	id,
		int	val
			)
{
	memset(ctx, 0, sizeof(SDL_CONSTANT) );

	$ASCLEN(&ctx->id) = (unsigned char) strnlen(id, ASC$K_SZ);
	memcpy($ASCPTR(&ctx->id), id, $ASCLEN(&ctx->id) );

	ctx->val = val;

	return	STS$K_SUCCESS;
}


int	sdl_def_constant(
		SDL_CTX *	sdlctx,
		SDL_CONSTANT *	ctx
		)
{
char	buf[8192], *src, *dst;
int	len, status;

	/* Generate and write to file footer part of definitions */
	len = sprintf(buf, "#define	%.*s$K_%.*s$%.*s	%d" CRLF,
		      $ASC(&ctx->pref), $ASC(&ctx->tag), $ASC(&ctx->id), ctx->val );

	for ( status = 0, src = dst = buf; len > 0; len--, src++)
		if ( *src != '"' )
			{
			*dst = (char) toupper(*src);
			dst++;
			status++;
			}

	len = status;

	if ( len != (status = write(sdlctx->fd, buf, len)) )
		return	$LOG(STS$K_FATAL, "write(%d octets) -> %d, errno = %d", len, status, errno);
}


int	sdl_constlist	(
	SDL_CONSTLIST *	li,
		char *	id,
		int	val,
		int	setf
			)
{
int	count, status;
SDL_CONSTITEM *ci;

	if ( !(ci = calloc(1, sizeof(SDL_CONSTITEM))) )
		return	$LOG(STS$K_FATAL, "Insufficient memory to allocate %d octets, errno = %d", sizeof(SDL_CONSTITEM), errno);

	$ASCLEN(&ci->id) = (unsigned char) strnlen(id, ASC$K_SZ);
	memcpy($ASCPTR(&ci->id), id, $ASCLEN(&ci->id) );

	ci->val = val;
	ci->setf= setf;

	if ( !(1 & (status = $INSQTAIL(li, ci, &count))) )
		$LOG(status, "Error addition of the %s", id);

	return	STS$K_SUCCESS;
}


int	sdl_def_constlist(
		SDL_CTX *	sdlctx,
		SDL_CONSTLIST *	li
		)
{
char	buf[8192], *src, *dst;
int	len, status, val = li->val, count;
SDL_CONSTITEM *ci;
struct iovec iov [] = { {buf, 0}, {CRLF, 2} };

	while ( 1 & $REMQHEAD(li, &ci, &count) )
		{
		if ( !count )
			break;

		val = ci->setf ? ci->val : val;

		/* Generate and write to file footer part of definitions */
		len = sprintf(buf, "#define	%.*s$K_%.*s$%.*s\t",
			      $ASC(&li->pref), $ASC(&li->tag), $ASC(&ci->id));

		for ( status = 0, src = dst = buf; len > 0; len--, src++)
			if ( *src != '"' )
				{
				*dst = (char) toupper(*src);
				dst++;
				status++;
				}

		len = status;
		len += sprintf(buf + status, radix2fmt (li->radix), val );

		iov[0].iov_len = len;
		len += iov[1].iov_len;

		if ( len != (status = writev(sdlctx->fd, iov, 2)) )
			{
			$LOG(STS$K_FATAL, "write(%d octets) -> %d, errno = %d", len, status, errno);
			break;
			}

		val	+= li->inc;

		free(ci);
		}

	return	STS$K_SUCCESS;
}


int	sdl_agg_init	(
		SDL_AGGREGATE *	agg,
		char *		id
			)
{
int	len = (id ? strnlen(id, ASC$K_SZ) : 0);

	$TRACE("AGGREGATE <id=%s>", id);

	/* Check that previous AGGREGATE has been closed by END_AGGREGATE */
	if ( id && $ASCLEN(&agg->id) )
		if ( ($ASCLEN(&agg->id) == len)
			|| strncasecmp(id, $ASCPTR(&agg->id), len) )
		return	$LOG(STS$K_ERROR, "AGGREGATE %.s has not been closed");

	/* Initialize context for new AGGREGATE */
	memset (agg, 0, sizeof(SDL_AGGITEM) );

	sdl_str2asc(id, &agg->id);
	sdl_str2asc(id, &agg->tag);

	$TRACE("AGGREGATE <id=%.*s>, TAG <%.*s>", $ASC(&agg->id), $ASC(&agg->tag) );
}

int	sdl_aggitem_add	(
		SDL_AGGREGATE *	agg,
		char *		id,
		int		itmtype
			)
{
int	status, count;
SDL_AGGITEM * itm;

	if ( !(itm = calloc(1, sizeof(SDL_AGGITEM))) )
		return	$LOG(STS$K_FATAL, "Insufficient memory to allocate %d octets, errno = %d", sizeof(SDL_AGGITEM), errno);

	sdl_str2asc(id, &itm->id);
	sdl_str2asc(id, &itm->tag);

	agg->item = itm;
	agg->item->itemtype = itmtype;

	if ( !(1 & (status = $INSQTAIL(agg, itm, &count))) )
		$LOG(status, "Error addition of the %s", id);

	$TRACE("ITEM #%d <id=%.*s>, TAG <%.*s>", itmtype, $ASC(&itm->id), $ASC(&itm->tag) );

	return	STS$K_SUCCESS;
}

int	sdl_def_aggregate(
		SDL_CTX *	sdlctx,
		SDL_AGGREGATE *	agg
		)
{
char	buf[8192], ctype[64], fill[128];
int	len, status, count, deeplvl, align = 0;
SDL_AGGITEM *itm;
struct iovec iov [] = { {fill, 0}, {buf, 0}, {CRLF, 2} };
ASC	stack_tag[32];

	memset(fill, ' ', sizeof(fill) );

	deeplvl = 0;
	stack_tag[0] = agg->tag;


	/* Start of definition ... */
	len = sprintf(buf, "\n#pragma	pack (push)\n" );

	if ( agg->align == SDL_K_ALIGN_DEF )
		len += sprintf(buf + len, "#pragma	pack\n");
	else	len += sprintf(buf + len, "#pragma	pack %d\n", agg->align);

	len += sprintf(buf + len, "typedef	%s	__%.*s%.*s__ {\n",
		(agg->aggtype == SDL_K_AGGTYPE_STRUCT) ? "struct" : "union",
		$ASC(&agg->pref), $ASC(&agg->id) );

	if ( len != (status = write(sdlctx->fd, buf, len)) )
		return	$LOG(STS$K_FATAL, "write(%d octets) -> %d, errno = %d", len, status, errno);


	while ( 1 & $REMQHEAD(&agg->list, &itm, &count) )
		{
		if ( !count )
			break;


		/* Nested STRUCTURE/UNION <id>  ... END <id> */
		if ( (itm->itemtype == SDL_K_ITMTYPE_STRUCT)
		     || (itm->itemtype == SDL_K_ITMTYPE_UNION) )
			{
			iov[0].iov_len = (1 + deeplvl) * 4;

			if ( (itm->itemtype == SDL_K_ITMTYPE_STRUCT) &&
				(align = (agg->align != itm->align)) )
				{
				len = sprintf(buf, "#pragma	pack (push) /* begin-of-%.*s */\n#pragma	pack %d\n", $ASC(&itm->id), itm->align);

				if ( len != (status = write(sdlctx->fd, buf, len)) )
					return	$LOG(STS$K_FATAL, "write(%d octets) -> %d, errno = %d", len, status, errno);
				}

			iov[1].iov_len = sprintf(buf , "%s /* %.*s */ {",
				   (itm->itemtype == SDL_K_ITMTYPE_STRUCT) ? "struct" : "union",
				      $ASC(&itm->id));

			if ( 0 > (status = writev(sdlctx->fd, iov, 3)) )
				return	$LOG(STS$K_FATAL, "write(%d octets) -> %d, errno = %d", len, status, errno);

			deeplvl++;
			stack_tag[deeplvl] = itm->tag;
			}
		else if ( itm->itemtype == SDL_K_ITMTYPE_END )
			{
			if ( deeplvl )
				{
				iov[1].iov_len = sprintf(buf, "} %.*s;", $ASC(&itm->id));

				if ( 0 > (status = writev(sdlctx->fd, iov, 3)) )
					return	$LOG(STS$K_FATAL, "write(%d octets) -> %d, errno = %d", len, status, errno);


				if ( align )
					len = sprintf(buf, "\n#pragma	pack (pop) /* end-of-%.*s */\n", $ASC(&itm->id));

				if ( len != (status = write(sdlctx->fd, buf, len)) )
					return	$LOG(STS$K_FATAL, "write(%d octets) -> %d, errno = %d", len, status, errno);


				deeplvl--;
				iov[0].iov_len = (1 + deeplvl) * 4;
				}
			}
		else	{
			/* Generate and write to file footer part of definitions */
			iov[0].iov_len = (1 + deeplvl) * 4;

			if ( !itm->dimension )
				iov[1].iov_len = sprintf(buf, "%s	%.*s%s_%.*s;",  type2ctype (itm->typespec, ctype),
					      $ASC(&stack_tag[deeplvl]), type2pref (itm->typespec), $ASC(&itm->id));
			else	iov[1].iov_len = sprintf(buf, "%s	%.*s%s_%.*s[%d];",  type2ctype (itm->typespec, ctype),
						$ASC(&stack_tag[deeplvl]), type2pref (itm->typespec), $ASC(&itm->id),
							 itm->dimension - 1);

			if ( 0 > (status = writev(sdlctx->fd, iov, 3)) )
				{
				$LOG(STS$K_FATAL, "write(%d octets) -> %d, errno = %d", len, status, errno);
				break;
				}
			}

		free(itm);
		}


	/* End of definition ... */
	sdl_asc2up (&agg->id);
	sdl_asc2up (&agg->pref);

	len = sprintf(buf, "} %.*s%.*s;\n", $ASC(&agg->pref), $ASC(&agg->id) );
	len += sprintf(buf + len, "#pragma	pack (pop)\n");

	if ( len != (status = write(sdlctx->fd, buf, len)) )
		return	$LOG(STS$K_FATAL, "write(%d octets) -> %d, errno = %d", len, status, errno);


	/* Reset AGGREGATE context area */
	memset(agg, 0, sizeof(SDL_AGGITEM));

	return	STS$K_SUCCESS;
}


int	sdl_comment	(
		SDL_CTX *	sdlctx,
		char	*	comment
			)
{
int	status, len;
struct iovec iov [] = { {comment, 0}, {" */" CRLF, 5} };

	if ( ! sdlctx || !sdlctx->fd )
		return	STS$K_WARN;

	len = iov[0].iov_len = strnlen(comment, 512);
	len += iov[1].iov_len;

	if ( 0 > (status = writev(sdlctx->fd, iov, 2)) )
		return	$LOG(STS$K_FATAL, "write(%d octets) -> %d, errno = %d", len, status, errno);

	return	STS$K_SUCCESS;
}
