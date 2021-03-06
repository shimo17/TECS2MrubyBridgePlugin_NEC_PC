/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTestClient_TECSGEN_H
#define tTestClient_TECSGEN_H

/*
 * celltype          :  tTestClient
 * global name       :  tTestClient
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  true
 * has_INIB          :  false
 * rom               :  no
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSendRecv_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPO_# */
typedef struct tag_tTestClient_CB {
    /* call port #_TCP_# */
    struct tag_sSendRecv_VDES *const*cA;
}  tTestClient_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tTestClient_CB  tTestClient_SINGLE_CELL_CB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tTestClient_CB *tTestClient_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTestClient_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTestComponent_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tTestClient_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTestClient_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cA    (2)
#define NCP_cA     (2)
#define N_CP_cA_snd_buf    (2)
#define NCP_cA_snd_buf     (2)
#define N_CP_cA_rcv_buf    (2)
#define NCP_cA_rcv_buf     (2)

/* セルCBを得るマクロ #_GCB_# */
#define tTestClient_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tTestClient_cS_snd( buf, sz ) \
	  tTestComponent_eS_snd( \
	   (tTestComponent_IDX)0, (buf), (sz) )
#define tTestClient_cS_rcv( buf, sz ) \
	  tTestComponent_eS_rcv( \
	   (tTestComponent_IDX)0, (buf), (sz) )
#define tTestClient_cA_snd( subscript, buf, sz ) \
	  tTestComponent_eA_snd_skel( \
	  tTestClient_SINGLE_CELL_CB.cA[subscript], (buf), (sz) )
#define tTestClient_cA_rcv( subscript, buf, sz ) \
	  tTestComponent_eA_rcv_skel( \
	  tTestClient_SINGLE_CELL_CB.cA[subscript], (buf), (sz) )
#define tTestClient_cS_snd_buf_alloc( size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tTestClient_cS_snd_buf_dealloc( p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tTestClient_cS_rcv_buf_alloc( size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tTestClient_cS_rcv_buf_dealloc( p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tTestClient_cA_snd_buf_alloc( subscript, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tTestClient_cA_snd_buf_dealloc( subscript, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tTestClient_cA_rcv_buf_alloc( subscript, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tTestClient_cA_rcv_buf_dealloc( subscript, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )

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
#define GET_CELLCB(idx)  tTestClient_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTestClient_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTestClient_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cS_snd( buf, sz ) \
          tTestClient_cS_snd( buf, sz )
#define cS_rcv( buf, sz ) \
          tTestClient_cS_rcv( buf, sz )
#define cA_snd( subscript, buf, sz ) \
          tTestClient_cA_snd( subscript, buf, sz )
#define cA_rcv( subscript, buf, sz ) \
          tTestClient_cA_rcv( subscript, buf, sz )
#define cS_snd_buf_alloc( size, p ) \
          tTestClient_cS_snd_buf_alloc( size, p )
#define cS_snd_buf_dealloc( p ) \
          tTestClient_cS_snd_buf_dealloc( p )
#define cS_rcv_buf_alloc( size, p ) \
          tTestClient_cS_rcv_buf_alloc( size, p )
#define cS_rcv_buf_dealloc( p ) \
          tTestClient_cS_rcv_buf_dealloc( p )
#define cA_snd_buf_alloc( subscript, size, p ) \
          tTestClient_cA_snd_buf_alloc( subscript, size, p )
#define cA_snd_buf_dealloc( subscript, p ) \
          tTestClient_cA_snd_buf_dealloc( subscript, p )
#define cA_rcv_buf_alloc( subscript, size, p ) \
          tTestClient_cA_rcv_buf_alloc( subscript, size, p )
#define cA_rcv_buf_dealloc( subscript, p ) \
          tTestClient_cA_rcv_buf_dealloc( subscript, p )



/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */

/* deallocate マクロ #_DAL_#   */
#define CS_SND_BUF_DEALLOC(buf) \
	  cS_snd_buf_dealloc( (buf) ); 
#define CS_RCV_BUF_DEALLOC(buf) \
	  cS_rcv_buf_dealloc( (buf) ); 
#define CA_SND_BUF_DEALLOC(buf) \
	  cA_snd_buf_dealloc( (buf) ); 
#define CA_RCV_BUF_DEALLOC(buf) \
	  cA_rcv_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define CS_SND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cS_snd_buf_dealloc( (buf) );  \
	  }
#define CS_RCV_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cS_rcv_buf_dealloc( (buf) );  \
	  }
#define CA_SND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cA_snd_buf_dealloc( (buf) );  \
	  }
#define CA_RCV_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cA_rcv_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTestClient_TECSGENH */
