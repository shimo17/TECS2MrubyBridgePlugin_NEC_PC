/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCCP5Callee_tecsgen.h"
#include "tCCP5Callee_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt */
struct tag_tCCP5Callee_eEnt_DES {
    const struct tag_sSig_VMT *vmt;
    tCCP5Callee_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt */
void           tCCP5Callee_eEnt_func_skel( const struct tag_sSig_VDES *epd)
{
    struct tag_tCCP5Callee_eEnt_DES *lepd
        = (struct tag_tCCP5Callee_eEnt_DES *)epd;
    tCCP5Callee_eEnt_func( lepd->idx );
}
int32_t        tCCP5Callee_eEnt_func2_skel( const struct tag_sSig_VDES *epd, int32_t arg)
{
    struct tag_tCCP5Callee_eEnt_DES *lepd
        = (struct tag_tCCP5Callee_eEnt_DES *)epd;
    return tCCP5Callee_eEnt_func2( lepd->idx, arg );
}
struct tagST   tCCP5Callee_eEnt_func3_skel( const struct tag_sSig_VDES *epd, struct tagST a)
{
    struct tag_tCCP5Callee_eEnt_DES *lepd
        = (struct tag_tCCP5Callee_eEnt_DES *)epd;
    return tCCP5Callee_eEnt_func3( lepd->idx, a );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt */
const struct tag_sSig_VMT tCCP5Callee_eEnt_MT_ = {
    tCCP5Callee_eEnt_func_skel,
    tCCP5Callee_eEnt_func2_skel,
    tCCP5Callee_eEnt_func3_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCCP5Callee_INIB tCCP5Callee_INIB_tab[] = {
    /* cell: tCCP5Callee_CB_tab[0]:  CCP5E_1 id=1 */
    {
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCCP5Callee_eEnt_DES CCP5E_1_eEnt_des;
const struct tag_tCCP5Callee_eEnt_DES CCP5E_1_eEnt_des = {
    &tCCP5Callee_eEnt_MT_,
    &tCCP5Callee_INIB_tab[0],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
tCCP5Callee_CB_initialize()
{
    tCCP5Callee_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
