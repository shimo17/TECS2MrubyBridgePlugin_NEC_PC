/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMain_TECSGEN_H
#define tMain_TECSGEN_H

/*
 * celltype          :  tMain
 * global name       :  tMain
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTaskBody_tecsgen.h"
#include "sSig_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tMain_INIB {
    /* call port #_TCP_# */
    struct tag_sSig_VDES *const*cMain;
    int_t n_cMain;
    /* call port #_NEP_# */ 
}  tMain_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tMain_CB_tab           tMain_INIB_tab
#define tMain_SINGLE_CELL_CB   tMain_SINGLE_CELL_INIB
#define tMain_CB               tMain_INIB
#define tag_tMain_CB           tag_tMain_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tMain_INIB  tMain_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tMain_INIB *tMain_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tMain_eMain_main();
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cMain  (tMain_SINGLE_CELL_INIB.n_cMain)
#define NCP_cMain   (tMain_SINGLE_CELL_INIB.n_cMain)

/* セルCBを得るマクロ #_GCB_# */
#define tMain_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tMain_cMain_func( subscript ) \
	  tMain_SINGLE_CELL_INIB.cMain[subscript]->VMT->func__T( \
	  tMain_SINGLE_CELL_INIB.cMain[subscript] )
#define tMain_cMain_func2( subscript, arg ) \
	  tMain_SINGLE_CELL_INIB.cMain[subscript]->VMT->func2__T( \
	  tMain_SINGLE_CELL_INIB.cMain[subscript], (arg) )
#define tMain_cMain_func3( subscript, a ) \
	  tMain_SINGLE_CELL_INIB.cMain[subscript]->VMT->func3__T( \
	  tMain_SINGLE_CELL_INIB.cMain[subscript], (a) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eMain */
void           tMain_eMain_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tMain_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tMain_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tMain_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cMain_func( subscript ) \
          tMain_cMain_func( subscript )
#define cMain_func2( subscript, arg ) \
          tMain_cMain_func2( subscript, arg )
#define cMain_func3( subscript, a ) \
          tMain_cMain_func3( subscript, a )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tMain_eMain_main

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMain_TECSGENH */
