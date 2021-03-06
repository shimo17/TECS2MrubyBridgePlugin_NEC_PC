/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSig2_TECSGEN_H
#define sSig2_TECSGEN_H

/*
 * signature   :  sSig2
 * global name :  sSig2
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSig2_VDES {
    struct tag_sSig2_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSig2_VMT {
    ER             (*func1__T)( const struct tag_sSig2_VDES *edp, int32_t arg1, int32_t* res );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSig2_Defined
#define  Descriptor_of_sSig2_Defined
typedef struct { struct tag_sSig2_VDES *vdes; } Descriptor( sSig2 );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIG2_FUNC1                     (1)

#endif /* sSig2_TECSGEN_H */
