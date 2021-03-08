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

/* 受け口スケルトン関数 #_EPSF_# */
/* eThroughEntry */
void           tTracePlugin_sSimple_eThroughEntry_helloWorld_skel( const struct tag_sSimple_VDES *epd)
{
    struct tag_tTracePlugin_sSimple_eThroughEntry_DES *lepd
        = (struct tag_tTracePlugin_sSimple_eThroughEntry_DES *)epd;
    tTracePlugin_sSimple_eThroughEntry_helloWorld( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eThroughEntry */
const struct tag_sSimple_VMT tTracePlugin_sSimple_eThroughEntry_MT_ = {
    tTracePlugin_sSimple_eThroughEntry_helloWorld_skel,
};

/* ID to INIB table #_INTAB_# */
    extern tTracePlugin_sSimple_INIB  rSample_rSample1_Join_domain_in_through__0_INIB;
    extern tTracePlugin_sSimple_INIB  rSimple_rSimple0_Join_domain_out_through__0_INIB;
    extern tTracePlugin_sSimple_INIB  rTEST2_rSimple2_Join_domain_to_through__0_INIB;
tTracePlugin_sSimple_INIB *tTracePlugin_sSimple_INIB_tab[] ={
    &rSample_rSample1_Join_domain_in_through__0_INIB,
    &rSimple_rSimple0_Join_domain_out_through__0_INIB,
    &rTEST2_rSimple2_Join_domain_to_through__0_INIB,
};
