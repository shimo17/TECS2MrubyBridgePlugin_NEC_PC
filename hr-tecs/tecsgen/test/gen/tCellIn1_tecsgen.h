/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCellIn1_TECSGEN_H
#define tCellIn1_TECSGEN_H

/*
 * celltype          :  tCellIn1
 * global name       :  tCellIn1
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCellIn1_INIB {
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
    INT            b;
}  tCellIn1_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCellIn1_CB_tab           tCellIn1_INIB_tab
#define tCellIn1_SINGLE_CELL_CB   tCellIn1_SINGLE_CELL_INIB
#define tCellIn1_CB               tCellIn1_INIB
#define tag_tCellIn1_CB           tag_tCellIn1_INIB

extern tCellIn1_CB  tCellIn1_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCellIn1_INIB *tCellIn1_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCellIn1_ID_BASE            (1)  /* ID のベース  #_NIDB_# */
#define tCellIn1_N_CELL             (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCellIn1_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCellIn1_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCellIn1_ATTR_a( p_that )	((p_that)->a)
#define tCellIn1_ATTR_b( p_that )	((p_that)->b)

#define tCellIn1_GET_a(p_that)	((p_that)->a)
#define tCellIn1_GET_b(p_that)	((p_that)->b)



#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCellIn1_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCellIn1_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCellIn1_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCellIn1_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tCellIn1_ATTR_a( p_cellcb )
#define ATTR_b               tCellIn1_ATTR_b( p_cellcb )




/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCellIn1_N_CELL; (i)++ ){ \
       //(p_cb) = &tCellIn1_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCellIn1_TECSGENH */
