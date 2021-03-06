/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tKernel_tecsgen.h"
#include "tKernel_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSc */
struct tag_tKernel_eSc_DES {
    const struct tag_sSyscall_VMT *vmt;
    int           idx;
};

/* eSc2 : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eSc */
ER             tKernel_eSc_func_skel( const struct tag_sSyscall_VDES *epd)
{
    return tKernel_eSc_func( );
}
/* eSc2 : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSc */
const struct tag_sSyscall_VMT tKernel_eSc_MT_ = {
    tKernel_eSc_func_skel,
};
/* eSc2 : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tKernel_eSc_DES Kernel_eSc_des;
const struct tag_tKernel_eSc_DES Kernel_eSc_des = {
    &tKernel_eSc_MT_,
    0,
};
/* eSc2 : omitted by entry port optimize */
