/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTestServ_tecsgen.h"
#include "tTestServ_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eS : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eS : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eS : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sAlloc_VDES alloc_eA_des;
extern struct tag_sAlloc_VDES alloc_eA_des;

extern struct tag_sAlloc_VDES Triple_Alloc_eA_des;
extern struct tag_sAlloc_VDES Triple_Alloc_eA_des;

extern struct tag_sAlloc_VDES Triple2_Alloc_eA_des;
extern struct tag_sAlloc_VDES Triple2_Alloc_eA_des;

/* 呼び口配列 #_CPA_# */



/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTestServ_INIB tTestServ_INIB_tab[] = {
    /* cell: tTestServ_CB_tab[0]:  Bottom id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tAlloc_CB_tab[0],                       /* eS_snd_buf #_CCP2_# */
        &tAlloc_CB_tab[0],                       /* eS_rcv_buf #_CCP2_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tTestServ_CB_tab[1]:  Triple_Bottom id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tAlloc_CB_tab[1],                       /* eS_snd_buf #_CCP2_# */
        &tAlloc_CB_tab[1],                       /* eS_rcv_buf #_CCP2_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tTestServ_CB_tab[2]:  Triple2_Bottom id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &tAlloc_CB_tab[2],                       /* eS_snd_buf #_CCP2_# */
        &tAlloc_CB_tab[2],                       /* eS_rcv_buf #_CCP2_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eS : omitted by entry port optimize */
/* eS : omitted by entry port optimize */
/* eS : omitted by entry port optimize */
