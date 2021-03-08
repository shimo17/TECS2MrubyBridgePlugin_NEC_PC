/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tVMTUselessOptimizeCallee_tecsgen.h"
#include "tVMTUselessOptimizeCallee_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt */
struct tag_tVMTUselessOptimizeCallee_eEnt_DES {
    const struct tag_sSig_VMT *vmt;
    tVMTUselessOptimizeCallee_IDX  idx;
    int_t  subscript;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt */
void           tVMTUselessOptimizeCallee_eEnt_func_skel( const struct tag_sSig_VDES *epd)
{
    struct tag_tVMTUselessOptimizeCallee_eEnt_DES *lepd
        = (struct tag_tVMTUselessOptimizeCallee_eEnt_DES *)epd;
    tVMTUselessOptimizeCallee_eEnt_func( lepd->idx, lepd->subscript );
}
int32_t        tVMTUselessOptimizeCallee_eEnt_func2_skel( const struct tag_sSig_VDES *epd, int32_t arg)
{
    struct tag_tVMTUselessOptimizeCallee_eEnt_DES *lepd
        = (struct tag_tVMTUselessOptimizeCallee_eEnt_DES *)epd;
    return tVMTUselessOptimizeCallee_eEnt_func2( lepd->idx, lepd->subscript, arg );
}
struct tagST   tVMTUselessOptimizeCallee_eEnt_func3_skel( const struct tag_sSig_VDES *epd, struct tagST a)
{
    struct tag_tVMTUselessOptimizeCallee_eEnt_DES *lepd
        = (struct tag_tVMTUselessOptimizeCallee_eEnt_DES *)epd;
    return tVMTUselessOptimizeCallee_eEnt_func3( lepd->idx, lepd->subscript, a );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル CB #_CB_# */
struct tag_tVMTUselessOptimizeCallee_CB tVMTUselessOptimizeCallee_CB_tab[] = {
    /* cell: tVMTUselessOptimizeCallee_CB_tab[0]:  VMTUselessOptimizeCallee id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute */ 
        100,                                     /* attribute */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tVMTUselessOptimizeCallee_eEnt_DES VMTUselessOptimizeCallee_eEnt_des0;
const struct tag_tVMTUselessOptimizeCallee_eEnt_DES VMTUselessOptimizeCallee_eEnt_des0 = {
    0,
    &tVMTUselessOptimizeCallee_CB_tab[0],      /* CB */
    0
};
extern const struct tag_tVMTUselessOptimizeCallee_eEnt_DES VMTUselessOptimizeCallee_eEnt_des1;
const struct tag_tVMTUselessOptimizeCallee_eEnt_DES VMTUselessOptimizeCallee_eEnt_des1 = {
    0,
    &tVMTUselessOptimizeCallee_CB_tab[0],      /* CB */
    1
};
