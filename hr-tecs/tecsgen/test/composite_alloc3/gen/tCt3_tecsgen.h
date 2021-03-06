/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCt3_TECSGEN_H
#define tCt3_TECSGEN_H

/*
 * celltype          :  tCt3
 * global name       :  tCt3
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSig_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tCt3_CB {
    int  dummy;
} tCt3_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */


/* セルタイプのIDX型 #_CTIX_# */
typedef int   tCt3_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCt3_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCt1_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tCt3_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCt3_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tCt3_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tCt3_cCall_func( a ) \
	  tCt1_eEnt_func( \
	   &tCt1_CB_tab[2], (a) )
#define tCt3_cCall_func2( buf, sz ) \
	  tCt1_eEnt_func2( \
	   &tCt1_CB_tab[2], (buf), (sz) )
#define tCt3_cCall_func_a_alloc( sz, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[5], (sz), (p) )
#define tCt3_cCall_func_a_dealloc( p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[5], (p) )
#define tCt3_cCall_func2_buf_alloc( sz, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[5], (sz), (p) )
#define tCt3_cCall_func2_buf_dealloc( p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[5], (p) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCt3_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCt3_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCt3_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func( a ) \
          tCt3_cCall_func( a )
#define cCall_func2( buf, sz ) \
          tCt3_cCall_func2( buf, sz )
#define cCall_func_a_alloc( sz, p ) \
          tCt3_cCall_func_a_alloc( sz, p )
#define cCall_func_a_dealloc( p ) \
          tCt3_cCall_func_a_dealloc( p )
#define cCall_func2_buf_alloc( sz, p ) \
          tCt3_cCall_func2_buf_alloc( sz, p )
#define cCall_func2_buf_dealloc( p ) \
          tCt3_cCall_func2_buf_dealloc( p )



/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define CCALL_FUNC_A_DEALLOC(a) \
	  cCall_func_a_dealloc( (a) ); 
#define CCALL_FUNC2_BUF_DEALLOC(buf) \
	  cCall_func2_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define CCALL_FUNC_A_DEALLOC_RESET(a) \
	  if( (a) ){ \
	    cCall_func_a_dealloc( (a) );  \
	  }
#define CCALL_FUNC2_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall_func2_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCt3_TECSGENH */
