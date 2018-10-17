/*** MODULE def2 IDENT "X.00-01" ***/
#ifndef __def2_LOADED
#define __def2_LOADED 1
#pragma	pack (push)
#pragma	pack

#ifdef __cplusplus
	extern "C" {
#endif


/*++ */
/*  Abstract: Structure and constant definitions */
/* */
/*  Author: Ruslan R. Laishev */
/* */
/*  Creation date: 22-NOV-2017 */
/* */
/*-- */
/* A constant MYCONSTANT = 123 */
#DEFINE	MYPREF$$K_MYTAG$$MYCONST	123
#DEFINE	SDL$K_OPTION$ADD	0x87
#DEFINE	SDL$K_OPTION$SET	0x8a
#DEFINE	SDL$K_OPTION$DEL	0x8d

#pragma	pack (push)
#pragma	pack 16
typedef	struct	__wire$pdu__ {
    short unsigned 	pdu$w_count;
    char unsigned 	pdu$b_payload[0];
} WIRE$PDU;
#pragma	pack (pop)

#pragma	pack (push)
#pragma	pack 512
typedef	struct	__wire$pdu2__ {
#pragma	pack (push) /* begin-of-header */
#pragma	pack 16
    struct /* header */ {
        int unsigned 	header$l_cmd;
        short unsigned 	header$w_len;
#pragma	pack (push) /* begin-of-opts */
#pragma	pack 4
        struct /* opts */ {
            short unsigned 	opts_w_nopts;
            int unsigned 	opts_l_opts[32];
            } opts;

#pragma	pack (pop) /* end-of-opts */
        } header;

#pragma	pack (pop) /* end-of-header */
    short unsigned 	tag$w_count;
    char unsigned 	tag$b_payload[0];
    union /* trailer */ {
        int unsigned 	trailer$l_crc;
        short unsigned 	trailer$w_pad;
        } trailer;

#pragma	pack (pop) /* end-of-trailer */
} WIRE$PDU2;
#pragma	pack (pop)


#ifdef __cplusplus
	}
#endif

#pragma	pack (pop)
#endif /* __def2_LOADED */
