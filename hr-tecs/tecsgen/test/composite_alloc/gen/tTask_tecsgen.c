/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTask_tecsgen.h"
#include "tTask_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTask : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eTask : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTask : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sTaskBody_VDES Top_eBody_des;

extern struct tag_sTaskBody_VDES Top2_eBody_des;

extern struct tag_sTaskBody_VDES Triple_TopB_eBody_des;

extern struct tag_sTaskBody_VDES Triple2_Top_eBody_des;

/* 呼び口配列 #_CPA_# */




/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTask_INIB tTask_INIB_tab[] = {
    /* cell: tTask_CB_tab[0]:  Task1 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tTestClient_CB_tab[0],                  /* cBody #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TA_ACT,                                  /* taskAttribute */
        TA_NULL,                                 /* exceptionAttribute */
        1,                                       /* priority */
        4096,                                    /* stackSize */
        "tTask_Task1",                           /* name */
    },
    /* cell: tTask_CB_tab[1]:  Task2 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tTestClient_CB_tab[1],                  /* cBody #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TA_ACT,                                  /* taskAttribute */
        TA_NULL,                                 /* exceptionAttribute */
        1,                                       /* priority */
        4096,                                    /* stackSize */
        "tTask_Task2",                           /* name */
    },
    /* cell: tTask_CB_tab[2]:  Task3 id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &tTestClient_CB_tab[2],                  /* cBody #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TA_ACT,                                  /* taskAttribute */
        TA_NULL,                                 /* exceptionAttribute */
        1,                                       /* priority */
        4096,                                    /* stackSize */
        "tTask_Task3",                           /* name */
    },
    /* cell: tTask_CB_tab[3]:  Task4 id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &tTestClient_CB_tab[3],                  /* cBody #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TA_ACT,                                  /* taskAttribute */
        TA_NULL,                                 /* exceptionAttribute */
        1,                                       /* priority */
        4096,                                    /* stackSize */
        "tTask_Task4",                           /* name */
    },
};

/* セル CB #_CB_# */
struct tag_tTask_CB tTask_CB_tab[] = {
    /* cell: tTask_CB_tab[0]:  Task1 id=1 */
    {
        &tTask_INIB_tab[0],                      /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* my_thread */
        0,                                       /* my_cond */
        0,                                       /* my_mutex */
        0,                                       /* state */
    },
    /* cell: tTask_CB_tab[1]:  Task2 id=2 */
    {
        &tTask_INIB_tab[1],                      /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* my_thread */
        0,                                       /* my_cond */
        0,                                       /* my_mutex */
        0,                                       /* state */
    },
    /* cell: tTask_CB_tab[2]:  Task3 id=3 */
    {
        &tTask_INIB_tab[2],                      /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* my_thread */
        0,                                       /* my_cond */
        0,                                       /* my_mutex */
        0,                                       /* state */
    },
    /* cell: tTask_CB_tab[3]:  Task4 id=4 */
    {
        &tTask_INIB_tab[3],                      /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* my_thread */
        0,                                       /* my_cond */
        0,                                       /* my_mutex */
        0,                                       /* state */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eTask : omitted by entry port optimize */
/* eTask : omitted by entry port optimize */
/* eTask : omitted by entry port optimize */
/* eTask : omitted by entry port optimize */
