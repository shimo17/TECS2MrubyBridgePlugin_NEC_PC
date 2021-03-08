/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tOpaqueUnmarshaler_sSimple_tecsgen.h"
#include "tOpaqueUnmarshaler_sSimple_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eService */
struct tag_tOpaqueUnmarshaler_sSimple_eService_DES {
    const struct tag_sUnmarshalerMain_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eService */
ER             tOpaqueUnmarshaler_sSimple_eService_main_skel( const struct tag_sUnmarshalerMain_VDES *epd)
{
    struct tag_tOpaqueUnmarshaler_sSimple_eService_DES *lepd
        = (struct tag_tOpaqueUnmarshaler_sSimple_eService_DES *)epd;
    return tOpaqueUnmarshaler_sSimple_eService_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eService */
const struct tag_sUnmarshalerMain_VMT tOpaqueUnmarshaler_sSimple_eService_MT_ = {
    tOpaqueUnmarshaler_sSimple_eService_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tOpaqueUnmarshaler_sSimple_eService_DES rServer_Join_to_through___1_Server_eService_des;
const struct tag_tOpaqueUnmarshaler_sSimple_eService_DES rServer_Join_to_through___1_Server_eService_des = {
    &tOpaqueUnmarshaler_sSimple_eService_MT_,
    0,
};
