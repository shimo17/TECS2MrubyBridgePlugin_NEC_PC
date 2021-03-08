/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tDataqueuePeer_tecsgen.h"
#include "tDataqueuePeer_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eDataqueue : omitted by entry port optimize */

/* eiDataqueue : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eDataqueue : omitted by entry port optimize */
/* eiDataqueue : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eDataqueue : omitted by entry port optimize */
/* eiDataqueue : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tDataqueuePeer_INIB tDataqueuePeer_INIB_tab[] = {
    /* cell: tDataqueuePeer_CB_tab[0]:  QueueChannel_Dataqueue_Peer id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TA_NULL,                                 /* attribute */
        64,                                      /* count */
        NULL,                                    /* pdqmb */
    },
};

/* セル CB #_CB_# */
struct tag_tDataqueuePeer_CB tDataqueuePeer_CB_tab[] = {
    /* cell: tDataqueuePeer_CB_tab[0]:  QueueChannel_Dataqueue_Peer id=1 */
    {
        &tDataqueuePeer_INIB_tab[0],             /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        {},                                      /* fd */
        false,                                   /* b_init */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eDataqueue : omitted by entry port optimize */
/* eiDataqueue : omitted by entry port optimize */
