/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tNonInline_TECSGEN_H
#define tNonInline_TECSGEN_H

/*
 * celltype          :  tNonInline
 * global name       :  tNonInline
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
typedef struct tag_tNonInline_CB {
    int  dummy;
} tNonInline_CB;
extern tNonInline_CB  tNonInline_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tNonInline_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sNonInline */
void         tNonInline_eNonInline_nonInline(tNonInline_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tNonInline_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tInline_tecsgen.h"
#ifdef  tNonInline_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tNonInline_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tNonInline_ID_BASE          (1)  /* ID のベース  #_NIDB_# */
#define tNonInline_N_CELL           (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tNonInline_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tNonInline_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tNonInline_cInline2_inline2( p_that ) \
	  tInline_eInline2_inline2( \
	   (tInline_IDX)0 )

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
#define VALID_IDX(IDX)  tNonInline_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tNonInline_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tNonInline_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tNonInline_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cInline2_inline2( ) \
          ((void)p_cellcb, tNonInline_cInline2_inline2( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eNonInline_nonInline tNonInline_eNonInline_nonInline

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tNonInline_TECSGENH */
