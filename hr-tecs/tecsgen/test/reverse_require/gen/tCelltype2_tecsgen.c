/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCelltype2_tecsgen.h"
#include "tCelltype2_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eInit */
struct tag_tCelltype2_eInit_DES {
    const struct tag_sInit_VMT *vmt;
    tCelltype2_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eInit */
void           tCelltype2_eInit_initialize_skel( const struct tag_sInit_VDES *epd)
{
    struct tag_tCelltype2_eInit_DES *lepd
        = (struct tag_tCelltype2_eInit_DES *)epd;
    tCelltype2_eInit_initialize( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eInit */
const struct tag_sInit_VMT tCelltype2_eInit_MT_ = {
    tCelltype2_eInit_initialize_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */





/* 呼び口配列 #_CPA_# */





/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCelltype2_INIB tCelltype2_INIB_tab[] = {
    /* cell: tCelltype2_CB_tab[0]:  Cell21 id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        21,                                      /* no */
    },
    /* cell: tCelltype2_CB_tab[1]:  Cell22 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        22,                                      /* no */
    },
    /* cell: tCelltype2_CB_tab[2]:  CompCell31_Cell id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        31,                                      /* no */
    },
    /* cell: tCelltype2_CB_tab[3]:  CompCell51_Cell_Cell id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        51,                                      /* no */
    },
    /* cell: tCelltype2_CB_tab[4]:  CompCell32_Cell id=5 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        32,                                      /* no */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCelltype2_eInit_DES Cell21_eInit_des;
const struct tag_tCelltype2_eInit_DES Cell21_eInit_des = {
    &tCelltype2_eInit_MT_,
    &tCelltype2_INIB_tab[0],   /* INIB */
};
extern const struct tag_tCelltype2_eInit_DES Cell22_eInit_des;
const struct tag_tCelltype2_eInit_DES Cell22_eInit_des = {
    &tCelltype2_eInit_MT_,
    &tCelltype2_INIB_tab[1],   /* INIB */
};
extern const struct tag_tCelltype2_eInit_DES CompCell31_Cell_eInit_des;
const struct tag_tCelltype2_eInit_DES CompCell31_Cell_eInit_des = {
    &tCelltype2_eInit_MT_,
    &tCelltype2_INIB_tab[2],   /* INIB */
};
extern const struct tag_tCelltype2_eInit_DES CompCell51_Cell_Cell_eInit_des;
const struct tag_tCelltype2_eInit_DES CompCell51_Cell_Cell_eInit_des = {
    &tCelltype2_eInit_MT_,
    &tCelltype2_INIB_tab[3],   /* INIB */
};
extern const struct tag_tCelltype2_eInit_DES CompCell32_Cell_eInit_des;
const struct tag_tCelltype2_eInit_DES CompCell32_Cell_eInit_des = {
    &tCelltype2_eInit_MT_,
    &tCelltype2_INIB_tab[4],   /* INIB */
};
