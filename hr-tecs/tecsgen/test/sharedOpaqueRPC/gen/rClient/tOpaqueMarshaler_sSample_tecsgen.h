/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tOpaqueMarshaler_sSample_TECSGEN_H
#define tOpaqueMarshaler_sSample_TECSGEN_H

/*
 * celltype          :  tOpaqueMarshaler_sSample
 * global name       :  tOpaqueMarshaler_sSample
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
#include "sSample_tecsgen.h"
#include "sTDR_tecsgen.h"
#include "sSemaphore_tecsgen.h"
#include "sRPCErrorHandler_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tOpaqueMarshaler_sSample_INIB {
    /* call port #_TCP_# */
    struct tag_sSemaphore_VDES const*cLockChannel;
    /* call port #_NEP_# */ 
}  tOpaqueMarshaler_sSample_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tOpaqueMarshaler_sSample_CB_tab           tOpaqueMarshaler_sSample_INIB_tab
#define tOpaqueMarshaler_sSample_SINGLE_CELL_CB   tOpaqueMarshaler_sSample_SINGLE_CELL_INIB
#define tOpaqueMarshaler_sSample_CB               tOpaqueMarshaler_sSample_INIB
#define tag_tOpaqueMarshaler_sSample_CB           tag_tOpaqueMarshaler_sSample_INIB

extern tOpaqueMarshaler_sSample_CB  tOpaqueMarshaler_sSample_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tOpaqueMarshaler_sSample_INIB *tOpaqueMarshaler_sSample_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSample */
void         tOpaqueMarshaler_sSample_eClientEntry_func(tOpaqueMarshaler_sSample_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tOpaqueMarshaler_sSample_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTDR_tecsgen.h"
#include "tRPCSharedChannelMan_tecsgen.h"
#ifdef  tOpaqueMarshaler_sSample_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tOpaqueMarshaler_sSample_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tOpaqueMarshaler_sSample_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tOpaqueMarshaler_sSample_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tOpaqueMarshaler_sSample_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tOpaqueMarshaler_sSample_is_cLockChannel_joined(p_that) \
	  (1)
#define tOpaqueMarshaler_sSample_is_cErrorHandler_joined(p_that) \
	  (0)    /* not joined */

/* セルCBを得るマクロ #_GCB_# */
#define tOpaqueMarshaler_sSample_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tOpaqueMarshaler_sSample_cTDR_reset( p_that ) \
	  tTDR_eTDR_reset( \
	   &tTDR_CB_tab[0] )
#define tOpaqueMarshaler_sSample_cTDR_sendSOP( p_that, b_client ) \
	  tTDR_eTDR_sendSOP( \
	   &tTDR_CB_tab[0], (b_client) )
#define tOpaqueMarshaler_sSample_cTDR_receiveSOP( p_that, b_client ) \
	  tTDR_eTDR_receiveSOP( \
	   &tTDR_CB_tab[0], (b_client) )
#define tOpaqueMarshaler_sSample_cTDR_sendEOP( p_that, b_continue ) \
	  tTDR_eTDR_sendEOP( \
	   &tTDR_CB_tab[0], (b_continue) )
#define tOpaqueMarshaler_sSample_cTDR_receiveEOP( p_that, b_continue ) \
	  tTDR_eTDR_receiveEOP( \
	   &tTDR_CB_tab[0], (b_continue) )
#define tOpaqueMarshaler_sSample_cTDR_putInt8( p_that, in ) \
	  tTDR_eTDR_putInt8( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_putInt16( p_that, in ) \
	  tTDR_eTDR_putInt16( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_putInt32( p_that, in ) \
	  tTDR_eTDR_putInt32( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_putInt64( p_that, in ) \
	  tTDR_eTDR_putInt64( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_putInt128( p_that, in ) \
	  tTDR_eTDR_putInt128( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_getInt8( p_that, out ) \
	  tTDR_eTDR_getInt8( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_getInt16( p_that, out ) \
	  tTDR_eTDR_getInt16( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_getInt32( p_that, out ) \
	  tTDR_eTDR_getInt32( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_getInt64( p_that, out ) \
	  tTDR_eTDR_getInt64( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_getInt128( p_that, out ) \
	  tTDR_eTDR_getInt128( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_putUInt8( p_that, in ) \
	  tTDR_eTDR_putUInt8( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_putUInt16( p_that, in ) \
	  tTDR_eTDR_putUInt16( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_putUInt32( p_that, in ) \
	  tTDR_eTDR_putUInt32( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_putUInt64( p_that, in ) \
	  tTDR_eTDR_putUInt64( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_putUInt128( p_that, in ) \
	  tTDR_eTDR_putUInt128( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_getUInt8( p_that, out ) \
	  tTDR_eTDR_getUInt8( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_getUInt16( p_that, out ) \
	  tTDR_eTDR_getUInt16( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_getUInt32( p_that, out ) \
	  tTDR_eTDR_getUInt32( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_getUInt64( p_that, out ) \
	  tTDR_eTDR_getUInt64( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_getUInt128( p_that, out ) \
	  tTDR_eTDR_getUInt128( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_putChar( p_that, in ) \
	  tTDR_eTDR_putChar( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_getChar( p_that, out ) \
	  tTDR_eTDR_getChar( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_putBool( p_that, in ) \
	  tTDR_eTDR_putBool( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_getBool( p_that, out ) \
	  tTDR_eTDR_getBool( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_putFloat32( p_that, in ) \
	  tTDR_eTDR_putFloat32( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_putDouble64( p_that, in ) \
	  tTDR_eTDR_putDouble64( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_getFloat32( p_that, out ) \
	  tTDR_eTDR_getFloat32( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_getDouble64( p_that, out ) \
	  tTDR_eTDR_getDouble64( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_putSChar( p_that, in ) \
	  tTDR_eTDR_putSChar( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_putShort( p_that, in ) \
	  tTDR_eTDR_putShort( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_putInt( p_that, in ) \
	  tTDR_eTDR_putInt( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_putLong( p_that, in ) \
	  tTDR_eTDR_putLong( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_getSChar( p_that, out ) \
	  tTDR_eTDR_getSChar( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_getShort( p_that, out ) \
	  tTDR_eTDR_getShort( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_getInt( p_that, out ) \
	  tTDR_eTDR_getInt( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_getLong( p_that, out ) \
	  tTDR_eTDR_getLong( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_putUChar( p_that, in ) \
	  tTDR_eTDR_putUChar( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_putUShort( p_that, in ) \
	  tTDR_eTDR_putUShort( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_putUInt( p_that, in ) \
	  tTDR_eTDR_putUInt( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_putULong( p_that, in ) \
	  tTDR_eTDR_putULong( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSample_cTDR_getUChar( p_that, out ) \
	  tTDR_eTDR_getUChar( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_getUShort( p_that, out ) \
	  tTDR_eTDR_getUShort( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_getUInt( p_that, out ) \
	  tTDR_eTDR_getUInt( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_getULong( p_that, out ) \
	  tTDR_eTDR_getULong( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSample_cTDR_putIntptr( p_that, ptr ) \
	  tTDR_eTDR_putIntptr( \
	   &tTDR_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSample_cTDR_getIntptr( p_that, ptr ) \
	  tTDR_eTDR_getIntptr( \
	   &tTDR_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSample_cLockChannel_signal( p_that ) \
	  tRPCSharedChannelMan_eSemaphore_signal_skel( \
	   (p_that)->cLockChannel )
#define tOpaqueMarshaler_sSample_cLockChannel_wait( p_that ) \
	  tRPCSharedChannelMan_eSemaphore_wait_skel( \
	   (p_that)->cLockChannel )
#define tOpaqueMarshaler_sSample_cLockChannel_waitPolling( p_that ) \
	  tRPCSharedChannelMan_eSemaphore_waitPolling_skel( \
	   (p_that)->cLockChannel )
#define tOpaqueMarshaler_sSample_cLockChannel_waitTimeout( p_that, timeout ) \
	  tRPCSharedChannelMan_eSemaphore_waitTimeout_skel( \
	   (p_that)->cLockChannel, (timeout) )
#define tOpaqueMarshaler_sSample_cLockChannel_initialize( p_that ) \
	  tRPCSharedChannelMan_eSemaphore_initialize_skel( \
	   (p_that)->cLockChannel )
#define tOpaqueMarshaler_sSample_cLockChannel_refer( p_that, pk_semaphore_status ) \
	  tRPCSharedChannelMan_eSemaphore_refer_skel( \
	   (p_that)->cLockChannel, (pk_semaphore_status) )
#define tOpaqueMarshaler_sSample_cErrorHandler_errorOccured( p_that, func_id, er, state ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */

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
#define VALID_IDX(IDX)  tOpaqueMarshaler_sSample_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tOpaqueMarshaler_sSample_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tOpaqueMarshaler_sSample_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tOpaqueMarshaler_sSample_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTDR_reset( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_reset( p_cellcb ))
#define cTDR_sendSOP( b_client ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_sendSOP( p_cellcb, b_client ))
#define cTDR_receiveSOP( b_client ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_receiveSOP( p_cellcb, b_client ))
#define cTDR_sendEOP( b_continue ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_sendEOP( p_cellcb, b_continue ))
#define cTDR_receiveEOP( b_continue ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_receiveEOP( p_cellcb, b_continue ))
#define cTDR_putInt8( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putInt8( p_cellcb, in ))
#define cTDR_putInt16( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putInt16( p_cellcb, in ))
#define cTDR_putInt32( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putInt32( p_cellcb, in ))
#define cTDR_putInt64( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putInt64( p_cellcb, in ))
#define cTDR_putInt128( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putInt128( p_cellcb, in ))
#define cTDR_getInt8( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getInt8( p_cellcb, out ))
#define cTDR_getInt16( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getInt16( p_cellcb, out ))
#define cTDR_getInt32( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getInt32( p_cellcb, out ))
#define cTDR_getInt64( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getInt64( p_cellcb, out ))
#define cTDR_getInt128( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getInt128( p_cellcb, out ))
#define cTDR_putUInt8( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putUInt8( p_cellcb, in ))
#define cTDR_putUInt16( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putUInt16( p_cellcb, in ))
#define cTDR_putUInt32( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putUInt32( p_cellcb, in ))
#define cTDR_putUInt64( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putUInt64( p_cellcb, in ))
#define cTDR_putUInt128( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putUInt128( p_cellcb, in ))
#define cTDR_getUInt8( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getUInt8( p_cellcb, out ))
#define cTDR_getUInt16( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getUInt16( p_cellcb, out ))
#define cTDR_getUInt32( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getUInt32( p_cellcb, out ))
#define cTDR_getUInt64( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getUInt64( p_cellcb, out ))
#define cTDR_getUInt128( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getUInt128( p_cellcb, out ))
#define cTDR_putChar( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putChar( p_cellcb, in ))
#define cTDR_getChar( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getChar( p_cellcb, out ))
#define cTDR_putBool( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putBool( p_cellcb, in ))
#define cTDR_getBool( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getBool( p_cellcb, out ))
#define cTDR_putFloat32( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putFloat32( p_cellcb, in ))
#define cTDR_putDouble64( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putDouble64( p_cellcb, in ))
#define cTDR_getFloat32( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getFloat32( p_cellcb, out ))
#define cTDR_getDouble64( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getDouble64( p_cellcb, out ))
#define cTDR_putSChar( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putSChar( p_cellcb, in ))
#define cTDR_putShort( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putShort( p_cellcb, in ))
#define cTDR_putInt( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putInt( p_cellcb, in ))
#define cTDR_putLong( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putLong( p_cellcb, in ))
#define cTDR_getSChar( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getSChar( p_cellcb, out ))
#define cTDR_getShort( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getShort( p_cellcb, out ))
#define cTDR_getInt( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getInt( p_cellcb, out ))
#define cTDR_getLong( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getLong( p_cellcb, out ))
#define cTDR_putUChar( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putUChar( p_cellcb, in ))
#define cTDR_putUShort( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putUShort( p_cellcb, in ))
#define cTDR_putUInt( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putUInt( p_cellcb, in ))
#define cTDR_putULong( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putULong( p_cellcb, in ))
#define cTDR_getUChar( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getUChar( p_cellcb, out ))
#define cTDR_getUShort( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getUShort( p_cellcb, out ))
#define cTDR_getUInt( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getUInt( p_cellcb, out ))
#define cTDR_getULong( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getULong( p_cellcb, out ))
#define cTDR_putIntptr( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_putIntptr( p_cellcb, ptr ))
#define cTDR_getIntptr( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cTDR_getIntptr( p_cellcb, ptr ))
#define cLockChannel_signal( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cLockChannel_signal( p_cellcb ))
#define cLockChannel_wait( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cLockChannel_wait( p_cellcb ))
#define cLockChannel_waitPolling( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cLockChannel_waitPolling( p_cellcb ))
#define cLockChannel_waitTimeout( timeout ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cLockChannel_waitTimeout( p_cellcb, timeout ))
#define cLockChannel_initialize( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cLockChannel_initialize( p_cellcb ))
#define cLockChannel_refer( pk_semaphore_status ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cLockChannel_refer( p_cellcb, pk_semaphore_status ))
#define cErrorHandler_errorOccured( func_id, er, state ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSample_cErrorHandler_errorOccured( p_cellcb, func_id, er, state ))



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cLockChannel_joined()\
		tOpaqueMarshaler_sSample_is_cLockChannel_joined(p_cellcb)
#define is_cErrorHandler_joined()\
		tOpaqueMarshaler_sSample_is_cErrorHandler_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eClientEntry_func tOpaqueMarshaler_sSample_eClientEntry_func

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tOpaqueMarshaler_sSample_N_CELL; (i)++ ){ \
       //(p_cb) = &tOpaqueMarshaler_sSample_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tOpaqueMarshaler_sSample_TECSGENH */
