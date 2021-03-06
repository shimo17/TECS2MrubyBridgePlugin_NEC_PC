/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tKernel_tecsgen.h"
#include "tKernel_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eKernel */
struct tag_tKernel_eKernel_DES {
    const struct tag_sKernel_VMT *vmt;
    int           idx;
};

/* eiKernel */
struct tag_tKernel_eiKernel_DES {
    const struct tag_siKernel_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eKernel */
ER             tKernel_eKernel_delay_skel( const struct tag_sKernel_VDES *epd, RELTIM delay_time)
{
    return tKernel_eKernel_delay( delay_time );
}
ER             tKernel_eKernel_exitTask_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_exitTask( );
}
ER             tKernel_eKernel_getTime_skel( const struct tag_sKernel_VDES *epd, SYSTIM* p_system_time)
{
    return tKernel_eKernel_getTime( p_system_time );
}
ER             tKernel_eKernel_getMicroTime_skel( const struct tag_sKernel_VDES *epd, SYSUTM* p_system_micro_time)
{
    return tKernel_eKernel_getMicroTime( p_system_micro_time );
}
ER             tKernel_eKernel_exitKernel_skel( const struct tag_sKernel_VDES *epd)
{
    return tKernel_eKernel_exitKernel( );
}
/* eiKernel */
ER             tKernel_eiKernel_getMicroTime_skel( const struct tag_siKernel_VDES *epd, SYSUTM* p_system_micro_time)
{
    return tKernel_eiKernel_getMicroTime( p_system_micro_time );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eKernel */
const struct tag_sKernel_VMT tKernel_eKernel_MT_ = {
    tKernel_eKernel_delay_skel,
    tKernel_eKernel_exitTask_skel,
    tKernel_eKernel_getTime_skel,
    tKernel_eKernel_getMicroTime_skel,
    tKernel_eKernel_exitKernel_skel,
};
/* eiKernel */
const struct tag_siKernel_VMT tKernel_eiKernel_MT_ = {
    tKernel_eiKernel_getMicroTime_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tKernel_eKernel_DES Kernel_eKernel_des;
const struct tag_tKernel_eKernel_DES Kernel_eKernel_des = {
    &tKernel_eKernel_MT_,
    0,
};
extern const struct tag_tKernel_eiKernel_DES Kernel_eiKernel_des;
const struct tag_tKernel_eiKernel_DES Kernel_eiKernel_des = {
    &tKernel_eiKernel_MT_,
    0,
};
