/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tRPCDedicatedTaskMain_TECSGEN_H
#define tRPCDedicatedTaskMain_TECSGEN_H

/*
 * celltype          :  tRPCDedicatedTaskMain
 * global name       :  tRPCDedicatedTaskMain
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
#include "sUnmarshalerMain_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tRPCDedicatedTaskMain_INIB {
    /* call port #_TCP_# */
    struct tag_sUnmarshalerMain_VDES const*cMain;
    /* call port #_NEP_# */ 
}  tRPCDedicatedTaskMain_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tRPCDedicatedTaskMain_CB_tab           tRPCDedicatedTaskMain_INIB_tab
#define tRPCDedicatedTaskMain_SINGLE_CELL_CB   tRPCDedicatedTaskMain_SINGLE_CELL_INIB
#define tRPCDedicatedTaskMain_CB               tRPCDedicatedTaskMain_INIB
#define tag_tRPCDedicatedTaskMain_CB           tag_tRPCDedicatedTaskMain_INIB

extern tRPCDedicatedTaskMain_CB  tRPCDedicatedTaskMain_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tRPCDedicatedTaskMain_INIB *tRPCDedicatedTaskMain_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tRPCDedicatedTaskMain_eMain_main(tRPCDedicatedTaskMain_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tRPCDedicatedTaskMain_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tRPCDedicatedTaskMain_N_CELL        (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tRPCDedicatedTaskMain_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tRPCDedicatedTaskMain_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tRPCDedicatedTaskMain_cMain_main( p_that ) \
	  (p_that)->cMain->VMT->main__T( \
	   (p_that)->cMain )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eMain */
void           tRPCDedicatedTaskMain_eMain_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tRPCDedicatedTaskMain_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tRPCDedicatedTaskMain_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tRPCDedicatedTaskMain_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tRPCDedicatedTaskMain_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cMain_main( ) \
          tRPCDedicatedTaskMain_cMain_main( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tRPCDedicatedTaskMain_eMain_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tRPCDedicatedTaskMain_N_CELL; (i)++ ){ \
       //(p_cb) = &tRPCDedicatedTaskMain_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tRPCDedicatedTaskMain_TECSGENH */
