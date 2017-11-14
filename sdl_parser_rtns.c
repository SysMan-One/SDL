#define	__MODULE__	"SDL_ACTRTN"

/*
**++
**
**  FACILITY:  StarLet Structure Definition Language
**
**  ABSTRACT: A set of 'actions' routines is supposed to be called from the sdl_parser.
**
**  AUTHORS: Ruslan R. Laishev (RRL)
**
**  CREATION DATE:  9-NOV-2017
**
**  MODIFICATION HISTORY:
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

	return	"%lld";
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

int	sdl_const_pref	(
	SDL_CONSTANT *	ctx,
		char *	pref
			)
{
	$ASCLEN(&ctx->pref) = (unsigned char) strnlen(pref, ASC$K_SZ);
	memcpy($ASCPTR(&ctx->pref), pref, $ASCLEN(&ctx->pref) );

	return	STS$K_SUCCESS;
}

int	sdl_const_tag	(
	SDL_CONSTANT *	ctx,
		char *	tag
			)
{
	$ASCLEN(&ctx->tag) = (unsigned char) strnlen(tag, ASC$K_SZ);
	memcpy($ASCPTR(&ctx->tag), tag, $ASCLEN(&ctx->tag) );

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


int	sdl_align	(
		SDL_CTX	*	ctx,
		int		align
			)
{
	return	STS$K_SUCCESS;
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

	status = $INSQTAIL(li, ci, &count);

	return	STS$K_SUCCESS;
}


int	sdl_constlist_radix	(
	SDL_CONSTLIST *	clist,
		int	radix
			)
{
	clist->radix = radix;

	return	STS$K_SUCCESS;
}


int	sdl_constlist_inc	(
	SDL_CONSTLIST *	clist,
		int	inc
			)
{
	clist->inc = inc;

	return	STS$K_SUCCESS;
}

int	sdl_constlist_val	(
	SDL_CONSTLIST *	clist,
		int	val
			)
{
	clist->val = val;

	return	STS$K_SUCCESS;
}


int	sdl_constlist_pref(
	SDL_CONSTLIST *	ctx,
		char *	pref
			)
{
	$ASCLEN(&ctx->pref) = (unsigned char) strnlen(pref, ASC$K_SZ);
	memcpy($ASCPTR(&ctx->pref), pref, $ASCLEN(&ctx->pref) );

	return	STS$K_SUCCESS;
}

int	sdl_constlist_tag	(
	SDL_CONSTLIST *	ctx,
		char *	tag
			)
{
	$ASCLEN(&ctx->tag) = (unsigned char) strnlen(tag, ASC$K_SZ);
	memcpy($ASCPTR(&ctx->tag), tag, $ASCLEN(&ctx->tag) );

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
