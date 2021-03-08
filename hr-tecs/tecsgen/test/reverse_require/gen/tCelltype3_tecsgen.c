/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCelltype3_tecsgen.h"
#include "tCelltype3_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eInit */
struct tag_tCelltype3_eInit_DES {
    const struct tag_sInit_VMT *vmt;
    tCelltype3_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eInit */
void           tCelltype3_eInit_initialize_skel( const struct tag_sInit_VDES *epd)
{
    struct tag_tCelltype3_eInit_DES *lepd
        = (struct tag_tCelltype3_eInit_DES *)epd;
    tCelltype3_eInit_initialize( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eInit */
const struct tag_sInit_VMT tCelltype3_eInit_MT_ = {
    tCelltype3_eInit_initialize_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */


/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCelltype3_INIB tCelltype3_INIB_tab[] = {
    /* cell: tCelltype3_CB_tab[0]:  CompCell41_Cell id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        41,                                      /* no */
    },
    /* cell: tCelltype3_CB_tab[1]:  CompCell42_Cell id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        42,                                      /* no */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCelltype3_eInit_DES CompCell41_Cell_eInit_des;
const struct tag_tCelltype3_eInit_DES CompCell41_Cell_eInit_des = {
    &tCelltype3_eInit_MT_,
    &tCelltype3_INIB_tab[0],   /* INIB */
};
extern const struct tag_tCelltype3_eInit_DES CompCell42_Cell_eInit_des;
const struct tag_tCelltype3_eInit_DES CompCell42_Cell_eInit_des = {
    &tCelltype3_eInit_MT_,
    &tCelltype3_INIB_tab[1],   /* INIB */
};
