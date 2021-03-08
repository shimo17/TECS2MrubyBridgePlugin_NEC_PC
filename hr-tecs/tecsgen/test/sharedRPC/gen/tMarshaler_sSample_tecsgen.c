/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tMarshaler_sSample_tecsgen.h"
#include "tMarshaler_sSample_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eClientEntry : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eClientEntry : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eClientEntry : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSemaphore_VDES rRegion_RPCSharedChannel_RPCChannelMan_eSemaphore_des0;

extern struct tag_sSemaphore_VDES rRegion_RPCSharedChannel_RPCChannelMan_eSemaphore_des1;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tMarshaler_sSample_INIB tMarshaler_sSample_INIB_tab[] = {
    /* cell: tMarshaler_sSample_CB_tab[0]:  SharedRPCPlugin__0_sSample_marshaler id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rRegion_RPCSharedChannel_RPCChannelMan_eSemaphore_des0, /* cLockChannel #_CCP0_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tMarshaler_sSample_CB_tab[1]:  SharedRPCPlugin__1_sSample_marshaler id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rRegion_RPCSharedChannel_RPCChannelMan_eSemaphore_des1, /* cLockChannel #_CCP0_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eClientEntry : omitted by entry port optimize */
/* eClientEntry : omitted by entry port optimize */
