/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCt_tecsgen.h"
#include "tCt_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt */
struct tag_tCt_eEnt_DES {
    const struct tag_sSig_VMT *vmt;
    tCt_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt */
int32_t        tCt_eEnt_func_skel( const struct tag_sSig_VDES *epd, int32_t in, int32_t* out)
{
    struct tag_tCt_eEnt_DES *lepd
        = (struct tag_tCt_eEnt_DES *)epd;
    return tCt_eEnt_func( lepd->idx, in, out );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt */
const struct tag_sSig_VMT tCt_eEnt_MT_ = {
    tCt_eEnt_func_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */


/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
/* cell: C0_CB:  C0 id=1 */
const tCt_INIB C0_INIB = {
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    20,                                      /* a */
};

/* cell: C1_CB:  C1 id=2 */
const tCt_INIB C1_INIB = {
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    20,                                      /* a */
};

/* セル CB #_CB_# */
/* cell: C0_CB:  C0 id=1 */
tCt_CB C0_CB = {
    &C0_INIB,                                /* _inib */
    /* entry port #_EP_# */ 
    /* var */ 
    31,                                      /* v */
};

/* cell: C1_CB:  C1 id=2 */
tCt_CB C1_CB = {
    &C1_INIB,                                /* _inib */
    /* entry port #_EP_# */ 
    /* var */ 
    31,                                      /* v */
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCt_eEnt_DES C0_eEnt_des;
const struct tag_tCt_eEnt_DES C0_eEnt_des = {
    &tCt_eEnt_MT_,
    1,     /* ID */
};
extern const struct tag_tCt_eEnt_DES C1_eEnt_des;
const struct tag_tCt_eEnt_DES C1_eEnt_des = {
    &tCt_eEnt_MT_,
    2,     /* ID */
};
/* ID to CB table #_CBTAB_# */
tCt_CB *tCt_CB_tab[] ={
    &C0_CB,
    &C1_CB,
};
