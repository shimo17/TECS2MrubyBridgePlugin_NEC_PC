/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCelltypeClient_TECSGEN_H
#define tCelltypeClient_TECSGEN_H

/*
 * celltype          :  tCelltypeClient
 * global name       :  tCelltypeClient
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
#include "sTaskBody_tecsgen.h"
#include "sSig_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tCelltypeClient_CB {
    int  dummy;
} tCelltypeClient_CB;
extern tCelltypeClient_CB  tCelltypeClient_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tCelltypeClient_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tCelltypeClient_eBody_main(tCelltypeClient_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCelltypeClient_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tMyTracePlugin_sSig_tecsgen.h"
#ifdef  tCelltypeClient_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCelltypeClient_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCelltypeClient_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tCelltypeClient_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCelltypeClient_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCelltypeClient_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tCelltypeClient_cCall_func1( p_that ) \
	  tMyTracePlugin_sSig_eThroughEntry_func1( \
	   &tMyTracePlugin_sSig_CB_tab[0] )
#define tCelltypeClient_cCall_func2( p_that ) \
	  tMyTracePlugin_sSig_eThroughEntry_func2( \
	   &tMyTracePlugin_sSig_CB_tab[0] )
#define tCelltypeClient_cCall_func3( p_that ) \
	  tMyTracePlugin_sSig_eThroughEntry_func3( \
	   &tMyTracePlugin_sSig_CB_tab[0] )

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
#define VALID_IDX(IDX)  tCelltypeClient_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCelltypeClient_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCelltypeClient_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCelltypeClient_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func1( ) \
          ((void)p_cellcb, tCelltypeClient_cCall_func1( p_cellcb ))
#define cCall_func2( ) \
          ((void)p_cellcb, tCelltypeClient_cCall_func2( p_cellcb ))
#define cCall_func3( ) \
          ((void)p_cellcb, tCelltypeClient_cCall_func3( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tCelltypeClient_eBody_main

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCelltypeClient_TECSGENH */
