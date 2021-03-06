/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCtR2_tecsgen.h"
#include "tCtR2_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig2_VDES outer_eEnt_des;
extern struct tag_sSig3_VDES rRegion1_r1cell_eEnt_des;

extern struct tag_sSig2_VDES rRegion2_rRegionInner_Join_out_through__0_eThroughEntry_des;
extern struct tag_sSig3_VDES rRegion2_rRegionInner_Plugin1__0_throughEntry_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCtR2_INIB tCtR2_INIB_tab[] = {
    /* cell: tCtR2_CB_tab[0]:  r2cell id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &outer_eEnt_des,                         /* cCall2 #_CCP1_# */
        &rRegion1_r1cell_eEnt_des,               /* cCall3 #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tCtR2_CB_tab[1]:  r2cellInner id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rRegion2_rRegionInner_Join_out_through__0_eThroughEntry_des, /* cCall2 #_CCP1_# */
        &rRegion2_rRegionInner_Plugin1__0_throughEntry_des, /* cCall3 #_CCP1_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eEnt : omitted by entry port optimize */
/* eEnt : omitted by entry port optimize */
