/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSimple_TECSGEN_H
#define tSimple_TECSGEN_H

/*
 * celltype          :  tSimple
 * global name       :  tSimple
 * idx_is_id(actual) :  no(yes)
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
#include "sSimple_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSimple_INIB {
    /* call port #_TCP_# */
    ID cSimple;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        buf_len;
    char_t*        buf;
}  tSimple_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSimple_CB_tab           tSimple_INIB_tab
#define tSimple_SINGLE_CELL_CB   tSimple_SINGLE_CELL_INIB
#define tSimple_CB               tSimple_INIB
#define tag_tSimple_CB           tag_tSimple_INIB

extern tSimple_CB  *tSimple_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID tSimple_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tSimple_eMain_main(tSimple_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSimple_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTracePlugin_sSimple_tecsgen.h"
#ifdef  tSimple_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSimple_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSimple_ID_BASE             (1)  /* ID のベース  #_NIDB_# */
#define tSimple_N_CELL              (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSimple_VALID_IDX(IDX) (tSimple_ID_BASE <= (IDX) && (IDX) < tSimple_ID_BASE+tSimple_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define tSimple_GET_CELLCB(idx) (tSimple_CB_tab[(idx) - tSimple_ID_BASE])

/* 属性アクセスマクロ #_AAM_# */
#define tSimple_ATTR_buf_len( p_that )	((p_that)->buf_len)

#define tSimple_GET_buf_len(p_that)	((p_that)->buf_len)


/* var アクセスマクロ #_VAM_# */
#define tSimple_VAR_buf(p_that)	((p_that)->buf)

#define tSimple_GET_buf(p_that)	((p_that)->buf)
#define tSimple_SET_buf(p_that,val)	((p_that)->buf=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tSimple_cSimple_helloWorld( p_that ) \
	  tTracePlugin_sSimple_eThroughEntry_helloWorld( \
	   (p_that)->cSimple )

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
#define VALID_IDX(IDX)  tSimple_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSimple_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSimple_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSimple_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_buf_len         tSimple_ATTR_buf_len( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_buf              tSimple_VAR_buf( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cSimple_helloWorld( ) \
          ((void)p_cellcb, tSimple_cSimple_helloWorld( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tSimple_eMain_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSimple_N_CELL; (i)++ ){ \
       //(p_cb) = tSimple_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSimple_TECSGENH */
