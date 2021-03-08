/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tNCPArray_TECSGEN_H
#define tNCPArray_TECSGEN_H

/*
 * celltype          :  tNCPArray
 * global name       :  tNCPArray
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
#include "sSig_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tNCPArray_INIB {
    /* call port #_TCP_# */
    struct tag_sSig_VDES *const*cCall;
    int_t n_cCall;
}  tNCPArray_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tNCPArray_CB_tab           tNCPArray_INIB_tab
#define tNCPArray_SINGLE_CELL_CB   tNCPArray_SINGLE_CELL_INIB
#define tNCPArray_CB               tNCPArray_INIB
#define tag_tNCPArray_CB           tag_tNCPArray_INIB

extern tNCPArray_CB  tNCPArray_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tNCPArray_INIB *tNCPArray_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tNCPArray_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tNCPArray_N_CELL            (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tNCPArray_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cCall(p_that)  ((p_that)->n_cCall)
#define NCP_cCall           (N_CP_cCall(p_cellcb))
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tNCPArray_is_cCall_joined(p_that,subscript) \
	  (((p_that)->cCall!=0)\
	  &&((p_that)->cCall[subscript]!=0))

/* セルCBを得るマクロ #_GCB_# */
#define tNCPArray_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tNCPArray_cCall_func( p_that, subscript ) \
	  (p_that)->cCall[subscript]->VMT->func__T( \
	   (p_that)->cCall[subscript] )
#define tNCPArray_cCall_func2( p_that, subscript, arg ) \
	  (p_that)->cCall[subscript]->VMT->func2__T( \
	   (p_that)->cCall[subscript], (arg) )
#define tNCPArray_cCall_func3( p_that, subscript, a ) \
	  (p_that)->cCall[subscript]->VMT->func3__T( \
	   (p_that)->cCall[subscript], (a) )

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
#define VALID_IDX(IDX)  tNCPArray_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tNCPArray_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tNCPArray_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tNCPArray_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func( subscript ) \
          tNCPArray_cCall_func( p_cellcb, subscript )
#define cCall_func2( subscript, arg ) \
          tNCPArray_cCall_func2( p_cellcb, subscript, arg )
#define cCall_func3( subscript, a ) \
          tNCPArray_cCall_func3( p_cellcb, subscript, a )



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cCall_joined(subscript)\
		tNCPArray_is_cCall_joined(p_cellcb,subscript)
/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tNCPArray_N_CELL; (i)++ ){ \
       //(p_cb) = &tNCPArray_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tNCPArray_TECSGENH */
