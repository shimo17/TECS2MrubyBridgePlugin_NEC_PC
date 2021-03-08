/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCBMain_tecsgen.h"
#include "tCBMain_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody */
struct tag_tCBMain_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tCBMain_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eBody */
void           tCBMain_eBody_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tCBMain_eBody_DES *lepd
        = (struct tag_tCBMain_eBody_DES *)epd;
    tCBMain_eBody_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody */
const struct tag_sTaskBody_VMT tCBMain_eBody_MT_ = {
    tCBMain_eBody_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sCallback_VDES CBTarget_eCallback_des;

extern struct tag_sCallback_VDES rExportCallBack_CBTarget_CBTarget_eCallback_des;

extern struct tag_sCallback_VDES InCompositeCallBack_CBTarget_eCallback_des;

/* 呼び口配列 #_CPA_# */



/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCBMain_INIB tCBMain_INIB_tab[] = {
    /* cell: tCBMain_CB_tab[0]:  CBMain id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCBTarget_CB_tab[0],                    /* cCallback #_CCP2_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tCBMain_CB_tab[1]:  CBMain id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCBTarget_CB_tab[2],                    /* cCallback #_CCP2_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tCBMain_CB_tab[2]:  InCompositeCallBack_CBMain id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCBTarget_CB_tab[1],                    /* cCallback #_CCP2_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCBMain_eBody_DES CBMain_eBody_des;
const struct tag_tCBMain_eBody_DES CBMain_eBody_des = {
    &tCBMain_eBody_MT_,
    &tCBMain_INIB_tab[0],   /* INIB */
};
extern const struct tag_tCBMain_eBody_DES rExportCallBack_CBMain_eBody_des;
const struct tag_tCBMain_eBody_DES rExportCallBack_CBMain_eBody_des = {
    &tCBMain_eBody_MT_,
    &tCBMain_INIB_tab[1],   /* INIB */
};
extern const struct tag_tCBMain_eBody_DES InCompositeCallBack_CBMain_eBody_des;
const struct tag_tCBMain_eBody_DES InCompositeCallBack_CBMain_eBody_des = {
    &tCBMain_eBody_MT_,
    &tCBMain_INIB_tab[2],   /* INIB */
};
