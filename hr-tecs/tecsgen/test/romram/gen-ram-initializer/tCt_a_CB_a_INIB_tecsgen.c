/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCt_a_CB_a_INIB_tecsgen.h"
#include "tCt_a_CB_a_INIB_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
int8_t Ct_a_CB_a_INIB_CB_buf_INIT[6];
/* セル INIB #_INIB_# */
/* cell: Ct_a_CB_a_INIB_CB:  Ct_a_CB_a_INIB id=19 */
const tCt_a_CB_a_INIB_INIB Ct_a_CB_a_INIB_INIB = {
    /* attribute(RO) */ 
    6,                                       /* size */
    Ct_a_CB_a_INIB_CB_buf_INIT,              /* buf */
};

/* セル CB #_CB_# */
/* cell: Ct_a_CB_a_INIB_CB:  Ct_a_CB_a_INIB id=19 */
tCt_a_CB_a_INIB_CB Ct_a_CB_a_INIB_CB = {};
/* 受け口ディスクリプタ #_EPD_# */
/* ID to INIB table #_INTAB_# */
tCt_a_CB_a_INIB_INIB *tCt_a_CB_a_INIB_INIB_tab[] ={
    &Ct_a_CB_a_INIB_INIB,
};
/* ID to CB table #_CBTAB_# */
tCt_a_CB_a_INIB_CB *tCt_a_CB_a_INIB_CB_tab[] ={
    &Ct_a_CB_a_INIB_CB,
};
/* CB 初期化コード #_CIC_# */
void
tCt_a_CB_a_INIB_CB_initialize()
{
    tCt_a_CB_a_INIB_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
