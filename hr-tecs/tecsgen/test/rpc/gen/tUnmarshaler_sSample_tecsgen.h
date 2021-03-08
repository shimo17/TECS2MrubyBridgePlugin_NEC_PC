/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tUnmarshaler_sSample_TECSGEN_H
#define tUnmarshaler_sSample_TECSGEN_H

/*
 * celltype          :  tUnmarshaler_sSample
 * global name       :  tUnmarshaler_sSample
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSample_tecsgen.h"
#include "sTDR_tecsgen.h"
#include "sEventflag_tecsgen.h"
#include "sUnmarshalerMain_tecsgen.h"
#include "sPPAllocator_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tUnmarshaler_sSample_CB {
    int  dummy;
} tUnmarshaler_sSample_CB;
extern tUnmarshaler_sSample_CB  tUnmarshaler_sSample_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tUnmarshaler_sSample_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sUnmarshalerMain */
ER           tUnmarshaler_sSample_eUnmarshalAndCallFunction_main(tUnmarshaler_sSample_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tUnmarshaler_sSample_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTracePlugin_sSample_tecsgen.h"
#include "tTDR_tecsgen.h"
#include "tEventflag_tecsgen.h"
#include "tPPAllocator_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tUnmarshaler_sSample_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tUnmarshaler_sSample_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tUnmarshaler_sSample_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tUnmarshaler_sSample_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tUnmarshaler_sSample_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tUnmarshaler_sSample_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tUnmarshaler_sSample_cServerCall_sayHello( p_that, times ) \
	  tTracePlugin_sSample_eThroughEntry_sayHello( \
	   &tTracePlugin_sSample_CB_tab[0], (times) )
#define tUnmarshaler_sSample_cServerCall_howAreYou( p_that, buf, len ) \
	  tTracePlugin_sSample_eThroughEntry_howAreYou( \
	   &tTracePlugin_sSample_CB_tab[0], (buf), (len) )
#define tUnmarshaler_sSample_cServerCall_giftToYou( p_that, buf, len ) \
	  tTracePlugin_sSample_eThroughEntry_giftToYou( \
	   &tTracePlugin_sSample_CB_tab[0], (buf), (len) )
#define tUnmarshaler_sSample_cServerCall_returnGiftFromYou( p_that, buf, len ) \
	  tTracePlugin_sSample_eThroughEntry_returnGiftFromYou( \
	   &tTracePlugin_sSample_CB_tab[0], (buf), (len) )
#define tUnmarshaler_sSample_cServerCall_transferStruct( p_that, a, len ) \
	  tTracePlugin_sSample_eThroughEntry_transferStruct( \
	   &tTracePlugin_sSample_CB_tab[0], (a), (len) )
#define tUnmarshaler_sSample_cServerCall_transferStruct2( p_that, a ) \
	  tTracePlugin_sSample_eThroughEntry_transferStruct2( \
	   &tTracePlugin_sSample_CB_tab[0], (a) )
#define tUnmarshaler_sSample_cServerCall_transferInArray( p_that, array0 ) \
	  tTracePlugin_sSample_eThroughEntry_transferInArray( \
	   &tTracePlugin_sSample_CB_tab[0], (array0) )
#define tUnmarshaler_sSample_cServerCall_transferInArray2( p_that, array1 ) \
	  tTracePlugin_sSample_eThroughEntry_transferInArray2( \
	   &tTracePlugin_sSample_CB_tab[0], (array1) )
#define tUnmarshaler_sSample_cServerCall_transferOutArray( p_that, array2 ) \
	  tTracePlugin_sSample_eThroughEntry_transferOutArray( \
	   &tTracePlugin_sSample_CB_tab[0], (array2) )
#define tUnmarshaler_sSample_cServerCall_UnsignedTypes( p_that, in, s, ui, ul ) \
	  tTracePlugin_sSample_eThroughEntry_UnsignedTypes( \
	   &tTracePlugin_sSample_CB_tab[0], (in), (s), (ui), (ul) )
#define tUnmarshaler_sSample_cServerCall_SignedTypes( p_that, in, s, ui, ul ) \
	  tTracePlugin_sSample_eThroughEntry_SignedTypes( \
	   &tTracePlugin_sSample_CB_tab[0], (in), (s), (ui), (ul) )
#define tUnmarshaler_sSample_cServerCall_onewayFunc( p_that, buf, len ) \
	  tTracePlugin_sSample_eThroughEntry_onewayFunc( \
	   &tTracePlugin_sSample_CB_tab[0], (buf), (len) )
#define tUnmarshaler_sSample_cServerCall_exit( p_that ) \
	  tTracePlugin_sSample_eThroughEntry_exit( \
	   &tTracePlugin_sSample_CB_tab[0] )
#define tUnmarshaler_sSample_cTDR_reset( p_that ) \
	  tTDR_eTDR_reset( \
	   &tTDR_CB_tab[1] )
#define tUnmarshaler_sSample_cTDR_sendSOP( p_that, b_client ) \
	  tTDR_eTDR_sendSOP( \
	   &tTDR_CB_tab[1], (b_client) )
#define tUnmarshaler_sSample_cTDR_receiveSOP( p_that, b_client ) \
	  tTDR_eTDR_receiveSOP( \
	   &tTDR_CB_tab[1], (b_client) )
#define tUnmarshaler_sSample_cTDR_sendEOP( p_that, b_continue ) \
	  tTDR_eTDR_sendEOP( \
	   &tTDR_CB_tab[1], (b_continue) )
#define tUnmarshaler_sSample_cTDR_receiveEOP( p_that, b_continue ) \
	  tTDR_eTDR_receiveEOP( \
	   &tTDR_CB_tab[1], (b_continue) )
#define tUnmarshaler_sSample_cTDR_putInt8( p_that, in ) \
	  tTDR_eTDR_putInt8( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_putInt16( p_that, in ) \
	  tTDR_eTDR_putInt16( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_putInt32( p_that, in ) \
	  tTDR_eTDR_putInt32( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_putInt64( p_that, in ) \
	  tTDR_eTDR_putInt64( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_putInt128( p_that, in ) \
	  tTDR_eTDR_putInt128( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_getInt8( p_that, out ) \
	  tTDR_eTDR_getInt8( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_getInt16( p_that, out ) \
	  tTDR_eTDR_getInt16( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_getInt32( p_that, out ) \
	  tTDR_eTDR_getInt32( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_getInt64( p_that, out ) \
	  tTDR_eTDR_getInt64( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_getInt128( p_that, out ) \
	  tTDR_eTDR_getInt128( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_putUInt8( p_that, in ) \
	  tTDR_eTDR_putUInt8( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_putUInt16( p_that, in ) \
	  tTDR_eTDR_putUInt16( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_putUInt32( p_that, in ) \
	  tTDR_eTDR_putUInt32( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_putUInt64( p_that, in ) \
	  tTDR_eTDR_putUInt64( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_putUInt128( p_that, in ) \
	  tTDR_eTDR_putUInt128( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_getUInt8( p_that, out ) \
	  tTDR_eTDR_getUInt8( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_getUInt16( p_that, out ) \
	  tTDR_eTDR_getUInt16( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_getUInt32( p_that, out ) \
	  tTDR_eTDR_getUInt32( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_getUInt64( p_that, out ) \
	  tTDR_eTDR_getUInt64( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_getUInt128( p_that, out ) \
	  tTDR_eTDR_getUInt128( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_putChar( p_that, in ) \
	  tTDR_eTDR_putChar( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_getChar( p_that, out ) \
	  tTDR_eTDR_getChar( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_putBool( p_that, in ) \
	  tTDR_eTDR_putBool( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_getBool( p_that, out ) \
	  tTDR_eTDR_getBool( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_putFloat32( p_that, in ) \
	  tTDR_eTDR_putFloat32( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_putDouble64( p_that, in ) \
	  tTDR_eTDR_putDouble64( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_getFloat32( p_that, out ) \
	  tTDR_eTDR_getFloat32( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_getDouble64( p_that, out ) \
	  tTDR_eTDR_getDouble64( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_putSChar( p_that, in ) \
	  tTDR_eTDR_putSChar( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_putShort( p_that, in ) \
	  tTDR_eTDR_putShort( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_putInt( p_that, in ) \
	  tTDR_eTDR_putInt( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_putLong( p_that, in ) \
	  tTDR_eTDR_putLong( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_getSChar( p_that, out ) \
	  tTDR_eTDR_getSChar( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_getShort( p_that, out ) \
	  tTDR_eTDR_getShort( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_getInt( p_that, out ) \
	  tTDR_eTDR_getInt( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_getLong( p_that, out ) \
	  tTDR_eTDR_getLong( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_putUChar( p_that, in ) \
	  tTDR_eTDR_putUChar( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_putUShort( p_that, in ) \
	  tTDR_eTDR_putUShort( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_putUInt( p_that, in ) \
	  tTDR_eTDR_putUInt( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_putULong( p_that, in ) \
	  tTDR_eTDR_putULong( \
	   &tTDR_CB_tab[1], (in) )
#define tUnmarshaler_sSample_cTDR_getUChar( p_that, out ) \
	  tTDR_eTDR_getUChar( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_getUShort( p_that, out ) \
	  tTDR_eTDR_getUShort( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_getUInt( p_that, out ) \
	  tTDR_eTDR_getUInt( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_getULong( p_that, out ) \
	  tTDR_eTDR_getULong( \
	   &tTDR_CB_tab[1], (out) )
#define tUnmarshaler_sSample_cTDR_putIntptr( p_that, ptr ) \
	  tTDR_eTDR_putIntptr( \
	   &tTDR_CB_tab[1], (ptr) )
#define tUnmarshaler_sSample_cTDR_getIntptr( p_that, ptr ) \
	  tTDR_eTDR_getIntptr( \
	   &tTDR_CB_tab[1], (ptr) )
#define tUnmarshaler_sSample_cEventflag_set( p_that, set_pattern ) \
	  tEventflag_eEventflag_set( \
	   &tEventflag_CB_tab[1], (set_pattern) )
#define tUnmarshaler_sSample_cEventflag_clear( p_that, clear_pattern ) \
	  tEventflag_eEventflag_clear( \
	   &tEventflag_CB_tab[1], (clear_pattern) )
#define tUnmarshaler_sSample_cEventflag_wait( p_that, wait_pattern, wait_flag_mode, p_flag_pattern ) \
	  tEventflag_eEventflag_wait( \
	   &tEventflag_CB_tab[1], (wait_pattern), (wait_flag_mode), (p_flag_pattern) )
#define tUnmarshaler_sSample_cEventflag_waitPolling( p_that, wait_pattern, wait_flag_mode, p_flag_pattern ) \
	  tEventflag_eEventflag_waitPolling( \
	   &tEventflag_CB_tab[1], (wait_pattern), (wait_flag_mode), (p_flag_pattern) )
#define tUnmarshaler_sSample_cEventflag_waitTimeout( p_that, wait_pattern, wait_flag_mode, p_flag_pattern, timeout ) \
	  tEventflag_eEventflag_waitTimeout( \
	   &tEventflag_CB_tab[1], (wait_pattern), (wait_flag_mode), (p_flag_pattern), (timeout) )
#define tUnmarshaler_sSample_cEventflag_initialize( p_that ) \
	  tEventflag_eEventflag_initialize( \
	   &tEventflag_CB_tab[1] )
#define tUnmarshaler_sSample_cEventflag_refer( p_that, pk_eventflag_status ) \
	  tEventflag_eEventflag_refer( \
	   &tEventflag_CB_tab[1], (pk_eventflag_status) )
#define tUnmarshaler_sSample_cPPAllocator_alloc( p_that, size, ptr ) \
	  tPPAllocator_ePPAllocator_alloc( \
	   &tPPAllocator_CB_tab[1], (size), (ptr) )
#define tUnmarshaler_sSample_cPPAllocator_dealloc( p_that, ptr ) \
	  tPPAllocator_ePPAllocator_dealloc( \
	   &tPPAllocator_CB_tab[1], (ptr) )
#define tUnmarshaler_sSample_cPPAllocator_dealloc_all( p_that ) \
	  tPPAllocator_ePPAllocator_dealloc_all( \
	   &tPPAllocator_CB_tab[1] )
#define tUnmarshaler_sSample_cServerCall_giftToYou_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tUnmarshaler_sSample_cServerCall_giftToYou_buf_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )
#define tUnmarshaler_sSample_cServerCall_returnGiftFromYou_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tUnmarshaler_sSample_cServerCall_returnGiftFromYou_buf_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )
#define tUnmarshaler_sSample_cServerCall_onewayFunc_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tUnmarshaler_sSample_cServerCall_onewayFunc_buf_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eUnmarshalAndCallFunction */
ER             tUnmarshaler_sSample_eUnmarshalAndCallFunction_main_skel( const struct tag_sUnmarshalerMain_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tUnmarshaler_sSample_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tUnmarshaler_sSample_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tUnmarshaler_sSample_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tUnmarshaler_sSample_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cServerCall_sayHello( times ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_sayHello( p_cellcb, times ))
#define cServerCall_howAreYou( buf, len ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_howAreYou( p_cellcb, buf, len ))
#define cServerCall_giftToYou( buf, len ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_giftToYou( p_cellcb, buf, len ))
#define cServerCall_returnGiftFromYou( buf, len ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_returnGiftFromYou( p_cellcb, buf, len ))
#define cServerCall_transferStruct( a, len ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_transferStruct( p_cellcb, a, len ))
#define cServerCall_transferStruct2( a ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_transferStruct2( p_cellcb, a ))
#define cServerCall_transferInArray( array0 ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_transferInArray( p_cellcb, array0 ))
#define cServerCall_transferInArray2( array1 ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_transferInArray2( p_cellcb, array1 ))
#define cServerCall_transferOutArray( array2 ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_transferOutArray( p_cellcb, array2 ))
#define cServerCall_UnsignedTypes( in, s, ui, ul ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_UnsignedTypes( p_cellcb, in, s, ui, ul ))
#define cServerCall_SignedTypes( in, s, ui, ul ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_SignedTypes( p_cellcb, in, s, ui, ul ))
#define cServerCall_onewayFunc( buf, len ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_onewayFunc( p_cellcb, buf, len ))
#define cServerCall_exit( ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_exit( p_cellcb ))
#define cTDR_reset( ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_reset( p_cellcb ))
#define cTDR_sendSOP( b_client ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_sendSOP( p_cellcb, b_client ))
#define cTDR_receiveSOP( b_client ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_receiveSOP( p_cellcb, b_client ))
#define cTDR_sendEOP( b_continue ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_sendEOP( p_cellcb, b_continue ))
#define cTDR_receiveEOP( b_continue ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_receiveEOP( p_cellcb, b_continue ))
#define cTDR_putInt8( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putInt8( p_cellcb, in ))
#define cTDR_putInt16( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putInt16( p_cellcb, in ))
#define cTDR_putInt32( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putInt32( p_cellcb, in ))
#define cTDR_putInt64( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putInt64( p_cellcb, in ))
#define cTDR_putInt128( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putInt128( p_cellcb, in ))
#define cTDR_getInt8( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getInt8( p_cellcb, out ))
#define cTDR_getInt16( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getInt16( p_cellcb, out ))
#define cTDR_getInt32( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getInt32( p_cellcb, out ))
#define cTDR_getInt64( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getInt64( p_cellcb, out ))
#define cTDR_getInt128( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getInt128( p_cellcb, out ))
#define cTDR_putUInt8( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putUInt8( p_cellcb, in ))
#define cTDR_putUInt16( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putUInt16( p_cellcb, in ))
#define cTDR_putUInt32( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putUInt32( p_cellcb, in ))
#define cTDR_putUInt64( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putUInt64( p_cellcb, in ))
#define cTDR_putUInt128( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putUInt128( p_cellcb, in ))
#define cTDR_getUInt8( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getUInt8( p_cellcb, out ))
#define cTDR_getUInt16( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getUInt16( p_cellcb, out ))
#define cTDR_getUInt32( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getUInt32( p_cellcb, out ))
#define cTDR_getUInt64( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getUInt64( p_cellcb, out ))
#define cTDR_getUInt128( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getUInt128( p_cellcb, out ))
#define cTDR_putChar( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putChar( p_cellcb, in ))
#define cTDR_getChar( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getChar( p_cellcb, out ))
#define cTDR_putBool( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putBool( p_cellcb, in ))
#define cTDR_getBool( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getBool( p_cellcb, out ))
#define cTDR_putFloat32( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putFloat32( p_cellcb, in ))
#define cTDR_putDouble64( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putDouble64( p_cellcb, in ))
#define cTDR_getFloat32( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getFloat32( p_cellcb, out ))
#define cTDR_getDouble64( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getDouble64( p_cellcb, out ))
#define cTDR_putSChar( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putSChar( p_cellcb, in ))
#define cTDR_putShort( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putShort( p_cellcb, in ))
#define cTDR_putInt( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putInt( p_cellcb, in ))
#define cTDR_putLong( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putLong( p_cellcb, in ))
#define cTDR_getSChar( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getSChar( p_cellcb, out ))
#define cTDR_getShort( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getShort( p_cellcb, out ))
#define cTDR_getInt( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getInt( p_cellcb, out ))
#define cTDR_getLong( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getLong( p_cellcb, out ))
#define cTDR_putUChar( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putUChar( p_cellcb, in ))
#define cTDR_putUShort( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putUShort( p_cellcb, in ))
#define cTDR_putUInt( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putUInt( p_cellcb, in ))
#define cTDR_putULong( in ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putULong( p_cellcb, in ))
#define cTDR_getUChar( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getUChar( p_cellcb, out ))
#define cTDR_getUShort( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getUShort( p_cellcb, out ))
#define cTDR_getUInt( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getUInt( p_cellcb, out ))
#define cTDR_getULong( out ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getULong( p_cellcb, out ))
#define cTDR_putIntptr( ptr ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_putIntptr( p_cellcb, ptr ))
#define cTDR_getIntptr( ptr ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cTDR_getIntptr( p_cellcb, ptr ))
#define cEventflag_set( set_pattern ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cEventflag_set( p_cellcb, set_pattern ))
#define cEventflag_clear( clear_pattern ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cEventflag_clear( p_cellcb, clear_pattern ))
#define cEventflag_wait( wait_pattern, wait_flag_mode, p_flag_pattern ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cEventflag_wait( p_cellcb, wait_pattern, wait_flag_mode, p_flag_pattern ))
#define cEventflag_waitPolling( wait_pattern, wait_flag_mode, p_flag_pattern ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cEventflag_waitPolling( p_cellcb, wait_pattern, wait_flag_mode, p_flag_pattern ))
#define cEventflag_waitTimeout( wait_pattern, wait_flag_mode, p_flag_pattern, timeout ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cEventflag_waitTimeout( p_cellcb, wait_pattern, wait_flag_mode, p_flag_pattern, timeout ))
#define cEventflag_initialize( ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cEventflag_initialize( p_cellcb ))
#define cEventflag_refer( pk_eventflag_status ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cEventflag_refer( p_cellcb, pk_eventflag_status ))
#define cPPAllocator_alloc( size, ptr ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cPPAllocator_alloc( p_cellcb, size, ptr ))
#define cPPAllocator_dealloc( ptr ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cPPAllocator_dealloc( p_cellcb, ptr ))
#define cPPAllocator_dealloc_all( ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cPPAllocator_dealloc_all( p_cellcb ))
#define cServerCall_giftToYou_buf_alloc( size, p ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_giftToYou_buf_alloc( p_cellcb, size, p ))
#define cServerCall_giftToYou_buf_dealloc( ptr ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_giftToYou_buf_dealloc( p_cellcb, ptr ))
#define cServerCall_returnGiftFromYou_buf_alloc( size, p ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_returnGiftFromYou_buf_alloc( p_cellcb, size, p ))
#define cServerCall_returnGiftFromYou_buf_dealloc( ptr ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_returnGiftFromYou_buf_dealloc( p_cellcb, ptr ))
#define cServerCall_onewayFunc_buf_alloc( size, p ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_onewayFunc_buf_alloc( p_cellcb, size, p ))
#define cServerCall_onewayFunc_buf_dealloc( ptr ) \
          ((void)p_cellcb, tUnmarshaler_sSample_cServerCall_onewayFunc_buf_dealloc( p_cellcb, ptr ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eUnmarshalAndCallFunction_main tUnmarshaler_sSample_eUnmarshalAndCallFunction_main

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define CSERVERCALL_GIFTTOYOU_BUF_DEALLOC(buf) \
	  cServerCall_giftToYou_buf_dealloc( (buf) ); 
#define CSERVERCALL_RETURNGIFTFROMYOU_BUF_DEALLOC(buf) \
	  cServerCall_returnGiftFromYou_buf_dealloc( (buf) ); 
#define CSERVERCALL_ONEWAYFUNC_BUF_DEALLOC(buf) \
	  cServerCall_onewayFunc_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define CSERVERCALL_GIFTTOYOU_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cServerCall_giftToYou_buf_dealloc( (buf) );  \
	  }
#define CSERVERCALL_RETURNGIFTFROMYOU_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cServerCall_returnGiftFromYou_buf_dealloc( (buf) );  \
	  }
#define CSERVERCALL_ONEWAYFUNC_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cServerCall_onewayFunc_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tUnmarshaler_sSample_TECSGENH */
