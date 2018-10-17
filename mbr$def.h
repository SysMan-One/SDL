/*** MODULE mbr$def IDENT "A.01-00" ***/
#ifndef __mbr$def_LOADED
#define __mbr$def_LOADED 1
#pragma	pack (push)
#pragma	pack

#ifdef __cplusplus
	extern "C" {
#endif


//++
//
//  Abstract: A Master Boot Record (for IBM PC/Intel computers) structures and constants definitions.
//
//  Author: Ruslan R. Laishev
//
//  Creation date: 21-NOV-2017
//
//  Modification history:
//
//	12-DEC-2017     RRL     Added GPT related definitions, correct typos.
//
//	06-FEB-2018	RRL
//
//--
// MBR Layout
//	Off:
//	+0 		- 446 octets	- Bootloader
//	+446(%x1BE)	- 64 octets	- Partion table (4 partitions)
//	+510(%x1FE)	- 1 octet	- %x55
//	+511(%x1FF)	- 1 octet	- %xAA
// End of MBR signature
#DEFINE	MBR$$K_$MAGIC	21930
// A length of the bootloader code
#DEFINE	MBR$$K_$BOOTLDR	446
// Cylinder/Head/Sector address structure

#pragma	pack (push)
#pragma	pack 1
typedef	struct	__mbr$chs__ {
    char unsigned 	chs$b_head;	//Head
    int unsigned 	chs$v_sector:6;	//Sector
    int unsigned 	chs$v_cylindr:10;	//Cylinders
} MBR$CHS;
#pragma	pack (pop)

//
// Single Partition record structure
//
#DEFINE	MBR$$K_PFLAG$$PASSIVE	0
#DEFINE	MBR$$K_PFLAG$$BOOTABLE	128
// Partition types
#DEFINE	MBR$$K_PTYPE$$FREE	0
#DEFINE	MBR$$K_PTYPE$$FAT12	0x1
#DEFINE	MBR$$K_PTYPE$$XENIXROOT	0x2
#DEFINE	MBR$$K_PTYPE$$XENIXUSR	0x3
#DEFINE	MBR$$K_PTYPE$$FAT16	0x4
#DEFINE	MBR$$K_PTYPE$$EXT	0x5
#DEFINE	MBR$$K_PTYPE$$FAT16B	0x6
#DEFINE	MBR$$K_PTYPE$$EXFAT	0x7
#DEFINE	MBR$$K_PTYPE$$LINUX	0x83
#DEFINE	MBR$$K_PTYPE$$EXTLINUX	0x85
#DEFINE	MBR$$K_PTYPE$$LLVM	0x8e	//Linux LVM
#DEFINE	MBR$$K_PTYPE$$GPT	0xee	//GUID Partition Table
#DEFINE	MBR$$K_PTYPE$$EFI	0xef	//EFI System Partition

#pragma	pack (push)
#pragma	pack 1
typedef	struct	__mbr$part__ {
    char unsigned 	part$b_pflags;	//Activity flag: bootable, passive
    MBR$CHS	part$startchs;	//Begin of partition, CHS
    char unsigned 	part$b_ptype;	//Type of partition: see partition types constant list
    MBR$CHS	part$endchs;	//End of partition, CHS
    int unsigned 	part$l_startlba;	//Start LBN of the partition
    int unsigned 	part$l_size;	//Size of the partition in the blocks
} MBR$PART;
#pragma	pack (pop)


#pragma	pack (push)
#pragma	pack 1
typedef	struct	__mbr$tbl__ {
    MBR$PART	tbl[4];
} MBR$TBL;
#pragma	pack (pop)


#pragma	pack (push)
#pragma	pack 1
typedef	struct	__mbr$block__ {
    char unsigned 	b_bootloader[446];
    MBR$TBL	tbl;
    char unsigned 	b_magic[2];
} MBR$BLOCK;
#pragma	pack (pop)



#ifdef __cplusplus
	}
#endif

#pragma	pack (pop)
#endif /* __mbr$def_LOADED */
