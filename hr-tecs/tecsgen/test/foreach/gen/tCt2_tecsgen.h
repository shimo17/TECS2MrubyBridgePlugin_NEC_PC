/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCt2_TECSGEN_H
#define tCt2_TECSGEN_H

/*
 * celltype          :  tCt2
 * global name       :  tCt2
 * idx_is_id(actual) :  yes(yes)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSig_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCt2_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        c;
}  tCt2_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCt2_CB_tab           tCt2_INIB_tab
#define tCt2_SINGLE_CELL_CB   tCt2_SINGLE_CELL_INIB
#define tCt2_CB               tCt2_INIB
#define tag_tCt2_CB           tag_tCt2_INIB

extern tCt2_CB  *tCt2_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID tCt2_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
ER           tCt2_eE_func(tCt2_IDX idx, int8_t a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCt2_ID_BASE                (1)  /* ID のベース  #_NIDB_# */
#define tCt2_N_CELL                 (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCt2_VALID_IDX(IDX) (tCt2_ID_BASE <= (IDX) && (IDX) < tCt2_ID_BASE+tCt2_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define tCt2_GET_CELLCB(idx) (tCt2_CB_tab[(idx) - tCt2_ID_BASE])

/* 属性アクセスマクロ #_AAM_# */
#define tCt2_ATTR_c( p_that )	((p_that)->c)

#define tCt2_GET_c(p_that)  	((p_that)->c)



#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCt2_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCt2_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCt2_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCt2_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_c               tCt2_ATTR_c( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eE_func          tCt2_eE_func

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCt2_N_CELL; (i)++ ){ \
       //(p_cb) = tCt2_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCt2_TECSGENH */
