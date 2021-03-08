/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tKernelBody_TECSGEN_H
#define tKernelBody_TECSGEN_H

/*
 * celltype          :  tKernelBody
 * global name       :  tKernelBody
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sHookBody_tecsgen.h"
#include "sKernel_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tKernelBody_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        dummy;
}  tKernelBody_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tKernelBody_CB_tab           tKernelBody_INIB_tab
#define tKernelBody_SINGLE_CELL_CB   tKernelBody_SINGLE_CELL_INIB
#define tKernelBody_CB               tKernelBody_INIB
#define tag_tKernelBody_CB           tag_tKernelBody_INIB

extern tKernelBody_CB  tKernelBody_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tKernelBody_INIB *tKernelBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sHookBody */
void         tKernelBody_eBody_main(tKernelBody_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tKernelBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#ifdef  tKernelBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tKernelBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tKernelBody_ID_BASE         (1)  /* ID のベース  #_NIDB_# */
#define tKernelBody_N_CELL          (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tKernelBody_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tKernelBody_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tKernelBody_ATTR_dummy( p_that )	((p_that)->dummy)

#define tKernelBody_GET_dummy(p_that)	((p_that)->dummy)



 /* 呼び口関数マクロ #_CPM_# */
#define tKernelBody_cKernel_schedule( p_that ) \
	  tKernel_eKernel_schedule( \
	    )
#define tKernelBody_cKernel_enableAllInterrupts( p_that ) \
	  tKernel_eKernel_enableAllInterrupts( \
	    )
#define tKernelBody_cKernel_disableAllInterrupts( p_that ) \
	  tKernel_eKernel_disableAllInterrupts( \
	    )
#define tKernelBody_cKernel_resumeAllInterrupts( p_that ) \
	  tKernel_eKernel_resumeAllInterrupts( \
	    )
#define tKernelBody_cKernel_suspendAllInterrupts( p_that ) \
	  tKernel_eKernel_suspendAllInterrupts( \
	    )
#define tKernelBody_cKernel_resumeOsInterrupts( p_that ) \
	  tKernel_eKernel_resumeOsInterrupts( \
	    )
#define tKernelBody_cKernel_suspendOsinterrupts( p_that ) \
	  tKernel_eKernel_suspendOsinterrupts( \
	    )
#define tKernelBody_cKernel_getActiveApplicationMode( p_that ) \
	  tKernel_eKernel_getActiveApplicationMode( \
	    )

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
#define VALID_IDX(IDX)  tKernelBody_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tKernelBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tKernelBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tKernelBody_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_dummy           tKernelBody_ATTR_dummy( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cKernel_schedule( ) \
          ((void)p_cellcb, tKernelBody_cKernel_schedule( p_cellcb ))
#define cKernel_enableAllInterrupts( ) \
          ((void)p_cellcb, tKernelBody_cKernel_enableAllInterrupts( p_cellcb ))
#define cKernel_disableAllInterrupts( ) \
          ((void)p_cellcb, tKernelBody_cKernel_disableAllInterrupts( p_cellcb ))
#define cKernel_resumeAllInterrupts( ) \
          ((void)p_cellcb, tKernelBody_cKernel_resumeAllInterrupts( p_cellcb ))
#define cKernel_suspendAllInterrupts( ) \
          ((void)p_cellcb, tKernelBody_cKernel_suspendAllInterrupts( p_cellcb ))
#define cKernel_resumeOsInterrupts( ) \
          ((void)p_cellcb, tKernelBody_cKernel_resumeOsInterrupts( p_cellcb ))
#define cKernel_suspendOsinterrupts( ) \
          ((void)p_cellcb, tKernelBody_cKernel_suspendOsinterrupts( p_cellcb ))
#define cKernel_getActiveApplicationMode( ) \
          ((void)p_cellcb, tKernelBody_cKernel_getActiveApplicationMode( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tKernelBody_eBody_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tKernelBody_N_CELL; (i)++ ){ \
       //(p_cb) = &tKernelBody_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tKernelBody_TECSGENH */
