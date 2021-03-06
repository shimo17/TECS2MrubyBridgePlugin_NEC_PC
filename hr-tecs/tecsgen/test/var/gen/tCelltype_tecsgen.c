/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCelltype_tecsgen.h"
#include "tCelltype_factory.h"


/* 変数(構造体、配列)初期値 #_AVI_# */
const struct tTag	tCelltype_stv_VAR_INIT = { 3, 4, };
const int	tCelltype_sz_array2_VAR_INIT[2] = { 1, 2, };

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */



/* 呼び口配列 #_CPA_# */



/* 属性・変数の配列 #_AVAI_# */
int tCelltype_Cell0_CB_sz_array1_INIT[2];
int tCelltype_Cell0_CB_sz_array2_INIT[2] = { 1, 2, };
int tCelltype_Cell1_CB_sz_array1_INIT[2];
int tCelltype_Cell1_CB_sz_array2_INIT[2] = { 1, 2, };
int tCelltype_Cell2_CB_sz_array1_INIT[2];
int tCelltype_Cell2_CB_sz_array2_INIT[2] = { 1, 2, };
/* セル INIB #_INIB_# */
tCelltype_INIB tCelltype_INIB_tab[] = {
    /* cell: tCelltype_CB_tab[0]:  Cell0 id=1 */
    {
        /* attribute(RO) */ 
        {                                        /* sta */
            1,                                       /* a */
            2,                                       /* b */
        },
        {                                        /* sta2 */
            1,                                       /* a */
            2,                                       /* b */
        },
        2,                                       /* sz */
        tCelltype_Cell0_CB_sz_array1_INIT,       /* sz_array1 */
        tCelltype_Cell0_CB_sz_array2_INIT,       /* sz_array2 */
    },
    /* cell: tCelltype_CB_tab[1]:  Cell1 id=2 */
    {
        /* attribute(RO) */ 
        {                                        /* sta */
            1,                                       /* a */
            2,                                       /* b */
        },
        {                                        /* sta2 */
            1,                                       /* a */
            2,                                       /* b */
        },
        2,                                       /* sz */
        tCelltype_Cell1_CB_sz_array1_INIT,       /* sz_array1 */
        tCelltype_Cell1_CB_sz_array2_INIT,       /* sz_array2 */
    },
    /* cell: tCelltype_CB_tab[2]:  Cell2 id=3 */
    {
        /* attribute(RO) */ 
        {                                        /* sta */
            1,                                       /* a */
            2,                                       /* b */
        },
        {                                        /* sta2 */
            1,                                       /* a */
            2,                                       /* b */
        },
        2,                                       /* sz */
        tCelltype_Cell2_CB_sz_array1_INIT,       /* sz_array1 */
        tCelltype_Cell2_CB_sz_array2_INIT,       /* sz_array2 */
    },
};

/* セル CB #_CB_# */
struct tag_tCelltype_CB tCelltype_CB_tab[] = {
    /* cell: tCelltype_CB_tab[0]:  Cell0 id=1 */
    {
        &tCelltype_INIB_tab[0],                  /* _inib */
        /* var */ 
        {                                        /* stv */
            3,                                       /* a */
            4,                                       /* b */
        },
    },
    /* cell: tCelltype_CB_tab[1]:  Cell1 id=2 */
    {
        &tCelltype_INIB_tab[1],                  /* _inib */
        /* var */ 
        {                                        /* stv */
            3,                                       /* a */
            4,                                       /* b */
        },
    },
    /* cell: tCelltype_CB_tab[2]:  Cell2 id=3 */
    {
        &tCelltype_INIB_tab[2],                  /* _inib */
        /* var */ 
        {                                        /* stv */
            3,                                       /* a */
            4,                                       /* b */
        },
    },
};

/* 受け口ディスクリプタ #_EPD_# */
