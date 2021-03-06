/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCt_a_CB_no_INIB_tecsgen.h"
#include "tCt_a_CB_no_INIB_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
int8_t Ct_a_CB_no_INIB_CB_buf_INIT[1];
/* セル INIB #_INIB_# */
/* cell: Ct_a_CB_no_INIB_CB:  Ct_a_CB_no_INIB id=17 */
const tCt_a_CB_no_INIB_INIB Ct_a_CB_no_INIB_INIB = {
    /* attribute(RO) */ 
    Ct_a_CB_no_INIB_CB_buf_INIT,             /* buf */
};

/* セル CB #_CB_# */
/* cell: Ct_a_CB_no_INIB_CB:  Ct_a_CB_no_INIB id=17 */
tCt_a_CB_no_INIB_CB Ct_a_CB_no_INIB_CB = {
    &Ct_a_CB_no_INIB_INIB,                   /* _inib */
    /* var */ 
    5,                                       /* a */
};

/* 受け口ディスクリプタ #_EPD_# */
/* ID to CB table #_CBTAB_# */
tCt_a_CB_no_INIB_CB *tCt_a_CB_no_INIB_CB_tab[] ={
    &Ct_a_CB_no_INIB_CB,
};
