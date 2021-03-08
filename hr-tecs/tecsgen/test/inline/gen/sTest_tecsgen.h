/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sTest_TECSGEN_H
#define sTest_TECSGEN_H

/*
 * signature   :  sTest
 * global name :  sTest
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sTest_VDES {
    struct tag_sTest_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sTest_VMT {
    void           (*test__T)( const struct tag_sTest_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sTest_Defined
#define  Descriptor_of_sTest_Defined
typedef struct { struct tag_sTest_VDES *vdes; } Descriptor( sTest );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STEST_TEST                      (1)

#endif /* sTest_TECSGEN_H */
