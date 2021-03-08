/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTask_TECSGEN_H
#define tTask_TECSGEN_H

/*
 * celltype          :  tTask
 * global name       :  tTask
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
#include "sTask_tecsgen.h"
#include "sTaskBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTask_INIB {
    /* call port #_TCP_# */
    const struct tag_tTaskBody_INIB * cBody;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint8_t        id;
}  tTask_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTask_CB_tab           tTask_INIB_tab
#define tTask_SINGLE_CELL_CB   tTask_SINGLE_CELL_INIB
#define tTask_CB               tTask_INIB
#define tag_tTask_CB           tag_tTask_INIB

extern tTask_CB  tTask_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTask_INIB *tTask_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTask */
Inline uint8_t      tTask_eTask_activate(tTask_IDX idx);
Inline uint8_t      tTask_eTask_terminate(tTask_IDX idx);
Inline uint8_t      tTask_eTask_chain(tTask_IDX idx, uint8_t tskid);
Inline uint8_t      tTask_eTask_getId(tTask_IDX idx, uint8_t* p_tskid);
Inline uint8_t      tTask_eTask_getState(tTask_IDX idx, uint8_t* p_state);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTask_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTaskBody_tecsgen.h"
#ifdef  tTask_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTask_CB_TYPE_ONLY */
#define tTask_ID_BASE               (1)  /* ID のベース  #_NIDB_# */
#define tTask_N_CELL                (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTask_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTask_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTask_ATTR_id( p_that )	((p_that)->id)

#define tTask_GET_id(p_that)	((p_that)->id)



 /* 呼び口関数マクロ #_CPM_# */
#define tTask_cBody_main( p_that ) \
	  tTaskBody_eBody_main( \
	   (p_that)->cBody )

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
#define VALID_IDX(IDX)  tTask_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTask_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTask_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTask_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_id              tTask_ATTR_id( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cBody_main( ) \
          ((void)p_cellcb, tTask_cBody_main( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTask_activate   tTask_eTask_activate
#define eTask_terminate  tTask_eTask_terminate
#define eTask_chain      tTask_eTask_chain
#define eTask_getId      tTask_eTask_getId
#define eTask_getState   tTask_eTask_getState

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTask_N_CELL; (i)++ ){ \
       //(p_cb) = &tTask_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#ifndef TOPPERS_MACRO_ONLY

/* inline ヘッダの include #_INL_# */
#include "tTask_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline のための undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tTask_IDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef ATTR_id
#undef tTask_ATTR_id
#undef tTask_GET_id
#undef ATTR_name
#undef tTask_ATTR_name
#undef tTask_GET_name
#undef ATTR_autoStart
#undef tTask_ATTR_autoStart
#undef tTask_GET_autoStart
#undef ATTR_appMode
#undef tTask_ATTR_appMode
#undef tTask_GET_appMode
#undef ATTR_priority
#undef tTask_ATTR_priority
#undef tTask_GET_priority
#undef ATTR_activation
#undef tTask_ATTR_activation
#undef tTask_GET_activation
#undef ATTR_schedule
#undef tTask_ATTR_schedule
#undef tTask_GET_schedule
#undef ATTR_event
#undef tTask_ATTR_event
#undef tTask_GET_event
#undef ATTR_resource
#undef tTask_ATTR_resource
#undef tTask_GET_resource
#undef ATTR_message
#undef tTask_ATTR_message
#undef tTask_GET_message
#undef ATTR_stackSize
#undef tTask_ATTR_stackSize
#undef tTask_GET_stackSize
#undef tTask_cBody_main
#undef cBody_main
#undef eTask_activate
#undef eTask_terminate
#undef eTask_chain
#undef eTask_getId
#undef eTask_getState
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tTask_TECSGENH */
