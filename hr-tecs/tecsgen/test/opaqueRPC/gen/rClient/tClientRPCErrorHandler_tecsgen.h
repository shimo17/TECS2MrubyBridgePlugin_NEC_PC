/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tClientRPCErrorHandler_TECSGEN_H
#define tClientRPCErrorHandler_TECSGEN_H

/*
 * celltype          :  tClientRPCErrorHandler
 * global name       :  tClientRPCErrorHandler
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
#include "sRPCErrorHandler_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tClientRPCErrorHandler_CB {
    int  dummy;
} tClientRPCErrorHandler_CB;
extern tClientRPCErrorHandler_CB  tClientRPCErrorHandler_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tClientRPCErrorHandler_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sRPCErrorHandler */
ER           tClientRPCErrorHandler_eHandler_errorOccured(tClientRPCErrorHandler_IDX idx, int16_t func_id, ER er, int16_t state);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tClientRPCErrorHandler_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSimpleClient_tecsgen.h"
#ifdef  tClientRPCErrorHandler_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tClientRPCErrorHandler_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tClientRPCErrorHandler_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tClientRPCErrorHandler_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tClientRPCErrorHandler_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tClientRPCErrorHandler_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tClientRPCErrorHandler_cHandler_errorOccured( p_that, func_id, er, state ) \
	  tSimpleClient_eHandler_errorOccured( \
	   &tSimpleClient_CB_tab[0], (func_id), (er), (state) )

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
#define VALID_IDX(IDX)  tClientRPCErrorHandler_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tClientRPCErrorHandler_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tClientRPCErrorHandler_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tClientRPCErrorHandler_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cHandler_errorOccured( func_id, er, state ) \
          ((void)p_cellcb, tClientRPCErrorHandler_cHandler_errorOccured( p_cellcb, func_id, er, state ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eHandler_errorOccured tClientRPCErrorHandler_eHandler_errorOccured

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tClientRPCErrorHandler_TECSGENH */
