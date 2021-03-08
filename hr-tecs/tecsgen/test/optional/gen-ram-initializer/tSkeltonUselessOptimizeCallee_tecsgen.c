/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSkeltonUselessOptimizeCallee_tecsgen.h"
#include "tSkeltonUselessOptimizeCallee_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt */
struct tag_tSkeltonUselessOptimizeCallee_eEnt_DES {
    const struct tag_sSig_VMT *vmt;
    tSkeltonUselessOptimizeCallee_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt */
void           tSkeltonUselessOptimizeCallee_eEnt_func_skel( const struct tag_sSig_VDES *epd)
{
    struct tag_tSkeltonUselessOptimizeCallee_eEnt_DES *lepd
        = (struct tag_tSkeltonUselessOptimizeCallee_eEnt_DES *)epd;
    tSkeltonUselessOptimizeCallee_eEnt_func( lepd->idx );
}
int32_t        tSkeltonUselessOptimizeCallee_eEnt_func2_skel( const struct tag_sSig_VDES *epd, int32_t arg)
{
    struct tag_tSkeltonUselessOptimizeCallee_eEnt_DES *lepd
        = (struct tag_tSkeltonUselessOptimizeCallee_eEnt_DES *)epd;
    return tSkeltonUselessOptimizeCallee_eEnt_func2( lepd->idx, arg );
}
struct tagST   tSkeltonUselessOptimizeCallee_eEnt_func3_skel( const struct tag_sSig_VDES *epd, struct tagST a)
{
    struct tag_tSkeltonUselessOptimizeCallee_eEnt_DES *lepd
        = (struct tag_tSkeltonUselessOptimizeCallee_eEnt_DES *)epd;
    return tSkeltonUselessOptimizeCallee_eEnt_func3( lepd->idx, a );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt */
const struct tag_sSig_VMT tSkeltonUselessOptimizeCallee_eEnt_MT_ = {
    tSkeltonUselessOptimizeCallee_eEnt_func_skel,
    tSkeltonUselessOptimizeCallee_eEnt_func2_skel,
    tSkeltonUselessOptimizeCallee_eEnt_func3_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */


/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tSkeltonUselessOptimizeCallee_INIB tSkeltonUselessOptimizeCallee_INIB_tab[] = {
    /* cell: tSkeltonUselessOptimizeCallee_CB_tab[0]:  SkeltonUselessOptimizeCallee id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        100,                                     /* attribute */
    },
    /* cell: tSkeltonUselessOptimizeCallee_CB_tab[1]:  SkeltonUselessOptimizeCallee2 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        100,                                     /* attribute */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tSkeltonUselessOptimizeCallee_eEnt_DES SkeltonUselessOptimizeCallee_eEnt_des;
const struct tag_tSkeltonUselessOptimizeCallee_eEnt_DES SkeltonUselessOptimizeCallee_eEnt_des = {
    &tSkeltonUselessOptimizeCallee_eEnt_MT_,
    &tSkeltonUselessOptimizeCallee_INIB_tab[0],   /* INIB */
};
extern const struct tag_tSkeltonUselessOptimizeCallee_eEnt_DES SkeltonUselessOptimizeCallee2_eEnt_des;
const struct tag_tSkeltonUselessOptimizeCallee_eEnt_DES SkeltonUselessOptimizeCallee2_eEnt_des = {
    &tSkeltonUselessOptimizeCallee_eEnt_MT_,
    &tSkeltonUselessOptimizeCallee_INIB_tab[1],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
tSkeltonUselessOptimizeCallee_CB_initialize()
{
    tSkeltonUselessOptimizeCallee_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
