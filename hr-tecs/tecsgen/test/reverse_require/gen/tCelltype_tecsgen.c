/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCelltype_tecsgen.h"
#include "tCelltype_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eInit */
struct tag_tCelltype_eInit_DES {
    const struct tag_sInit_VMT *vmt;
    tCelltype_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eInit */
void           tCelltype_eInit_initialize_skel( const struct tag_sInit_VDES *epd)
{
    struct tag_tCelltype_eInit_DES *lepd
        = (struct tag_tCelltype_eInit_DES *)epd;
    tCelltype_eInit_initialize( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eInit */
const struct tag_sInit_VMT tCelltype_eInit_MT_ = {
    tCelltype_eInit_initialize_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */


/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCelltype_INIB tCelltype_INIB_tab[] = {
    /* cell: tCelltype_CB_tab[0]:  Cell11 id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        11,                                      /* no */
    },
    /* cell: tCelltype_CB_tab[1]:  Cell12 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        12,                                      /* no */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCelltype_eInit_DES Cell11_eInit_des;
const struct tag_tCelltype_eInit_DES Cell11_eInit_des = {
    &tCelltype_eInit_MT_,
    &tCelltype_INIB_tab[0],   /* INIB */
};
extern const struct tag_tCelltype_eInit_DES Cell12_eInit_des;
const struct tag_tCelltype_eInit_DES Cell12_eInit_des = {
    &tCelltype_eInit_MT_,
    &tCelltype_INIB_tab[1],   /* INIB */
};
