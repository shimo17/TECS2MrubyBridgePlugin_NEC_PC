/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSimple_TECSGEN_H
#define tSimple_TECSGEN_H

/*
 * celltype          :  tSimple
 * global name       :  tSimple
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
#include "sTaskBody_tecsgen.h"
#include "sSample_tecsgen.h"
#include "sDataqueue_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSimple_INIB {
    /* call port #_TCP_# */
    const struct tag_tMarshaler_sSample_INIB * cCall;
    struct tag_sDataqueue_VDES const*cDataqueue;
    /* call port #_NEP_# */ 
}  tSimple_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSimple_CB_tab           tSimple_INIB_tab
#define tSimple_SINGLE_CELL_CB   tSimple_SINGLE_CELL_INIB
#define tSimple_CB               tSimple_INIB
#define tag_tSimple_CB           tag_tSimple_INIB

extern tSimple_CB  tSimple_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tSimple_INIB *tSimple_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tSimple_eBody_main(tSimple_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSimple_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tMarshaler_sSample_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tSimple_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSimple_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSimple_ID_BASE             (1)  /* ID のベース  #_NIDB_# */
#define tSimple_N_CELL              (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSimple_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tSimple_is_cDataqueue_joined(p_that) \
	  ((p_that)->cDataqueue!=0)

/* セルCBを得るマクロ #_GCB_# */
#define tSimple_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tSimple_cCall_sayHello( p_that, times ) \
	  tMarshaler_sSample_eClientEntry_sayHello( \
	   (p_that)->cCall, (times) )
#define tSimple_cCall_howAreYou( p_that, buf, len ) \
	  tMarshaler_sSample_eClientEntry_howAreYou( \
	   (p_that)->cCall, (buf), (len) )
#define tSimple_cCall_giftToYou( p_that, buf, len ) \
	  tMarshaler_sSample_eClientEntry_giftToYou( \
	   (p_that)->cCall, (buf), (len) )
#define tSimple_cCall_returnGiftFromYou( p_that, buf, len ) \
	  tMarshaler_sSample_eClientEntry_returnGiftFromYou( \
	   (p_that)->cCall, (buf), (len) )
#define tSimple_cCall_oneway( p_that, buf, len ) \
	  tMarshaler_sSample_eClientEntry_oneway( \
	   (p_that)->cCall, (buf), (len) )
#define tSimple_cCall_shutdown( p_that ) \
	  tMarshaler_sSample_eClientEntry_shutdown( \
	   (p_that)->cCall )
#define tSimple_cDataqueue_send( p_that, data ) \
	  (p_that)->cDataqueue->VMT->send__T( \
	   (p_that)->cDataqueue, (data) )
#define tSimple_cDataqueue_sendPolling( p_that, data ) \
	  (p_that)->cDataqueue->VMT->sendPolling__T( \
	   (p_that)->cDataqueue, (data) )
#define tSimple_cDataqueue_sendTimeout( p_that, data, timeout ) \
	  (p_that)->cDataqueue->VMT->sendTimeout__T( \
	   (p_that)->cDataqueue, (data), (timeout) )
#define tSimple_cDataqueue_sendForce( p_that, data ) \
	  (p_that)->cDataqueue->VMT->sendForce__T( \
	   (p_that)->cDataqueue, (data) )
#define tSimple_cDataqueue_receive( p_that, p_data ) \
	  (p_that)->cDataqueue->VMT->receive__T( \
	   (p_that)->cDataqueue, (p_data) )
#define tSimple_cDataqueue_receivePolling( p_that, p_data ) \
	  (p_that)->cDataqueue->VMT->receivePolling__T( \
	   (p_that)->cDataqueue, (p_data) )
#define tSimple_cDataqueue_receiveTimeout( p_that, p_data, timeout ) \
	  (p_that)->cDataqueue->VMT->receiveTimeout__T( \
	   (p_that)->cDataqueue, (p_data), (timeout) )
#define tSimple_cDataqueue_initialize( p_that ) \
	  (p_that)->cDataqueue->VMT->initialize__T( \
	   (p_that)->cDataqueue )
#define tSimple_cDataqueue_refer( p_that, pk_dataqueue_status ) \
	  (p_that)->cDataqueue->VMT->refer__T( \
	   (p_that)->cDataqueue, (pk_dataqueue_status) )
#define tSimple_cCall_giftToYou_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tSimple_cCall_giftToYou_buf_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )
#define tSimple_cCall_returnGiftFromYou_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tSimple_cCall_returnGiftFromYou_buf_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eBody */
void           tSimple_eBody_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tSimple_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSimple_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSimple_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSimple_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_sayHello( times ) \
          ((void)p_cellcb, tSimple_cCall_sayHello( p_cellcb, times ))
#define cCall_howAreYou( buf, len ) \
          ((void)p_cellcb, tSimple_cCall_howAreYou( p_cellcb, buf, len ))
#define cCall_giftToYou( buf, len ) \
          ((void)p_cellcb, tSimple_cCall_giftToYou( p_cellcb, buf, len ))
#define cCall_returnGiftFromYou( buf, len ) \
          ((void)p_cellcb, tSimple_cCall_returnGiftFromYou( p_cellcb, buf, len ))
#define cCall_oneway( buf, len ) \
          ((void)p_cellcb, tSimple_cCall_oneway( p_cellcb, buf, len ))
#define cCall_shutdown( ) \
          ((void)p_cellcb, tSimple_cCall_shutdown( p_cellcb ))
#define cDataqueue_send( data ) \
          tSimple_cDataqueue_send( p_cellcb, data )
#define cDataqueue_sendPolling( data ) \
          tSimple_cDataqueue_sendPolling( p_cellcb, data )
#define cDataqueue_sendTimeout( data, timeout ) \
          tSimple_cDataqueue_sendTimeout( p_cellcb, data, timeout )
#define cDataqueue_sendForce( data ) \
          tSimple_cDataqueue_sendForce( p_cellcb, data )
#define cDataqueue_receive( p_data ) \
          tSimple_cDataqueue_receive( p_cellcb, p_data )
#define cDataqueue_receivePolling( p_data ) \
          tSimple_cDataqueue_receivePolling( p_cellcb, p_data )
#define cDataqueue_receiveTimeout( p_data, timeout ) \
          tSimple_cDataqueue_receiveTimeout( p_cellcb, p_data, timeout )
#define cDataqueue_initialize( ) \
          tSimple_cDataqueue_initialize( p_cellcb )
#define cDataqueue_refer( pk_dataqueue_status ) \
          tSimple_cDataqueue_refer( p_cellcb, pk_dataqueue_status )
#define cCall_giftToYou_buf_alloc( size, p ) \
          ((void)p_cellcb, tSimple_cCall_giftToYou_buf_alloc( p_cellcb, size, p ))
#define cCall_giftToYou_buf_dealloc( ptr ) \
          ((void)p_cellcb, tSimple_cCall_giftToYou_buf_dealloc( p_cellcb, ptr ))
#define cCall_returnGiftFromYou_buf_alloc( size, p ) \
          ((void)p_cellcb, tSimple_cCall_returnGiftFromYou_buf_alloc( p_cellcb, size, p ))
#define cCall_returnGiftFromYou_buf_dealloc( ptr ) \
          ((void)p_cellcb, tSimple_cCall_returnGiftFromYou_buf_dealloc( p_cellcb, ptr ))



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cDataqueue_joined()\
		tSimple_is_cDataqueue_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tSimple_eBody_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSimple_N_CELL; (i)++ ){ \
       //(p_cb) = &tSimple_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define CCALL_GIFTTOYOU_BUF_DEALLOC(buf) \
	  cCall_giftToYou_buf_dealloc( (buf) ); 
#define CCALL_RETURNGIFTFROMYOU_BUF_DEALLOC(buf) \
	  cCall_returnGiftFromYou_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define CCALL_GIFTTOYOU_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall_giftToYou_buf_dealloc( (buf) );  \
	  }
#define CCALL_RETURNGIFTFROMYOU_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall_returnGiftFromYou_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSimple_TECSGENH */
