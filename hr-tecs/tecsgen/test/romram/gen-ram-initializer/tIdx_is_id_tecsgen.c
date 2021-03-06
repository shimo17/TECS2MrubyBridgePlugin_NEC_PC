/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tIdx_is_id_tecsgen.h"
#include "tIdx_is_id_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */



/* 呼び口配列 #_CPA_# */



/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
/* cell: cell_idx_is_id1_CB:  cell_idx_is_id1 id=5 */
const tIdx_is_id_INIB cell_idx_is_id1_INIB = {
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    100,                                     /* a_init */
    -20,                                     /* b_init */
    -40,                                     /* c_init */
};

/* cell: cell_idx_is_id2_CB:  cell_idx_is_id2 id=6 */
const tIdx_is_id_INIB cell_idx_is_id2_INIB = {
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    10,                                      /* a_init */
    -200,                                    /* b_init */
    -50,                                     /* c_init */
};

/* cell: cell_idx_is_id3_CB:  cell_idx_is_id3 id=7 */
const tIdx_is_id_INIB cell_idx_is_id3_INIB = {
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    10,                                      /* a_init */
    -20,                                     /* b_init */
    1000,                                    /* c_init */
};

/* セル CB #_CB_# */
/* cell: cell_idx_is_id1_CB:  cell_idx_is_id1 id=5 */
tIdx_is_id_CB cell_idx_is_id1_CB = {};
/* cell: cell_idx_is_id2_CB:  cell_idx_is_id2 id=6 */
tIdx_is_id_CB cell_idx_is_id2_CB = {};
/* cell: cell_idx_is_id3_CB:  cell_idx_is_id3 id=7 */
tIdx_is_id_CB cell_idx_is_id3_CB = {};
/* 受け口ディスクリプタ #_EPD_# */
/* eEnt : omitted by entry port optimize */
/* eEnt : omitted by entry port optimize */
/* eEnt : omitted by entry port optimize */
/* ID to INIB table #_INTAB_# */
tIdx_is_id_INIB *tIdx_is_id_INIB_tab[] ={
    &cell_idx_is_id1_INIB,
    &cell_idx_is_id2_INIB,
    &cell_idx_is_id3_INIB,
};
/* ID to CB table #_CBTAB_# */
tIdx_is_id_CB *tIdx_is_id_CB_tab[] ={
    &cell_idx_is_id1_CB,
    &cell_idx_is_id2_CB,
    &cell_idx_is_id3_CB,
};
/* CB 初期化コード #_CIC_# */
void
tIdx_is_id_CB_initialize()
{
    tIdx_is_id_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
