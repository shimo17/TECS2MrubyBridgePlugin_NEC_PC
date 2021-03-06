/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tAppl_tecsgen.h"
#include "tAppl_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */


/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tAppl_INIB tAppl_INIB_tab[] = {
    /* cell: tAppl_CB_tab[0]:  appl1 id=1 */
    {
        /* attribute(RO) */ 
        50,                                      /* a */
    },
    /* cell: tAppl_CB_tab[1]:  appl2 id=2 */
    {
        /* attribute(RO) */ 
        100,                                     /* a */
    },
};

/* セル CB #_CB_# */
struct tag_tAppl_CB tAppl_CB_tab[] = {
    /* cell: tAppl_CB_tab[0]:  appl1 id=1 */
    {
        &tAppl_INIB_tab[0],                      /* _inib */
        /* var */ 
        50,                                      /* b */
    },
    /* cell: tAppl_CB_tab[1]:  appl2 id=2 */
    {
        &tAppl_INIB_tab[1],                      /* _inib */
        /* var */ 
        100,                                     /* b */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
