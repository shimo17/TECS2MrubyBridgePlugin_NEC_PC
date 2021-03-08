/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tRPCSharedChannelMan_tecsgen.h"
#include "tRPCSharedChannelMan_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSemaphore */
struct tag_tRPCSharedChannelMan_eSemaphore_DES {
    const struct tag_sSemaphore_VMT *vmt;
    tRPCSharedChannelMan_IDX  idx;
    int_t  subscript;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eSemaphore */
ER             tRPCSharedChannelMan_eSemaphore_signal_skel( const struct tag_sSemaphore_VDES *epd)
{
    struct tag_tRPCSharedChannelMan_eSemaphore_DES *lepd
        = (struct tag_tRPCSharedChannelMan_eSemaphore_DES *)epd;
    return tRPCSharedChannelMan_eSemaphore_signal( lepd->idx, lepd->subscript );
}
ER             tRPCSharedChannelMan_eSemaphore_wait_skel( const struct tag_sSemaphore_VDES *epd)
{
    struct tag_tRPCSharedChannelMan_eSemaphore_DES *lepd
        = (struct tag_tRPCSharedChannelMan_eSemaphore_DES *)epd;
    return tRPCSharedChannelMan_eSemaphore_wait( lepd->idx, lepd->subscript );
}
ER             tRPCSharedChannelMan_eSemaphore_waitPolling_skel( const struct tag_sSemaphore_VDES *epd)
{
    struct tag_tRPCSharedChannelMan_eSemaphore_DES *lepd
        = (struct tag_tRPCSharedChannelMan_eSemaphore_DES *)epd;
    return tRPCSharedChannelMan_eSemaphore_waitPolling( lepd->idx, lepd->subscript );
}
ER             tRPCSharedChannelMan_eSemaphore_waitTimeout_skel( const struct tag_sSemaphore_VDES *epd, TMO timeout)
{
    struct tag_tRPCSharedChannelMan_eSemaphore_DES *lepd
        = (struct tag_tRPCSharedChannelMan_eSemaphore_DES *)epd;
    return tRPCSharedChannelMan_eSemaphore_waitTimeout( lepd->idx, lepd->subscript, timeout );
}
ER             tRPCSharedChannelMan_eSemaphore_initialize_skel( const struct tag_sSemaphore_VDES *epd)
{
    struct tag_tRPCSharedChannelMan_eSemaphore_DES *lepd
        = (struct tag_tRPCSharedChannelMan_eSemaphore_DES *)epd;
    return tRPCSharedChannelMan_eSemaphore_initialize( lepd->idx, lepd->subscript );
}
ER             tRPCSharedChannelMan_eSemaphore_refer_skel( const struct tag_sSemaphore_VDES *epd, T_RSEM* pk_semaphore_status)
{
    struct tag_tRPCSharedChannelMan_eSemaphore_DES *lepd
        = (struct tag_tRPCSharedChannelMan_eSemaphore_DES *)epd;
    return tRPCSharedChannelMan_eSemaphore_refer( lepd->idx, lepd->subscript, pk_semaphore_status );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSemaphore : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tRPCSharedChannelMan_INIB tRPCSharedChannelMan_INIB_tab[] = {
    /* cell: tRPCSharedChannelMan_CB_tab[0]:  MyChannel_SharedChannelMan id=1 */
    {
        /* entry port #_EP_# */ 
        2,                                       /*  #_EEP_# */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tRPCSharedChannelMan_eSemaphore_DES rClient_MyChannel_SharedChannelMan_eSemaphore_des0;
const struct tag_tRPCSharedChannelMan_eSemaphore_DES rClient_MyChannel_SharedChannelMan_eSemaphore_des0 = {
    0,
    &tRPCSharedChannelMan_INIB_tab[0],    /* INIB */
    0
};
extern const struct tag_tRPCSharedChannelMan_eSemaphore_DES rClient_MyChannel_SharedChannelMan_eSemaphore_des1;
const struct tag_tRPCSharedChannelMan_eSemaphore_DES rClient_MyChannel_SharedChannelMan_eSemaphore_des1 = {
    0,
    &tRPCSharedChannelMan_INIB_tab[0],    /* INIB */
    1
};
