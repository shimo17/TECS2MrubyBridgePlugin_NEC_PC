/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tAlloc_tecsgen.h"
#include "tAlloc_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eAlloc : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eAlloc : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eAlloc : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
uint32_t tAlloc_Alloc_CB_id_map_INIT[1024];
/* セル INIB #_INIB_# */
tAlloc_INIB tAlloc_INIB_tab[] = {
    /* cell: tAlloc_CB_tab[0]:  Alloc id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1024,                                    /* max_n_alloc */
        tAlloc_Alloc_CB_id_map_INIT,             /* id_map */
    },
};

/* セル CB #_CB_# */
struct tag_tAlloc_CB tAlloc_CB_tab[] = {
    /* cell: tAlloc_CB_tab[0]:  Alloc id=1 */
    {
        &tAlloc_INIB_tab[0],                     /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* n_alloc */
        0,                                       /* n_dealloc */
        0,                                       /* byte_alloc */
        0,                                       /* byte_dealloc */
        0,                                       /* id_next */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eAlloc : omitted by entry port optimize */
