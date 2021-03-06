/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tVarInitByAttr_tecsgen.h"
#include "tVarInitByAttr_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt */
struct tag_tVarInitByAttr_eEnt_DES {
    const struct tag_sSig_VMT *vmt;
    tVarInitByAttr_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt */
int32_t        tVarInitByAttr_eEnt_func_skel( const struct tag_sSig_VDES *epd, int32_t in, int32_t* out)
{
    struct tag_tVarInitByAttr_eEnt_DES *lepd
        = (struct tag_tVarInitByAttr_eEnt_DES *)epd;
    return tVarInitByAttr_eEnt_func( lepd->idx, in, out );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt */
const struct tag_sSig_VMT tVarInitByAttr_eEnt_MT_ = {
    tVarInitByAttr_eEnt_func_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */


/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル CB #_CB_# */
/* cell: Cell1_CB:  Cell1 id=9 */
tVarInitByAttr_CB Cell1_CB = {
    /* entry port #_EP_# */ 
    /* attribute */ 
    42,                                      /* a0 */
    20,                                      /* a1 */
    /* var */ 
    42,                                      /* v0 */
    52,                                      /* v1 */
};

/* cell: Cell2_CB:  Cell2 id=10 */
tVarInitByAttr_CB Cell2_CB = {
    /* entry port #_EP_# */ 
    /* attribute */ 
    101,                                     /* a0 */
    100,                                     /* a1 */
    /* var */ 
    101,                                     /* v0 */
    132,                                     /* v1 */
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tVarInitByAttr_eEnt_DES Cell1_eEnt_des;
const struct tag_tVarInitByAttr_eEnt_DES Cell1_eEnt_des = {
    &tVarInitByAttr_eEnt_MT_,
    9,     /* ID */
};
extern const struct tag_tVarInitByAttr_eEnt_DES Cell2_eEnt_des;
const struct tag_tVarInitByAttr_eEnt_DES Cell2_eEnt_des = {
    &tVarInitByAttr_eEnt_MT_,
    10,     /* ID */
};
/* ID to CB table #_CBTAB_# */
tVarInitByAttr_CB *tVarInitByAttr_CB_tab[] ={
    &Cell1_CB,
    &Cell2_CB,
};
