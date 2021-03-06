/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tNamedRequire_TECSGEN_H
#define tNamedRequire_TECSGEN_H

/*
 * celltype          :  tNamedRequire
 * global name       :  tNamedRequire
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
#include "sSyscall_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tNamedRequire_CB {
    int  dummy;
} tNamedRequire_CB;
extern tNamedRequire_CB  tNamedRequire_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tNamedRequire_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSyscall */
ER           tNamedRequire_eSc_func(tNamedRequire_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tNamedRequire_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#ifdef  tNamedRequire_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tNamedRequire_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tNamedRequire_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tNamedRequire_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tNamedRequire_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tNamedRequire_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tNamedRequire_cCall_func( p_that ) \
	  tKernel_eSc_func( \
	    )
#define tNamedRequire_cReqCall_func( p_that ) \
	  tKernel_eSc_func( \
	    )
#define tNamedRequire__require_call_port_tKernel_eSc_func( p_that ) \
	  tKernel_eSc_func( \
	    )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eSc */
ER             tNamedRequire_eSc_func_skel( const struct tag_sSyscall_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tNamedRequire_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tNamedRequire_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tNamedRequire_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tNamedRequire_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func( ) \
          ((void)p_cellcb, tNamedRequire_cCall_func( p_cellcb ))
#define cReqCall_func( ) \
          ((void)p_cellcb, tNamedRequire_cReqCall_func( p_cellcb ))
#define func( ) \
          ((void)p_cellcb, tNamedRequire__require_call_port_tKernel_eSc_func( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSc_func         tNamedRequire_eSc_func

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tNamedRequire_TECSGENH */
