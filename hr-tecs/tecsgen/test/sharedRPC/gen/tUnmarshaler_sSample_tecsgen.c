/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tUnmarshaler_sSample_tecsgen.h"
#include "tUnmarshaler_sSample_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eUnmarshalAndCallFunction */
struct tag_tUnmarshaler_sSample_eUnmarshalAndCallFunction_DES {
    const struct tag_sUnmarshalerMain_VMT *vmt;
    tUnmarshaler_sSample_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eUnmarshalAndCallFunction */
ER             tUnmarshaler_sSample_eUnmarshalAndCallFunction_main_skel( const struct tag_sUnmarshalerMain_VDES *epd)
{
    struct tag_tUnmarshaler_sSample_eUnmarshalAndCallFunction_DES *lepd
        = (struct tag_tUnmarshaler_sSample_eUnmarshalAndCallFunction_DES *)epd;
    return tUnmarshaler_sSample_eUnmarshalAndCallFunction_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eUnmarshalAndCallFunction */
const struct tag_sUnmarshalerMain_VMT tUnmarshaler_sSample_eUnmarshalAndCallFunction_MT_ = {
    tUnmarshaler_sSample_eUnmarshalAndCallFunction_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSample_VDES rRegion_Sample_eEnt_des;

extern struct tag_sSample_VDES rRegion_Sample2_eEnt_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tUnmarshaler_sSample_INIB tUnmarshaler_sSample_INIB_tab[] = {
    /* cell: tUnmarshaler_sSample_CB_tab[0]:  SharedRPCPlugin__0_sSample_unmarshaler id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* cServerCall #_CCP2B_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tUnmarshaler_sSample_CB_tab[1]:  SharedRPCPlugin__1_sSample_unmarshaler id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* cServerCall #_CCP2B_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tUnmarshaler_sSample_eUnmarshalAndCallFunction_DES rRegion_SharedRPCPlugin__0_sSample_unmarshaler_eUnmarshalAndCallFunction_des;
const struct tag_tUnmarshaler_sSample_eUnmarshalAndCallFunction_DES rRegion_SharedRPCPlugin__0_sSample_unmarshaler_eUnmarshalAndCallFunction_des = {
    &tUnmarshaler_sSample_eUnmarshalAndCallFunction_MT_,
    &tUnmarshaler_sSample_INIB_tab[0],   /* INIB */
};
extern const struct tag_tUnmarshaler_sSample_eUnmarshalAndCallFunction_DES rRegion_SharedRPCPlugin__1_sSample_unmarshaler_eUnmarshalAndCallFunction_des;
const struct tag_tUnmarshaler_sSample_eUnmarshalAndCallFunction_DES rRegion_SharedRPCPlugin__1_sSample_unmarshaler_eUnmarshalAndCallFunction_des = {
    &tUnmarshaler_sSample_eUnmarshalAndCallFunction_MT_,
    &tUnmarshaler_sSample_INIB_tab[1],   /* INIB */
};
