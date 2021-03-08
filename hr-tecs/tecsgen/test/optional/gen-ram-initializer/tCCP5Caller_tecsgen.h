/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCCP5Caller_TECSGEN_H
#define tCCP5Caller_TECSGEN_H

/*
 * celltype          :  tCCP5Caller
 * global name       :  tCCP5Caller
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
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
typedef const struct tag_tCCP5Caller_INIB {
    /* call port #_TCP_# */
    struct tag_sSig_VDES const*cCall;
    /* call port #_NEP_# */ 
}  tCCP5Caller_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCCP5Caller_CB_tab           tCCP5Caller_INIB_tab
#define tCCP5Caller_SINGLE_CELL_CB   tCCP5Caller_SINGLE_CELL_INIB
#define tCCP5Caller_CB               tCCP5Caller_INIB
#define tag_tCCP5Caller_CB           tag_tCCP5Caller_INIB

extern tCCP5Caller_CB  tCCP5Caller_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCCP5Caller_INIB *tCCP5Caller_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tCCP5Caller_eMain_main(tCCP5Caller_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCCP5Caller_ID_BASE         (1)  /* ID のベース  #_NIDB_# */
#define tCCP5Caller_N_CELL          (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCCP5Caller_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tCCP5Caller_is_cCall_joined(p_that) \
	  ((p_that)->cCall!=0)

/* セルCBを得るマクロ #_GCB_# */
#define tCCP5Caller_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tCCP5Caller_cCall_func( p_that ) \
	  (p_that)->cCall->VMT->func__T( \
	   (p_that)->cCall )
#define tCCP5Caller_cCall_func2( p_that, arg ) \
	  (p_that)->cCall->VMT->func2__T( \
	   (p_that)->cCall, (arg) )
#define tCCP5Caller_cCall_func3( p_that, a ) \
	  (p_that)->cCall->VMT->func3__T( \
	   (p_that)->cCall, (a) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eMain */
void           tCCP5Caller_eMain_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCCP5Caller_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCCP5Caller_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCCP5Caller_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCCP5Caller_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func( ) \
          tCCP5Caller_cCall_func( p_cellcb )
#define cCall_func2( arg ) \
          tCCP5Caller_cCall_func2( p_cellcb, arg )
#define cCall_func3( a ) \
          tCCP5Caller_cCall_func3( p_cellcb, a )



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cCall_joined()\
		tCCP5Caller_is_cCall_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tCCP5Caller_eMain_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCCP5Caller_N_CELL; (i)++ ){ \
       (p_cb) = &tCCP5Caller_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCCP5Caller_TECSGENH */
