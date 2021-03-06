/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCellStruct_TECSGEN_H
#define tCellStruct_TECSGEN_H

/*
 * celltype          :  tCellStruct
 * global name       :  tCellStruct
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
typedef const struct tag_tCellStruct_INIB {
    /* attribute(RO) #_ATO_# */ 
    struct tagStruct st;
    struct tagStruct sta[2];
    struct tagStruct* stp2;
}  tCellStruct_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCellStruct_CB_tab           tCellStruct_INIB_tab
#define tCellStruct_SINGLE_CELL_CB   tCellStruct_SINGLE_CELL_INIB
#define tCellStruct_CB               tCellStruct_INIB
#define tag_tCellStruct_CB           tag_tCellStruct_INIB

extern tCellStruct_CB  tCellStruct_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCellStruct_INIB *tCellStruct_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCellStruct_ID_BASE         (1)  /* ID のベース  #_NIDB_# */
#define tCellStruct_N_CELL          (4)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCellStruct_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCellStruct_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCellStruct_ATTR_st( p_that )	((p_that)->st)
#define tCellStruct_ATTR_sta( p_that )	((p_that)->sta)

#define tCellStruct_GET_st(p_that)	((p_that)->st)
#define tCellStruct_GET_sta(p_that)	((p_that)->sta)


/* var アクセスマクロ #_VAM_# */
#define tCellStruct_VAR_stp2(p_that)	((p_that)->stp2)

#define tCellStruct_GET_stp2(p_that)	((p_that)->stp2)
#define tCellStruct_SET_stp2(p_that,val)	((p_that)->stp2=(val))

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
#define VALID_IDX(IDX)  tCellStruct_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCellStruct_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCellStruct_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCellStruct_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_st              tCellStruct_ATTR_st( p_cellcb )
#define ATTR_sta             tCellStruct_ATTR_sta( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_stp2             tCellStruct_VAR_stp2( p_cellcb )



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCellStruct_N_CELL; (i)++ ){ \
       //(p_cb) = &tCellStruct_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCellStruct_TECSGENH */
