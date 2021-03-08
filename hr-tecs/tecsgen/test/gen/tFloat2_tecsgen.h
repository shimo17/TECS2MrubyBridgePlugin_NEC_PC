/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tFloat2_TECSGEN_H
#define tFloat2_TECSGEN_H

/*
 * celltype          :  tFloat2
 * global name       :  tFloat2
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
#include "sFloat_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tFloat2_INIB {
    /* call port #_TCP_# */
    /* attribute(RO) #_ATO_# */ 
    float32_t      f;
    double64_t     d;
}  tFloat2_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tFloat2_CB_tab           tFloat2_INIB_tab
#define tFloat2_SINGLE_CELL_CB   tFloat2_SINGLE_CELL_INIB
#define tFloat2_CB               tFloat2_INIB
#define tag_tFloat2_CB           tag_tFloat2_INIB

extern tFloat2_CB  tFloat2_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tFloat2_INIB *tFloat2_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tFloat2_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tFloat_tecsgen.h"
#ifdef  tFloat2_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tFloat2_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tFloat2_ID_BASE             (1)  /* ID のベース  #_NIDB_# */
#define tFloat2_N_CELL              (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tFloat2_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tFloat2_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tFloat2_ATTR_f( p_that )	((p_that)->f)
#define tFloat2_ATTR_d( p_that )	((p_that)->d)

#define tFloat2_GET_f(p_that)	((p_that)->f)
#define tFloat2_GET_d(p_that)	((p_that)->d)



 /* 呼び口関数マクロ #_CPM_# */
#define tFloat2_cFloat_func( p_that, a, b ) \
	  tFloat_eFloat_func( \
	   &tFloat_CB_tab[0], (a), (b) )

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
#define VALID_IDX(IDX)  tFloat2_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tFloat2_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tFloat2_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tFloat2_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_f               tFloat2_ATTR_f( p_cellcb )
#define ATTR_d               tFloat2_ATTR_d( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cFloat_func( a, b ) \
          ((void)p_cellcb, tFloat2_cFloat_func( p_cellcb, a, b ))



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tFloat2_N_CELL; (i)++ ){ \
       //(p_cb) = &tFloat2_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tFloat2_TECSGENH */
