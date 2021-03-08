/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sInit_TECSGEN_H
#define sInit_TECSGEN_H

/*
 * signature   :  sInit
 * global name :  sInit
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sInit_VDES {
    struct tag_sInit_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sInit_VMT {
    void           (*initialize__T)( const struct tag_sInit_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sInit_Defined
#define  Descriptor_of_sInit_Defined
typedef struct { struct tag_sInit_VDES *vdes; } Descriptor( sInit );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SINIT_INITIALIZE                (1)

#endif /* sInit_TECSGEN_H */
