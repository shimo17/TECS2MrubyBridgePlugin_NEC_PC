/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCellIn2_TECSGEN_H
#define tCellIn2_TECSGEN_H

/*
 * celltype          :  tCellIn2
 * global name       :  tCellIn2
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
typedef const struct tag_tCellIn2_INIB {
    /* attribute(RO) #_ATO_# */ 
    INT            c;
    int32_t        d;
    int32_t        e;
    int32_t        f;
}  tCellIn2_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCellIn2_CB_tab           tCellIn2_INIB_tab
#define tCellIn2_SINGLE_CELL_CB   tCellIn2_SINGLE_CELL_INIB
#define tCellIn2_CB               tCellIn2_INIB
#define tag_tCellIn2_CB           tag_tCellIn2_INIB

extern tCellIn2_CB  tCellIn2_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCellIn2_INIB *tCellIn2_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCellIn2_ID_BASE            (1)  /* ID のベース  #_NIDB_# */
#define tCellIn2_N_CELL             (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCellIn2_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCellIn2_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCellIn2_ATTR_c( p_that )	((p_that)->c)
#define tCellIn2_ATTR_d( p_that )	((p_that)->d)
#define tCellIn2_ATTR_e( p_that )	((p_that)->e)
#define tCellIn2_ATTR_f( p_that )	((p_that)->f)

#define tCellIn2_GET_c(p_that)	((p_that)->c)
#define tCellIn2_GET_d(p_that)	((p_that)->d)
#define tCellIn2_GET_e(p_that)	((p_that)->e)
#define tCellIn2_GET_f(p_that)	((p_that)->f)



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
#define VALID_IDX(IDX)  tCellIn2_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCellIn2_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCellIn2_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCellIn2_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_c               tCellIn2_ATTR_c( p_cellcb )
#define ATTR_d               tCellIn2_ATTR_d( p_cellcb )
#define ATTR_e               tCellIn2_ATTR_e( p_cellcb )
#define ATTR_f               tCellIn2_ATTR_f( p_cellcb )




/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCellIn2_N_CELL; (i)++ ){ \
       //(p_cb) = &tCellIn2_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCellIn2_TECSGENH */
