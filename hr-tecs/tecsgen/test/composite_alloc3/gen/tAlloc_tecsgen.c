/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tAlloc_tecsgen.h"
#include "tAlloc_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eA */
struct tag_tAlloc_eA_DES {
    const struct tag_sAlloc_VMT *vmt;
    tAlloc_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eA */
ER             tAlloc_eA_alloc_skel( const struct tag_sAlloc_VDES *epd, int32_t sz, void** p)
{
    struct tag_tAlloc_eA_DES *lepd
        = (struct tag_tAlloc_eA_DES *)epd;
    return tAlloc_eA_alloc( lepd->idx, sz, p );
}
ER             tAlloc_eA_dealloc_skel( const struct tag_sAlloc_VDES *epd, const void* p)
{
    struct tag_tAlloc_eA_DES *lepd
        = (struct tag_tAlloc_eA_DES *)epd;
    return tAlloc_eA_dealloc( lepd->idx, p );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eA */
const struct tag_sAlloc_VMT tAlloc_eA_MT_ = {
    tAlloc_eA_alloc_skel,
    tAlloc_eA_dealloc_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */







/* 呼び口配列 #_CPA_# */







/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tAlloc_INIB tAlloc_INIB_tab[] = {
    /* cell: tAlloc_CB_tab[0]:  CompAlloc_Alloc id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* num */
    },
    /* cell: tAlloc_CB_tab[1]:  CompAlloc_Alloc2 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* num */
    },
    /* cell: tAlloc_CB_tab[2]:  CompAlloc2_Alloc id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        2,                                       /* num */
    },
    /* cell: tAlloc_CB_tab[3]:  CompAlloc2_Alloc2 id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        2,                                       /* num */
    },
    /* cell: tAlloc_CB_tab[4]:  CompAllocSuper_Alloc id=5 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        10,                                      /* num */
    },
    /* cell: tAlloc_CB_tab[5]:  CompAllocSuper_CellIn_Alloc id=6 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        10,                                      /* num */
    },
    /* cell: tAlloc_CB_tab[6]:  CompAllocSuper_CellIn_Alloc2 id=7 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        10,                                      /* num */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tAlloc_eA_DES CompAlloc_Alloc_eA_des;
const struct tag_tAlloc_eA_DES CompAlloc_Alloc_eA_des = {
    &tAlloc_eA_MT_,
    &tAlloc_INIB_tab[0],   /* INIB */
};
extern const struct tag_tAlloc_eA_DES CompAlloc_Alloc2_eA_des;
const struct tag_tAlloc_eA_DES CompAlloc_Alloc2_eA_des = {
    &tAlloc_eA_MT_,
    &tAlloc_INIB_tab[1],   /* INIB */
};
extern const struct tag_tAlloc_eA_DES CompAlloc2_Alloc_eA_des;
const struct tag_tAlloc_eA_DES CompAlloc2_Alloc_eA_des = {
    &tAlloc_eA_MT_,
    &tAlloc_INIB_tab[2],   /* INIB */
};
extern const struct tag_tAlloc_eA_DES CompAlloc2_Alloc2_eA_des;
const struct tag_tAlloc_eA_DES CompAlloc2_Alloc2_eA_des = {
    &tAlloc_eA_MT_,
    &tAlloc_INIB_tab[3],   /* INIB */
};
extern const struct tag_tAlloc_eA_DES CompAllocSuper_Alloc_eA_des;
const struct tag_tAlloc_eA_DES CompAllocSuper_Alloc_eA_des = {
    &tAlloc_eA_MT_,
    &tAlloc_INIB_tab[4],   /* INIB */
};
extern const struct tag_tAlloc_eA_DES CompAllocSuper_CellIn_Alloc_eA_des;
const struct tag_tAlloc_eA_DES CompAllocSuper_CellIn_Alloc_eA_des = {
    &tAlloc_eA_MT_,
    &tAlloc_INIB_tab[5],   /* INIB */
};
extern const struct tag_tAlloc_eA_DES CompAllocSuper_CellIn_Alloc2_eA_des;
const struct tag_tAlloc_eA_DES CompAllocSuper_CellIn_Alloc2_eA_des = {
    &tAlloc_eA_MT_,
    &tAlloc_INIB_tab[6],   /* INIB */
};
