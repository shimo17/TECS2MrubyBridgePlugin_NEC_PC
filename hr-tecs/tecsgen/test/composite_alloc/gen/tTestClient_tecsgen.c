/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTestClient_tecsgen.h"
#include "tTestClient_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eBody : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSendRecv_VDES Middle_eS_des;
extern struct tag_sAlloc_VDES alloc_eA_des;
extern struct tag_sAlloc_VDES alloc_eA_des;

extern struct tag_sSendRecv_VDES Middle2_InComp_eS_des;
extern struct tag_sAlloc_VDES alloc_eA_des;
extern struct tag_sAlloc_VDES alloc_eA_des;

extern struct tag_sSendRecv_VDES Triple_Middle_eS_des;
extern struct tag_sAlloc_VDES Triple_Alloc_eA_des;
extern struct tag_sAlloc_VDES Triple_Alloc_eA_des;

extern struct tag_sSendRecv_VDES Triple2_Middle_Comp_InComp_eS_des;
extern struct tag_sAlloc_VDES Triple2_Alloc_eA_des;
extern struct tag_sAlloc_VDES Triple2_Alloc_eA_des;

/* 呼び口配列 #_CPA_# */




/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTestClient_INIB tTestClient_INIB_tab[] = {
    /* cell: tTestClient_CB_tab[0]:  Top id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tTestComponent_CB_tab[0],               /* cS #_CCP2_# */
        &tAlloc_CB_tab[0],                       /* cS_snd_buf #_CCP2_# */
        &tAlloc_CB_tab[0],                       /* cS_rcv_buf #_CCP2_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tTestClient_CB_tab[1]:  Top2 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tTestComponent_CB_tab[1],               /* cS #_CCP2_# */
        &tAlloc_CB_tab[0],                       /* cS_snd_buf #_CCP2_# */
        &tAlloc_CB_tab[0],                       /* cS_rcv_buf #_CCP2_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tTestClient_CB_tab[2]:  Triple_TopB id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &tTestComponent_CB_tab[3],               /* cS #_CCP2_# */
        &tAlloc_CB_tab[1],                       /* cS_snd_buf #_CCP2_# */
        &tAlloc_CB_tab[1],                       /* cS_rcv_buf #_CCP2_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tTestClient_CB_tab[3]:  Triple2_Top id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &tTestComponent_CB_tab[4],               /* cS #_CCP2_# */
        &tAlloc_CB_tab[2],                       /* cS_snd_buf #_CCP2_# */
        &tAlloc_CB_tab[2],                       /* cS_rcv_buf #_CCP2_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eBody : omitted by entry port optimize */
/* eBody : omitted by entry port optimize */
/* eBody : omitted by entry port optimize */
/* eBody : omitted by entry port optimize */
