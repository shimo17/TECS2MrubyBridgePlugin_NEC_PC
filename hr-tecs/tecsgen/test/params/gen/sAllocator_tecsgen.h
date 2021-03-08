/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sAllocator_TECSGEN_H
#define sAllocator_TECSGEN_H

/*
 * signature   :  sAllocator
 * global name :  sAllocator
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sAllocator_VDES {
    struct tag_sAllocator_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sAllocator_VMT {
    ER             (*alloc__T)( const struct tag_sAllocator_VDES *edp, int32_t size, void** m );
    ER             (*dealloc__T)( const struct tag_sAllocator_VDES *edp, const void* m );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sAllocator_Defined
#define  Descriptor_of_sAllocator_Defined
typedef struct { struct tag_sAllocator_VDES *vdes; } Descriptor( sAllocator );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SALLOCATOR_ALLOC                (1)
#define	FUNCID_SALLOCATOR_DEALLOC              (2)

#endif /* sAllocator_TECSGEN_H */
