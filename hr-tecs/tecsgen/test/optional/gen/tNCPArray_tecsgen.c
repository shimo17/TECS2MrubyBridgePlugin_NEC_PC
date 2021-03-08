/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tNCPArray_tecsgen.h"
#include "tNCPArray_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

extern struct tag_sSig_VDES SingleCellOptimizeCaller_eEnt_des;
extern struct tag_sSig_VDES VMTUselessOptimizeCaller_eEnt_des;

/* 呼び口配列 #_CPA_# */

struct tag_sSig_VDES * const NCPArray2_cCall[] = {
    &SingleCellOptimizeCaller_eEnt_des,
    &VMTUselessOptimizeCaller_eEnt_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tNCPArray_INIB tNCPArray_INIB_tab[] = {
    /* cell: tNCPArray_CB_tab[0]:  NCPArray1 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCall (n_cCall) #_CCP6_# */
    },
    /* cell: tNCPArray_CB_tab[1]:  NCPArray2 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        NCPArray2_cCall,                         /* #_CCP3B_# */
        2,                                       /* length of cCall (n_cCall) #_CCP4_# */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
