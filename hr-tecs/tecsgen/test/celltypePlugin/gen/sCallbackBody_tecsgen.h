/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sCallbackBody_TECSGEN_H
#define sCallbackBody_TECSGEN_H

/*
 * signature   :  sCallbackBody
 * global name :  sCallbackBody
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sCallbackBody_VDES {
    struct tag_sCallbackBody_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sCallbackBody_VMT {
    void           (*main__T)( const struct tag_sCallbackBody_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sCallbackBody_Defined
#define  Descriptor_of_sCallbackBody_Defined
typedef struct { struct tag_sCallbackBody_VDES *vdes; } Descriptor( sCallbackBody );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SCALLBACKBODY_MAIN              (1)

#endif /* sCallbackBody_TECSGEN_H */
