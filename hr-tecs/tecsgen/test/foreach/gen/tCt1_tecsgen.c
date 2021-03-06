/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCt1_tecsgen.h"
#include "tCt1_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig_VDES c21_eE_des;

extern struct tag_sSig_VDES c22_eE_des;

extern struct tag_sSig_VDES c23_eE_des;

/* 呼び口配列 #_CPA_# */



/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCt1_INIB tCt1_INIB_tab[] = {
    /* cell: tCt1_CB_tab[0]:  c1 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        1,                                       /* cC #_CCP2_# */
        /* attribute(RO) */ 
        "c1",                                    /* name */
        11,                                      /* a */
        21,                                      /* b */
    },
    /* cell: tCt1_CB_tab[1]:  c2 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        2,                                       /* cC #_CCP2_# */
        /* attribute(RO) */ 
        "c2",                                    /* name */
        12,                                      /* a */
        22,                                      /* b */
    },
    /* cell: tCt1_CB_tab[2]:  c3 id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        3,                                       /* cC #_CCP2_# */
        /* attribute(RO) */ 
        "c3",                                    /* name */
        13,                                      /* a */
        23,                                      /* b */
    },
};

/* セル CB #_CB_# */
struct tag_tCt1_CB tCt1_CB_tab[] = {
    /* cell: tCt1_CB_tab[0]:  c1 id=1 */
    {
        &tCt1_INIB_tab[0],                       /* _inib */
        /* var */ 
        0,                                       /* a0 */
        0,                                       /* b0 */
    },
    /* cell: tCt1_CB_tab[1]:  c2 id=2 */
    {
        &tCt1_INIB_tab[1],                       /* _inib */
        /* var */ 
        0,                                       /* a0 */
        0,                                       /* b0 */
    },
    /* cell: tCt1_CB_tab[2]:  c3 id=3 */
    {
        &tCt1_INIB_tab[2],                       /* _inib */
        /* var */ 
        0,                                       /* a0 */
        0,                                       /* b0 */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
