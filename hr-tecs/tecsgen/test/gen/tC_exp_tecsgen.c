/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tC_exp_tecsgen.h"
#include "tC_exp_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */



/* 呼び口配列 #_CPA_# */



/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tC_exp_INIB tC_exp_INIB_tab[] = {
    /* cell: tC_exp_CB_tab[0]:  tc id=1 */
    {
        /* attribute(RO) */ 
        ID_tC_exp_tc,                            /* id */
        "cell: tc, ct: tC_exp, idx: &tC_exp_CB_tab[0], cb_proto: tC_exp_CB_tab[], cbp: &tC_exp_CB_tab[0], id: tC_exp_tc"
, /* cbp */
    },
    /* cell: tC_exp_CB_tab[1]:  tc2_tc id=2 */
    {
        /* attribute(RO) */ 
        "ID_tComp_C_EXP_tc2_CELL_tc2_IDX_&tC_exp_CB_tab[1], CB_PROTO $cb_poroto$, CBP &tC_exp_CB_tab[1]", /* id */
        "cell: tc2, ct: tComp_C_EXP, idx: &tC_exp_CB_tab[1], cb_proto: tC_exp_CB_tab[], cbp: &tC_exp_CB_tab[1], id: tComp_C_EXP_tc2", /* cbp */
    },
    /* cell: tC_exp_CB_tab[2]:  tc3_tc id=3 */
    {
        /* attribute(RO) */ 
        "ID_tComp_C_EXP_tc3_CELL_tc3_IDX_&tC_exp_CB_tab[2], CB_PROTO $cb_poroto$, CBP &tC_exp_CB_tab[2]", /* id */
        "TC3: cell: tc3, ct: tComp_C_EXP, idx: &tC_exp_CB_tab[2], cb_proto: tC_exp_CB_tab[], cbp: &tC_exp_CB_tab[2], id: tComp_C_EXP_tc3", /* cbp */
    },
};

/* セル CB #_CB_# */
struct tag_tC_exp_CB tC_exp_CB_tab[] = {
    /* cell: tC_exp_CB_tab[0]:  tc id=1 */
    {
        &tC_exp_INIB_tab[0],                     /* _inib */
        /* var */ 
        false,                                   /* v */
    },
    /* cell: tC_exp_CB_tab[1]:  tc2_tc id=2 */
    {
        &tC_exp_INIB_tab[1],                     /* _inib */
        /* var */ 
        false,                                   /* v */
    },
    /* cell: tC_exp_CB_tab[2]:  tc3_tc id=3 */
    {
        &tC_exp_INIB_tab[2],                     /* _inib */
        /* var */ 
        false,                                   /* v */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
