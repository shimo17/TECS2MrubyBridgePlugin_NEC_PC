/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSysLog_tecsgen.h"
#include "tSysLog_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSysLog */
struct tag_tSysLog_eSysLog_DES {
    const struct tag_sSysLog_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eSysLog */
ER             tSysLog_eSysLog_write_skel( const struct tag_sSysLog_VDES *epd, uint_t prio, const SYSLOG* p_syslog)
{
    return tSysLog_eSysLog_write( prio, p_syslog );
}
ER_UINT        tSysLog_eSysLog_read_skel( const struct tag_sSysLog_VDES *epd, SYSLOG* p_syslog)
{
    return tSysLog_eSysLog_read( p_syslog );
}
ER             tSysLog_eSysLog_mask_skel( const struct tag_sSysLog_VDES *epd, uint_t logmask, uint_t lowmask)
{
    return tSysLog_eSysLog_mask( logmask, lowmask );
}
ER             tSysLog_eSysLog_refer_skel( const struct tag_sSysLog_VDES *epd, T_SYSLOG_RLOG* pk_rlog)
{
    return tSysLog_eSysLog_refer( pk_rlog );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSysLog */
const struct tag_sSysLog_VMT tSysLog_eSysLog_MT_ = {
    tSysLog_eSysLog_write_skel,
    tSysLog_eSysLog_read_skel,
    tSysLog_eSysLog_mask_skel,
    tSysLog_eSysLog_refer_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tSysLog_eSysLog_DES SysLog_eSysLog_des;
const struct tag_tSysLog_eSysLog_DES SysLog_eSysLog_des = {
    &tSysLog_eSysLog_MT_,
    0,
};
