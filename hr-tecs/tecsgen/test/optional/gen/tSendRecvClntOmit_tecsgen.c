/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSendRecvClntOmit_tecsgen.h"
#include "tSendRecvClntOmit_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain */
struct tag_tSendRecvClntOmit_eMain_DES {
    const struct tag_sTaskBody_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain */
void           tSendRecvClntOmit_eMain_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tSendRecvClntOmit_eMain_DES *lepd
        = (struct tag_tSendRecvClntOmit_eMain_DES *)epd;
    tSendRecvClntOmit_eMain_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain */
const struct tag_sTaskBody_VMT tSendRecvClntOmit_eMain_MT_ = {
    tSendRecvClntOmit_eMain_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tSendRecvClntOmit_eMain_DES SendRecvClntOmit_eMain_des;
const struct tag_tSendRecvClntOmit_eMain_DES SendRecvClntOmit_eMain_des = {
    &tSendRecvClntOmit_eMain_MT_,
    0,
};
