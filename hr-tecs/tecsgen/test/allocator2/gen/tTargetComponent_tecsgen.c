/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTargetComponent_tecsgen.h"
#include "tTargetComponent_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eS */
struct tag_tTargetComponent_eS_DES {
    const struct tag_sSendRecv_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eS */
ER             tTargetComponent_eS_snd_skel( const struct tag_sSendRecv_VDES *epd, int8_t* buf, int32_t sz)
{
    struct tag_tTargetComponent_eS_DES *lepd
        = (struct tag_tTargetComponent_eS_DES *)epd;
    return tTargetComponent_eS_snd( lepd->idx, buf, sz );
}
ER             tTargetComponent_eS_rcv_skel( const struct tag_sSendRecv_VDES *epd, int8_t** buf, int32_t* sz)
{
    struct tag_tTargetComponent_eS_DES *lepd
        = (struct tag_tTargetComponent_eS_DES *)epd;
    return tTargetComponent_eS_rcv( lepd->idx, buf, sz );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eS */
const struct tag_sSendRecv_VMT tTargetComponent_eS_MT_ = {
    tTargetComponent_eS_snd_skel,
    tTargetComponent_eS_rcv_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTargetComponent_eS_DES TargetCell_eS_des;
const struct tag_tTargetComponent_eS_DES TargetCell_eS_des = {
    &tTargetComponent_eS_MT_,
    0,
};
