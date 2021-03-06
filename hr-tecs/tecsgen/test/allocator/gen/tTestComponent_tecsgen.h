/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTestComponent_TECSGEN_H
#define tTestComponent_TECSGEN_H

/*
 * celltype          :  tTestComponent
 * global name       :  tTestComponent
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  no
 * CB initializer    :  no
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
typedef struct tag_tTestComponent_CB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
}  tTestComponent_CB;
extern tTestComponent_CB  tTestComponent_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tTestComponent_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSendRecv */
ER           tTestComponent_eS_snd(tTestComponent_IDX idx, int8_t* buf, int32_t sz);
ER           tTestComponent_eS_rcv(tTestComponent_IDX idx, int8_t** buf, int32_t* sz);
/* sSendRecv */
ER           tTestComponent_eA_snd(tTestComponent_IDX idx, int_t subscript, int8_t* buf, int32_t sz);
ER           tTestComponent_eA_rcv(tTestComponent_IDX idx, int_t subscript, int8_t** buf, int32_t* sz);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTestComponent_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAlloc_tecsgen.h"
#ifdef  tTestComponent_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTestComponent_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTestComponent_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tTestComponent_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTestComponent_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_eA_snd_buf    (2)
#define NCP_eA_snd_buf     (2)
#define N_CP_eA_rcv_buf    (2)
#define NCP_eA_rcv_buf     (2)
/* 受け口配列の大きさを得るマクロ #_NEPA_# */
#define NEP_eA     (2)

/* セルCBを得るマクロ #_GCB_# */
#define tTestComponent_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tTestComponent_eS_snd_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tTestComponent_eS_snd_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tTestComponent_eS_rcv_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tTestComponent_eS_rcv_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tTestComponent_eA_snd_buf_alloc( p_that, subscript, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tTestComponent_eA_snd_buf_dealloc( p_that, subscript, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tTestComponent_eA_rcv_buf_alloc( p_that, subscript, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tTestComponent_eA_rcv_buf_dealloc( p_that, subscript, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eA */
ER             tTestComponent_eA_snd_skel( const struct tag_sSendRecv_VDES *epd, int8_t* buf, int32_t sz);
ER             tTestComponent_eA_rcv_skel( const struct tag_sSendRecv_VDES *epd, int8_t** buf, int32_t* sz);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTestComponent_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTestComponent_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTestComponent_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTestComponent_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define eS_snd_buf_alloc( size, p ) \
          ((void)p_cellcb, tTestComponent_eS_snd_buf_alloc( p_cellcb, size, p ))
#define eS_snd_buf_dealloc( p ) \
          ((void)p_cellcb, tTestComponent_eS_snd_buf_dealloc( p_cellcb, p ))
#define eS_rcv_buf_alloc( size, p ) \
          ((void)p_cellcb, tTestComponent_eS_rcv_buf_alloc( p_cellcb, size, p ))
#define eS_rcv_buf_dealloc( p ) \
          ((void)p_cellcb, tTestComponent_eS_rcv_buf_dealloc( p_cellcb, p ))
#define eA_snd_buf_alloc( subscript, size, p ) \
          ((void)p_cellcb, tTestComponent_eA_snd_buf_alloc( p_cellcb, subscript, size, p ))
#define eA_snd_buf_dealloc( subscript, p ) \
          ((void)p_cellcb, tTestComponent_eA_snd_buf_dealloc( p_cellcb, subscript, p ))
#define eA_rcv_buf_alloc( subscript, size, p ) \
          ((void)p_cellcb, tTestComponent_eA_rcv_buf_alloc( p_cellcb, subscript, size, p ))
#define eA_rcv_buf_dealloc( subscript, p ) \
          ((void)p_cellcb, tTestComponent_eA_rcv_buf_dealloc( p_cellcb, subscript, p ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eS_snd           tTestComponent_eS_snd
#define eS_rcv           tTestComponent_eS_rcv
#define eA_snd           tTestComponent_eA_snd
#define eA_rcv           tTestComponent_eA_rcv

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define ES_SND_BUF_DEALLOC(buf) \
	  eS_snd_buf_dealloc( (buf) ); 
#define ES_RCV_BUF_DEALLOC(buf) \
	  eS_rcv_buf_dealloc( (buf) ); 
#define EA_SND_BUF_DEALLOC(buf) \
	  eA_snd_buf_dealloc( (buf) ); 
#define EA_RCV_BUF_DEALLOC(buf) \
	  eA_rcv_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define ES_SND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eS_snd_buf_dealloc( (buf) );  \
	  }
#define ES_RCV_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eS_rcv_buf_dealloc( (buf) );  \
	  }
#define EA_SND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eA_snd_buf_dealloc( (buf) );  \
	  }
#define EA_RCV_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eA_rcv_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTestComponent_TECSGENH */
