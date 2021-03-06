/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tRequired_tecsgen.h"
#include "tRequired_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt */
struct tag_tRequired_eEnt_DES {
    const struct tag_sSig_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt */
int            tRequired_eEnt_func_skel( const struct tag_sSig_VDES *epd)
{
    return tRequired_eEnt_func( );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt */
const struct tag_sSig_VMT tRequired_eEnt_MT_ = {
    tRequired_eEnt_func_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tRequired_eEnt_DES Required_eEnt_des;
const struct tag_tRequired_eEnt_DES Required_eEnt_des = {
    &tRequired_eEnt_MT_,
    0,
};
