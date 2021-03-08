/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTask_tecsgen.h"
#include "tTask_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTask : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sTaskBody_VDES rTEST2_rSimple2_Simple2_eMain_des;

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
/* cell: rTEST2_rSimple2_Task_CB:  Task id=3 */
const tTask_INIB rTEST2_rSimple2_Task_INIB = {
    /* call port (INIB) #_CP_# */ 
    3,                                       /* cBody #_CCP2_# */
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    TA_ACT,                                  /* taskAttribute */
    TA_NULL,                                 /* exceptionAttribute */
    17,                                      /* priority */
    2016,                                    /* stackSize */
    "tTask_Task",                            /* name */
};

/* セル CB #_CB_# */
/* cell: rTEST2_rSimple2_Task_CB:  Task id=3 */
tTask_CB rTEST2_rSimple2_Task_CB = {
    &rTEST2_rSimple2_Task_INIB,              /* _inib */
    /* entry port #_EP_# */ 
    /* var */ 
    0,                                       /* my_thread */
    0,                                       /* my_cond */
    0,                                       /* my_mutex */
    0,                                       /* state */
};

/* 受け口ディスクリプタ #_EPD_# */
/* eTask : omitted by entry port optimize */
