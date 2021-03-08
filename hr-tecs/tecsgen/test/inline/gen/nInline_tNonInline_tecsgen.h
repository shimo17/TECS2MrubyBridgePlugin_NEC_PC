/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nInline_tNonInline_TECSGEN_H
#define nInline_tNonInline_TECSGEN_H

/*
 * celltype          :  tNonInline
 * global name       :  nInline_tNonInline
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
#include "sInline2_tecsgen.h"
#include "sNonInline_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_nInline_tNonInline_CB {
    int  dummy;
} nInline_tNonInline_CB;
extern nInline_tNonInline_CB  nInline_tNonInline_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   nInline_tNonInline_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sNonInline */
void         nInline_tNonInline_eNonInline_nonInline(nInline_tNonInline_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nInline_tNonInline_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "nInline_tInline_tecsgen.h"
#ifdef  nInline_tNonInline_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nInline_tNonInline_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nInline_tNonInline_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nInline_tNonInline_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nInline_tNonInline_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nInline_tNonInline_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define nInline_tNonInline_cInline2_inline2( p_that ) \
	  nInline_tInline_eInline2_inline2( \
	   (nInline_tInline_IDX)0 )

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
#define VALID_IDX(IDX)  nInline_tNonInline_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nInline_tNonInline_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nInline_tNonInline_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nInline_tNonInline_IDX

#define tNonInline_IDX  nInline_tNonInline_IDX
/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cInline2_inline2( ) \
          ((void)p_cellcb, nInline_tNonInline_cInline2_inline2( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eNonInline_nonInline nInline_tNonInline_eNonInline_nonInline

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nInline_tNonInline_TECSGENH */
