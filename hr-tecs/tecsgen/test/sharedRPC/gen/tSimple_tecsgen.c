/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSimple_tecsgen.h"
#include "tSimple_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody */
struct tag_tSimple_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tSimple_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eBody */
void           tSimple_eBody_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tSimple_eBody_DES *lepd
        = (struct tag_tSimple_eBody_DES *)epd;
    tSimple_eBody_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody */
const struct tag_sTaskBody_VMT tSimple_eBody_MT_ = {
    tSimple_eBody_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSample_VDES rRegion_SharedRPCPlugin__0_sSample_marshaler_eClientEntry_des;
extern struct tag_sDataqueue_VDES rRegion_RPCSharedChannel_Channel_Dataqueue_Peer_eDataqueue_des;

extern struct tag_sSample_VDES rRegion_SharedRPCPlugin__1_sSample_marshaler_eClientEntry_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tSimple_INIB tSimple_INIB_tab[] = {
    /* cell: tSimple_CB_tab[0]:  Simple id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tMarshaler_sSample_CB_tab[0],           /* cCall #_CCP2_# */
        &rRegion_RPCSharedChannel_Channel_Dataqueue_Peer_eDataqueue_des, /* cDataqueue #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tSimple_CB_tab[1]:  Simple2 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tMarshaler_sSample_CB_tab[1],           /* cCall #_CCP2_# */
        0,                                       /* #_CCP5_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tSimple_eBody_DES rRegion_Simple_eBody_des;
const struct tag_tSimple_eBody_DES rRegion_Simple_eBody_des = {
    &tSimple_eBody_MT_,
    &tSimple_INIB_tab[0],   /* INIB */
};
extern const struct tag_tSimple_eBody_DES rRegion_Simple2_eBody_des;
const struct tag_tSimple_eBody_DES rRegion_Simple2_eBody_des = {
    &tSimple_eBody_MT_,
    &tSimple_INIB_tab[1],   /* INIB */
};
