/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTDR_tecsgen.h"
#include "tTDR_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTDR : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eTDR : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTDR : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sChannel_VDES rTransparent_RPCPlugin__1_Channel_DataqueueAdaptor_eChannel_des;

extern struct tag_sChannel_VDES rTransparent_RPCPlugin__0_Channel_DataqueueAdaptor_eChannel_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTDR_INIB tTDR_INIB_tab[] = {
    /* cell: tTDR_CB_tab[0]:  RPCPlugin__1_Channel_TDR id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tDataqueueAdaptor_CB_tab[0],            /* cChannel #_CCP2_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tTDR_CB_tab[1]:  RPCPlugin__0_Channel_TDR id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tDataqueueAdaptor_CB_tab[1],            /* cChannel #_CCP2_# */
        /* entry port #_EP_# */ 
    },
};

/* セル CB #_CB_# */
struct tag_tTDR_CB tTDR_CB_tab[] = {
    /* cell: tTDR_CB_tab[0]:  RPCPlugin__1_Channel_TDR id=1 */
    {
        &tTDR_INIB_tab[0],                       /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        TMO_FEVR,                                /* tmo */
    },
    /* cell: tTDR_CB_tab[1]:  RPCPlugin__0_Channel_TDR id=2 */
    {
        &tTDR_INIB_tab[1],                       /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        TMO_FEVR,                                /* tmo */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eTDR : omitted by entry port optimize */
/* eTDR : omitted by entry port optimize */
