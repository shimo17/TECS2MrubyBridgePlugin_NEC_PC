/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTargetComponent_TECSGEN_H
#define tTargetComponent_TECSGEN_H

/*
 * celltype          :  tTargetComponent
 * global name       :  tTargetComponent
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
typedef struct tag_tTargetComponent_CB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
}  tTargetComponent_CB;
extern tTargetComponent_CB  tTargetComponent_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tTargetComponent_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSendRecv */
ER           tTargetComponent_eS_snd(tTargetComponent_IDX idx, int8_t* buf, int32_t sz);
ER           tTargetComponent_eS_rcv(tTargetComponent_IDX idx, int8_t** buf, int32_t* sz);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTargetComponent_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAlloc_tecsgen.h"
#ifdef  tTargetComponent_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTargetComponent_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTargetComponent_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tTargetComponent_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTargetComponent_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTargetComponent_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tTargetComponent_eS_snd_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tTargetComponent_eS_snd_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tTargetComponent_eS_rcv_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tTargetComponent_eS_rcv_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eS */
ER             tTargetComponent_eS_snd_skel( const struct tag_sSendRecv_VDES *epd, int8_t* buf, int32_t sz);
ER             tTargetComponent_eS_rcv_skel( const struct tag_sSendRecv_VDES *epd, int8_t** buf, int32_t* sz);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTargetComponent_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTargetComponent_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTargetComponent_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTargetComponent_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define eS_snd_buf_alloc( size, p ) \
          ((void)p_cellcb, tTargetComponent_eS_snd_buf_alloc( p_cellcb, size, p ))
#define eS_snd_buf_dealloc( p ) \
          ((void)p_cellcb, tTargetComponent_eS_snd_buf_dealloc( p_cellcb, p ))
#define eS_rcv_buf_alloc( size, p ) \
          ((void)p_cellcb, tTargetComponent_eS_rcv_buf_alloc( p_cellcb, size, p ))
#define eS_rcv_buf_dealloc( p ) \
          ((void)p_cellcb, tTargetComponent_eS_rcv_buf_dealloc( p_cellcb, p ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eS_snd           tTargetComponent_eS_snd
#define eS_rcv           tTargetComponent_eS_rcv

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

/* deallocate マクロ #_DAL_#  _RESET */
#define ES_SND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eS_snd_buf_dealloc( (buf) );  \
	  }
#define ES_RCV_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eS_rcv_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTargetComponent_TECSGENH */
