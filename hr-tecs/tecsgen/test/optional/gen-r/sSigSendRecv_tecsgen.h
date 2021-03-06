/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSigSendRecv_TECSGEN_H
#define sSigSendRecv_TECSGEN_H

/*
 * signature   :  sSigSendRecv
 * global name :  sSigSendRecv
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSigSendRecv_VDES {
    struct tag_sSigSendRecv_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSigSendRecv_VMT {
    ER             (*snd__T)( const struct tag_sSigSendRecv_VDES *edp, ST_VAL* st_val );
    ER             (*rcv__T)( const struct tag_sSigSendRecv_VDES *edp, ST_VAL** st_val );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSigSendRecv_Defined
#define  Descriptor_of_sSigSendRecv_Defined
typedef struct { struct tag_sSigSendRecv_VDES *vdes; } Descriptor( sSigSendRecv );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIGSENDRECV_SND                (1)
#define	FUNCID_SSIGSENDRECV_RCV                (2)

#endif /* sSigSendRecv_TECSGEN_H */
