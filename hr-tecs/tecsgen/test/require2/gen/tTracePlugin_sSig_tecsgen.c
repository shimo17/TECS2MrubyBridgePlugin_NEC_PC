/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTracePlugin_sSig_tecsgen.h"
#include "tTracePlugin_sSig_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eThroughEntry */
struct tag_tTracePlugin_sSig_eThroughEntry_DES {
    const struct tag_sSig_VMT *vmt;
    tTracePlugin_sSig_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eThroughEntry */
int            tTracePlugin_sSig_eThroughEntry_func_skel( const struct tag_sSig_VDES *epd)
{
    struct tag_tTracePlugin_sSig_eThroughEntry_DES *lepd
        = (struct tag_tTracePlugin_sSig_eThroughEntry_DES *)epd;
    return tTracePlugin_sSig_eThroughEntry_func( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eThroughEntry */
const struct tag_sSig_VMT tTracePlugin_sSig_eThroughEntry_MT_ = {
    tTracePlugin_sSig_eThroughEntry_func_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig_VDES Required_eEnt_des;
extern struct tag_sSysLog_VDES SysLog_eSysLog_des;
extern struct tag_sKernel_VDES Kernel_eKernel_des;

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTracePlugin_sSig_INIB tTracePlugin_sSig_INIB_tab[] = {
    /* cell: tTracePlugin_sSig_CB_tab[0]:  Join_out_through__0 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &Required_eEnt_des,                      /* cCall #_CCP1_# */
        &SysLog_eSysLog_des,                     /* _require_call_port_tSysLog_eSysLog #_CCP1_# */
        &Kernel_eKernel_des,                     /* _require_call_port_tKernel_eKernel #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        ": ",                                    /* probeName_str */
        "Cell",                                  /* from_str */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTracePlugin_sSig_eThroughEntry_DES rRegion_Join_out_through__0_eThroughEntry_des;
const struct tag_tTracePlugin_sSig_eThroughEntry_DES rRegion_Join_out_through__0_eThroughEntry_des = {
    &tTracePlugin_sSig_eThroughEntry_MT_,
    &tTracePlugin_sSig_INIB_tab[0],   /* INIB */
};
