#define	__MODULE__	"SDL_ACTRTN"
#define	__IDENT__	"X.50-05"

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
**	 6-DEC-2017	RRL	Added action routines to get/set SDL's variables.
**
**	12-OCT-2018	RRL	Replace sscanf() with strtoull()
**
**	18-OCT-2018	SYS	Added predefined run-time SDL' Variables:
**				#SDL_LANGUAGE	- a target language, see /LANGUAGE
**				#SDL_ARCH		- Architecture name , see /ARCH
**				#SDL_SOURCE		- an SDL' source file name
**				#SDL_SRCMODTM		- an SDL' modification date&time
**
**	23-OCT-2018	RRL	Fixed a bug with definition pointer to user defined type.
**--
*/

#include	<stdio.h>
#include	<fcntl.h>
#include	<errno.h>
#include	<ctype.h>

#ifndef WIN32

#include	<unistd.h>
#include	<strings.h>
#include	<sys/uio.h>

#else

#include	<WinSock2.h>
#include	<Windows.h>


#ifdef WIN32
#define	strncasecmp	strnicmp
#else

#endif // WIN32

#endif // !WIN32


#include	"defsdl.h"

/*
* Defines and includes for enable extend trace and logging
*/
#define		__FAC__	"SDL"		/* Enable empty FAC prefix			*/
#define		__TFAC__ __FAC__ ": "	/* Special prefix for $TRACE			*/
#include	"utility_routines.h"

extern	int	trace;

const	char remprefix [] = "\t//";


unsigned long long sdl_hex2ull	(char *src)
{
char	*endptr;

	return	 strtoull(src, &endptr, 16);
}

unsigned long long sdl_oct2ull	(char *src)
{
char	*endptr;

	return	 strtoull(src, &endptr, 8);
}

#ifdef WIN32

typedef struct iovec	{
	char *	iov_base;
	size_t	iov_len;
} IOVEC;

int	writev	(
		HANDLE	 fd,
		IOVEC	*iov,
		int	 iocnt
		)
{
int	status, len = 0;

	for ( ;iocnt ; iocnt--, len += iov->iov_len)
		{
		if ( !WriteFile(fd, iov->iov_base, iov->iov_len, &status, NULL) )
			{
			$LOG(STS$K_ERROR, "WriteFile(), errno=%d", status = GetLastError() );
			return	-status;
			}
		}

	return	len;
}

#endif // WIN32


int	sdl_const_rem	(
			char *	src,
		SDL_CONSTANT *	dst
			)
{
int	len;
ASC *	a = &dst->rem;

	$ASCLEN(a) = (unsigned char) sizeof(remprefix) - 1;
	memcpy( $ASCPTR(a), remprefix, $ASCLEN(a) );

	len = strnlen(src, ASC$K_SZ);
	len -= 1;
	src += 1;

	memcpy( $ASCPTR(a) + $ASCLEN(a), src, len );

	$ASCLEN(a) += len;

	return	$ASCLEN(a);
}


int	sdl_constlist_rem	(
			char *	src,
		SDL_CONSTLIST *	dst
			)
{
int	len;
ASC *	a;


	if ( dst->item )
		a = &dst->item->rem;
	else	a = &dst->rem;

	$ASCLEN(a) = (unsigned char) sizeof(remprefix) - 1;
	memcpy( $ASCPTR(a), remprefix, $ASCLEN(a) );

	len = strnlen(src, ASC$K_SZ);
	len -= 2;
	src += 2;

	memcpy( $ASCPTR(a) + $ASCLEN(a), src, len );

	$ASCLEN(a) += len;

	return	$ASCLEN(a);
}


/**
 * @brief sdl_addrem - Copy remark/comment line to ASCIC container.
 *
 * @param src - A source quoted ASCIIZ string
 * @param dst - An ASCIC container to accept result of copying
 *
 * @return	- an actual data length in the ASCIC
 */
int	sdl_aggitem_rem	(
			char *	src,
		SDL_AGGITEM *	dst
			)
{
int	len;
ASC *	a = &dst->rem;

	$ASCLEN(a) = (unsigned char) sizeof(remprefix) - 1;
	memcpy( $ASCPTR(a), remprefix, $ASCLEN(a) );

	len = strnlen(src, ASC$K_SZ);
	len -= 2;
	src += 2;

	memcpy( $ASCPTR(a) + $ASCLEN(a), src, len );

	$ASCLEN(a) += len;

	return	$ASCLEN(a);
}


int	sdl_agg_rem	(
			char *	src,
		SDL_AGGREGATE *	dst
			)
{
int	len;
ASC *	a;


	if ( dst->item )
		a = &dst->item->rem;
	else	a = &dst->rem;

	$ASCLEN(a) = (unsigned char) sizeof(remprefix) - 1;
	memcpy( $ASCPTR(a), remprefix, $ASCLEN(a) );

	len = strnlen(src, ASC$K_SZ);
	len -= 2;
	src += 2;

	memcpy( $ASCPTR(a) + $ASCLEN(a), src, len );

	$ASCLEN(a) += len;

	return	$ASCLEN(a);
}




/**
 * @brief sdl_qstr2asc - Copying quoted ASCIZ string (with conversion to upper case)
 *	 to ASCIC container.
 *
 * @param src - A source quoted ASCIZ string
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

	if ( !memchr(src, '"', len) )
		{
		while ( *(cp++) = (unsigned char) toupper(*(src++)) )
			$ASCLEN(dst)++;

		return	$ASCLEN(dst);
		}

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


		*(cp++) = *src;
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
		return	$LOG(STS$K_FATAL, "write(%d octets)->%d, errno=%d", len, status, errno);

	close(sdlctx->fd);
	free(sdlctx);

	return	STS$K_SUCCESS;

}

int	sdl_module	(
	SDL_CTX *	sdlctx,
		char *	modname,
		char *	ident
			)
{
char	buf[8192], v_target[ASC$K_SZ], v_lang[ASC$K_SZ], v_src[ASC$K_SZ],  v_mtime[ASC$K_SZ];
int	len, status;
struct	tm	_tm = {0};

	$TRACE("Module: %s, IDENT: %s", modname, ident);

	sdl_var_get(sdlctx, "#SDL_LANGUAGE", v_lang, SDL_K_VARTYPE_STR);
	sdl_var_get(sdlctx, "#SDL_TARGET", v_target, SDL_K_VARTYPE_STR);
	sdl_var_get(sdlctx, "#SDL_SOURCE", v_src, SDL_K_VARTYPE_STR);
	sdl_var_get(sdlctx, "#SDL_SRCMODTM", &v_mtime, SDL_K_VARTYPE_STR);

	sdl_str2asc("h", &sdlctx->ext);

	/* Generate a filename (<module_name> + <ext>) */
	len = sprintf(buf, "%s.%.*s", modname, $ASC(&sdlctx->ext));

	if ( 0 < sdlctx->fd )
		{
		$LOG(STS$K_FATAL, "MODULE %.*s has not been closed by END_MODULE directive", $ASC( &sdlctx->module) );
		return	$LOG(STS$K_FATAL, "Cannot start processing of MODULE %s (IDENT %s)", modname, ident);
		}

	/* Open a file to store generated definitions */
	if ( 0 > (sdlctx->fd = open(buf, O_WRONLY | O_TRUNC | O_CREAT)) )
		return	$LOG(STS$K_FATAL, "Cannot create output %s, errno=%d", buf, errno);

	/* Save module name */
	sdl_str2asc(modname, &sdlctx->module);

	/* Generate and write to file a module's header, and .H preamble */
	len = sprintf (buf,
		"/*" CRLF \
		"**++" CRLF);

	len += sprintf(buf + len,
		"**  MODULE: %s IDENT %s" CRLF "**" CRLF,
		      modname, ident ? ident : "X.00-00", modname, modname);

	__util$timbuf(NULL /* Now */, &_tm);

	len += sprintf (buf + len,
		"**  CREATION DATE:  %02u-%02u-%04u %02u:%02u:%02u" CRLF "**" CRLF,
			_tm.tm_mday, _tm.tm_mon, _tm.tm_year,
			_tm.tm_hour, _tm.tm_min, _tm.tm_sec);

	len += sprintf (buf + len,
		"**  PRODUCED BY:  StarLet SDL " __IDENT__ CRLF);

	len += sprintf (buf + len,
		"**" CRLF "**  LANGUAGE:  %s " CRLF, v_lang);
	len += sprintf (buf + len,
		"**  TARGET:  %s " CRLF, v_target);
	len += sprintf (buf + len,
		"**  SOURCE:  %s (%s)" CRLF,
			v_src, v_mtime);

	len += sprintf (buf + len,
		"**--" CRLF \
		"*/" CRLF);

	len += sprintf(buf + len,
		"#ifndef __%s_LOADED" CRLF \
		"#define __%s_LOADED 1" CRLF \
		CRLF CRLF \
		"#pragma	pack (push)" CRLF \
		"#pragma	pack" CRLF \
		CRLF \
		"#ifdef __cplusplus" CRLF \
		"	extern \"C\" {" CRLF \
		"#endif" CRLF CRLF CRLF, modname,  modname);

	if ( len != (status = write(sdlctx->fd, buf, len)) )
		return	$LOG(STS$K_FATAL, "write(%d octets)->%d, errno=%d", len, status, errno);

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
	{SDL_K_TYPE_BFLD, "v", "int unsigned "},
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

	sdl_str2asc(id, &ctx->id);

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
	len = sprintf(buf, "#define	%.*sK_%.*s%.*s	%lld" CRLF,
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
		return	$LOG(STS$K_FATAL, "write(%d octets)->%d, errno=%d", len, status, errno);
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
		return	$LOG(STS$K_FATAL, "Insufficient memory to allocate %d octets, errno=%d", sizeof(SDL_CONSTITEM), errno);

	sdl_str2asc(id, &ci->id);

	ci->val = val;
	ci->setf= setf;

	if ( !(1 & (status = $INSQTAIL(li, ci, &count))) )
		$LOG(status, "Error addition of the %s", id);

	/* Save reference to last added item */
	li->item = ci;

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

		/* Generate constant name ... */
		len = sprintf(buf, "#define	%.*sK_%.*s%.*s\t",
			      $ASC(&li->pref), $ASC(&li->tag), $ASC(&ci->id));

		for ( status = 0, src = dst = buf; len > 0; len--, src++)
			if ( *src != '"' )
				{
				*dst = (char) toupper(*src);
				dst++;
				status++;
				}

		/* Value ... */
		len = status;
		len += sprintf(buf + status, radix2fmt (li->radix), val );


		/* Comment string ... */
		len += sprintf(buf + len, "%.*s" , $ASC(&ci->rem) );


		iov[0].iov_len = len;
		len += iov[1].iov_len;

		if ( len != (status = writev(sdlctx->fd, iov, 2)) )
			{
			$LOG(STS$K_FATAL, "write(%d octets)->%d, errno=%d", len, status, errno);
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
		return	$LOG(STS$K_FATAL, "Insufficient memory to allocate %d octets, errno=%d", sizeof(SDL_AGGITEM), errno);

	sdl_str2asc(id, &itm->id);

	if ( itmtype == SDL_K_ITMTYPE_FIELD )
		{
		/* A member with the base type, so prefix and tag inherite from top level clause */
		itm->pref = agg->pref;
		}
	else	{
		sdl_str2asc(id, &itm->tag);
		}

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
	len = sprintf(buf, CRLF "#pragma	pack (push)" CRLF );

	if ( agg->align == SDL_K_ALIGN_DEF )
		len += sprintf(buf + len, "#pragma	pack" CRLF);
	else	len += sprintf(buf + len, "#pragma	pack %d" CRLF, agg->align);

	len += sprintf(buf + len, "typedef	%s	__%.*s%.*s__ {%.*s" CRLF,
		(agg->aggtype == SDL_K_AGGTYPE_STRUCT) ? "struct" : "union",
		$ASC(&agg->pref), $ASC(&agg->id), $ASC(&agg->rem) );

	if ( len != (status = write(sdlctx->fd, buf, len)) )
		return	$LOG(STS$K_FATAL, "write(%d octets)->%d, errno=%d", len, status, errno);


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
				len = sprintf(buf, "#pragma	pack (push) /* begin-of-%.*s */\n#pragma	pack %d" CRLF, $ASC(&itm->id), itm->align);

				if ( len != (status = write(sdlctx->fd, buf, len)) )
					return	$LOG(STS$K_FATAL, "write(%d octets)->%d, errno=%d", len, status, errno);
				}

			iov[1].iov_len = sprintf(buf , "%s /* %.*s */ {%.*s",
				   (itm->itemtype == SDL_K_ITMTYPE_STRUCT) ? "struct" : "union",
				      $ASC(&itm->id), $ASC(&itm->rem));

			if ( 0 > (status = writev(sdlctx->fd, iov, 3)) )
				return	$LOG(STS$K_FATAL, "write(%d octets)->%d, errno=%d", len, status, errno);

			deeplvl++;
			stack_tag[deeplvl] = itm->tag;
			}
		else if ( itm->itemtype == SDL_K_ITMTYPE_END )
			{
			if ( deeplvl )
				{
				iov[1].iov_len = sprintf(buf, "} %.*s;%.*s", $ASC(&itm->id), $ASC(&itm->rem));

				if ( 0 > (status = writev(sdlctx->fd, iov, 3)) )
					return	$LOG(STS$K_FATAL, "write(%d octets)->%d, errno=%d", len, status, errno);


				if ( align )
					len = sprintf(buf, CRLF "#pragma	pack (pop) /* end-of-%.*s */" CRLF, $ASC(&itm->id));

				if ( len != (status = write(sdlctx->fd, buf, len)) )
					return	$LOG(STS$K_FATAL, "write(%d octets)->%d, errno=%d", len, status, errno);


				deeplvl--;
				iov[0].iov_len = (1 + deeplvl) * 4;
				}
			}
		else	{/* Ordinar union/struct member declaration */
			iov[0].iov_len = (1 + deeplvl) * 4;

			/* Add type specification */
			if ( itm->typespec & SDL_K_TYPE_USER )
				len = sprintf(buf, "%.*s\t", $ASC(&itm->utype) );
			else	len = sprintf(buf, "%s\t", type2ctype (itm->typespec, ctype) );

			if ( itm->typespec & SDL_K_TYPE_USER )
				{
				if ( itm->typespec & SDL_K_TYPE_PTR )
					len += sprintf(buf + len, "*%.*sa_%.*s", $ASC(&stack_tag[deeplvl]), $ASC(&itm->id));
				else	len += sprintf(buf + len, "%.*s%.*s", $ASC(&stack_tag[deeplvl]), $ASC(&itm->id));
				}
			else	len += sprintf(buf + len, "%.*s%s_%.*s", $ASC(&stack_tag[deeplvl]), type2pref (itm->typespec), $ASC(&itm->id));


			if ( itm->typespec & SDL_K_TYPE_BFLD )
				len += sprintf(buf + len, ":%d;", itm->dimension - 1);
			else if ( itm->dimension )
				len += sprintf(buf + len, "[%d];", itm->dimension - 1);
			else	len += sprintf(buf + len, ";");

			/* Is there a comment line ? */
			if ( $ASCLEN(&itm->rem) )
				len += sprintf(buf + len, "%.*s", $ASC(&itm->rem) );

			iov[1].iov_len = len;

			if ( 0 > (status = writev(sdlctx->fd, iov, 3)) )
				{
				$LOG(STS$K_FATAL, "write(%d octets)->%d, errno=%d", len, status, errno);
				break;
				}
			}

		free(itm);
		}


	/* End of definition ... */
	sdl_asc2up (&agg->id);
	sdl_asc2up (&agg->pref);

	len = sprintf(buf, "} %.*s%.*s;%.*s" CRLF, $ASC(&agg->pref), $ASC(&agg->id), $ASC(&agg->rem) );
	len += sprintf(buf + len, "#pragma	pack (pop)\n" CRLF);

	if ( len != (status = write(sdlctx->fd, buf, len)) )
		return	$LOG(STS$K_FATAL, "write(%d octets)->%d, errno=%d", len, status, errno);


	/* Reset AGGREGATE context area */
	memset(agg, 0, sizeof(SDL_AGGITEM));

	return	STS$K_SUCCESS;
}


int	sdl_comment	(
		SDL_CTX *	sdlctx,
		char	*	comment
			)
{
int	status;
struct iovec iov [] = { {"//" , 2}, {comment + 1, 0}, {CRLF, 2} };

	if ( ! sdlctx || !sdlctx->fd )
		return	STS$K_WARN;

	iov[1].iov_len = strnlen(comment + 1, 512);
	iov[1].iov_len;

	if ( 0 > (status = writev(sdlctx->fd, iov, $ARRSZ(iov))) )
		return	$LOG(STS$K_FATAL, "write()->%d, errno=%d", status, errno);

	return	STS$K_SUCCESS;
}

/**
 * @brief sdl_var_set - Add a local SDL's variable in the stack, initialize it with a given value.
 *
 * @param sdlctx:	parser context
 *
 * @param name:		variable name
 * @param value:	value to be set for variable
 *
 * @param type:		variable type, see SDL_K_VARTYPE_* constants
 *
 * @return:	condition code
 */
int	sdl_var_set		(
		SDL_CTX *	sdlctx,
		char	*	name,
		char	*	value,
		int		type
			)
{
int	len;
SDL_VAR	*var = sdlctx->vars;

	len = strnlen(name, ASC$K_SZ );

	/* Lookup a variable name in the local set */
	for ( var = sdlctx->vars; var; var = var->link)
		{
		if ( ($ASCLEN(&var->id) == len)
		     && (!strncasecmp ($ASCPTR(&var->id), name, len)) )
			break;
		}


	if ( !var )
		{
		/* Allocate a memory for new variable */
		if ( !(var = calloc(1, sizeof(SDL_VAR))) )
			return	$LOG(STS$K_FATAL, "Insufficient memory to allocate %d octets, errno=%d", sizeof(SDL_VAR), errno);

		/* Preset Id and Type */
		sdl_str2asc(name, &var->id);

		var->type = type;

		/* Add new variable at top of the variable list */
		var->link = sdlctx->vars;
		sdlctx->vars = var;
		}

	/* Variable has been exist, is the types is matching ? */
	if ( var->type != type )
		{
		return	$LOG(STS$K_ERROR, "SDL variable '%.*s' (type %s)  cannot be set with value type %s",
			     $ASC(&var->id), var->type == SDL_K_VARTYPE_NUM ? "number" : "string",
			     value, type == SDL_K_VARTYPE_NUM ? "number" : "string");
		}

	if ( type == SDL_K_VARTYPE_NUM )
		var->val_int = (int ) value;
	else	sdl_str2asc(value, &var->val_asc);

	return	STS$K_SUCCESS;
}



/**
 * @brief sdl_var_get - Lookup a variable name in the local storage with a given type,
 *			return variable value as ASCIZ
 *
 * @param sdlctx:	parser context
 *
 * @param name:		variable name
 * @param value:	value to be set for variable
 *
 * @param type:		variable type, see SDL_K_VARTYPE_* constants
 *
 * @return:	condition code
 */

int	sdl_var_get		(
		SDL_CTX *	sdlctx,
		char	*	name,
		char	*	value,
		int		type
			)
{
int	len;
SDL_VAR	*var = sdlctx->vars;

	len = strnlen(name, ASC$K_SZ );

	/* Lookup a variable name in the local set */
	for ( var = sdlctx->vars; var; var = var->link)
		{
		if ( ($ASCLEN(&var->id) == len)
		     && (!strncasecmp ($ASCPTR(&var->id), name, len)) )
			break;
		}


	if ( !var )	/* Did not find anything ! */
		return $LOG(STS$K_ERROR, "Undefined SDL variable '%s'", name);

	/* Variable has been exist, is the types is matching ? */
	if ( var->type != type )
		{
		return	$LOG(STS$K_ERROR, "Value of SDL variable '%.*s' (type %s)  cannot be converted to type %s",
			     $ASC(&var->id), var->type == SDL_K_VARTYPE_NUM ? "number" : "string",
			     type == SDL_K_VARTYPE_NUM ? "number" : "string");
		}

	/* Copying variable value to the target place */
	if ( type == SDL_K_VARTYPE_NUM )
		* ((int *) value) = var->val_int;
	else	{
		memcpy(value, $ASCPTR(&var->val_asc), $ASCLEN(&var->val_asc));
		*(value + $ASCLEN(&var->val_asc)) = '\0';
		}

	return	STS$K_SUCCESS;
}




int	sdl_literal	(
	SDL_LITERAL *	ltr,
		char *	line
			)
{
int	count, status;
SDL_LTRITEM *li;

	if ( !(li = calloc(1, sizeof(SDL_LTRITEM))) )
		return	$LOG(STS$K_FATAL, "Insufficient memory to allocate %d octets, errno=%d", sizeof(SDL_LTRITEM), errno);

	$ASCLEN(&li->line) = (unsigned char) strnlen(line, ASC$K_SZ);
	memcpy($ASCPTR(&li->line), line, $ASCLEN(&li->line) );

	if ( !(1 & (status = $INSQTAIL(ltr, li, &count))) )
		$LOG(status, "Error addition of the %s", line);

	return	STS$K_SUCCESS;
}


int	sdl_def_literal	(
		SDL_CTX *	sdlctx,
		SDL_LITERAL *	ltr
			)
{
int	len, status, count;
SDL_LTRITEM *li;
struct iovec iov [] = { {0, 0}, {CRLF, 2} };

	while ( 1 & $REMQHEAD(ltr, &li, &count) )
		{
		if ( !count )
			break;

		iov[0].iov_len = $ASCLEN(&li->line);
		iov[0].iov_base= $ASCPTR(&li->line);

		$TRACE("'%.*s'", iov[0].iov_len, iov[0].iov_base);

		{
		char *cp = iov[0].iov_base + iov[0].iov_len;

		for ( cp--; (status = isspace(*cp)) && (0 < iov[0].iov_len);
		      cp--, iov[0].iov_len--);

		}

		len = iov[0].iov_len + iov[1].iov_len;

		if ( len != (status = writev(sdlctx->fd, iov, $ARRSZ(iov))) )
			{
			$LOG(STS$K_FATAL, "write(%d octets)->%d, errno=%d", len, status, errno);
			break;
			}

		free(li);
		}

	return	STS$K_SUCCESS;
}






int	sdl_initialize	(
	SDL_CTX **	sdlctx
			)
{
	if ( !(*sdlctx = calloc(1, sizeof(SDL_CTX))))
		return	$LOG(STS$K_FATAL, "Insufficient memory, errno=%d", errno);


	(*sdlctx)->fd = -1;

	return	STS$K_SUCCESS;
}
