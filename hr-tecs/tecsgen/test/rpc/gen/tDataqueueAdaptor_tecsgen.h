/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tDataqueueAdaptor_TECSGEN_H
#define tDataqueueAdaptor_TECSGEN_H

/*
 * celltype          :  tDataqueueAdaptor
 * global name       :  tDataqueueAdaptor
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
#include "sChannel_tecsgen.h"
#include "sDataqueue_tecsgen.h"
#include "sEventflag_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tDataqueueAdaptor_INIB {
    /* call port #_TCP_# */
    struct tag_tDataqueuePeer_CB * cDataqueue;
    struct tag_tEventflag_CB * cEventflag;
    /* call port #_NEP_# */ 
}  tDataqueueAdaptor_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tDataqueueAdaptor_CB_tab           tDataqueueAdaptor_INIB_tab
#define tDataqueueAdaptor_SINGLE_CELL_CB   tDataqueueAdaptor_SINGLE_CELL_INIB
#define tDataqueueAdaptor_CB               tDataqueueAdaptor_INIB
#define tag_tDataqueueAdaptor_CB           tag_tDataqueueAdaptor_INIB

extern tDataqueueAdaptor_CB  tDataqueueAdaptor_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tDataqueueAdaptor_INIB *tDataqueueAdaptor_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sChannel */
Inline ER           tDataqueueAdaptor_eChannel_send(tDataqueueAdaptor_IDX idx, const int8_t* buf, int16_t size, TMO tmo);
Inline ER           tDataqueueAdaptor_eChannel_flush(tDataqueueAdaptor_IDX idx, TMO tmo);
Inline ER_UINT      tDataqueueAdaptor_eChannel_receive(tDataqueueAdaptor_IDX idx, int8_t* buf, int16_t size, TMO tmo);
Inline ER           tDataqueueAdaptor_eChannel_end_receive(tDataqueueAdaptor_IDX idx);
Inline ER           tDataqueueAdaptor_eChannel_reset(tDataqueueAdaptor_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tDataqueueAdaptor_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tDataqueuePeer_tecsgen.h"
#include "tEventflag_tecsgen.h"
#ifdef  tDataqueueAdaptor_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tDataqueueAdaptor_CB_TYPE_ONLY */
#define tDataqueueAdaptor_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tDataqueueAdaptor_N_CELL        (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tDataqueueAdaptor_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tDataqueueAdaptor_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tDataqueueAdaptor_cDataqueue_send( p_that, data ) \
	  tDataqueuePeer_eDataqueue_send( \
	   (p_that)->cDataqueue, (data) )
#define tDataqueueAdaptor_cDataqueue_sendPolling( p_that, data ) \
	  tDataqueuePeer_eDataqueue_sendPolling( \
	   (p_that)->cDataqueue, (data) )
#define tDataqueueAdaptor_cDataqueue_sendTimeout( p_that, data, timeout ) \
	  tDataqueuePeer_eDataqueue_sendTimeout( \
	   (p_that)->cDataqueue, (data), (timeout) )
#define tDataqueueAdaptor_cDataqueue_sendForce( p_that, data ) \
	  tDataqueuePeer_eDataqueue_sendForce( \
	   (p_that)->cDataqueue, (data) )
#define tDataqueueAdaptor_cDataqueue_receive( p_that, p_data ) \
	  tDataqueuePeer_eDataqueue_receive( \
	   (p_that)->cDataqueue, (p_data) )
#define tDataqueueAdaptor_cDataqueue_receivePolling( p_that, p_data ) \
	  tDataqueuePeer_eDataqueue_receivePolling( \
	   (p_that)->cDataqueue, (p_data) )
#define tDataqueueAdaptor_cDataqueue_receiveTimeout( p_that, p_data, timeout ) \
	  tDataqueuePeer_eDataqueue_receiveTimeout( \
	   (p_that)->cDataqueue, (p_data), (timeout) )
#define tDataqueueAdaptor_cDataqueue_initialize( p_that ) \
	  tDataqueuePeer_eDataqueue_initialize( \
	   (p_that)->cDataqueue )
#define tDataqueueAdaptor_cDataqueue_refer( p_that, pk_dataqueue_status ) \
	  tDataqueuePeer_eDataqueue_refer( \
	   (p_that)->cDataqueue, (pk_dataqueue_status) )
#define tDataqueueAdaptor_cEventflag_set( p_that, set_pattern ) \
	  tEventflag_eEventflag_set( \
	   (p_that)->cEventflag, (set_pattern) )
#define tDataqueueAdaptor_cEventflag_clear( p_that, clear_pattern ) \
	  tEventflag_eEventflag_clear( \
	   (p_that)->cEventflag, (clear_pattern) )
#define tDataqueueAdaptor_cEventflag_wait( p_that, wait_pattern, wait_flag_mode, p_flag_pattern ) \
	  tEventflag_eEventflag_wait( \
	   (p_that)->cEventflag, (wait_pattern), (wait_flag_mode), (p_flag_pattern) )
#define tDataqueueAdaptor_cEventflag_waitPolling( p_that, wait_pattern, wait_flag_mode, p_flag_pattern ) \
	  tEventflag_eEventflag_waitPolling( \
	   (p_that)->cEventflag, (wait_pattern), (wait_flag_mode), (p_flag_pattern) )
#define tDataqueueAdaptor_cEventflag_waitTimeout( p_that, wait_pattern, wait_flag_mode, p_flag_pattern, timeout ) \
	  tEventflag_eEventflag_waitTimeout( \
	   (p_that)->cEventflag, (wait_pattern), (wait_flag_mode), (p_flag_pattern), (timeout) )
#define tDataqueueAdaptor_cEventflag_initialize( p_that ) \
	  tEventflag_eEventflag_initialize( \
	   (p_that)->cEventflag )
#define tDataqueueAdaptor_cEventflag_refer( p_that, pk_eventflag_status ) \
	  tEventflag_eEventflag_refer( \
	   (p_that)->cEventflag, (pk_eventflag_status) )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tDataqueueAdaptor_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tDataqueueAdaptor_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tDataqueueAdaptor_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tDataqueueAdaptor_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cDataqueue_send( data ) \
          ((void)p_cellcb, tDataqueueAdaptor_cDataqueue_send( p_cellcb, data ))
#define cDataqueue_sendPolling( data ) \
          ((void)p_cellcb, tDataqueueAdaptor_cDataqueue_sendPolling( p_cellcb, data ))
#define cDataqueue_sendTimeout( data, timeout ) \
          ((void)p_cellcb, tDataqueueAdaptor_cDataqueue_sendTimeout( p_cellcb, data, timeout ))
#define cDataqueue_sendForce( data ) \
          ((void)p_cellcb, tDataqueueAdaptor_cDataqueue_sendForce( p_cellcb, data ))
#define cDataqueue_receive( p_data ) \
          ((void)p_cellcb, tDataqueueAdaptor_cDataqueue_receive( p_cellcb, p_data ))
#define cDataqueue_receivePolling( p_data ) \
          ((void)p_cellcb, tDataqueueAdaptor_cDataqueue_receivePolling( p_cellcb, p_data ))
#define cDataqueue_receiveTimeout( p_data, timeout ) \
          ((void)p_cellcb, tDataqueueAdaptor_cDataqueue_receiveTimeout( p_cellcb, p_data, timeout ))
#define cDataqueue_initialize( ) \
          ((void)p_cellcb, tDataqueueAdaptor_cDataqueue_initialize( p_cellcb ))
#define cDataqueue_refer( pk_dataqueue_status ) \
          ((void)p_cellcb, tDataqueueAdaptor_cDataqueue_refer( p_cellcb, pk_dataqueue_status ))
#define cEventflag_set( set_pattern ) \
          ((void)p_cellcb, tDataqueueAdaptor_cEventflag_set( p_cellcb, set_pattern ))
#define cEventflag_clear( clear_pattern ) \
          ((void)p_cellcb, tDataqueueAdaptor_cEventflag_clear( p_cellcb, clear_pattern ))
#define cEventflag_wait( wait_pattern, wait_flag_mode, p_flag_pattern ) \
          ((void)p_cellcb, tDataqueueAdaptor_cEventflag_wait( p_cellcb, wait_pattern, wait_flag_mode, p_flag_pattern ))
#define cEventflag_waitPolling( wait_pattern, wait_flag_mode, p_flag_pattern ) \
          ((void)p_cellcb, tDataqueueAdaptor_cEventflag_waitPolling( p_cellcb, wait_pattern, wait_flag_mode, p_flag_pattern ))
#define cEventflag_waitTimeout( wait_pattern, wait_flag_mode, p_flag_pattern, timeout ) \
          ((void)p_cellcb, tDataqueueAdaptor_cEventflag_waitTimeout( p_cellcb, wait_pattern, wait_flag_mode, p_flag_pattern, timeout ))
#define cEventflag_initialize( ) \
          ((void)p_cellcb, tDataqueueAdaptor_cEventflag_initialize( p_cellcb ))
#define cEventflag_refer( pk_eventflag_status ) \
          ((void)p_cellcb, tDataqueueAdaptor_cEventflag_refer( p_cellcb, pk_eventflag_status ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eChannel_send    tDataqueueAdaptor_eChannel_send
#define eChannel_flush   tDataqueueAdaptor_eChannel_flush
#define eChannel_receive tDataqueueAdaptor_eChannel_receive
#define eChannel_end_receive tDataqueueAdaptor_eChannel_end_receive
#define eChannel_reset   tDataqueueAdaptor_eChannel_reset

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tDataqueueAdaptor_N_CELL; (i)++ ){ \
       //(p_cb) = &tDataqueueAdaptor_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#ifndef TOPPERS_MACRO_ONLY

/* inline ヘッダの include #_INL_# */
#include "tDataqueueAdaptor_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline のための undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tDataqueueAdaptor_IDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef tDataqueueAdaptor_cDataqueue_send
#undef cDataqueue_send
#undef tDataqueueAdaptor_cDataqueue_sendPolling
#undef cDataqueue_sendPolling
#undef tDataqueueAdaptor_cDataqueue_sendTimeout
#undef cDataqueue_sendTimeout
#undef tDataqueueAdaptor_cDataqueue_sendForce
#undef cDataqueue_sendForce
#undef tDataqueueAdaptor_cDataqueue_receive
#undef cDataqueue_receive
#undef tDataqueueAdaptor_cDataqueue_receivePolling
#undef cDataqueue_receivePolling
#undef tDataqueueAdaptor_cDataqueue_receiveTimeout
#undef cDataqueue_receiveTimeout
#undef tDataqueueAdaptor_cDataqueue_initialize
#undef cDataqueue_initialize
#undef tDataqueueAdaptor_cDataqueue_refer
#undef cDataqueue_refer
#undef tDataqueueAdaptor_cEventflag_set
#undef cEventflag_set
#undef tDataqueueAdaptor_cEventflag_clear
#undef cEventflag_clear
#undef tDataqueueAdaptor_cEventflag_wait
#undef cEventflag_wait
#undef tDataqueueAdaptor_cEventflag_waitPolling
#undef cEventflag_waitPolling
#undef tDataqueueAdaptor_cEventflag_waitTimeout
#undef cEventflag_waitTimeout
#undef tDataqueueAdaptor_cEventflag_initialize
#undef cEventflag_initialize
#undef tDataqueueAdaptor_cEventflag_refer
#undef cEventflag_refer
#undef eChannel_send
#undef eChannel_flush
#undef eChannel_receive
#undef eChannel_end_receive
#undef eChannel_reset
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tDataqueueAdaptor_TECSGENH */
