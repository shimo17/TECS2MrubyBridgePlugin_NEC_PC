/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSendRecvClnt_tecsgen.h"
#include "tSendRecvClnt_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain */
struct tag_tSendRecvClnt_eMain_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tSendRecvClnt_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain */
void           tSendRecvClnt_eMain_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tSendRecvClnt_eMain_DES *lepd
        = (struct tag_tSendRecvClnt_eMain_DES *)epd;
    tSendRecvClnt_eMain_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain */
const struct tag_sTaskBody_VMT tSendRecvClnt_eMain_MT_ = {
    tSendRecvClnt_eMain_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tSendRecvClnt_INIB tSendRecvClnt_INIB_tab[] = {
    /* cell: tSendRecvClnt_CB_tab[0]:  SendRecvClnt id=1 */
    {
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tSendRecvClnt_eMain_DES SendRecvClnt_eMain_des;
const struct tag_tSendRecvClnt_eMain_DES SendRecvClnt_eMain_des = {
    &tSendRecvClnt_eMain_MT_,
    &tSendRecvClnt_INIB_tab[0],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
tSendRecvClnt_CB_initialize()
{
    tSendRecvClnt_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
