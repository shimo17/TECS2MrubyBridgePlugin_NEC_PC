/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nMruby_tsTest_TECSGEN_H
#define nMruby_tsTest_TECSGEN_H

/*
 * celltype          :  tsTest
 * global name       :  nMruby_tsTest
 * idx_is_id(actual) :  yes(yes)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTest_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_nMruby_tsTest_CB {
    int  dummy;
} nMruby_tsTest_CB;
extern nMruby_tsTest_CB  *nMruby_tsTest_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID nMruby_tsTest_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tsTest_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTECSTest_tecsgen.h"
#ifdef  nMruby_tsTest_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tsTest_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsTest_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nMruby_tsTest_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nMruby_tsTest_VALID_IDX(IDX) (nMruby_tsTest_ID_BASE <= (IDX) && (IDX) < nMruby_tsTest_ID_BASE+nMruby_tsTest_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define nMruby_tsTest_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define nMruby_tsTest_cTECS_test( p_that, input ) \
	  tTECSTest_eTest_test( \
	   (tTECSTest_IDX)0, (input) )
#define nMruby_tsTest_cTECS_test2( p_that, input, ret ) \
	  tTECSTest_eTest_test2( \
	   (tTECSTest_IDX)0, (input), (ret) )
#define nMruby_tsTest_cTECS_test3( p_that, input, ret ) \
	  tTECSTest_eTest_test3( \
	   (tTECSTest_IDX)0, (input), (ret) )
#define nMruby_tsTest_cTECS_test4( p_that, input, len ) \
	  tTECSTest_eTest_test4( \
	   (tTECSTest_IDX)0, (input), (len) )
#define nMruby_tsTest_cTECS_test5( p_that, input ) \
	  tTECSTest_eTest_test5( \
	   (tTECSTest_IDX)0, (input) )
#define nMruby_tsTest_cTECS_test6( p_that, systim ) \
	  tTECSTest_eTest_test6( \
	   (tTECSTest_IDX)0, (systim) )

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
#define VALID_IDX(IDX)  nMruby_tsTest_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsTest_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nMruby_tsTest_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nMruby_tsTest_IDX

#define tsTest_IDX  nMruby_tsTest_IDX
/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTECS_test( input ) \
          ((void)p_cellcb, nMruby_tsTest_cTECS_test( p_cellcb, input ))
#define cTECS_test2( input, ret ) \
          ((void)p_cellcb, nMruby_tsTest_cTECS_test2( p_cellcb, input, ret ))
#define cTECS_test3( input, ret ) \
          ((void)p_cellcb, nMruby_tsTest_cTECS_test3( p_cellcb, input, ret ))
#define cTECS_test4( input, len ) \
          ((void)p_cellcb, nMruby_tsTest_cTECS_test4( p_cellcb, input, len ))
#define cTECS_test5( input ) \
          ((void)p_cellcb, nMruby_tsTest_cTECS_test5( p_cellcb, input ))
#define cTECS_test6( systim ) \
          ((void)p_cellcb, nMruby_tsTest_cTECS_test6( p_cellcb, systim ))



/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsTest_TECSGENH */
