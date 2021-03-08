/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tPtrCt_tecsgen.h"
#include "tPtrCt_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tPtrCt_INIB tPtrCt_SINGLE_CELL_INIB = 
{
    /* attribute(RO) */ 
    (int32_t(*)())0x300,                     /* a_fp */
    (int32_t(*)())0x300,                     /* v_fp */
    (int32_t(**)())0x400,                    /* v_fp1 */
    0,                                       /* v_fp2 */
};

/* セル CB #_CB_# */
struct tag_tPtrCt_CB tPtrCt_SINGLE_CELL_CB = 
{
    &tPtrCt_SINGLE_CELL_INIB,                /* _inib */
    /* var */ 
    0,                                       /* fp */
};

/* 受け口ディスクリプタ #_EPD_# */
