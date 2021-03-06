/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCelltype_tecsgen.h"
#include "tCelltype_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody */
struct tag_tCelltype_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tCelltype_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eBody */
void           tCelltype_eBody_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tCelltype_eBody_DES *lepd
        = (struct tag_tCelltype_eBody_DES *)epd;
    tCelltype_eBody_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody */
const struct tag_sTaskBody_VMT tCelltype_eBody_MT_ = {
    tCelltype_eBody_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig_VDES Required_eEnt_des;
extern struct tag_sSig_VDES Required_eEnt_des;

extern struct tag_sSig_VDES rRegion_Join_out_through__0_eThroughEntry_des;
extern struct tag_sSig_VDES rRegion_Join_out_through__0_eThroughEntry_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCelltype_INIB tCelltype_INIB_tab[] = {
    /* cell: tCelltype_CB_tab[0]:  Cell id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &Required_eEnt_des,                      /* _require_call_port_tRequired_eEnt #_CCP1_# */
        &Required_eEnt_des,                      /* cCall #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tCelltype_CB_tab[1]:  Cell id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rRegion_Join_out_through__0_eThroughEntry_des, /* _require_call_port_tRequired_eEnt #_CCP1_# */
        &rRegion_Join_out_through__0_eThroughEntry_des, /* cCall #_CCP1_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCelltype_eBody_DES Cell_eBody_des;
const struct tag_tCelltype_eBody_DES Cell_eBody_des = {
    &tCelltype_eBody_MT_,
    &tCelltype_INIB_tab[0],   /* INIB */
};
extern const struct tag_tCelltype_eBody_DES rRegion_Cell_eBody_des;
const struct tag_tCelltype_eBody_DES rRegion_Cell_eBody_des = {
    &tCelltype_eBody_MT_,
    &tCelltype_INIB_tab[1],   /* INIB */
};
