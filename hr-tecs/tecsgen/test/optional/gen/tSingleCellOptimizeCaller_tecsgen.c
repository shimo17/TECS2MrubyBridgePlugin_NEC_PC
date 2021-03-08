/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSingleCellOptimizeCaller_tecsgen.h"
#include "tSingleCellOptimizeCaller_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt */
struct tag_tSingleCellOptimizeCaller_eEnt_DES {
    const struct tag_sSig_VMT *vmt;
    tSingleCellOptimizeCaller_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt */
void           tSingleCellOptimizeCaller_eEnt_func_skel( const struct tag_sSig_VDES *epd)
{
    struct tag_tSingleCellOptimizeCaller_eEnt_DES *lepd
        = (struct tag_tSingleCellOptimizeCaller_eEnt_DES *)epd;
    tSingleCellOptimizeCaller_eEnt_func( lepd->idx );
}
int32_t        tSingleCellOptimizeCaller_eEnt_func2_skel( const struct tag_sSig_VDES *epd, int32_t arg)
{
    struct tag_tSingleCellOptimizeCaller_eEnt_DES *lepd
        = (struct tag_tSingleCellOptimizeCaller_eEnt_DES *)epd;
    return tSingleCellOptimizeCaller_eEnt_func2( lepd->idx, arg );
}
struct tagST   tSingleCellOptimizeCaller_eEnt_func3_skel( const struct tag_sSig_VDES *epd, struct tagST a)
{
    struct tag_tSingleCellOptimizeCaller_eEnt_DES *lepd
        = (struct tag_tSingleCellOptimizeCaller_eEnt_DES *)epd;
    return tSingleCellOptimizeCaller_eEnt_func3( lepd->idx, a );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt */
const struct tag_sSig_VMT tSingleCellOptimizeCaller_eEnt_MT_ = {
    tSingleCellOptimizeCaller_eEnt_func_skel,
    tSingleCellOptimizeCaller_eEnt_func2_skel,
    tSingleCellOptimizeCaller_eEnt_func3_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */


/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tSingleCellOptimizeCaller_INIB tSingleCellOptimizeCaller_INIB_tab[] = {
    /* cell: tSingleCellOptimizeCaller_CB_tab[0]:  SingleCellOptimizeCaller id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cWhite (n_cWhite) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cBlack (n_cBlack) #_CCP6_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tSingleCellOptimizeCaller_CB_tab[1]:  SingleCellOptimizeCaller2 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cWhite (n_cWhite) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cBlack (n_cBlack) #_CCP6_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tSingleCellOptimizeCaller_eEnt_DES SingleCellOptimizeCaller_eEnt_des;
const struct tag_tSingleCellOptimizeCaller_eEnt_DES SingleCellOptimizeCaller_eEnt_des = {
    &tSingleCellOptimizeCaller_eEnt_MT_,
    &tSingleCellOptimizeCaller_INIB_tab[0],   /* INIB */
};
extern const struct tag_tSingleCellOptimizeCaller_eEnt_DES SingleCellOptimizeCaller2_eEnt_des;
const struct tag_tSingleCellOptimizeCaller_eEnt_DES SingleCellOptimizeCaller2_eEnt_des = {
    &tSingleCellOptimizeCaller_eEnt_MT_,
    &tSingleCellOptimizeCaller_INIB_tab[1],   /* INIB */
};
