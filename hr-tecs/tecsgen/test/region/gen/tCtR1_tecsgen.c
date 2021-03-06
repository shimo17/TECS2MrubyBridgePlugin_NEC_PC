/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCtR1_tecsgen.h"
#include "tCtR1_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt */
struct tag_tCtR1_eEnt_DES {
    const struct tag_sSig3_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt */
ER             tCtR1_eEnt_func1_skel( const struct tag_sSig3_VDES *epd, int32_t arg1, int32_t* res)
{
    struct tag_tCtR1_eEnt_DES *lepd
        = (struct tag_tCtR1_eEnt_DES *)epd;
    return tCtR1_eEnt_func1( lepd->idx, arg1, res );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt */
const struct tag_sSig3_VMT tCtR1_eEnt_MT_ = {
    tCtR1_eEnt_func1_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCtR1_eEnt_DES rRegion1_r1cell_eEnt_des;
const struct tag_tCtR1_eEnt_DES rRegion1_r1cell_eEnt_des = {
    &tCtR1_eEnt_MT_,
    0,
};
