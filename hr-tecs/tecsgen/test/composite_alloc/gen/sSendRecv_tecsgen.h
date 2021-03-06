/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSendRecv_TECSGEN_H
#define sSendRecv_TECSGEN_H

/*
 * signature   :  sSendRecv
 * global name :  sSendRecv
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSendRecv_VDES {
    struct tag_sSendRecv_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSendRecv_VMT {
    ER             (*snd__T)( const struct tag_sSendRecv_VDES *edp, int8_t* buf, int32_t sz );
    ER             (*rcv__T)( const struct tag_sSendRecv_VDES *edp, int8_t** buf, int32_t* sz );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSendRecv_Defined
#define  Descriptor_of_sSendRecv_Defined
typedef struct { struct tag_sSendRecv_VDES *vdes; } Descriptor( sSendRecv );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSENDRECV_SND                   (1)
#define	FUNCID_SSENDRECV_RCV                   (2)

#endif /* sSendRecv_TECSGEN_H */
