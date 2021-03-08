/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tVMTUselessOptimizeCaller_TECSGEN_H
#define tVMTUselessOptimizeCaller_TECSGEN_H

/*
 * celltype          :  tVMTUselessOptimizeCaller
 * global name       :  tVMTUselessOptimizeCaller
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
typedef const struct tag_tVMTUselessOptimizeCaller_INIB {
    /* call port #_TCP_# */
    struct tag_sSig_VDES const*cCall;
    /* call port #_NEP_# */ 
}  tVMTUselessOptimizeCaller_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tVMTUselessOptimizeCaller_CB_tab           tVMTUselessOptimizeCaller_INIB_tab
#define tVMTUselessOptimizeCaller_SINGLE_CELL_CB   tVMTUselessOptimizeCaller_SINGLE_CELL_INIB
#define tVMTUselessOptimizeCaller_CB               tVMTUselessOptimizeCaller_INIB
#define tag_tVMTUselessOptimizeCaller_CB           tag_tVMTUselessOptimizeCaller_INIB

extern tVMTUselessOptimizeCaller_CB  tVMTUselessOptimizeCaller_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tVMTUselessOptimizeCaller_INIB *tVMTUselessOptimizeCaller_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
void         tVMTUselessOptimizeCaller_eEnt_func(tVMTUselessOptimizeCaller_IDX idx);
int32_t      tVMTUselessOptimizeCaller_eEnt_func2(tVMTUselessOptimizeCaller_IDX idx, int32_t arg);
struct tagST tVMTUselessOptimizeCaller_eEnt_func3(tVMTUselessOptimizeCaller_IDX idx, struct tagST a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tVMTUselessOptimizeCaller_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tVMTUselessOptimizeCallee_tecsgen.h"
#ifdef  tVMTUselessOptimizeCaller_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tVMTUselessOptimizeCaller_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tVMTUselessOptimizeCaller_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tVMTUselessOptimizeCaller_N_CELL        (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tVMTUselessOptimizeCaller_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tVMTUselessOptimizeCaller_is_cCall_joined(p_that) \
	  (1)

/* セルCBを得るマクロ #_GCB_# */
#define tVMTUselessOptimizeCaller_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tVMTUselessOptimizeCaller_cCall_func( p_that ) \
	  tVMTUselessOptimizeCallee_eEnt_func_skel( \
	   (p_that)->cCall )
#define tVMTUselessOptimizeCaller_cCall_func2( p_that, arg ) \
	  tVMTUselessOptimizeCallee_eEnt_func2_skel( \
	   (p_that)->cCall, (arg) )
#define tVMTUselessOptimizeCaller_cCall_func3( p_that, a ) \
	  tVMTUselessOptimizeCallee_eEnt_func3_skel( \
	   (p_that)->cCall, (a) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eEnt */
void           tVMTUselessOptimizeCaller_eEnt_func_skel( const struct tag_sSig_VDES *epd);
int32_t        tVMTUselessOptimizeCaller_eEnt_func2_skel( const struct tag_sSig_VDES *epd, int32_t arg);
struct tagST   tVMTUselessOptimizeCaller_eEnt_func3_skel( const struct tag_sSig_VDES *epd, struct tagST a);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tVMTUselessOptimizeCaller_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tVMTUselessOptimizeCaller_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tVMTUselessOptimizeCaller_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tVMTUselessOptimizeCaller_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func( ) \
          ((void)p_cellcb, tVMTUselessOptimizeCaller_cCall_func( p_cellcb ))
#define cCall_func2( arg ) \
          ((void)p_cellcb, tVMTUselessOptimizeCaller_cCall_func2( p_cellcb, arg ))
#define cCall_func3( a ) \
          ((void)p_cellcb, tVMTUselessOptimizeCaller_cCall_func3( p_cellcb, a ))



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cCall_joined()\
		tVMTUselessOptimizeCaller_is_cCall_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func        tVMTUselessOptimizeCaller_eEnt_func
#define eEnt_func2       tVMTUselessOptimizeCaller_eEnt_func2
#define eEnt_func3       tVMTUselessOptimizeCaller_eEnt_func3

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tVMTUselessOptimizeCaller_N_CELL; (i)++ ){ \
       //(p_cb) = &tVMTUselessOptimizeCaller_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tVMTUselessOptimizeCaller_TECSGENH */
