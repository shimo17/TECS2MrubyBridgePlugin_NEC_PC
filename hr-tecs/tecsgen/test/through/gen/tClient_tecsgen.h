/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tClient_TECSGEN_H
#define tClient_TECSGEN_H

/*
 * celltype          :  tClient
 * global name       :  tClient
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
#include "sSignature_tecsgen.h"
#include "sMain_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tClient_INIB {
    /* call port #_TCP_# */
    struct tag_sSignature_VDES *const*cCall2;
    /* call port #_NEP_# */ 
}  tClient_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tClient_CB_tab           tClient_INIB_tab
#define tClient_SINGLE_CELL_CB   tClient_SINGLE_CELL_INIB
#define tClient_CB               tClient_INIB
#define tag_tClient_CB           tag_tClient_INIB

extern tClient_CB  tClient_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tClient_INIB *tClient_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sMain */
ER           tClient_eMain_main(tClient_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tClient_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tPlugin1_sSignature_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tClient_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tClient_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tClient_ID_BASE             (1)  /* ID のベース  #_NIDB_# */
#define tClient_N_CELL              (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tClient_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cCall2    (2)
#define NCP_cCall2     (2)
#define N_CP_cCall2_func6_buf    (2)
#define NCP_cCall2_func6_buf     (2)
#define N_CP_cCall2_func7_buf    (2)
#define NCP_cCall2_func7_buf     (2)

/* セルCBを得るマクロ #_GCB_# */
#define tClient_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tClient_cCall_func1( p_that, inval ) \
	  tPlugin1_sSignature_throughEntry_func1( \
	   &tPlugin1_sSignature_CB_tab[0], (inval) )
#define tClient_cCall_func2( p_that, outval ) \
	  tPlugin1_sSignature_throughEntry_func2( \
	   &tPlugin1_sSignature_CB_tab[0], (outval) )
#define tClient_cCall_func3( p_that, stval ) \
	  tPlugin1_sSignature_throughEntry_func3( \
	   &tPlugin1_sSignature_CB_tab[0], (stval) )
#define tClient_cCall_func4( p_that, stval, inval ) \
	  tPlugin1_sSignature_throughEntry_func4( \
	   &tPlugin1_sSignature_CB_tab[0], (stval), (inval) )
#define tClient_cCall_func5( p_that, stval, inval ) \
	  tPlugin1_sSignature_throughEntry_func5( \
	   &tPlugin1_sSignature_CB_tab[0], (stval), (inval) )
#define tClient_cCall_func6( p_that, buf, sz ) \
	  tPlugin1_sSignature_throughEntry_func6( \
	   &tPlugin1_sSignature_CB_tab[0], (buf), (sz) )
#define tClient_cCall_func7( p_that, buf, sz ) \
	  tPlugin1_sSignature_throughEntry_func7( \
	   &tPlugin1_sSignature_CB_tab[0], (buf), (sz) )
#define tClient_cCall_func10( p_that, stval, a ) \
	  tPlugin1_sSignature_throughEntry_func10( \
	   &tPlugin1_sSignature_CB_tab[0], (stval), (a) )
#define tClient_cCall2_func1( p_that, subscript, inval ) \
	  (p_that)->cCall2[subscript]->VMT->func1__T( \
	   (p_that)->cCall2[subscript], (inval) )
#define tClient_cCall2_func2( p_that, subscript, outval ) \
	  (p_that)->cCall2[subscript]->VMT->func2__T( \
	   (p_that)->cCall2[subscript], (outval) )
#define tClient_cCall2_func3( p_that, subscript, stval ) \
	  (p_that)->cCall2[subscript]->VMT->func3__T( \
	   (p_that)->cCall2[subscript], (stval) )
#define tClient_cCall2_func4( p_that, subscript, stval, inval ) \
	  (p_that)->cCall2[subscript]->VMT->func4__T( \
	   (p_that)->cCall2[subscript], (stval), (inval) )
#define tClient_cCall2_func5( p_that, subscript, stval, inval ) \
	  (p_that)->cCall2[subscript]->VMT->func5__T( \
	   (p_that)->cCall2[subscript], (stval), (inval) )
#define tClient_cCall2_func6( p_that, subscript, buf, sz ) \
	  (p_that)->cCall2[subscript]->VMT->func6__T( \
	   (p_that)->cCall2[subscript], (buf), (sz) )
#define tClient_cCall2_func7( p_that, subscript, buf, sz ) \
	  (p_that)->cCall2[subscript]->VMT->func7__T( \
	   (p_that)->cCall2[subscript], (buf), (sz) )
#define tClient_cCall2_func10( p_that, subscript, stval, a ) \
	  (p_that)->cCall2[subscript]->VMT->func10__T( \
	   (p_that)->cCall2[subscript], (stval), (a) )
#define tClient_cCall_func6_buf_alloc( p_that, sz, ptr ) \
	  tAlloc_eA_alloc( \
	    (sz), (ptr) )
#define tClient_cCall_func6_buf_dealloc( p_that, ptr ) \
	  tAlloc_eA_dealloc( \
	    (ptr) )
#define tClient_cCall_func7_buf_alloc( p_that, sz, ptr ) \
	  tAlloc_eA_alloc( \
	    (sz), (ptr) )
#define tClient_cCall_func7_buf_dealloc( p_that, ptr ) \
	  tAlloc_eA_dealloc( \
	    (ptr) )
#define tClient_cCall2_func6_buf_alloc( p_that, subscript, sz, ptr ) \
	  tAlloc_eA_alloc( \
	    (sz), (ptr) )
#define tClient_cCall2_func6_buf_dealloc( p_that, subscript, ptr ) \
	  tAlloc_eA_dealloc( \
	    (ptr) )
#define tClient_cCall2_func7_buf_alloc( p_that, subscript, sz, ptr ) \
	  tAlloc_eA_alloc( \
	    (sz), (ptr) )
#define tClient_cCall2_func7_buf_dealloc( p_that, subscript, ptr ) \
	  tAlloc_eA_dealloc( \
	    (ptr) )

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
#define VALID_IDX(IDX)  tClient_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tClient_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tClient_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tClient_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func1( inval ) \
          ((void)p_cellcb, tClient_cCall_func1( p_cellcb, inval ))
#define cCall_func2( outval ) \
          ((void)p_cellcb, tClient_cCall_func2( p_cellcb, outval ))
#define cCall_func3( stval ) \
          ((void)p_cellcb, tClient_cCall_func3( p_cellcb, stval ))
#define cCall_func4( stval, inval ) \
          ((void)p_cellcb, tClient_cCall_func4( p_cellcb, stval, inval ))
#define cCall_func5( stval, inval ) \
          ((void)p_cellcb, tClient_cCall_func5( p_cellcb, stval, inval ))
#define cCall_func6( buf, sz ) \
          ((void)p_cellcb, tClient_cCall_func6( p_cellcb, buf, sz ))
#define cCall_func7( buf, sz ) \
          ((void)p_cellcb, tClient_cCall_func7( p_cellcb, buf, sz ))
#define cCall_func10( stval, a ) \
          ((void)p_cellcb, tClient_cCall_func10( p_cellcb, stval, a ))
#define cCall2_func1( subscript, inval ) \
          tClient_cCall2_func1( p_cellcb, subscript, inval )
#define cCall2_func2( subscript, outval ) \
          tClient_cCall2_func2( p_cellcb, subscript, outval )
#define cCall2_func3( subscript, stval ) \
          tClient_cCall2_func3( p_cellcb, subscript, stval )
#define cCall2_func4( subscript, stval, inval ) \
          tClient_cCall2_func4( p_cellcb, subscript, stval, inval )
#define cCall2_func5( subscript, stval, inval ) \
          tClient_cCall2_func5( p_cellcb, subscript, stval, inval )
#define cCall2_func6( subscript, buf, sz ) \
          tClient_cCall2_func6( p_cellcb, subscript, buf, sz )
#define cCall2_func7( subscript, buf, sz ) \
          tClient_cCall2_func7( p_cellcb, subscript, buf, sz )
#define cCall2_func10( subscript, stval, a ) \
          tClient_cCall2_func10( p_cellcb, subscript, stval, a )
#define cCall_func6_buf_alloc( sz, ptr ) \
          ((void)p_cellcb, tClient_cCall_func6_buf_alloc( p_cellcb, sz, ptr ))
#define cCall_func6_buf_dealloc( ptr ) \
          ((void)p_cellcb, tClient_cCall_func6_buf_dealloc( p_cellcb, ptr ))
#define cCall_func7_buf_alloc( sz, ptr ) \
          ((void)p_cellcb, tClient_cCall_func7_buf_alloc( p_cellcb, sz, ptr ))
#define cCall_func7_buf_dealloc( ptr ) \
          ((void)p_cellcb, tClient_cCall_func7_buf_dealloc( p_cellcb, ptr ))
#define cCall2_func6_buf_alloc( subscript, sz, ptr ) \
          ((void)p_cellcb, tClient_cCall2_func6_buf_alloc( p_cellcb, subscript, sz, ptr ))
#define cCall2_func6_buf_dealloc( subscript, ptr ) \
          ((void)p_cellcb, tClient_cCall2_func6_buf_dealloc( p_cellcb, subscript, ptr ))
#define cCall2_func7_buf_alloc( subscript, sz, ptr ) \
          ((void)p_cellcb, tClient_cCall2_func7_buf_alloc( p_cellcb, subscript, sz, ptr ))
#define cCall2_func7_buf_dealloc( subscript, ptr ) \
          ((void)p_cellcb, tClient_cCall2_func7_buf_dealloc( p_cellcb, subscript, ptr ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tClient_eMain_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tClient_N_CELL; (i)++ ){ \
       //(p_cb) = &tClient_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define CCALL_FUNC6_BUF_DEALLOC(buf) \
	  cCall_func6_buf_dealloc( (buf) ); 
#define CCALL_FUNC7_BUF_DEALLOC(buf) \
	  cCall_func7_buf_dealloc( (buf) ); 
#define CCALL2_FUNC6_BUF_DEALLOC(buf) \
	  cCall2_func6_buf_dealloc( (buf) ); 
#define CCALL2_FUNC7_BUF_DEALLOC(buf) \
	  cCall2_func7_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define CCALL_FUNC6_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall_func6_buf_dealloc( (buf) );  \
	  }
#define CCALL_FUNC7_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall_func7_buf_dealloc( (buf) );  \
	  }
#define CCALL2_FUNC6_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall2_func6_buf_dealloc( (buf) );  \
	  }
#define CCALL2_FUNC7_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall2_func7_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tClient_TECSGENH */
