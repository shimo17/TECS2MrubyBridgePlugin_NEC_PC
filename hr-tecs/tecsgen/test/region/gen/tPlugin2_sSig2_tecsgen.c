/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tPlugin2_sSig2_tecsgen.h"
#include "tPlugin2_sSig2_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eThroughEntry */
struct tag_tPlugin2_sSig2_eThroughEntry_DES {
    const struct tag_sSig2_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eThroughEntry */
ER             tPlugin2_sSig2_eThroughEntry_func1_skel( const struct tag_sSig2_VDES *epd, int32_t arg1, int32_t* res)
{
    struct tag_tPlugin2_sSig2_eThroughEntry_DES *lepd
        = (struct tag_tPlugin2_sSig2_eThroughEntry_DES *)epd;
    return tPlugin2_sSig2_eThroughEntry_func1( lepd->idx, arg1, res );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eThroughEntry */
const struct tag_sSig2_VMT tPlugin2_sSig2_eThroughEntry_MT_ = {
    tPlugin2_sSig2_eThroughEntry_func1_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tPlugin2_sSig2_eThroughEntry_DES rRegion2_rRegionInner_Join_out_through__0_eThroughEntry_des;
const struct tag_tPlugin2_sSig2_eThroughEntry_DES rRegion2_rRegionInner_Join_out_through__0_eThroughEntry_des = {
    &tPlugin2_sSig2_eThroughEntry_MT_,
    0,
};
