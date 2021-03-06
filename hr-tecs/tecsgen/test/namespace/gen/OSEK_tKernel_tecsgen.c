/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "OSEK_tKernel_tecsgen.h"
#include "OSEK_tKernel_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* ka : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* ka : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* ka : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
OSEK_tKernel_INIB OSEK_tKernel_INIB_tab[] = {
    /* cell: OSEK_tKernel_CB_tab[0]:  OSEKkernel id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        20,                                      /* a */
    },
};

/* セル CB #_CB_# */
struct tag_OSEK_tKernel_CB OSEK_tKernel_CB_tab[] = {
    /* cell: OSEK_tKernel_CB_tab[0]:  OSEKkernel id=1 */
    {
        &OSEK_tKernel_INIB_tab[0],               /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* b */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* ka : omitted by entry port optimize */
