/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTestComponent_tecsgen.h"
#include "tTestComponent_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* 受け口スケルトン関数 #_EPSF_# */

/* 受け口スケルトン関数テーブル #_EPSFT_# */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTestComponent_INIB tTestComponent_INIB_tab[] = {
    /* cell: tTestComponent_CB_tab[0]:  Comp id=1 */
    {
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* CB 初期化コード #_CIC_# */
void
tTestComponent_CB_initialize()
{
    tTestComponent_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
