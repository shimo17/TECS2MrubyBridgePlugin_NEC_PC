/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nAlloc_sAlloc_TECSGEN_H
#define nAlloc_sAlloc_TECSGEN_H

/*
 * signature   :  sAlloc
 * global name :  nAlloc_sAlloc
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_nAlloc_sAlloc_VDES {
    struct tag_nAlloc_sAlloc_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_nAlloc_sAlloc_VMT {
    ER             (*alloc__T)( const struct tag_nAlloc_sAlloc_VDES *edp, int32_t len, void** buf );
    ER             (*dealloc__T)( const struct tag_nAlloc_sAlloc_VDES *edp, const void* buf );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_nAlloc_sAlloc_Defined
#define  Descriptor_of_nAlloc_sAlloc_Defined
typedef struct { struct tag_nAlloc_sAlloc_VDES *vdes; } Descriptor( nAlloc_sAlloc );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NALLOC_SALLOC_ALLOC             (1)
#define	FUNCID_NALLOC_SALLOC_DEALLOC           (2)

#endif /* nAlloc_sAlloc_TECSGEN_H */
