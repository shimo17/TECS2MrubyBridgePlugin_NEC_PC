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
/* セル INIB #_INIB_# */
tVMTUselessOptimizeCaller_INIB tVMTUselessOptimizeCaller_INIB_tab[] = {
    /* cell: tVMTUselessOptimizeCaller_CB_tab[0]:  VMTUselessOptimizeCaller id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &VMTUselessOptimizeCallee_eEnt_des0,     /* cCall #_CCP0_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tVMTUselessOptimizeCaller_CB_tab[1]:  VMTUselessOptimizeCaller2 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &VMTUselessOptimizeCallee_eEnt_des1,     /* cCall #_CCP0_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tVMTUselessOptimizeCaller_eEnt_DES VMTUselessOptimizeCaller_eEnt_des;
const struct tag_tVMTUselessOptimizeCaller_eEnt_DES VMTUselessOptimizeCaller_eEnt_des = {
    &tVMTUselessOptimizeCaller_eEnt_MT_,
    &tVMTUselessOptimizeCaller_INIB_tab[0],   /* INIB */
};
extern const struct tag_tVMTUselessOptimizeCaller_eEnt_DES VMTUselessOptimizeCaller2_eEnt_des;
const struct tag_tVMTUselessOptimizeCaller_eEnt_DES VMTUselessOptimizeCaller2_eEnt_des = {
    &tVMTUselessOptimizeCaller_eEnt_MT_,
    &tVMTUselessOptimizeCaller_INIB_tab[1],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
tVMTUselessOptimizeCaller_CB_initialize()
{
    tVMTUselessOptimizeCaller_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
