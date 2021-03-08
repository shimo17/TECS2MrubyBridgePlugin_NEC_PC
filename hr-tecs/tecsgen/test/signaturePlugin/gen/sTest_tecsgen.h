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
    void           (*test__T)( const struct tag_sTest_VDES *edp, int_t input );
    int32_t        (*test2__T)( const struct tag_sTest_VDES *edp, int_t input, int32_t* ret );
    int32_t        (*test3__T)( const struct tag_sTest_VDES *edp, const char_t* input, int32_t* ret );
    int32_t        (*test4__T)( const struct tag_sTest_VDES *edp, const char_t* input, int32_t len );
    int32_t        (*test5__T)( const struct tag_sTest_VDES *edp, const ST* input );
    int32_t        (*test6__T)( const struct tag_sTest_VDES *edp, SYSTIM* systim );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sTest_Defined
#define  Descriptor_of_sTest_Defined
typedef struct { struct tag_sTest_VDES *vdes; } Descriptor( sTest );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STEST_TEST                      (1)
#define	FUNCID_STEST_TEST2                     (2)
#define	FUNCID_STEST_TEST3                     (3)
#define	FUNCID_STEST_TEST4                     (4)
#define	FUNCID_STEST_TEST5                     (5)
#define	FUNCID_STEST_TEST6                     (6)

#endif /* sTest_TECSGEN_H */
