/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sAllocTMO_TECSGEN_H
#define sAllocTMO_TECSGEN_H

/*
 * signature   :  sAllocTMO
 * global name :  sAllocTMO
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sAllocTMO_VDES {
    struct tag_sAllocTMO_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sAllocTMO_VMT {
    ER             (*alloc__T)( const struct tag_sAllocTMO_VDES *edp, int32_t size, void* p, TMO tmo );
    ER             (*dealloc__T)( const struct tag_sAllocTMO_VDES *edp, const void* p );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sAllocTMO_Defined
#define  Descriptor_of_sAllocTMO_Defined
typedef struct { struct tag_sAllocTMO_VDES *vdes; } Descriptor( sAllocTMO );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SALLOCTMO_ALLOC                 (1)
#define	FUNCID_SALLOCTMO_DEALLOC               (2)

#endif /* sAllocTMO_TECSGEN_H */
