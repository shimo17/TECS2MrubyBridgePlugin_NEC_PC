/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nInline_tTest_TECSGEN_H
#define nInline_tTest_TECSGEN_H

/*
 * celltype          :  tTest
 * global name       :  nInline_tTest
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sInline1_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_nInline_tTest_CB {
    int  dummy;
} nInline_tTest_CB;
extern nInline_tTest_CB  nInline_tTest_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   nInline_tTest_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nInline_tTest_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "nInline_tInline_tecsgen.h"
#ifdef  nInline_tTest_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nInline_tTest_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nInline_tTest_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nInline_tTest_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nInline_tTest_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nInline_tTest_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define nInline_tTest_cInline1_inline1( p_that ) \
	  nInline_tInline_eInline1_inline1( \
	   (nInline_tInline_IDX)0 )

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
#define VALID_IDX(IDX)  nInline_tTest_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nInline_tTest_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nInline_tTest_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nInline_tTest_IDX

#define tTest_IDX  nInline_tTest_IDX
/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cInline1_inline1( ) \
          ((void)p_cellcb, nInline_tTest_cInline1_inline1( p_cellcb ))



/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nInline_tTest_TECSGENH */
