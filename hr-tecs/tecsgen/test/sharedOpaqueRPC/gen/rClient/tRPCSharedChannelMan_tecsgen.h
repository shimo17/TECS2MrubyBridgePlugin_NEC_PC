/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tRPCSharedChannelMan_TECSGEN_H
#define tRPCSharedChannelMan_TECSGEN_H

/*
 * celltype          :  tRPCSharedChannelMan
 * global name       :  tRPCSharedChannelMan
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
#include "sSemaphore_tecsgen.h"
#include "sTDR_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tRPCSharedChannelMan_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    int_t n_eSemaphore;
}  tRPCSharedChannelMan_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tRPCSharedChannelMan_CB_tab           tRPCSharedChannelMan_INIB_tab
#define tRPCSharedChannelMan_SINGLE_CELL_CB   tRPCSharedChannelMan_SINGLE_CELL_INIB
#define tRPCSharedChannelMan_CB               tRPCSharedChannelMan_INIB
#define tag_tRPCSharedChannelMan_CB           tag_tRPCSharedChannelMan_INIB

extern tRPCSharedChannelMan_CB  tRPCSharedChannelMan_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tRPCSharedChannelMan_INIB *tRPCSharedChannelMan_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSemaphore */
ER           tRPCSharedChannelMan_eSemaphore_signal(tRPCSharedChannelMan_IDX idx, int_t subscript);
ER           tRPCSharedChannelMan_eSemaphore_wait(tRPCSharedChannelMan_IDX idx, int_t subscript);
ER           tRPCSharedChannelMan_eSemaphore_waitPolling(tRPCSharedChannelMan_IDX idx, int_t subscript);
ER           tRPCSharedChannelMan_eSemaphore_waitTimeout(tRPCSharedChannelMan_IDX idx, int_t subscript, TMO timeout);
ER           tRPCSharedChannelMan_eSemaphore_initialize(tRPCSharedChannelMan_IDX idx, int_t subscript);
ER           tRPCSharedChannelMan_eSemaphore_refer(tRPCSharedChannelMan_IDX idx, int_t subscript, T_RSEM* pk_semaphore_status);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tRPCSharedChannelMan_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSemaphore_tecsgen.h"
#include "tTDR_tecsgen.h"
#ifdef  tRPCSharedChannelMan_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tRPCSharedChannelMan_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tRPCSharedChannelMan_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tRPCSharedChannelMan_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tRPCSharedChannelMan_VALID_IDX(IDX) (1)

/* 受け口配列の大きさを得るマクロ #_NEPA_# */
#define NEP_eSemaphore           ((p_cellcb)->n_eSemaphore)

/* セルCBを得るマクロ #_GCB_# */
#define tRPCSharedChannelMan_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tRPCSharedChannelMan_cSemaphore_signal( p_that ) \
	  tSemaphore_eSemaphore_signal( \
	   &tSemaphore_CB_tab[0] )
#define tRPCSharedChannelMan_cSemaphore_wait( p_that ) \
	  tSemaphore_eSemaphore_wait( \
	   &tSemaphore_CB_tab[0] )
#define tRPCSharedChannelMan_cSemaphore_waitPolling( p_that ) \
	  tSemaphore_eSemaphore_waitPolling( \
	   &tSemaphore_CB_tab[0] )
#define tRPCSharedChannelMan_cSemaphore_waitTimeout( p_that, timeout ) \
	  tSemaphore_eSemaphore_waitTimeout( \
	   &tSemaphore_CB_tab[0], (timeout) )
#define tRPCSharedChannelMan_cSemaphore_initialize( p_that ) \
	  tSemaphore_eSemaphore_initialize( \
	   &tSemaphore_CB_tab[0] )
#define tRPCSharedChannelMan_cSemaphore_refer( p_that, pk_semaphore_status ) \
	  tSemaphore_eSemaphore_refer( \
	   &tSemaphore_CB_tab[0], (pk_semaphore_status) )
#define tRPCSharedChannelMan_cClientSideTDR_reset( p_that ) \
	  tTDR_eTDR_reset( \
	   &tTDR_CB_tab[0] )
#define tRPCSharedChannelMan_cClientSideTDR_sendSOP( p_that, b_client ) \
	  tTDR_eTDR_sendSOP( \
	   &tTDR_CB_tab[0], (b_client) )
#define tRPCSharedChannelMan_cClientSideTDR_receiveSOP( p_that, b_client ) \
	  tTDR_eTDR_receiveSOP( \
	   &tTDR_CB_tab[0], (b_client) )
#define tRPCSharedChannelMan_cClientSideTDR_sendEOP( p_that, b_continue ) \
	  tTDR_eTDR_sendEOP( \
	   &tTDR_CB_tab[0], (b_continue) )
#define tRPCSharedChannelMan_cClientSideTDR_receiveEOP( p_that, b_continue ) \
	  tTDR_eTDR_receiveEOP( \
	   &tTDR_CB_tab[0], (b_continue) )
#define tRPCSharedChannelMan_cClientSideTDR_putInt8( p_that, in ) \
	  tTDR_eTDR_putInt8( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_putInt16( p_that, in ) \
	  tTDR_eTDR_putInt16( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_putInt32( p_that, in ) \
	  tTDR_eTDR_putInt32( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_putInt64( p_that, in ) \
	  tTDR_eTDR_putInt64( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_putInt128( p_that, in ) \
	  tTDR_eTDR_putInt128( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_getInt8( p_that, out ) \
	  tTDR_eTDR_getInt8( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_getInt16( p_that, out ) \
	  tTDR_eTDR_getInt16( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_getInt32( p_that, out ) \
	  tTDR_eTDR_getInt32( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_getInt64( p_that, out ) \
	  tTDR_eTDR_getInt64( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_getInt128( p_that, out ) \
	  tTDR_eTDR_getInt128( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_putUInt8( p_that, in ) \
	  tTDR_eTDR_putUInt8( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_putUInt16( p_that, in ) \
	  tTDR_eTDR_putUInt16( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_putUInt32( p_that, in ) \
	  tTDR_eTDR_putUInt32( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_putUInt64( p_that, in ) \
	  tTDR_eTDR_putUInt64( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_putUInt128( p_that, in ) \
	  tTDR_eTDR_putUInt128( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_getUInt8( p_that, out ) \
	  tTDR_eTDR_getUInt8( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_getUInt16( p_that, out ) \
	  tTDR_eTDR_getUInt16( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_getUInt32( p_that, out ) \
	  tTDR_eTDR_getUInt32( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_getUInt64( p_that, out ) \
	  tTDR_eTDR_getUInt64( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_getUInt128( p_that, out ) \
	  tTDR_eTDR_getUInt128( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_putChar( p_that, in ) \
	  tTDR_eTDR_putChar( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_getChar( p_that, out ) \
	  tTDR_eTDR_getChar( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_putBool( p_that, in ) \
	  tTDR_eTDR_putBool( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_getBool( p_that, out ) \
	  tTDR_eTDR_getBool( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_putFloat32( p_that, in ) \
	  tTDR_eTDR_putFloat32( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_putDouble64( p_that, in ) \
	  tTDR_eTDR_putDouble64( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_getFloat32( p_that, out ) \
	  tTDR_eTDR_getFloat32( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_getDouble64( p_that, out ) \
	  tTDR_eTDR_getDouble64( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_putSChar( p_that, in ) \
	  tTDR_eTDR_putSChar( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_putShort( p_that, in ) \
	  tTDR_eTDR_putShort( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_putInt( p_that, in ) \
	  tTDR_eTDR_putInt( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_putLong( p_that, in ) \
	  tTDR_eTDR_putLong( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_getSChar( p_that, out ) \
	  tTDR_eTDR_getSChar( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_getShort( p_that, out ) \
	  tTDR_eTDR_getShort( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_getInt( p_that, out ) \
	  tTDR_eTDR_getInt( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_getLong( p_that, out ) \
	  tTDR_eTDR_getLong( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_putUChar( p_that, in ) \
	  tTDR_eTDR_putUChar( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_putUShort( p_that, in ) \
	  tTDR_eTDR_putUShort( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_putUInt( p_that, in ) \
	  tTDR_eTDR_putUInt( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_putULong( p_that, in ) \
	  tTDR_eTDR_putULong( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedChannelMan_cClientSideTDR_getUChar( p_that, out ) \
	  tTDR_eTDR_getUChar( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_getUShort( p_that, out ) \
	  tTDR_eTDR_getUShort( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_getUInt( p_that, out ) \
	  tTDR_eTDR_getUInt( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_getULong( p_that, out ) \
	  tTDR_eTDR_getULong( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedChannelMan_cClientSideTDR_putIntptr( p_that, ptr ) \
	  tTDR_eTDR_putIntptr( \
	   &tTDR_CB_tab[0], (ptr) )
#define tRPCSharedChannelMan_cClientSideTDR_getIntptr( p_that, ptr ) \
	  tTDR_eTDR_getIntptr( \
	   &tTDR_CB_tab[0], (ptr) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eSemaphore */
ER             tRPCSharedChannelMan_eSemaphore_signal_skel( const struct tag_sSemaphore_VDES *epd);
ER             tRPCSharedChannelMan_eSemaphore_wait_skel( const struct tag_sSemaphore_VDES *epd);
ER             tRPCSharedChannelMan_eSemaphore_waitPolling_skel( const struct tag_sSemaphore_VDES *epd);
ER             tRPCSharedChannelMan_eSemaphore_waitTimeout_skel( const struct tag_sSemaphore_VDES *epd, TMO timeout);
ER             tRPCSharedChannelMan_eSemaphore_initialize_skel( const struct tag_sSemaphore_VDES *epd);
ER             tRPCSharedChannelMan_eSemaphore_refer_skel( const struct tag_sSemaphore_VDES *epd, T_RSEM* pk_semaphore_status);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tRPCSharedChannelMan_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tRPCSharedChannelMan_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tRPCSharedChannelMan_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tRPCSharedChannelMan_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cSemaphore_signal( ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cSemaphore_signal( p_cellcb ))
#define cSemaphore_wait( ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cSemaphore_wait( p_cellcb ))
#define cSemaphore_waitPolling( ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cSemaphore_waitPolling( p_cellcb ))
#define cSemaphore_waitTimeout( timeout ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cSemaphore_waitTimeout( p_cellcb, timeout ))
#define cSemaphore_initialize( ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cSemaphore_initialize( p_cellcb ))
#define cSemaphore_refer( pk_semaphore_status ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cSemaphore_refer( p_cellcb, pk_semaphore_status ))
#define cClientSideTDR_reset( ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_reset( p_cellcb ))
#define cClientSideTDR_sendSOP( b_client ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_sendSOP( p_cellcb, b_client ))
#define cClientSideTDR_receiveSOP( b_client ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_receiveSOP( p_cellcb, b_client ))
#define cClientSideTDR_sendEOP( b_continue ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_sendEOP( p_cellcb, b_continue ))
#define cClientSideTDR_receiveEOP( b_continue ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_receiveEOP( p_cellcb, b_continue ))
#define cClientSideTDR_putInt8( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putInt8( p_cellcb, in ))
#define cClientSideTDR_putInt16( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putInt16( p_cellcb, in ))
#define cClientSideTDR_putInt32( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putInt32( p_cellcb, in ))
#define cClientSideTDR_putInt64( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putInt64( p_cellcb, in ))
#define cClientSideTDR_putInt128( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putInt128( p_cellcb, in ))
#define cClientSideTDR_getInt8( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getInt8( p_cellcb, out ))
#define cClientSideTDR_getInt16( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getInt16( p_cellcb, out ))
#define cClientSideTDR_getInt32( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getInt32( p_cellcb, out ))
#define cClientSideTDR_getInt64( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getInt64( p_cellcb, out ))
#define cClientSideTDR_getInt128( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getInt128( p_cellcb, out ))
#define cClientSideTDR_putUInt8( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putUInt8( p_cellcb, in ))
#define cClientSideTDR_putUInt16( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putUInt16( p_cellcb, in ))
#define cClientSideTDR_putUInt32( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putUInt32( p_cellcb, in ))
#define cClientSideTDR_putUInt64( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putUInt64( p_cellcb, in ))
#define cClientSideTDR_putUInt128( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putUInt128( p_cellcb, in ))
#define cClientSideTDR_getUInt8( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getUInt8( p_cellcb, out ))
#define cClientSideTDR_getUInt16( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getUInt16( p_cellcb, out ))
#define cClientSideTDR_getUInt32( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getUInt32( p_cellcb, out ))
#define cClientSideTDR_getUInt64( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getUInt64( p_cellcb, out ))
#define cClientSideTDR_getUInt128( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getUInt128( p_cellcb, out ))
#define cClientSideTDR_putChar( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putChar( p_cellcb, in ))
#define cClientSideTDR_getChar( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getChar( p_cellcb, out ))
#define cClientSideTDR_putBool( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putBool( p_cellcb, in ))
#define cClientSideTDR_getBool( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getBool( p_cellcb, out ))
#define cClientSideTDR_putFloat32( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putFloat32( p_cellcb, in ))
#define cClientSideTDR_putDouble64( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putDouble64( p_cellcb, in ))
#define cClientSideTDR_getFloat32( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getFloat32( p_cellcb, out ))
#define cClientSideTDR_getDouble64( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getDouble64( p_cellcb, out ))
#define cClientSideTDR_putSChar( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putSChar( p_cellcb, in ))
#define cClientSideTDR_putShort( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putShort( p_cellcb, in ))
#define cClientSideTDR_putInt( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putInt( p_cellcb, in ))
#define cClientSideTDR_putLong( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putLong( p_cellcb, in ))
#define cClientSideTDR_getSChar( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getSChar( p_cellcb, out ))
#define cClientSideTDR_getShort( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getShort( p_cellcb, out ))
#define cClientSideTDR_getInt( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getInt( p_cellcb, out ))
#define cClientSideTDR_getLong( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getLong( p_cellcb, out ))
#define cClientSideTDR_putUChar( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putUChar( p_cellcb, in ))
#define cClientSideTDR_putUShort( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putUShort( p_cellcb, in ))
#define cClientSideTDR_putUInt( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putUInt( p_cellcb, in ))
#define cClientSideTDR_putULong( in ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putULong( p_cellcb, in ))
#define cClientSideTDR_getUChar( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getUChar( p_cellcb, out ))
#define cClientSideTDR_getUShort( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getUShort( p_cellcb, out ))
#define cClientSideTDR_getUInt( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getUInt( p_cellcb, out ))
#define cClientSideTDR_getULong( out ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getULong( p_cellcb, out ))
#define cClientSideTDR_putIntptr( ptr ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_putIntptr( p_cellcb, ptr ))
#define cClientSideTDR_getIntptr( ptr ) \
          ((void)p_cellcb, tRPCSharedChannelMan_cClientSideTDR_getIntptr( p_cellcb, ptr ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSemaphore_signal tRPCSharedChannelMan_eSemaphore_signal
#define eSemaphore_wait  tRPCSharedChannelMan_eSemaphore_wait
#define eSemaphore_waitPolling tRPCSharedChannelMan_eSemaphore_waitPolling
#define eSemaphore_waitTimeout tRPCSharedChannelMan_eSemaphore_waitTimeout
#define eSemaphore_initialize tRPCSharedChannelMan_eSemaphore_initialize
#define eSemaphore_refer tRPCSharedChannelMan_eSemaphore_refer

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tRPCSharedChannelMan_N_CELL; (i)++ ){ \
       //(p_cb) = &tRPCSharedChannelMan_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tRPCSharedChannelMan_TECSGENH */
