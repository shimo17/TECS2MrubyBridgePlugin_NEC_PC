/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSCt_no_CB_no_INIB_tecsgen.h"
#include "tSCt_no_CB_no_INIB_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
int8_t tSCt_no_CB_no_INIB_SINGLE_CELL_CB_buf_INIT[1];
/* セル INIB #_INIB_# */
tSCt_no_CB_no_INIB_INIB tSCt_no_CB_no_INIB_SINGLE_CELL_INIB = 
{
    /* attribute(RO) */ 
    tSCt_no_CB_no_INIB_SINGLE_CELL_CB_buf_INIT, /* buf */
};

/* 受け口ディスクリプタ #_EPD_# */
/* CB 初期化コード #_CIC_# */
void
tSCt_no_CB_no_INIB_CB_initialize()
{
    SET_CB_INIB_POINTER(i,p_cb)
    INITIALIZE_CB()
}
