/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tRPCDedicatedTaskMain_tecsgen.h"
#include "tRPCDedicatedTaskMain_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain */
struct tag_tRPCDedicatedTaskMain_eMain_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tRPCDedicatedTaskMain_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain */
void           tRPCDedicatedTaskMain_eMain_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tRPCDedicatedTaskMain_eMain_DES *lepd
        = (struct tag_tRPCDedicatedTaskMain_eMain_DES *)epd;
    tRPCDedicatedTaskMain_eMain_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain */
const struct tag_sTaskBody_VMT tRPCDedicatedTaskMain_eMain_MT_ = {
    tRPCDedicatedTaskMain_eMain_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sUnmarshalerMain_VDES rTransparent_RPCPlugin__1_sSimple_unmarshaler_eUnmarshalAndCallFunction_des;

extern struct tag_sUnmarshalerMain_VDES rTransparent_RPCPlugin__0_sSample_unmarshaler_eUnmarshalAndCallFunction_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tRPCDedicatedTaskMain_INIB tRPCDedicatedTaskMain_INIB_tab[] = {
    /* cell: tRPCDedicatedTaskMain_CB_tab[0]:  RPCPlugin__1_RPCTaskMain id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTransparent_RPCPlugin__1_sSimple_unmarshaler_eUnmarshalAndCallFunction_des, /* cMain #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tRPCDedicatedTaskMain_CB_tab[1]:  RPCPlugin__0_RPCTaskMain id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTransparent_RPCPlugin__0_sSample_unmarshaler_eUnmarshalAndCallFunction_des, /* cMain #_CCP1_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tRPCDedicatedTaskMain_eMain_DES rTransparent_RPCPlugin__1_RPCTaskMain_eMain_des;
const struct tag_tRPCDedicatedTaskMain_eMain_DES rTransparent_RPCPlugin__1_RPCTaskMain_eMain_des = {
    &tRPCDedicatedTaskMain_eMain_MT_,
    &tRPCDedicatedTaskMain_INIB_tab[0],   /* INIB */
};
extern const struct tag_tRPCDedicatedTaskMain_eMain_DES rTransparent_RPCPlugin__0_RPCTaskMain_eMain_des;
const struct tag_tRPCDedicatedTaskMain_eMain_DES rTransparent_RPCPlugin__0_RPCTaskMain_eMain_des = {
    &tRPCDedicatedTaskMain_eMain_MT_,
    &tRPCDedicatedTaskMain_INIB_tab[1],   /* INIB */
};
