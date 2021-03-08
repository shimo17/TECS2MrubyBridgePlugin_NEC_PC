/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tInline_TECSGEN_H
#define tInline_TECSGEN_H

/*
 * celltype          :  tInline
 * global name       :  tInline
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
#include "sNonInline_tecsgen.h"
#include "sInline1_tecsgen.h"
#include "sInline2_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tInline_CB {
    int  dummy;
} tInline_CB;
extern tInline_CB  tInline_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tInline_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sInline1 */
Inline void         tInline_eInline1_inline1(tInline_IDX idx);
/* sInline2 */
Inline void         tInline_eInline2_inline2(tInline_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tInline_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tNonInline_tecsgen.h"
#ifdef  tInline_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tInline_CB_TYPE_ONLY */
#define tInline_ID_BASE             (1)  /* ID のベース  #_NIDB_# */
#define tInline_N_CELL              (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tInline_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tInline_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tInline_cNonInline_nonInline( p_that ) \
	  tNonInline_eNonInline_nonInline( \
	   (tNonInline_IDX)0 )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tInline_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tInline_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tInline_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tInline_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cNonInline_nonInline( ) \
          ((void)p_cellcb, tInline_cNonInline_nonInline( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eInline1_inline1 tInline_eInline1_inline1
#define eInline2_inline2 tInline_eInline2_inline2

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#ifndef TOPPERS_MACRO_ONLY

/* inline ヘッダの include #_INL_# */
#include "tInline_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline のための undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tInline_IDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef tInline_cNonInline_nonInline
#undef cNonInline_nonInline
#undef eInline1_inline1
#undef eInline2_inline2
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tInline_TECSGENH */
