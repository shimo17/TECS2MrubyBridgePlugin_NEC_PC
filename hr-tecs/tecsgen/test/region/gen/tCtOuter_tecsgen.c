/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCtOuter_tecsgen.h"
#include "tCtOuter_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt */
struct tag_tCtOuter_eEnt_DES {
    const struct tag_sSig2_VMT *vmt;
    int           idx;
};

/* eMain : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt */
ER             tCtOuter_eEnt_func1_skel( const struct tag_sSig2_VDES *epd, int32_t arg1, int32_t* res)
{
    struct tag_tCtOuter_eEnt_DES *lepd
        = (struct tag_tCtOuter_eEnt_DES *)epd;
    return tCtOuter_eEnt_func1( lepd->idx, arg1, res );
}
/* eMain : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt */
const struct tag_sSig2_VMT tCtOuter_eEnt_MT_ = {
    tCtOuter_eEnt_func1_skel,
};
/* eMain : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCtOuter_eEnt_DES outer_eEnt_des;
const struct tag_tCtOuter_eEnt_DES outer_eEnt_des = {
    &tCtOuter_eEnt_MT_,
    0,
};
/* eMain : omitted by entry port optimize */
