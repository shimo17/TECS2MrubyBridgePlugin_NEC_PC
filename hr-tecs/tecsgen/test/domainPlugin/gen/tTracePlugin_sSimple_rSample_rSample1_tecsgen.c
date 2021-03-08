/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTracePlugin_sSimple_tecsgen.h"
#include "tTracePlugin_sSimple_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eThroughEntry */
struct tag_tTracePlugin_sSimple_eThroughEntry_DES {
    const struct tag_sSimple_VMT *vmt;
    tTracePlugin_sSimple_IDX  idx;
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSimple_VDES rSample_rSample1_Sample_eSample_des;

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
/* cell: rSample_rSample1_Join_domain_in_through__0_CB:  Join_domain_in_through__0 id=1 */
const tTracePlugin_sSimple_INIB rSample_rSample1_Join_domain_in_through__0_INIB = {
    /* call port (INIB) #_CP_# */ 
    &rSample_rSample1_Sample_eSample_des,    /* cCall #_CCP1_# */
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    ": ",                                    /* probeName_str */
    "Simple",                                /* from_str */
};

extern const struct tag_sSimple_VMT tTracePlugin_sSimple_eThroughEntry_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTracePlugin_sSimple_eThroughEntry_DES rSample_rSample1_Join_domain_in_through__0_eThroughEntry_des;
const struct tag_tTracePlugin_sSimple_eThroughEntry_DES rSample_rSample1_Join_domain_in_through__0_eThroughEntry_des = {
    &tTracePlugin_sSimple_eThroughEntry_MT_,
    1,     /* ID */
};
