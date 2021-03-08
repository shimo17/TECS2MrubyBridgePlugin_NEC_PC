/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tDataqueueAdaptor_tecsgen.h"
#include "tDataqueueAdaptor_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eChannel : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eChannel : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eChannel : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sDataqueue_VDES rTransparent_RPCPlugin__1_Channel_Dataqueue_Peer_eDataqueue_des;
extern struct tag_sEventflag_VDES rTransparent_RPCPlugin__1_Channel_Eventflag_eEventflag_des;

extern struct tag_sDataqueue_VDES rTransparent_RPCPlugin__0_Channel_Dataqueue_Peer_eDataqueue_des;
extern struct tag_sEventflag_VDES rTransparent_RPCPlugin__0_Channel_Eventflag_eEventflag_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tDataqueueAdaptor_INIB tDataqueueAdaptor_INIB_tab[] = {
    /* cell: tDataqueueAdaptor_CB_tab[0]:  RPCPlugin__1_Channel_DataqueueAdaptor id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tDataqueuePeer_CB_tab[0],               /* cDataqueue #_CCP2_# */
        &tEventflag_CB_tab[0],                   /* cEventflag #_CCP2_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tDataqueueAdaptor_CB_tab[1]:  RPCPlugin__0_Channel_DataqueueAdaptor id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tDataqueuePeer_CB_tab[1],               /* cDataqueue #_CCP2_# */
        &tEventflag_CB_tab[1],                   /* cEventflag #_CCP2_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eChannel : omitted by entry port optimize */
/* eChannel : omitted by entry port optimize */
