/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSimple_tecsgen.h"
#include "tSimple_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSimple_VDES rSample_rSample1_Join_domain_in_through__0_eThroughEntry_des;

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
char_t rSample_Simple_CB_buf_INIT[32];
/* セル INIB #_INIB_# */
/* cell: rSample_Simple_CB:  Simple id=2 */
const tSimple_INIB rSample_Simple_INIB = {
    /* call port (INIB) #_CP_# */ 
    1,                                       /* cSimple #_CCP2_# */
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    32,                                      /* buf_len */
    rSample_Simple_CB_buf_INIT,              /* buf */
};

/* 受け口ディスクリプタ #_EPD_# */
/* eMain : omitted by entry port optimize */
