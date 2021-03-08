/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tVMTUselessOptimizeCaller_tecsgen.h"
#include "tVMTUselessOptimizeCaller_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt */
struct tag_tVMTUselessOptimizeCaller_eEnt_DES {
    const struct tag_sSig_VMT *vmt;
    tVMTUselessOptimizeCaller_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt */
void           tVMTUselessOptimizeCaller_eEnt_func_skel( const struct tag_sSig_VDES *epd)
{
    struct tag_tVMTUselessOptimizeCaller_eEnt_DES *lepd
        = (struct tag_tVMTUselessOptimizeCaller_eEnt_DES *)epd;
    tVMTUselessOptimizeCaller_eEnt_func( lepd->idx );
}
int32_t        tVMTUselessOptimizeCaller_eEnt_func2_skel( const struct tag_sSig_VDES *epd, int32_t arg)
{
    struct tag_tVMTUselessOptimizeCaller_eEnt_DES *lepd
        = (struct tag_tVMTUselessOptimizeCaller_eEnt_DES *)epd;
    return tVMTUselessOptimizeCaller_eEnt_func2( lepd->idx, arg );
}
struct tagST   tVMTUselessOptimizeCaller_eEnt_func3_skel( const struct tag_sSig_VDES *epd, struct tagST a)
{
    struct tag_tVMTUselessOptimizeCaller_eEnt_DES *lepd
        = (struct tag_tVMTUselessOptimizeCaller_eEnt_DES *)epd;
    return tVMTUselessOptimizeCaller_eEnt_func3( lepd->idx, a );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt */
const struct tag_sSig_VMT tVMTUselessOptimizeCaller_eEnt_MT_ = {
    tVMTUselessOptimizeCaller_eEnt_func_skel,
    tVMTUselessOptimizeCaller_eEnt_func2_skel,
    tVMTUselessOptimizeCaller_eEnt_func3_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig_VDES VMTUselessOptimizeCallee_eEnt_des0;

extern struct tag_sSig_VDES VMTUselessOptimizeCallee_eEnt_des1;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル CB #_CB_# */
struct tag_tVMTUselessOptimizeCaller_CB tVMTUselessOptimizeCaller_CB_tab[] = {
    /* cell: tVMTUselessOptimizeCaller_CB_tab[0]:  VMTUselessOptimizeCaller id=1 */
    {
        /* call port (CB_ALL) #_CP_# */ 
        &VMTUselessOptimizeCallee_eEnt_des0,     /* cCall #_CCP0_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tVMTUselessOptimizeCaller_CB_tab[1]:  VMTUselessOptimizeCaller2 id=2 */
    {
        /* call port (CB_ALL) #_CP_# */ 
        &VMTUselessOptimizeCallee_eEnt_des1,     /* cCall #_CCP0_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tVMTUselessOptimizeCaller_eEnt_DES VMTUselessOptimizeCaller_eEnt_des;
const struct tag_tVMTUselessOptimizeCaller_eEnt_DES VMTUselessOptimizeCaller_eEnt_des = {
    &tVMTUselessOptimizeCaller_eEnt_MT_,
    &tVMTUselessOptimizeCaller_CB_tab[0],     /* CB */
};
extern const struct tag_tVMTUselessOptimizeCaller_eEnt_DES VMTUselessOptimizeCaller2_eEnt_des;
const struct tag_tVMTUselessOptimizeCaller_eEnt_DES VMTUselessOptimizeCaller2_eEnt_des = {
    &tVMTUselessOptimizeCaller_eEnt_MT_,
    &tVMTUselessOptimizeCaller_CB_tab[1],     /* CB */
};
