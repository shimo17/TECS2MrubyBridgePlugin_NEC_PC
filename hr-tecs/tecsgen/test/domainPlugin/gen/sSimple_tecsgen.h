/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSimple_TECSGEN_H
#define sSimple_TECSGEN_H

/*
 * signature   :  sSimple
 * global name :  sSimple
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSimple_VDES {
    struct tag_sSimple_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSimple_VMT {
    void           (*helloWorld__T)( const struct tag_sSimple_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSimple_Defined
#define  Descriptor_of_sSimple_Defined
typedef struct { struct tag_sSimple_VDES *vdes; } Descriptor( sSimple );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIMPLE_HELLOWORLD              (1)

#endif /* sSimple_TECSGEN_H */
