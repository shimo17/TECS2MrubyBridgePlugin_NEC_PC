/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSigDev_TECSGEN_H
#define sSigDev_TECSGEN_H

/*
 * signature   :  sSigDev
 * global name :  sSigDev
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSigDev_VDES {
    struct tag_sSigDev_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSigDev_VMT {
    ER             (*Send__T)( const struct tag_sSigDev_VDES *edp, int8_t* buf, int32_t len );
    ER             (*Receive__T)( const struct tag_sSigDev_VDES *edp, int8_t** buf, int32_t* len );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSigDev_Defined
#define  Descriptor_of_sSigDev_Defined
typedef struct { struct tag_sSigDev_VDES *vdes; } Descriptor( sSigDev );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIGDEV_SEND                    (1)
#define	FUNCID_SSIGDEV_RECEIVE                 (2)

#endif /* sSigDev_TECSGEN_H */
