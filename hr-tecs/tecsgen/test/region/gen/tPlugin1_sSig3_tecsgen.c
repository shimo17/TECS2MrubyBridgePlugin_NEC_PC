/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tPlugin1_sSig3_tecsgen.h"
#include "tPlugin1_sSig3_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* throughEntry */
struct tag_tPlugin1_sSig3_throughEntry_DES {
    const struct tag_sSig3_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* throughEntry */
ER             tPlugin1_sSig3_throughEntry_func1_skel( const struct tag_sSig3_VDES *epd, int32_t arg1, int32_t* res)
{
    struct tag_tPlugin1_sSig3_throughEntry_DES *lepd
        = (struct tag_tPlugin1_sSig3_throughEntry_DES *)epd;
    return tPlugin1_sSig3_throughEntry_func1( lepd->idx, arg1, res );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* throughEntry */
const struct tag_sSig3_VMT tPlugin1_sSig3_throughEntry_MT_ = {
    tPlugin1_sSig3_throughEntry_func1_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tPlugin1_sSig3_throughEntry_DES rRegion2_rRegionInner_Plugin1__0_throughEntry_des;
const struct tag_tPlugin1_sSig3_throughEntry_DES rRegion2_rRegionInner_Plugin1__0_throughEntry_des = {
    &tPlugin1_sSig3_throughEntry_MT_,
    0,
};
