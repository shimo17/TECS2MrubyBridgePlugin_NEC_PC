/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tMain_tecsgen.h"
#include "tMain_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain */
struct tag_tMain_eMain_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tMain_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain */
void           tMain_eMain_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    tMain_eMain_main( );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain */
const struct tag_sTaskBody_VMT tMain_eMain_MT_ = {
    tMain_eMain_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig_VDES SingleCellOptimizeCaller_eEnt_des;
extern struct tag_sSig_VDES VMTUselessOptimizeCaller_eEnt_des;
extern struct tag_sSig_VDES SkeltonUselessOptimizeCallee_eEnt_des;
extern struct tag_sSig_VDES SkeltonUselessOptimizeCallee2_eEnt_des;
extern struct tag_sSig_VDES CPArray1_eEnt_des;
extern struct tag_sSig_VDES CPArray2_eEnt_des;
extern struct tag_sSig_VDES CPArray3_eEnt_des;

/* 呼び口配列 #_CPA_# */
struct tag_sSig_VDES * const Comp_Main_cMain[] = {
    &SingleCellOptimizeCaller_eEnt_des,
    &VMTUselessOptimizeCaller_eEnt_des,
    &SkeltonUselessOptimizeCallee_eEnt_des,
    &SkeltonUselessOptimizeCallee2_eEnt_des,
    &CPArray1_eEnt_des,
    &CPArray2_eEnt_des,
    &CPArray3_eEnt_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル CB #_CB_# */
struct tag_tMain_CB tMain_SINGLE_CELL_CB = 
{
    /* call port (CB_ALL) #_CP_# */ 
    Comp_Main_cMain,                         /* #_CCP3B_# */
    7,                                       /* length of cMain (n_cMain) #_CCP4_# */
    /* entry port #_EP_# */ 
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tMain_eMain_DES Comp_Main_eMain_des;
const struct tag_tMain_eMain_DES Comp_Main_eMain_des = {
    &tMain_eMain_MT_,
    &tMain_SINGLE_CELL_CB,       /* CB */
};
