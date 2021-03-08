/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tRPCSharedTaskMain_tecsgen.h"
#include "tRPCSharedTaskMain_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain */
struct tag_tRPCSharedTaskMain_eMain_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tRPCSharedTaskMain_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain */
void           tRPCSharedTaskMain_eMain_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tRPCSharedTaskMain_eMain_DES *lepd
        = (struct tag_tRPCSharedTaskMain_eMain_DES *)epd;
    tRPCSharedTaskMain_eMain_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain */
const struct tag_sTaskBody_VMT tRPCSharedTaskMain_eMain_MT_ = {
    tRPCSharedTaskMain_eMain_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sUnmarshalerMain_VDES rRegion_SharedRPCPlugin__0_sSample_unmarshaler_eUnmarshalAndCallFunction_des;
extern struct tag_sUnmarshalerMain_VDES rRegion_SharedRPCPlugin__0_sSample_unmarshaler_eUnmarshalAndCallFunction_des;

/* 呼び口配列 #_CPA_# */
struct tag_sUnmarshalerMain_VDES * const rRegion_RPCSharedChannel_RPCSharedTaskMain_cUnmarshalAndCallFunction[] = {
    &rRegion_SharedRPCPlugin__0_sSample_unmarshaler_eUnmarshalAndCallFunction_des,
    &rRegion_SharedRPCPlugin__0_sSample_unmarshaler_eUnmarshalAndCallFunction_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tRPCSharedTaskMain_INIB tRPCSharedTaskMain_INIB_tab[] = {
    /* cell: tRPCSharedTaskMain_CB_tab[0]:  RPCSharedChannel_RPCSharedTaskMain id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        rRegion_RPCSharedChannel_RPCSharedTaskMain_cUnmarshalAndCallFunction, /* #_CCP3B_# */
        2,                                       /* length of cUnmarshalAndCallFunction (n_cUnmarshalAndCallFunction) #_CCP4_# */
        /* entry port #_EP_# */ 
    },
};

/* セル CB #_CB_# */
struct tag_tRPCSharedTaskMain_CB tRPCSharedTaskMain_CB_tab[] = {
    /* cell: tRPCSharedTaskMain_CB_tab[0]:  RPCSharedChannel_RPCSharedTaskMain id=1 */
    {
        &tRPCSharedTaskMain_INIB_tab[0],         /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* channelNo */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tRPCSharedTaskMain_eMain_DES rRegion_RPCSharedChannel_RPCSharedTaskMain_eMain_des;
const struct tag_tRPCSharedTaskMain_eMain_DES rRegion_RPCSharedChannel_RPCSharedTaskMain_eMain_des = {
    &tRPCSharedTaskMain_eMain_MT_,
    &tRPCSharedTaskMain_CB_tab[0],     /* CB */
};
