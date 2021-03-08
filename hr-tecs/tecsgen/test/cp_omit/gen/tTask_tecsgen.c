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
extern struct tag_sTaskBody_VDES Cl_eBody_des;

extern struct tag_sTaskBody_VDES Cl2_Cell_eBody_des;

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
        15,                                      /* priority */
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
        15,                                      /* priority */
        4096,                                    /* stackSize */
        "tTask_Task2",                           /* name */
    },
};

/* セル CB #_CB_# */
struct tag_tTask_CB tTask_CB_tab[2];
/* 受け口ディスクリプタ #_EPD_# */
/* eTask : omitted by entry port optimize */
/* eTask : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tTask_CB_initialize()
{
    tTask_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
