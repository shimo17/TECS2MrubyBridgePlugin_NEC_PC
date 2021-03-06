/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCt2_TECSGEN_H
#define tCt2_TECSGEN_H

/*
 * celltype          :  tCt2
 * global name       :  tCt2
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  true
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
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCt2_INIB {
    /* call port #_TCP_# */
    struct tag_sSig_VDES *const*cCall;
    int_t n_cCall;
    struct tag_sAlloc_VDES *const*cCall_func_a;
    int_t n_cCall_func_a;
    struct tag_sAlloc_VDES *const*cCall_func2_buf;
    int_t n_cCall_func2_buf;
}  tCt2_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCt2_CB_tab           tCt2_INIB_tab
#define tCt2_SINGLE_CELL_CB   tCt2_SINGLE_CELL_INIB
#define tCt2_CB               tCt2_INIB
#define tag_tCt2_CB           tag_tCt2_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tCt2_INIB  tCt2_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCt2_INIB *tCt2_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cCall  (tCt2_SINGLE_CELL_INIB.n_cCall)
#define NCP_cCall   (tCt2_SINGLE_CELL_INIB.n_cCall)
#define N_CP_cCall_func_a  (tCt2_SINGLE_CELL_INIB.n_cCall_func_a)
#define NCP_cCall_func_a   (tCt2_SINGLE_CELL_INIB.n_cCall_func_a)
#define N_CP_cCall_func2_buf  (tCt2_SINGLE_CELL_INIB.n_cCall_func2_buf)
#define NCP_cCall_func2_buf   (tCt2_SINGLE_CELL_INIB.n_cCall_func2_buf)

/* セルCBを得るマクロ #_GCB_# */
#define tCt2_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tCt2_cCall_func( subscript, a ) \
	  tCt2_SINGLE_CELL_INIB.cCall[subscript]->VMT->func__T( \
	  tCt2_SINGLE_CELL_INIB.cCall[subscript], (a) )
#define tCt2_cCall_func2( subscript, buf, sz ) \
	  tCt2_SINGLE_CELL_INIB.cCall[subscript]->VMT->func2__T( \
	  tCt2_SINGLE_CELL_INIB.cCall[subscript], (buf), (sz) )
#define tCt2_cCall_func_a_alloc( subscript, sz, p ) \
	  tCt2_SINGLE_CELL_INIB.cCall_func_a[subscript]->VMT->alloc__T( \
	  tCt2_SINGLE_CELL_INIB.cCall_func_a[subscript], (sz), (p) )
#define tCt2_cCall_func_a_dealloc( subscript, p ) \
	  tCt2_SINGLE_CELL_INIB.cCall_func_a[subscript]->VMT->dealloc__T( \
	  tCt2_SINGLE_CELL_INIB.cCall_func_a[subscript], (p) )
#define tCt2_cCall_func2_buf_alloc( subscript, sz, p ) \
	  tCt2_SINGLE_CELL_INIB.cCall_func2_buf[subscript]->VMT->alloc__T( \
	  tCt2_SINGLE_CELL_INIB.cCall_func2_buf[subscript], (sz), (p) )
#define tCt2_cCall_func2_buf_dealloc( subscript, p ) \
	  tCt2_SINGLE_CELL_INIB.cCall_func2_buf[subscript]->VMT->dealloc__T( \
	  tCt2_SINGLE_CELL_INIB.cCall_func2_buf[subscript], (p) )

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
#define GET_CELLCB(idx)  tCt2_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCt2_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCt2_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func( subscript, a ) \
          tCt2_cCall_func( subscript, a )
#define cCall_func2( subscript, buf, sz ) \
          tCt2_cCall_func2( subscript, buf, sz )
#define cCall_func_a_alloc( subscript, sz, p ) \
          tCt2_cCall_func_a_alloc( subscript, sz, p )
#define cCall_func_a_dealloc( subscript, p ) \
          tCt2_cCall_func_a_dealloc( subscript, p )
#define cCall_func2_buf_alloc( subscript, sz, p ) \
          tCt2_cCall_func2_buf_alloc( subscript, sz, p )
#define cCall_func2_buf_dealloc( subscript, p ) \
          tCt2_cCall_func2_buf_dealloc( subscript, p )



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

#endif /* tCt2_TECSGENH */
