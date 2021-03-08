/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSingleCellOptimizeCaller_TECSGEN_H
#define tSingleCellOptimizeCaller_TECSGEN_H

/*
 * celltype          :  tSingleCellOptimizeCaller
 * global name       :  tSingleCellOptimizeCaller
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
typedef const struct tag_tSingleCellOptimizeCaller_INIB {
    /* call port #_TCP_# */
    struct tag_sSig_VDES *const*cWhite;
    int_t n_cWhite;
    struct tag_sSig_VDES *const*cBlack;
    int_t n_cBlack;
    /* call port #_NEP_# */ 
}  tSingleCellOptimizeCaller_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSingleCellOptimizeCaller_CB_tab           tSingleCellOptimizeCaller_INIB_tab
#define tSingleCellOptimizeCaller_SINGLE_CELL_CB   tSingleCellOptimizeCaller_SINGLE_CELL_INIB
#define tSingleCellOptimizeCaller_CB               tSingleCellOptimizeCaller_INIB
#define tag_tSingleCellOptimizeCaller_CB           tag_tSingleCellOptimizeCaller_INIB

extern tSingleCellOptimizeCaller_CB  tSingleCellOptimizeCaller_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tSingleCellOptimizeCaller_INIB *tSingleCellOptimizeCaller_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
void         tSingleCellOptimizeCaller_eEnt_func(tSingleCellOptimizeCaller_IDX idx);
int32_t      tSingleCellOptimizeCaller_eEnt_func2(tSingleCellOptimizeCaller_IDX idx, int32_t arg);
struct tagST tSingleCellOptimizeCaller_eEnt_func3(tSingleCellOptimizeCaller_IDX idx, struct tagST a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSingleCellOptimizeCaller_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#ifdef  tSingleCellOptimizeCaller_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSingleCellOptimizeCaller_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSingleCellOptimizeCaller_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSingleCellOptimizeCaller_N_CELL        (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSingleCellOptimizeCaller_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cWhite(p_that)  ((p_that)->n_cWhite)
#define NCP_cWhite           (N_CP_cWhite(p_cellcb))
#define N_CP_cBlack(p_that)  ((p_that)->n_cBlack)
#define NCP_cBlack           (N_CP_cBlack(p_cellcb))
#define N_CP_cBrown    (3)
#define NCP_cBrown     (3)
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tSingleCellOptimizeCaller_is_cCall_joined(p_that) \
	  (0)    /* not joined */
#define tSingleCellOptimizeCaller_is_cWhite_joined(p_that,subscript) \
	  (((p_that)->cWhite!=0)\
	  &&((p_that)->cWhite[subscript]!=0))
#define tSingleCellOptimizeCaller_is_cBlack_joined(p_that,subscript) \
	  (((p_that)->cBlack!=0)\
	  &&((p_that)->cBlack[subscript]!=0))
#define tSingleCellOptimizeCaller_is_cBrown_joined(p_that,subscript) \
	  (0)    /* not joined */

/* セルCBを得るマクロ #_GCB_# */
#define tSingleCellOptimizeCaller_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tSingleCellOptimizeCaller_cCall_func( p_that ) \
	  ((void (*)())0)()
	  /* optional no entry port joined */
#define tSingleCellOptimizeCaller_cCall_func2( p_that, arg ) \
	  ((int32_t (*)())0)()
	  /* optional no entry port joined */
#define tSingleCellOptimizeCaller_cCall_func3( p_that, a ) \
	  ((struct tagST (*)())0)()
	  /* optional no entry port joined */
#define tSingleCellOptimizeCaller_cWhite_func( p_that, subscript ) \
	  (p_that)->cWhite[subscript]->VMT->func__T( \
	   (p_that)->cWhite[subscript] )
#define tSingleCellOptimizeCaller_cWhite_func2( p_that, subscript, arg ) \
	  (p_that)->cWhite[subscript]->VMT->func2__T( \
	   (p_that)->cWhite[subscript], (arg) )
#define tSingleCellOptimizeCaller_cWhite_func3( p_that, subscript, a ) \
	  (p_that)->cWhite[subscript]->VMT->func3__T( \
	   (p_that)->cWhite[subscript], (a) )
#define tSingleCellOptimizeCaller_cBlack_func( p_that, subscript ) \
	  (p_that)->cBlack[subscript]->VMT->func__T( \
	   (p_that)->cBlack[subscript] )
#define tSingleCellOptimizeCaller_cBlack_func2( p_that, subscript, arg ) \
	  (p_that)->cBlack[subscript]->VMT->func2__T( \
	   (p_that)->cBlack[subscript], (arg) )
#define tSingleCellOptimizeCaller_cBlack_func3( p_that, subscript, a ) \
	  (p_that)->cBlack[subscript]->VMT->func3__T( \
	   (p_that)->cBlack[subscript], (a) )
#define tSingleCellOptimizeCaller_cBrown_func( p_that, subscript ) \
	  ((void (*)())0)()
	  /* optional no entry port joined */
#define tSingleCellOptimizeCaller_cBrown_func2( p_that, subscript, arg ) \
	  ((int32_t (*)())0)()
	  /* optional no entry port joined */
#define tSingleCellOptimizeCaller_cBrown_func3( p_that, subscript, a ) \
	  ((struct tagST (*)())0)()
	  /* optional no entry port joined */

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eEnt */
void           tSingleCellOptimizeCaller_eEnt_func_skel( const struct tag_sSig_VDES *epd);
int32_t        tSingleCellOptimizeCaller_eEnt_func2_skel( const struct tag_sSig_VDES *epd, int32_t arg);
struct tagST   tSingleCellOptimizeCaller_eEnt_func3_skel( const struct tag_sSig_VDES *epd, struct tagST a);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tSingleCellOptimizeCaller_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSingleCellOptimizeCaller_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSingleCellOptimizeCaller_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSingleCellOptimizeCaller_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func( ) \
          ((void)p_cellcb, tSingleCellOptimizeCaller_cCall_func( p_cellcb ))
#define cCall_func2( arg ) \
          ((void)p_cellcb, tSingleCellOptimizeCaller_cCall_func2( p_cellcb, arg ))
#define cCall_func3( a ) \
          ((void)p_cellcb, tSingleCellOptimizeCaller_cCall_func3( p_cellcb, a ))
#define cWhite_func( subscript ) \
          tSingleCellOptimizeCaller_cWhite_func( p_cellcb, subscript )
#define cWhite_func2( subscript, arg ) \
          tSingleCellOptimizeCaller_cWhite_func2( p_cellcb, subscript, arg )
#define cWhite_func3( subscript, a ) \
          tSingleCellOptimizeCaller_cWhite_func3( p_cellcb, subscript, a )
#define cBlack_func( subscript ) \
          tSingleCellOptimizeCaller_cBlack_func( p_cellcb, subscript )
#define cBlack_func2( subscript, arg ) \
          tSingleCellOptimizeCaller_cBlack_func2( p_cellcb, subscript, arg )
#define cBlack_func3( subscript, a ) \
          tSingleCellOptimizeCaller_cBlack_func3( p_cellcb, subscript, a )
#define cBrown_func( subscript ) \
          ((void)p_cellcb, tSingleCellOptimizeCaller_cBrown_func( p_cellcb, subscript ))
#define cBrown_func2( subscript, arg ) \
          ((void)p_cellcb, tSingleCellOptimizeCaller_cBrown_func2( p_cellcb, subscript, arg ))
#define cBrown_func3( subscript, a ) \
          ((void)p_cellcb, tSingleCellOptimizeCaller_cBrown_func3( p_cellcb, subscript, a ))



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cCall_joined()\
		tSingleCellOptimizeCaller_is_cCall_joined(p_cellcb)
#define is_cWhite_joined(subscript)\
		tSingleCellOptimizeCaller_is_cWhite_joined(p_cellcb,subscript)
#define is_cBlack_joined(subscript)\
		tSingleCellOptimizeCaller_is_cBlack_joined(p_cellcb,subscript)
#define is_cBrown_joined(subscript)\
		tSingleCellOptimizeCaller_is_cBrown_joined(p_cellcb,subscript)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func        tSingleCellOptimizeCaller_eEnt_func
#define eEnt_func2       tSingleCellOptimizeCaller_eEnt_func2
#define eEnt_func3       tSingleCellOptimizeCaller_eEnt_func3

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSingleCellOptimizeCaller_N_CELL; (i)++ ){ \
       (p_cb) = &tSingleCellOptimizeCaller_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSingleCellOptimizeCaller_TECSGENH */
