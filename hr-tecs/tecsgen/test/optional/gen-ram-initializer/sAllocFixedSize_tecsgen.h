/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sAllocFixedSize_TECSGEN_H
#define sAllocFixedSize_TECSGEN_H

/*
 * signature   :  sAllocFixedSize
 * global name :  sAllocFixedSize
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sAllocFixedSize_VDES {
    struct tag_sAllocFixedSize_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sAllocFixedSize_VMT {
    ER             (*alloc__T)( const struct tag_sAllocFixedSize_VDES *edp, void** p, TMO tmo );
    ER             (*dealloc__T)( const struct tag_sAllocFixedSize_VDES *edp, const void* p );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sAllocFixedSize_Defined
#define  Descriptor_of_sAllocFixedSize_Defined
typedef struct { struct tag_sAllocFixedSize_VDES *vdes; } Descriptor( sAllocFixedSize );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SALLOCFIXEDSIZE_ALLOC           (1)
#define	FUNCID_SALLOCFIXEDSIZE_DEALLOC         (2)

#endif /* sAllocFixedSize_TECSGEN_H */
