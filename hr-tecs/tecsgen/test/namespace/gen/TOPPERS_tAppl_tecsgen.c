/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "TOPPERS_tAppl_tecsgen.h"
#include "TOPPERS_tAppl_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
TOPPERS_tAppl_INIB TOPPERS_tAppl_INIB_tab[] = {
    /* cell: TOPPERS_tAppl_CB_tab[0]:  Appl2 id=1 */
    {
        /* attribute(RO) */ 
        32,                                      /* a */
    },
};

/* セル CB #_CB_# */
struct tag_TOPPERS_tAppl_CB TOPPERS_tAppl_CB_tab[] = {
    /* cell: TOPPERS_tAppl_CB_tab[0]:  Appl2 id=1 */
    {
        &TOPPERS_tAppl_INIB_tab[0],              /* _inib */
        /* var */ 
        32,                                      /* b */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
