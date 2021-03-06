/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCt1_tecsgen.h"
#include "tCt1_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt */
struct tag_tCt1_eEnt_DES {
    const struct tag_sSig_VMT *vmt;
    tCt1_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt */
ER             tCt1_eEnt_func_skel( const struct tag_sSig_VDES *epd, int32_t* a)
{
    struct tag_tCt1_eEnt_DES *lepd
        = (struct tag_tCt1_eEnt_DES *)epd;
    return tCt1_eEnt_func( lepd->idx, a );
}
ER             tCt1_eEnt_func2_skel( const struct tag_sSig_VDES *epd, int8_t* buf, int32_t sz)
{
    struct tag_tCt1_eEnt_DES *lepd
        = (struct tag_tCt1_eEnt_DES *)epd;
    return tCt1_eEnt_func2( lepd->idx, buf, sz );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt */
const struct tag_sSig_VMT tCt1_eEnt_MT_ = {
    tCt1_eEnt_func_skel,
    tCt1_eEnt_func2_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sAlloc_VDES CompAlloc_Alloc_eA_des;
extern struct tag_sAlloc_VDES CompAlloc_Alloc_eA_des;

extern struct tag_sAlloc_VDES CompAlloc2_Alloc_eA_des;
extern struct tag_sAlloc_VDES CompAlloc2_Alloc_eA_des;

extern struct tag_sAlloc_VDES CompAllocSuper_CellIn_Alloc_eA_des;
extern struct tag_sAlloc_VDES CompAllocSuper_CellIn_Alloc_eA_des;

/* 呼び口配列 #_CPA_# */



/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCt1_INIB tCt1_INIB_tab[] = {
    /* cell: tCt1_CB_tab[0]:  CompAlloc_Cell1 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tAlloc_CB_tab[0],                       /* eEnt_func_a #_CCP2_# */
        &tAlloc_CB_tab[0],                       /* eEnt_func2_buf #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* num */
    },
    /* cell: tCt1_CB_tab[1]:  CompAlloc2_Cell1 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tAlloc_CB_tab[2],                       /* eEnt_func_a #_CCP2_# */
        &tAlloc_CB_tab[2],                       /* eEnt_func2_buf #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        2,                                       /* num */
    },
    /* cell: tCt1_CB_tab[2]:  CompAllocSuper_CellIn_Cell1 id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &tAlloc_CB_tab[5],                       /* eEnt_func_a #_CCP2_# */
        &tAlloc_CB_tab[5],                       /* eEnt_func2_buf #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        10,                                      /* num */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCt1_eEnt_DES CompAlloc_Cell1_eEnt_des;
const struct tag_tCt1_eEnt_DES CompAlloc_Cell1_eEnt_des = {
    &tCt1_eEnt_MT_,
    &tCt1_INIB_tab[0],   /* INIB */
};
extern const struct tag_tCt1_eEnt_DES CompAlloc2_Cell1_eEnt_des;
const struct tag_tCt1_eEnt_DES CompAlloc2_Cell1_eEnt_des = {
    &tCt1_eEnt_MT_,
    &tCt1_INIB_tab[1],   /* INIB */
};
extern const struct tag_tCt1_eEnt_DES CompAllocSuper_CellIn_Cell1_eEnt_des;
const struct tag_tCt1_eEnt_DES CompAllocSuper_CellIn_Cell1_eEnt_des = {
    &tCt1_eEnt_MT_,
    &tCt1_INIB_tab[2],   /* INIB */
};
