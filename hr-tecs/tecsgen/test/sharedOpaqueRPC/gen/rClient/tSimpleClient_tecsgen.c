/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSimpleClient_tecsgen.h"
#include "tSimpleClient_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain */
struct tag_tSimpleClient_eMain_DES {
    const struct tag_sTaskBody_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain */
void           tSimpleClient_eMain_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tSimpleClient_eMain_DES *lepd
        = (struct tag_tSimpleClient_eMain_DES *)epd;
    tSimpleClient_eMain_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain */
const struct tag_sTaskBody_VMT tSimpleClient_eMain_MT_ = {
    tSimpleClient_eMain_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tSimpleClient_eMain_DES rClient_rCPon_SimpleClient_eMain_des;
const struct tag_tSimpleClient_eMain_DES rClient_rCPon_SimpleClient_eMain_des = {
    &tSimpleClient_eMain_MT_,
    0,
};
