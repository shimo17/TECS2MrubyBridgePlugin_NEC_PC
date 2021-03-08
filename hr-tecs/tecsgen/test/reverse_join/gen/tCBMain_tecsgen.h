/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCBMain_TECSGEN_H
#define tCBMain_TECSGEN_H

/*
 * celltype          :  tCBMain
 * global name       :  tCBMain
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
#include "sTaskBody_tecsgen.h"
#include "sCallback_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCBMain_INIB {
    /* call port #_TCP_# */
    const struct tag_tCBTarget_INIB * cCallback;
    /* call port #_NEP_# */ 
}  tCBMain_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCBMain_CB_tab           tCBMain_INIB_tab
#define tCBMain_SINGLE_CELL_CB   tCBMain_SINGLE_CELL_INIB
#define tCBMain_CB               tCBMain_INIB
#define tag_tCBMain_CB           tag_tCBMain_INIB

extern tCBMain_CB  tCBMain_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCBMain_INIB *tCBMain_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tCBMain_eBody_main(tCBMain_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCBMain_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCBTarget_tecsgen.h"
#ifdef  tCBMain_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCBMain_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCBMain_ID_BASE             (1)  /* ID のベース  #_NIDB_# */
#define tCBMain_N_CELL              (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCBMain_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCBMain_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tCBMain_cCallback_func( p_that ) \
	  tCBTarget_eCallback_func( \
	   (p_that)->cCallback )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eBody */
void           tCBMain_eBody_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCBMain_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCBMain_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCBMain_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCBMain_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCallback_func( ) \
          ((void)p_cellcb, tCBMain_cCallback_func( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tCBMain_eBody_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCBMain_N_CELL; (i)++ ){ \
       //(p_cb) = &tCBMain_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCBMain_TECSGENH */
