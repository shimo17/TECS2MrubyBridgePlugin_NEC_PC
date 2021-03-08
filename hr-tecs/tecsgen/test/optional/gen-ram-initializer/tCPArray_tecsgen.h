/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCPArray_TECSGEN_H
#define tCPArray_TECSGEN_H

/*
 * celltype          :  tCPArray
 * global name       :  tCPArray
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
#include "sSig_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCPArray_INIB {
    /* call port #_TCP_# */
    struct tag_sSig_VDES *const*cCall;
    /* call port #_NEP_# */ 
}  tCPArray_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCPArray_CB_tab           tCPArray_INIB_tab
#define tCPArray_SINGLE_CELL_CB   tCPArray_SINGLE_CELL_INIB
#define tCPArray_CB               tCPArray_INIB
#define tag_tCPArray_CB           tag_tCPArray_INIB

extern tCPArray_CB  tCPArray_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCPArray_INIB *tCPArray_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
void         tCPArray_eEnt_func(tCPArray_IDX idx);
int32_t      tCPArray_eEnt_func2(tCPArray_IDX idx, int32_t arg);
struct tagST tCPArray_eEnt_func3(tCPArray_IDX idx, struct tagST a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCPArray_ID_BASE            (1)  /* ID のベース  #_NIDB_# */
#define tCPArray_N_CELL             (4)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCPArray_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cCall    (3)
#define NCP_cCall     (3)
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tCPArray_is_cCall_joined(p_that,subscript) \
	  (((p_that)->cCall!=0)\
	  &&((p_that)->cCall[subscript]!=0))

/* セルCBを得るマクロ #_GCB_# */
#define tCPArray_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tCPArray_cCall_func( p_that, subscript ) \
	  (p_that)->cCall[subscript]->VMT->func__T( \
	   (p_that)->cCall[subscript] )
#define tCPArray_cCall_func2( p_that, subscript, arg ) \
	  (p_that)->cCall[subscript]->VMT->func2__T( \
	   (p_that)->cCall[subscript], (arg) )
#define tCPArray_cCall_func3( p_that, subscript, a ) \
	  (p_that)->cCall[subscript]->VMT->func3__T( \
	   (p_that)->cCall[subscript], (a) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eEnt */
void           tCPArray_eEnt_func_skel( const struct tag_sSig_VDES *epd);
int32_t        tCPArray_eEnt_func2_skel( const struct tag_sSig_VDES *epd, int32_t arg);
struct tagST   tCPArray_eEnt_func3_skel( const struct tag_sSig_VDES *epd, struct tagST a);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCPArray_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCPArray_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCPArray_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCPArray_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func( subscript ) \
          tCPArray_cCall_func( p_cellcb, subscript )
#define cCall_func2( subscript, arg ) \
          tCPArray_cCall_func2( p_cellcb, subscript, arg )
#define cCall_func3( subscript, a ) \
          tCPArray_cCall_func3( p_cellcb, subscript, a )



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cCall_joined(subscript)\
		tCPArray_is_cCall_joined(p_cellcb,subscript)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func        tCPArray_eEnt_func
#define eEnt_func2       tCPArray_eEnt_func2
#define eEnt_func3       tCPArray_eEnt_func3

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCPArray_N_CELL; (i)++ ){ \
       (p_cb) = &tCPArray_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCPArray_TECSGENH */
