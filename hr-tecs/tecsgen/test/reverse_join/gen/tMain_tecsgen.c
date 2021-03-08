/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tMain_tecsgen.h"
#include "tMain_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody */
struct tag_tMain_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eBody */
void           tMain_eBody_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tMain_eBody_DES *lepd
        = (struct tag_tMain_eBody_DES *)epd;
    tMain_eBody_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody */
const struct tag_sTaskBody_VMT tMain_eBody_MT_ = {
    tMain_eBody_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tMain_eBody_DES Main_eBody_des;
const struct tag_tMain_eBody_DES Main_eBody_des = {
    &tMain_eBody_MT_,
    0,
};
