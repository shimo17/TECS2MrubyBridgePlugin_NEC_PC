/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tPPAllocator_tecsgen.h"
#include "tPPAllocator_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* ePPAllocator : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* ePPAllocator : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* ePPAllocator : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */


/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
int8_t tPPAllocator_RPCPlugin__1_PPAllocator_CB_buf_INIT[1024];
int8_t tPPAllocator_RPCPlugin__0_PPAllocator_CB_buf_INIT[1024];
/* セル INIB #_INIB_# */
tPPAllocator_INIB tPPAllocator_INIB_tab[] = {
    /* cell: tPPAllocator_CB_tab[0]:  RPCPlugin__1_PPAllocator id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1024,                                    /* heapSize */
        tPPAllocator_RPCPlugin__1_PPAllocator_CB_buf_INIT, /* buf */
    },
    /* cell: tPPAllocator_CB_tab[1]:  RPCPlugin__0_PPAllocator id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1024,                                    /* heapSize */
        tPPAllocator_RPCPlugin__0_PPAllocator_CB_buf_INIT, /* buf */
    },
};

/* セル CB #_CB_# */
struct tag_tPPAllocator_CB tPPAllocator_CB_tab[] = {
    /* cell: tPPAllocator_CB_tab[0]:  RPCPlugin__1_PPAllocator id=1 */
    {
        &tPPAllocator_INIB_tab[0],               /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* allocatedSize */
    },
    /* cell: tPPAllocator_CB_tab[1]:  RPCPlugin__0_PPAllocator id=2 */
    {
        &tPPAllocator_INIB_tab[1],               /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* allocatedSize */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* ePPAllocator : omitted by entry port optimize */
/* ePPAllocator : omitted by entry port optimize */
