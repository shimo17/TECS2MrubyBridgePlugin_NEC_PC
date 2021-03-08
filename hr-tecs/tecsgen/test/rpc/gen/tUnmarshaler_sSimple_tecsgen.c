/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tUnmarshaler_sSimple_tecsgen.h"
#include "tUnmarshaler_sSimple_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eUnmarshalAndCallFunction */
struct tag_tUnmarshaler_sSimple_eUnmarshalAndCallFunction_DES {
    const struct tag_sUnmarshalerMain_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eUnmarshalAndCallFunction */
ER             tUnmarshaler_sSimple_eUnmarshalAndCallFunction_main_skel( const struct tag_sUnmarshalerMain_VDES *epd)
{
    struct tag_tUnmarshaler_sSimple_eUnmarshalAndCallFunction_DES *lepd
        = (struct tag_tUnmarshaler_sSimple_eUnmarshalAndCallFunction_DES *)epd;
    return tUnmarshaler_sSimple_eUnmarshalAndCallFunction_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eUnmarshalAndCallFunction */
const struct tag_sUnmarshalerMain_VMT tUnmarshaler_sSimple_eUnmarshalAndCallFunction_MT_ = {
    tUnmarshaler_sSimple_eUnmarshalAndCallFunction_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tUnmarshaler_sSimple_eUnmarshalAndCallFunction_DES rTransparent_RPCPlugin__1_sSimple_unmarshaler_eUnmarshalAndCallFunction_des;
const struct tag_tUnmarshaler_sSimple_eUnmarshalAndCallFunction_DES rTransparent_RPCPlugin__1_sSimple_unmarshaler_eUnmarshalAndCallFunction_des = {
    &tUnmarshaler_sSimple_eUnmarshalAndCallFunction_MT_,
    0,
};
