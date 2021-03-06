/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tRelayComponent_tecsgen.h"
#include "tRelayComponent_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eA */
struct tag_tRelayComponent_eA_DES {
    const struct tag_sSendRecv_VMT *vmt;
    tRelayComponent_IDX  idx;
    int_t  subscript;
};

/* eS */
struct tag_tRelayComponent_eS_DES {
    const struct tag_sSendRecv_VMT *vmt;
    tRelayComponent_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eA */
ER             tRelayComponent_eA_snd_skel( const struct tag_sSendRecv_VDES *epd, int8_t* buf, int32_t sz)
{
    struct tag_tRelayComponent_eA_DES *lepd
        = (struct tag_tRelayComponent_eA_DES *)epd;
    return tRelayComponent_eA_snd( lepd->idx, lepd->subscript, buf, sz );
}
ER             tRelayComponent_eA_rcv_skel( const struct tag_sSendRecv_VDES *epd, int8_t** buf, int32_t* sz)
{
    struct tag_tRelayComponent_eA_DES *lepd
        = (struct tag_tRelayComponent_eA_DES *)epd;
    return tRelayComponent_eA_rcv( lepd->idx, lepd->subscript, buf, sz );
}
/* eS */
ER             tRelayComponent_eS_snd_skel( const struct tag_sSendRecv_VDES *epd, int8_t* buf, int32_t sz)
{
    struct tag_tRelayComponent_eS_DES *lepd
        = (struct tag_tRelayComponent_eS_DES *)epd;
    return tRelayComponent_eS_snd( lepd->idx, buf, sz );
}
ER             tRelayComponent_eS_rcv_skel( const struct tag_sSendRecv_VDES *epd, int8_t** buf, int32_t* sz)
{
    struct tag_tRelayComponent_eS_DES *lepd
        = (struct tag_tRelayComponent_eS_DES *)epd;
    return tRelayComponent_eS_rcv( lepd->idx, buf, sz );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eA : omitted by entry port optimize */
/* eS */
const struct tag_sSendRecv_VMT tRelayComponent_eS_MT_ = {
    tRelayComponent_eS_snd_skel,
    tRelayComponent_eS_rcv_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSendRecv_VDES TargetCell_eS_des;

extern const struct tag_tRelayComponent_eS_DES RelayCell_eS_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル CB #_CB_# */
struct tag_tRelayComponent_CB tRelayComponent_CB_tab[] = {
    /* cell: tRelayComponent_CB_tab[0]:  RelayCell id=1 */
    {
        /* call port (CB_ALL) #_CP_# */ 
        &TargetCell_eS_des,                      /* cSR #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute */ 
        "tRelayComponent_RelayCell",             /* name */
    },
    /* cell: tRelayComponent_CB_tab[1]:  RelayCell2 id=2 */
    {
        /* call port (CB_ALL) #_CP_# */ 
        (struct tag_sSendRecv_VDES *)&RelayCell_eS_des, /* cSR #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute */ 
        "tRelayComponent_RelayCell2",            /* name */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tRelayComponent_eA_DES RelayCell_eA_des0;
const struct tag_tRelayComponent_eA_DES RelayCell_eA_des0 = {
    0,
    &tRelayComponent_CB_tab[0],      /* CB */
    0
};
extern const struct tag_tRelayComponent_eA_DES RelayCell_eA_des1;
const struct tag_tRelayComponent_eA_DES RelayCell_eA_des1 = {
    0,
    &tRelayComponent_CB_tab[0],      /* CB */
    1
};
extern const struct tag_tRelayComponent_eS_DES RelayCell_eS_des;
const struct tag_tRelayComponent_eS_DES RelayCell_eS_des = {
    &tRelayComponent_eS_MT_,
    &tRelayComponent_CB_tab[0],     /* CB */
};
extern const struct tag_tRelayComponent_eA_DES RelayCell2_eA_des0;
const struct tag_tRelayComponent_eA_DES RelayCell2_eA_des0 = {
    0,
    &tRelayComponent_CB_tab[1],      /* CB */
    0
};
extern const struct tag_tRelayComponent_eA_DES RelayCell2_eA_des1;
const struct tag_tRelayComponent_eA_DES RelayCell2_eA_des1 = {
    0,
    &tRelayComponent_CB_tab[1],      /* CB */
    1
};
extern const struct tag_tRelayComponent_eS_DES RelayCell2_eS_des;
const struct tag_tRelayComponent_eS_DES RelayCell2_eS_des = {
    &tRelayComponent_eS_MT_,
    &tRelayComponent_CB_tab[1],     /* CB */
};
