/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tPlugin2_sSignature_TECSGEN_H
#define tPlugin2_sSignature_TECSGEN_H

/*
 * celltype          :  tPlugin2_sSignature
 * global name       :  tPlugin2_sSignature
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
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tPlugin2_sSignature_INIB {
    /* call port #_TCP_# */
    const struct tag_tTracePlugin_sSignature_INIB * cCall;
    /* call port #_NEP_# */ 
}  tPlugin2_sSignature_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tPlugin2_sSignature_CB_tab           tPlugin2_sSignature_INIB_tab
#define tPlugin2_sSignature_SINGLE_CELL_CB   tPlugin2_sSignature_SINGLE_CELL_INIB
#define tPlugin2_sSignature_CB               tPlugin2_sSignature_INIB
#define tag_tPlugin2_sSignature_CB           tag_tPlugin2_sSignature_INIB

extern tPlugin2_sSignature_CB  tPlugin2_sSignature_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tPlugin2_sSignature_INIB *tPlugin2_sSignature_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSignature */
ER           tPlugin2_sSignature_eThroughEntry_func1(tPlugin2_sSignature_IDX idx, int32_t inval);
ER           tPlugin2_sSignature_eThroughEntry_func2(tPlugin2_sSignature_IDX idx, int32_t* outval);
ER           tPlugin2_sSignature_eThroughEntry_func3(tPlugin2_sSignature_IDX idx, struct tag stval);
ER           tPlugin2_sSignature_eThroughEntry_func4(tPlugin2_sSignature_IDX idx, stTag stval, INT inval);
ER           tPlugin2_sSignature_eThroughEntry_func5(tPlugin2_sSignature_IDX idx, stTag* stval, INT inval);
ER           tPlugin2_sSignature_eThroughEntry_func6(tPlugin2_sSignature_IDX idx, int8_t* buf, int32_t sz);
ER           tPlugin2_sSignature_eThroughEntry_func7(tPlugin2_sSignature_IDX idx, int8_t** buf, int32_t* sz);
ER           tPlugin2_sSignature_eThroughEntry_func10(tPlugin2_sSignature_IDX idx, const stTag* stval, int32_t a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tPlugin2_sSignature_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTracePlugin_sSignature_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tPlugin2_sSignature_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tPlugin2_sSignature_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tPlugin2_sSignature_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tPlugin2_sSignature_N_CELL        (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tPlugin2_sSignature_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tPlugin2_sSignature_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tPlugin2_sSignature_cCall_func1( p_that, inval ) \
	  tTracePlugin_sSignature_eThroughEntry_func1( \
	   (p_that)->cCall, (inval) )
#define tPlugin2_sSignature_cCall_func2( p_that, outval ) \
	  tTracePlugin_sSignature_eThroughEntry_func2( \
	   (p_that)->cCall, (outval) )
#define tPlugin2_sSignature_cCall_func3( p_that, stval ) \
	  tTracePlugin_sSignature_eThroughEntry_func3( \
	   (p_that)->cCall, (stval) )
#define tPlugin2_sSignature_cCall_func4( p_that, stval, inval ) \
	  tTracePlugin_sSignature_eThroughEntry_func4( \
	   (p_that)->cCall, (stval), (inval) )
#define tPlugin2_sSignature_cCall_func5( p_that, stval, inval ) \
	  tTracePlugin_sSignature_eThroughEntry_func5( \
	   (p_that)->cCall, (stval), (inval) )
#define tPlugin2_sSignature_cCall_func6( p_that, buf, sz ) \
	  tTracePlugin_sSignature_eThroughEntry_func6( \
	   (p_that)->cCall, (buf), (sz) )
#define tPlugin2_sSignature_cCall_func7( p_that, buf, sz ) \
	  tTracePlugin_sSignature_eThroughEntry_func7( \
	   (p_that)->cCall, (buf), (sz) )
#define tPlugin2_sSignature_cCall_func10( p_that, stval, a ) \
	  tTracePlugin_sSignature_eThroughEntry_func10( \
	   (p_that)->cCall, (stval), (a) )
#define tPlugin2_sSignature_eThroughEntry_func6_buf_alloc( p_that, sz, ptr ) \
	  tAlloc_eA_alloc( \
	    (sz), (ptr) )
#define tPlugin2_sSignature_eThroughEntry_func6_buf_dealloc( p_that, ptr ) \
	  tAlloc_eA_dealloc( \
	    (ptr) )
#define tPlugin2_sSignature_eThroughEntry_func7_buf_alloc( p_that, sz, ptr ) \
	  tAlloc_eA_alloc( \
	    (sz), (ptr) )
#define tPlugin2_sSignature_eThroughEntry_func7_buf_dealloc( p_that, ptr ) \
	  tAlloc_eA_dealloc( \
	    (ptr) )
#define tPlugin2_sSignature_cCall_func6_buf_alloc( p_that, sz, ptr ) \
	  tAlloc_eA_alloc( \
	    (sz), (ptr) )
#define tPlugin2_sSignature_cCall_func6_buf_dealloc( p_that, ptr ) \
	  tAlloc_eA_dealloc( \
	    (ptr) )
#define tPlugin2_sSignature_cCall_func7_buf_alloc( p_that, sz, ptr ) \
	  tAlloc_eA_alloc( \
	    (sz), (ptr) )
#define tPlugin2_sSignature_cCall_func7_buf_dealloc( p_that, ptr ) \
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
#define VALID_IDX(IDX)  tPlugin2_sSignature_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tPlugin2_sSignature_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tPlugin2_sSignature_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tPlugin2_sSignature_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func1( inval ) \
          ((void)p_cellcb, tPlugin2_sSignature_cCall_func1( p_cellcb, inval ))
#define cCall_func2( outval ) \
          ((void)p_cellcb, tPlugin2_sSignature_cCall_func2( p_cellcb, outval ))
#define cCall_func3( stval ) \
          ((void)p_cellcb, tPlugin2_sSignature_cCall_func3( p_cellcb, stval ))
#define cCall_func4( stval, inval ) \
          ((void)p_cellcb, tPlugin2_sSignature_cCall_func4( p_cellcb, stval, inval ))
#define cCall_func5( stval, inval ) \
          ((void)p_cellcb, tPlugin2_sSignature_cCall_func5( p_cellcb, stval, inval ))
#define cCall_func6( buf, sz ) \
          ((void)p_cellcb, tPlugin2_sSignature_cCall_func6( p_cellcb, buf, sz ))
#define cCall_func7( buf, sz ) \
          ((void)p_cellcb, tPlugin2_sSignature_cCall_func7( p_cellcb, buf, sz ))
#define cCall_func10( stval, a ) \
          ((void)p_cellcb, tPlugin2_sSignature_cCall_func10( p_cellcb, stval, a ))
#define eThroughEntry_func6_buf_alloc( sz, ptr ) \
          ((void)p_cellcb, tPlugin2_sSignature_eThroughEntry_func6_buf_alloc( p_cellcb, sz, ptr ))
#define eThroughEntry_func6_buf_dealloc( ptr ) \
          ((void)p_cellcb, tPlugin2_sSignature_eThroughEntry_func6_buf_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func7_buf_alloc( sz, ptr ) \
          ((void)p_cellcb, tPlugin2_sSignature_eThroughEntry_func7_buf_alloc( p_cellcb, sz, ptr ))
#define eThroughEntry_func7_buf_dealloc( ptr ) \
          ((void)p_cellcb, tPlugin2_sSignature_eThroughEntry_func7_buf_dealloc( p_cellcb, ptr ))
#define cCall_func6_buf_alloc( sz, ptr ) \
          ((void)p_cellcb, tPlugin2_sSignature_cCall_func6_buf_alloc( p_cellcb, sz, ptr ))
#define cCall_func6_buf_dealloc( ptr ) \
          ((void)p_cellcb, tPlugin2_sSignature_cCall_func6_buf_dealloc( p_cellcb, ptr ))
#define cCall_func7_buf_alloc( sz, ptr ) \
          ((void)p_cellcb, tPlugin2_sSignature_cCall_func7_buf_alloc( p_cellcb, sz, ptr ))
#define cCall_func7_buf_dealloc( ptr ) \
          ((void)p_cellcb, tPlugin2_sSignature_cCall_func7_buf_dealloc( p_cellcb, ptr ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eThroughEntry_func1 tPlugin2_sSignature_eThroughEntry_func1
#define eThroughEntry_func2 tPlugin2_sSignature_eThroughEntry_func2
#define eThroughEntry_func3 tPlugin2_sSignature_eThroughEntry_func3
#define eThroughEntry_func4 tPlugin2_sSignature_eThroughEntry_func4
#define eThroughEntry_func5 tPlugin2_sSignature_eThroughEntry_func5
#define eThroughEntry_func6 tPlugin2_sSignature_eThroughEntry_func6
#define eThroughEntry_func7 tPlugin2_sSignature_eThroughEntry_func7
#define eThroughEntry_func10 tPlugin2_sSignature_eThroughEntry_func10

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tPlugin2_sSignature_N_CELL; (i)++ ){ \
       //(p_cb) = &tPlugin2_sSignature_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define ETHROUGHENTRY_FUNC6_BUF_DEALLOC(buf) \
	  eThroughEntry_func6_buf_dealloc( (buf) ); 
#define ETHROUGHENTRY_FUNC7_BUF_DEALLOC(buf) \
	  eThroughEntry_func7_buf_dealloc( (buf) ); 
#define CCALL_FUNC6_BUF_DEALLOC(buf) \
	  cCall_func6_buf_dealloc( (buf) ); 
#define CCALL_FUNC7_BUF_DEALLOC(buf) \
	  cCall_func7_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define ETHROUGHENTRY_FUNC6_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eThroughEntry_func6_buf_dealloc( (buf) );  \
	  }
#define ETHROUGHENTRY_FUNC7_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eThroughEntry_func7_buf_dealloc( (buf) );  \
	  }
#define CCALL_FUNC6_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall_func6_buf_dealloc( (buf) );  \
	  }
#define CCALL_FUNC7_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall_func7_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tPlugin2_sSignature_TECSGENH */
