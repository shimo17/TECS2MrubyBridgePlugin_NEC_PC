/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sHello_TECSGEN_H
#define sHello_TECSGEN_H

/*
 * signature   :  sHello
 * global name :  sHello
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sHello_VDES {
    struct tag_sHello_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sHello_VMT {
    void           (*hello__T)( const struct tag_sHello_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sHello_Defined
#define  Descriptor_of_sHello_Defined
typedef struct { struct tag_sHello_VDES *vdes; } Descriptor( sHello );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SHELLO_HELLO                    (1)

#endif /* sHello_TECSGEN_H */
