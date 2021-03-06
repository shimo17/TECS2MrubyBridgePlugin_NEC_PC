/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCelltype2_TECSGEN_H
#define tCelltype2_TECSGEN_H

/*
 * celltype          :  tCelltype2
 * global name       :  tCelltype2
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
#include "sSig2_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tCelltype2_CB {
    int  dummy;
} tCelltype2_CB;
extern tCelltype2_CB  tCelltype2_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tCelltype2_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCelltype2_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCelltype_tecsgen.h"
#ifdef  tCelltype2_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCelltype2_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCelltype2_ID_BASE          (1)  /* ID のベース  #_NIDB_# */
#define tCelltype2_N_CELL           (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCelltype2_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCelltype2_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tCelltype2_cCall_funcX( p_that ) \
	  tCelltype_eEntX_funcX( \
	   (tCelltype_IDX)0 )
#define tCelltype2_cCall_funcX2( p_that ) \
	  tCelltype_eEntX_funcX2( \
	   (tCelltype_IDX)0 )
#define tCelltype2_cCall_funcX3( p_that ) \
	  tCelltype_eEntX_funcX3( \
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
#define VALID_IDX(IDX)  tCelltype2_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCelltype2_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCelltype2_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCelltype2_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_funcX( ) \
          ((void)p_cellcb, tCelltype2_cCall_funcX( p_cellcb ))
#define cCall_funcX2( ) \
          ((void)p_cellcb, tCelltype2_cCall_funcX2( p_cellcb ))
#define cCall_funcX3( ) \
          ((void)p_cellcb, tCelltype2_cCall_funcX3( p_cellcb ))



/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCelltype2_TECSGENH */
