/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nCPP_tsSig_TECSGEN_H
#define nCPP_tsSig_TECSGEN_H

/*
 * celltype          :  tsSig
 * global name       :  nCPP_tsSig
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
#include "sSig_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_nCPP_tsSig_CB {
    int  dummy;
} nCPP_tsSig_CB;
extern nCPP_tsSig_CB  *nCPP_tsSig_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID nCPP_tsSig_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nCPP_tsSig_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCelltype_tecsgen.h"
#ifdef  nCPP_tsSig_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nCPP_tsSig_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nCPP_tsSig_ID_BASE          (1)  /* ID のベース  #_NIDB_# */
#define nCPP_tsSig_N_CELL           (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nCPP_tsSig_VALID_IDX(IDX) (nCPP_tsSig_ID_BASE <= (IDX) && (IDX) < nCPP_tsSig_ID_BASE+nCPP_tsSig_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define nCPP_tsSig_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define nCPP_tsSig_cTECS_func( p_that ) \
	  tCelltype_eEnt_func( \
	   (tCelltype_IDX)0 )
#define nCPP_tsSig_cTECS_func1( p_that ) \
	  tCelltype_eEnt_func1( \
	   (tCelltype_IDX)0 )

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
#define VALID_IDX(IDX)  nCPP_tsSig_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nCPP_tsSig_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nCPP_tsSig_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nCPP_tsSig_IDX

#define tsSig_IDX  nCPP_tsSig_IDX
/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTECS_func( ) \
          ((void)p_cellcb, nCPP_tsSig_cTECS_func( p_cellcb ))
#define cTECS_func1( ) \
          ((void)p_cellcb, nCPP_tsSig_cTECS_func1( p_cellcb ))



/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nCPP_tsSig_TECSGENH */
