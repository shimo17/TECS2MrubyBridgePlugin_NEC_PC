/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSerialTaskBody_tecsgen.h"
#include "tSerialTaskBody_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTaskBody : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eTaskBody : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTaskBody : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sTaskBody_VDES Main_eMain_des;
extern struct tag_sTaskBody_VDES rComposite_CompMain_Main_eMain_des;

/* 呼び口配列 #_CPA_# */
struct tag_sTaskBody_VDES * const Task_SerialTaskBody_cBodyArray[] = {
    &Main_eMain_des,
    &rComposite_CompMain_Main_eMain_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tSerialTaskBody_INIB tSerialTaskBody_INIB_tab[] = {
    /* cell: tSerialTaskBody_CB_tab[0]:  Task_SerialTaskBody id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        Task_SerialTaskBody_cBodyArray,          /* #_CCP3B_# */
        2,                                       /* length of cBodyArray (n_cBodyArray) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cTaskExceptionBodyArray (n_cTaskExceptionBodyArray) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tSerialTask_Task",                      /* name */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eTaskBody : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tSerialTaskBody_CB_initialize()
{
    tSerialTaskBody_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
