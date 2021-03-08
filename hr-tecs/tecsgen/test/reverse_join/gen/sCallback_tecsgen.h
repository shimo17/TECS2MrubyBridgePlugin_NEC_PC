/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sCallback_TECSGEN_H
#define sCallback_TECSGEN_H

/*
 * signature   :  sCallback
 * global name :  sCallback
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sCallback_VDES {
    struct tag_sCallback_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sCallback_VMT {
    void           (*func__T)( const struct tag_sCallback_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sCallback_Defined
#define  Descriptor_of_sCallback_Defined
typedef struct { struct tag_sCallback_VDES *vdes; } Descriptor( sCallback );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SCALLBACK_FUNC                  (1)

#endif /* sCallback_TECSGEN_H */
