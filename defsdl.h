/*
**++
**
**  FACILITY:  StarLet Structure Definition Language
**
**  ABSTRACT: A structure and definitions is supposed to be used internaly by the SDL processor
**
**  AUTHORS: Ruslan R. Laishev (RRL)
**
**  CREATION DATE:  3-NOV-2017
**
**  MODIFICATION HISTORY:
**
**--
*/

#ifndef __DEFSDL_H__
#define __DEFSDL_H__

#include	"utility_routines.h"

#define	sdl_str2asc	__util$str2asc

#define	$BITOPT(n)	(1 << (n))

#define	SDL_K_TYPE_BYTE		$BITOPT(0)
#define	SDL_K_TYPE_WORD		$BITOPT(1)
#define	SDL_K_TYPE_LONG		$BITOPT(2)
#define	SDL_K_TYPE_QUAD		$BITOPT(3)
#define	SDL_K_TYPE_OCTA		$BITOPT(4)
#define	SDL_K_TYPE_BFLD		$BITOPT(5)
#define	SDL_K_TYPE_FLT		$BITOPT(6)
#define	SDL_K_TYPE_DBL		$BITOPT(7)

#define	SDL_K_TYPE_SGND		$BITOPT(8)
#define	SDL_K_TYPE_UNSG		$BITOPT(9)

#define	SDL_K_TYPE_PCKD		$BITOPT(10)

#define	SDL_K_TYPE_ASCIC	$BITOPT(11)
#define	SDL_K_TYPE_SDESC	$BITOPT(12)

#define	SDL_K_TYPE_HWADDR	$BITOPT(13)
#define	SDL_K_TYPE_IPADDR	$BITOPT(14)
#define	SDL_K_TYPE_IP4ADDR	$BITOPT(15)
#define	SDL_K_TYPE_IP6ADDR	$BITOPT(16)
#define	SDL_K_TYPE_SOCK		$BITOPT(17)

#define	SDL_K_TYPE_RTN		$BITOPT(18)
#define	SDL_K_TYPE_VOID		$BITOPT(19)
#define	SDL_K_TYPE_PTR		$BITOPT(20)


#define	SDL_K_RADIX_DEF		$BITOPT(0)
#define	SDL_K_RADIX_DEC		$BITOPT(0)
#define	SDL_K_RADIX_BIN		$BITOPT(1)
#define	SDL_K_RADIX_OCT		$BITOPT(2)
#define	SDL_K_RADIX_HEX		$BITOPT(3)

#define	SDL_K_ALIGN_DEF		0
#define	SDL_K_ALIGN_BYTE	1
#define	SDL_K_ALIGN_WORD	2
#define	SDL_K_ALIGN_LONG	4
#define	SDL_K_ALIGN_QUAD	8
#define	SDL_K_ALIGN_OCTA	16
#define	SDL_K_ALIGN_PAGE	512

typedef	struct __sdl_ctx__
{
	int	fd;
	ASC	module;
	ASC	ext;
} SDL_CTX;

/* Internal SDL Variable, maintained as single linked list	*/
typedef	struct	__sdl_var__
{
	ASC		id;		/* Variable name	*/
	unsigned	type;		/* Variable type	*/

	union	{			/* Variable value	*/
		ASC	val_asc;
		int	val_int;
		};

	struct __sdl_var__	*	link;	/* A link to next variable */
} SDL_VAR;


/* Area to keep single CONSTANT declaration */
typedef	struct	__sdl_constant__
{
	ASC	id,
		pref,
		tag;

	int	val,
		radix;
} SDL_CONSTANT;

/* A double-linked list to keep list of CONSTANTs */
typedef struct	__sdl_constitem__
{
	ENTRY	hdr;

	ASC	id;

	int	val,
		setf;

} SDL_CONSTITEM;

typedef struct	__sdl_conslist__
{
	QUEUE	list;

	ASC	pref,
		tag;

	int	val,
		radix,
		inc;
} SDL_CONSTLIST;


/* A top level structure to keep a definiton of single AGGREGATE clause */
#define	SDL_K_AGGTYPE_STRUCT	0
#define	SDL_K_AGGTYPE_UNION	1


#define	SDL_K_ITMTYPE_FIELD	0	/* BYTE, ... DESCRIPTOR ...	*/
#define	SDL_K_ITMTYPE_STRUCT	1	/* A start of a structure definitions */
#define	SDL_K_ITMTYPE_UNION	2	/* A start of union definitions	*/
#define	SDL_K_ITMTYPE_END	3	/* End of structure or union	*/


typedef struct	__sdl_aggitem__
{
	ENTRY	hdr;

	ASC	id,
		pref,
		tag;

	int	itemtype,
		typespec,
		dimension,
		align;

} SDL_AGGITEM;


typedef struct	__sdl_aggregate__
{
	QUEUE	list;	/* List of AGGREGATE's Items	*/

			/* A reference to last added item */
	SDL_AGGITEM *item;

	ASC	id,
		pref,
		tag;

	int	aggtype,
		align;
} SDL_AGGREGATE;




typedef	struct	__sdl_module__
{
	ASC	name,
		ident;
} SDL_MODULE;


#endif // __DEFSDL_H__
