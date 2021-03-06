/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCt2_tecsgen.h"
#include "tCt2_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
/* cell: ct2_CB:  ct2 id=3 */
const tCt2_INIB ct2_INIB = {
    /* attribute(RO) */ 
    20,                                      /* a */
};

/* セル CB #_CB_# */
/* cell: ct2_CB:  ct2 id=3 */
tCt2_CB ct2_CB = {};
/* 受け口ディスクリプタ #_EPD_# */
/* ID to INIB table #_INTAB_# */
tCt2_INIB *tCt2_INIB_tab[] ={
    &ct2_INIB,
};
/* ID to CB table #_CBTAB_# */
tCt2_CB *tCt2_CB_tab[] ={
    &ct2_CB,
};
/* CB 初期化コード #_CIC_# */
void
tCt2_CB_initialize()
{
    tCt2_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
