/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSimpleClient_TECSGEN_H
#define tSimpleClient_TECSGEN_H

/*
 * celltype          :  tSimpleClient
 * global name       :  tSimpleClient
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
#include "sSimple_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tSimpleClient_CB {
    int  dummy;
} tSimpleClient_CB;
extern tSimpleClient_CB  tSimpleClient_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tSimpleClient_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSimpleClient_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSimpleServer_tecsgen.h"
#ifdef  tSimpleClient_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSimpleClient_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSimpleClient_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSimpleClient_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSimpleClient_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSimpleClient_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tSimpleClient_cCall_func1( p_that, inval ) \
	  tSimpleServer_eEnt_func1( \
	   (tSimpleServer_IDX)0, (inval) )
#define tSimpleClient_cCall_func2( p_that, str ) \
	  tSimpleServer_eEnt_func2( \
	   (tSimpleServer_IDX)0, (str) )

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
#define VALID_IDX(IDX)  tSimpleClient_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSimpleClient_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSimpleClient_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSimpleClient_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func1( inval ) \
          ((void)p_cellcb, tSimpleClient_cCall_func1( p_cellcb, inval ))
#define cCall_func2( str ) \
          ((void)p_cellcb, tSimpleClient_cCall_func2( p_cellcb, str ))



/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSimpleClient_TECSGENH */
