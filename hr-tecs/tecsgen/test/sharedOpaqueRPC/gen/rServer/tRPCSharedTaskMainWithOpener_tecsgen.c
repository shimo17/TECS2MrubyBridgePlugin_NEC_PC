/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tRPCSharedTaskMainWithOpener_tecsgen.h"
#include "tRPCSharedTaskMainWithOpener_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sUnmarshalerMain_VDES rServer_Join_to_through___0_Server_eService_des;
extern struct tag_sUnmarshalerMain_VDES rServer_Join_to_through___1_Server_eService_des;

/* 呼び口配列 #_CPA_# */
struct tag_sUnmarshalerMain_VDES * const rServer_MyChannel_Server_RPCSharedTaskMain_cUnmarshalAndCallFunction[] = {
    &rServer_Join_to_through___0_Server_eService_des,
    &rServer_Join_to_through___1_Server_eService_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tRPCSharedTaskMainWithOpener_INIB tRPCSharedTaskMainWithOpener_INIB_tab[] = {
    /* cell: tRPCSharedTaskMainWithOpener_CB_tab[0]:  MyChannel_Server_RPCSharedTaskMain id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        rServer_MyChannel_Server_RPCSharedTaskMain_cUnmarshalAndCallFunction, /* #_CCP3B_# */
        2,                                       /* length of cUnmarshalAndCallFunction (n_cUnmarshalAndCallFunction) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        0,                                       /* initialDelay */
        1,                                       /* reopenDelay */
    },
};

/* セル CB #_CB_# */
struct tag_tRPCSharedTaskMainWithOpener_CB tRPCSharedTaskMainWithOpener_CB_tab[] = {
    /* cell: tRPCSharedTaskMainWithOpener_CB_tab[0]:  MyChannel_Server_RPCSharedTaskMain id=1 */
    {
        &tRPCSharedTaskMainWithOpener_INIB_tab[0], /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* channelNo */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eMain : omitted by entry port optimize */
