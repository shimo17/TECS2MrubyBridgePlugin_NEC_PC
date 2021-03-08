/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCelltype3_tecsgen.h"
#include "tCelltype3_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt */
struct tag_tCelltype3_eEnt_DES {
    const struct tag_sSig_VMT *vmt;
    tCelltype3_IDX  idx;
    int_t  subscript;
};

/* eEnt2 : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt */
void           tCelltype3_eEnt_func_skel( const struct tag_sSig_VDES *epd)
{
    struct tag_tCelltype3_eEnt_DES *lepd
        = (struct tag_tCelltype3_eEnt_DES *)epd;
    tCelltype3_eEnt_func( lepd->idx, lepd->subscript );
}
/* eEnt2 : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt */
const struct tag_sSig_VMT tCelltype3_eEnt_MT_ = {
    tCelltype3_eEnt_func_skel,
};
/* eEnt2 : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCelltype3_INIB tCelltype3_INIB_tab[] = {
    /* cell: tCelltype3_CB_tab[0]:  CellX id=1 */
    {
        /* entry port #_EP_# */ 
        6,                                       /*  #_EEP_# */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCelltype3_eEnt_DES CellX_eEnt_des0;
const struct tag_tCelltype3_eEnt_DES CellX_eEnt_des0 = {
    &tCelltype3_eEnt_MT_,
    &tCelltype3_INIB_tab[0],    /* INIB */
    0
};
extern const struct tag_tCelltype3_eEnt_DES CellX_eEnt_des1;
const struct tag_tCelltype3_eEnt_DES CellX_eEnt_des1 = {
    &tCelltype3_eEnt_MT_,
    &tCelltype3_INIB_tab[0],    /* INIB */
    1
};
extern const struct tag_tCelltype3_eEnt_DES CellX_eEnt_des2;
const struct tag_tCelltype3_eEnt_DES CellX_eEnt_des2 = {
    &tCelltype3_eEnt_MT_,
    &tCelltype3_INIB_tab[0],    /* INIB */
    2
};
extern const struct tag_tCelltype3_eEnt_DES CellX_eEnt_des3;
const struct tag_tCelltype3_eEnt_DES CellX_eEnt_des3 = {
    &tCelltype3_eEnt_MT_,
    &tCelltype3_INIB_tab[0],    /* INIB */
    3
};
extern const struct tag_tCelltype3_eEnt_DES CellX_eEnt_des4;
const struct tag_tCelltype3_eEnt_DES CellX_eEnt_des4 = {
    &tCelltype3_eEnt_MT_,
    &tCelltype3_INIB_tab[0],    /* INIB */
    4
};
extern const struct tag_tCelltype3_eEnt_DES CellX_eEnt_des5;
const struct tag_tCelltype3_eEnt_DES CellX_eEnt_des5 = {
    &tCelltype3_eEnt_MT_,
    &tCelltype3_INIB_tab[0],    /* INIB */
    5
};
/* eEnt2 : omitted by entry port optimize */
