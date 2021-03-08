/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sAlloc_TECSGEN_H
#define sAlloc_TECSGEN_H

/*
 * signature   :  sAlloc
 * global name :  sAlloc
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sAlloc_VDES {
    struct tag_sAlloc_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sAlloc_VMT {
    ER             (*alloc__T)( const struct tag_sAlloc_VDES *edp, int32_t sz, void** ptr );
    ER             (*dealloc__T)( const struct tag_sAlloc_VDES *edp, const void* ptr );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sAlloc_Defined
#define  Descriptor_of_sAlloc_Defined
typedef struct { struct tag_sAlloc_VDES *vdes; } Descriptor( sAlloc );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SALLOC_ALLOC                    (1)
#define	FUNCID_SALLOC_DEALLOC                  (2)

#endif /* sAlloc_TECSGEN_H */
