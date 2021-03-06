/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCtR2_TECSGEN_H
#define tCtR2_TECSGEN_H

/*
 * celltype          :  tCtR2
 * global name       :  tCtR2
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
#include "sSig2_tecsgen.h"
#include "sSig3_tecsgen.h"
#include "sSig1_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCtR2_INIB {
    /* call port #_TCP_# */
    const struct tag_tCtOuter_INIB * cCall2;
    /* call port #_NEP_# */ 
}  tCtR2_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCtR2_CB_tab           tCtR2_INIB_tab
#define tCtR2_SINGLE_CELL_CB   tCtR2_SINGLE_CELL_INIB
#define tCtR2_CB               tCtR2_INIB
#define tag_tCtR2_CB           tag_tCtR2_INIB

extern tCtR2_CB  tCtR2_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCtR2_INIB *tCtR2_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig1 */
ER           tCtR2_eEnt_func1(tCtR2_IDX idx, int32_t arg1, int32_t* res);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCtR2_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCtOuter_tecsgen.h"
#include "tCtR1_tecsgen.h"
#ifdef  tCtR2_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCtR2_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCtR2_ID_BASE               (1)  /* ID のベース  #_NIDB_# */
#define tCtR2_N_CELL                (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCtR2_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCtR2_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tCtR2_cCall2_func1( p_that, arg1, res ) \
	  tCtOuter_eEnt_func1( \
	   (p_that)->cCall2, (arg1), (res) )
#define tCtR2_cCall3_func1( p_that, arg1, res ) \
	  tCtR1_eEnt_func1( \
	   (tCtR1_IDX)0, (arg1), (res) )

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
#define VALID_IDX(IDX)  tCtR2_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCtR2_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCtR2_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCtR2_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall2_func1( arg1, res ) \
          ((void)p_cellcb, tCtR2_cCall2_func1( p_cellcb, arg1, res ))
#define cCall3_func1( arg1, res ) \
          ((void)p_cellcb, tCtR2_cCall3_func1( p_cellcb, arg1, res ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func1       tCtR2_eEnt_func1

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCtR2_N_CELL; (i)++ ){ \
       //(p_cb) = &tCtR2_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCtR2_TECSGENH */
