/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSkeltonUselessOptimizeCaller_TECSGEN_H
#define tSkeltonUselessOptimizeCaller_TECSGEN_H

/*
 * celltype          :  tSkeltonUselessOptimizeCaller
 * global name       :  tSkeltonUselessOptimizeCaller
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
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
typedef const struct tag_tSkeltonUselessOptimizeCaller_INIB {
    /* call port #_TCP_# */
    const struct tag_tSkeltonUselessOptimizeCallee_INIB * cCall;
    /* call port #_NEP_# */ 
}  tSkeltonUselessOptimizeCaller_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSkeltonUselessOptimizeCaller_CB_tab           tSkeltonUselessOptimizeCaller_INIB_tab
#define tSkeltonUselessOptimizeCaller_SINGLE_CELL_CB   tSkeltonUselessOptimizeCaller_SINGLE_CELL_INIB
#define tSkeltonUselessOptimizeCaller_CB               tSkeltonUselessOptimizeCaller_INIB
#define tag_tSkeltonUselessOptimizeCaller_CB           tag_tSkeltonUselessOptimizeCaller_INIB

extern tSkeltonUselessOptimizeCaller_CB  tSkeltonUselessOptimizeCaller_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tSkeltonUselessOptimizeCaller_INIB *tSkeltonUselessOptimizeCaller_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
void         tSkeltonUselessOptimizeCaller_eEnt_func(tSkeltonUselessOptimizeCaller_IDX idx);
int32_t      tSkeltonUselessOptimizeCaller_eEnt_func2(tSkeltonUselessOptimizeCaller_IDX idx, int32_t arg);
struct tagST tSkeltonUselessOptimizeCaller_eEnt_func3(tSkeltonUselessOptimizeCaller_IDX idx, struct tagST a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSkeltonUselessOptimizeCaller_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSkeltonUselessOptimizeCallee_tecsgen.h"
#ifdef  tSkeltonUselessOptimizeCaller_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSkeltonUselessOptimizeCaller_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSkeltonUselessOptimizeCaller_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSkeltonUselessOptimizeCaller_N_CELL        (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSkeltonUselessOptimizeCaller_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tSkeltonUselessOptimizeCaller_is_cCall_joined(p_that) \
	  (1)

/* セルCBを得るマクロ #_GCB_# */
#define tSkeltonUselessOptimizeCaller_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tSkeltonUselessOptimizeCaller_cCall_func( p_that ) \
	  tSkeltonUselessOptimizeCallee_eEnt_func( \
	   (p_that)->cCall )
#define tSkeltonUselessOptimizeCaller_cCall_func2( p_that, arg ) \
	  tSkeltonUselessOptimizeCallee_eEnt_func2( \
	   (p_that)->cCall, (arg) )
#define tSkeltonUselessOptimizeCaller_cCall_func3( p_that, a ) \
	  tSkeltonUselessOptimizeCallee_eEnt_func3( \
	   (p_that)->cCall, (a) )

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
#define VALID_IDX(IDX)  tSkeltonUselessOptimizeCaller_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSkeltonUselessOptimizeCaller_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSkeltonUselessOptimizeCaller_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSkeltonUselessOptimizeCaller_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func( ) \
          ((void)p_cellcb, tSkeltonUselessOptimizeCaller_cCall_func( p_cellcb ))
#define cCall_func2( arg ) \
          ((void)p_cellcb, tSkeltonUselessOptimizeCaller_cCall_func2( p_cellcb, arg ))
#define cCall_func3( a ) \
          ((void)p_cellcb, tSkeltonUselessOptimizeCaller_cCall_func3( p_cellcb, a ))



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cCall_joined()\
		tSkeltonUselessOptimizeCaller_is_cCall_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func        tSkeltonUselessOptimizeCaller_eEnt_func
#define eEnt_func2       tSkeltonUselessOptimizeCaller_eEnt_func2
#define eEnt_func3       tSkeltonUselessOptimizeCaller_eEnt_func3

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSkeltonUselessOptimizeCaller_N_CELL; (i)++ ){ \
       (p_cb) = &tSkeltonUselessOptimizeCaller_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSkeltonUselessOptimizeCaller_TECSGENH */
