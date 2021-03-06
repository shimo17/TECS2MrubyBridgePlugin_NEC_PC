/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSigCB_TECSGEN_H
#define sSigCB_TECSGEN_H

/*
 * signature   :  sSigCB
 * global name :  sSigCB
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSigCB_VDES {
    struct tag_sSigCB_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSigCB_VMT {
    ER             (*Send__T)( const struct tag_sSigCB_VDES *edp, int8_t* buf, int32_t len );
    ER             (*Receive__T)( const struct tag_sSigCB_VDES *edp, int8_t** buf, int32_t* len );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSigCB_Defined
#define  Descriptor_of_sSigCB_Defined
typedef struct { struct tag_sSigCB_VDES *vdes; } Descriptor( sSigCB );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIGCB_SEND                     (1)
#define	FUNCID_SSIGCB_RECEIVE                  (2)

#endif /* sSigCB_TECSGEN_H */
