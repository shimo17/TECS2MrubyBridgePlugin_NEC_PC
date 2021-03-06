/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCt2_tecsgen.h"
#include "tCt2_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig_VDES CompAlloc_Cell1_eEnt_des;
extern struct tag_sSig_VDES CompAlloc2_Cell1_eEnt_des;
extern struct tag_sAlloc_VDES CompAlloc_Alloc_eA_des;
extern struct tag_sAlloc_VDES CompAlloc2_Alloc_eA_des;
extern struct tag_sAlloc_VDES CompAlloc_Alloc_eA_des;
extern struct tag_sAlloc_VDES CompAlloc2_Alloc_eA_des;

/* 呼び口配列 #_CPA_# */
struct tag_sSig_VDES * const Cell2_cCall[] = {
    &CompAlloc_Cell1_eEnt_des,
    &CompAlloc2_Cell1_eEnt_des,
};
struct tag_sAlloc_VDES * const Cell2_cCall_func_a[] = {
    &CompAlloc_Alloc_eA_des,
    &CompAlloc2_Alloc_eA_des,
};
struct tag_sAlloc_VDES * const Cell2_cCall_func2_buf[] = {
    &CompAlloc_Alloc_eA_des,
    &CompAlloc2_Alloc_eA_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCt2_INIB tCt2_SINGLE_CELL_INIB = 
{
    /* call port (INIB) #_CP_# */ 
    Cell2_cCall,                             /* #_CCP3B_# */
    2,                                       /* length of cCall (n_cCall) #_CCP4_# */
    Cell2_cCall_func_a,                      /* #_CCP3B_# */
    2,                                       /* length of cCall_func_a (n_cCall_func_a) #_CCP4_# */
    Cell2_cCall_func2_buf,                   /* #_CCP3B_# */
    2,                                       /* length of cCall_func2_buf (n_cCall_func2_buf) #_CCP4_# */
};

/* 受け口ディスクリプタ #_EPD_# */
