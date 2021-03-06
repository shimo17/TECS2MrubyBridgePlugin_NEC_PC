/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTestComponent_tecsgen.h"
#include "tTestComponent_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eS : omitted by entry port optimize */

/* eA */
struct tag_tTestComponent_eA_DES {
    const struct tag_sSendRecv_VMT *vmt;
    int           idx;
    int_t  subscript;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eS : omitted by entry port optimize */
/* eA */
ER             tTestComponent_eA_snd_skel( const struct tag_sSendRecv_VDES *epd, int8_t* buf, int32_t sz)
{
    struct tag_tTestComponent_eA_DES *lepd
        = (struct tag_tTestComponent_eA_DES *)epd;
    return tTestComponent_eA_snd( lepd->idx, lepd->subscript, buf, sz );
}
ER             tTestComponent_eA_rcv_skel( const struct tag_sSendRecv_VDES *epd, int8_t** buf, int32_t* sz)
{
    struct tag_tTestComponent_eA_DES *lepd
        = (struct tag_tTestComponent_eA_DES *)epd;
    return tTestComponent_eA_rcv( lepd->idx, lepd->subscript, buf, sz );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eS : omitted by entry port optimize */
/* eA : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
/* eS : omitted by entry port optimize */
extern const struct tag_tTestComponent_eA_DES comp_eA_des0;
const struct tag_tTestComponent_eA_DES comp_eA_des0 = {
    0,
    0,
    0
};
extern const struct tag_tTestComponent_eA_DES comp_eA_des1;
const struct tag_tTestComponent_eA_DES comp_eA_des1 = {
    0,
    0,
    1
};
