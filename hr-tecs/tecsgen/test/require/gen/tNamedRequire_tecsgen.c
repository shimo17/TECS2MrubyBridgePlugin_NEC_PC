/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tNamedRequire_tecsgen.h"
#include "tNamedRequire_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSc */
struct tag_tNamedRequire_eSc_DES {
    const struct tag_sSyscall_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eSc */
ER             tNamedRequire_eSc_func_skel( const struct tag_sSyscall_VDES *epd)
{
    struct tag_tNamedRequire_eSc_DES *lepd
        = (struct tag_tNamedRequire_eSc_DES *)epd;
    return tNamedRequire_eSc_func( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSc */
const struct tag_sSyscall_VMT tNamedRequire_eSc_MT_ = {
    tNamedRequire_eSc_func_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tNamedRequire_eSc_DES NamedRequire_eSc_des;
const struct tag_tNamedRequire_eSc_DES NamedRequire_eSc_des = {
    &tNamedRequire_eSc_MT_,
    0,
};
