/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSig1_TECSGEN_H
#define sSig1_TECSGEN_H

/*
 * signature   :  sSig1
 * global name :  sSig1
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSig1_VDES {
    struct tag_sSig1_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSig1_VMT {
    ER             (*func1__T)( const struct tag_sSig1_VDES *edp, int32_t arg1, int32_t* res );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSig1_Defined
#define  Descriptor_of_sSig1_Defined
typedef struct { struct tag_sSig1_VDES *vdes; } Descriptor( sSig1 );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIG1_FUNC1                     (1)

#endif /* sSig1_TECSGEN_H */
