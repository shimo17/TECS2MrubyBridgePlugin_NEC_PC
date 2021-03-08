/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tUnmarshaler_sSimple_TECSGEN_H
#define tUnmarshaler_sSimple_TECSGEN_H

/*
 * celltype          :  tUnmarshaler_sSimple
 * global name       :  tUnmarshaler_sSimple
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
#include "sSimple_tecsgen.h"
#include "sTDR_tecsgen.h"
#include "sEventflag_tecsgen.h"
#include "sUnmarshalerMain_tecsgen.h"
#include "sPPAllocator_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tUnmarshaler_sSimple_CB {
    int  dummy;
} tUnmarshaler_sSimple_CB;
extern tUnmarshaler_sSimple_CB  tUnmarshaler_sSimple_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tUnmarshaler_sSimple_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sUnmarshalerMain */
ER           tUnmarshaler_sSimple_eUnmarshalAndCallFunction_main(tUnmarshaler_sSimple_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tUnmarshaler_sSimple_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTracePlugin_sSimple_tecsgen.h"
#include "tTDR_tecsgen.h"
#include "tEventflag_tecsgen.h"
#include "tPPAllocator_tecsgen.h"
#ifdef  tUnmarshaler_sSimple_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tUnmarshaler_sSimple_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tUnmarshaler_sSimple_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tUnmarshaler_sSimple_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tUnmarshaler_sSimple_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tUnmarshaler_sSimple_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tUnmarshaler_sSimple_cServerCall_onewayPtr( p_that, in ) \
	  tTracePlugin_sSimple_eThroughEntry_onewayPtr( \
	   &tTracePlugin_sSimple_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cServerCall_onewayArray( p_that, in, len ) \
	  tTracePlugin_sSimple_eThroughEntry_onewayArray( \
	   &tTracePlugin_sSimple_CB_tab[0], (in), (len) )
#define tUnmarshaler_sSimple_cServerCall_onewayDoubleArray( p_that, in, len, in2, len2 ) \
	  tTracePlugin_sSimple_eThroughEntry_onewayDoubleArray( \
	   &tTracePlugin_sSimple_CB_tab[0], (in), (len), (in2), (len2) )
#define tUnmarshaler_sSimple_cServerCall_onewayStringArray( p_that, in, len ) \
	  tTracePlugin_sSimple_eThroughEntry_onewayStringArray( \
	   &tTracePlugin_sSimple_CB_tab[0], (in), (len) )
#define tUnmarshaler_sSimple_cServerCall_onewayString( p_that, in, len ) \
	  tTracePlugin_sSimple_eThroughEntry_onewayString( \
	   &tTracePlugin_sSimple_CB_tab[0], (in), (len) )
#define tUnmarshaler_sSimple_cServerCall_onewayStruct( p_that, a ) \
	  tTracePlugin_sSimple_eThroughEntry_onewayStruct( \
	   &tTracePlugin_sSimple_CB_tab[0], (a) )
#define tUnmarshaler_sSimple_cServerCall_onewayStruct2( p_that, a, len ) \
	  tTracePlugin_sSimple_eThroughEntry_onewayStruct2( \
	   &tTracePlugin_sSimple_CB_tab[0], (a), (len) )
#define tUnmarshaler_sSimple_cServerCall_onewayInArray( p_that, array0 ) \
	  tTracePlugin_sSimple_eThroughEntry_onewayInArray( \
	   &tTracePlugin_sSimple_CB_tab[0], (array0) )
#define tUnmarshaler_sSimple_cServerCall_onewayInArray2( p_that, array1 ) \
	  tTracePlugin_sSimple_eThroughEntry_onewayInArray2( \
	   &tTracePlugin_sSimple_CB_tab[0], (array1) )
#define tUnmarshaler_sSimple_cServerCall_onewayNulable( p_that, array ) \
	  tTracePlugin_sSimple_eThroughEntry_onewayNulable( \
	   &tTracePlugin_sSimple_CB_tab[0], (array) )
#define tUnmarshaler_sSimple_cServerCall_exit( p_that ) \
	  tTracePlugin_sSimple_eThroughEntry_exit( \
	   &tTracePlugin_sSimple_CB_tab[0] )
#define tUnmarshaler_sSimple_cTDR_reset( p_that ) \
	  tTDR_eTDR_reset( \
	   &tTDR_CB_tab[0] )
#define tUnmarshaler_sSimple_cTDR_sendSOP( p_that, b_client ) \
	  tTDR_eTDR_sendSOP( \
	   &tTDR_CB_tab[0], (b_client) )
#define tUnmarshaler_sSimple_cTDR_receiveSOP( p_that, b_client ) \
	  tTDR_eTDR_receiveSOP( \
	   &tTDR_CB_tab[0], (b_client) )
#define tUnmarshaler_sSimple_cTDR_sendEOP( p_that, b_continue ) \
	  tTDR_eTDR_sendEOP( \
	   &tTDR_CB_tab[0], (b_continue) )
#define tUnmarshaler_sSimple_cTDR_receiveEOP( p_that, b_continue ) \
	  tTDR_eTDR_receiveEOP( \
	   &tTDR_CB_tab[0], (b_continue) )
#define tUnmarshaler_sSimple_cTDR_putInt8( p_that, in ) \
	  tTDR_eTDR_putInt8( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_putInt16( p_that, in ) \
	  tTDR_eTDR_putInt16( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_putInt32( p_that, in ) \
	  tTDR_eTDR_putInt32( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_putInt64( p_that, in ) \
	  tTDR_eTDR_putInt64( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_putInt128( p_that, in ) \
	  tTDR_eTDR_putInt128( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_getInt8( p_that, out ) \
	  tTDR_eTDR_getInt8( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_getInt16( p_that, out ) \
	  tTDR_eTDR_getInt16( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_getInt32( p_that, out ) \
	  tTDR_eTDR_getInt32( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_getInt64( p_that, out ) \
	  tTDR_eTDR_getInt64( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_getInt128( p_that, out ) \
	  tTDR_eTDR_getInt128( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_putUInt8( p_that, in ) \
	  tTDR_eTDR_putUInt8( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_putUInt16( p_that, in ) \
	  tTDR_eTDR_putUInt16( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_putUInt32( p_that, in ) \
	  tTDR_eTDR_putUInt32( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_putUInt64( p_that, in ) \
	  tTDR_eTDR_putUInt64( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_putUInt128( p_that, in ) \
	  tTDR_eTDR_putUInt128( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_getUInt8( p_that, out ) \
	  tTDR_eTDR_getUInt8( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_getUInt16( p_that, out ) \
	  tTDR_eTDR_getUInt16( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_getUInt32( p_that, out ) \
	  tTDR_eTDR_getUInt32( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_getUInt64( p_that, out ) \
	  tTDR_eTDR_getUInt64( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_getUInt128( p_that, out ) \
	  tTDR_eTDR_getUInt128( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_putChar( p_that, in ) \
	  tTDR_eTDR_putChar( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_getChar( p_that, out ) \
	  tTDR_eTDR_getChar( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_putBool( p_that, in ) \
	  tTDR_eTDR_putBool( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_getBool( p_that, out ) \
	  tTDR_eTDR_getBool( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_putFloat32( p_that, in ) \
	  tTDR_eTDR_putFloat32( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_putDouble64( p_that, in ) \
	  tTDR_eTDR_putDouble64( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_getFloat32( p_that, out ) \
	  tTDR_eTDR_getFloat32( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_getDouble64( p_that, out ) \
	  tTDR_eTDR_getDouble64( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_putSChar( p_that, in ) \
	  tTDR_eTDR_putSChar( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_putShort( p_that, in ) \
	  tTDR_eTDR_putShort( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_putInt( p_that, in ) \
	  tTDR_eTDR_putInt( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_putLong( p_that, in ) \
	  tTDR_eTDR_putLong( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_getSChar( p_that, out ) \
	  tTDR_eTDR_getSChar( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_getShort( p_that, out ) \
	  tTDR_eTDR_getShort( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_getInt( p_that, out ) \
	  tTDR_eTDR_getInt( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_getLong( p_that, out ) \
	  tTDR_eTDR_getLong( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_putUChar( p_that, in ) \
	  tTDR_eTDR_putUChar( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_putUShort( p_that, in ) \
	  tTDR_eTDR_putUShort( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_putUInt( p_that, in ) \
	  tTDR_eTDR_putUInt( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_putULong( p_that, in ) \
	  tTDR_eTDR_putULong( \
	   &tTDR_CB_tab[0], (in) )
#define tUnmarshaler_sSimple_cTDR_getUChar( p_that, out ) \
	  tTDR_eTDR_getUChar( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_getUShort( p_that, out ) \
	  tTDR_eTDR_getUShort( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_getUInt( p_that, out ) \
	  tTDR_eTDR_getUInt( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_getULong( p_that, out ) \
	  tTDR_eTDR_getULong( \
	   &tTDR_CB_tab[0], (out) )
#define tUnmarshaler_sSimple_cTDR_putIntptr( p_that, ptr ) \
	  tTDR_eTDR_putIntptr( \
	   &tTDR_CB_tab[0], (ptr) )
#define tUnmarshaler_sSimple_cTDR_getIntptr( p_that, ptr ) \
	  tTDR_eTDR_getIntptr( \
	   &tTDR_CB_tab[0], (ptr) )
#define tUnmarshaler_sSimple_cEventflag_set( p_that, set_pattern ) \
	  tEventflag_eEventflag_set( \
	   &tEventflag_CB_tab[0], (set_pattern) )
#define tUnmarshaler_sSimple_cEventflag_clear( p_that, clear_pattern ) \
	  tEventflag_eEventflag_clear( \
	   &tEventflag_CB_tab[0], (clear_pattern) )
#define tUnmarshaler_sSimple_cEventflag_wait( p_that, wait_pattern, wait_flag_mode, p_flag_pattern ) \
	  tEventflag_eEventflag_wait( \
	   &tEventflag_CB_tab[0], (wait_pattern), (wait_flag_mode), (p_flag_pattern) )
#define tUnmarshaler_sSimple_cEventflag_waitPolling( p_that, wait_pattern, wait_flag_mode, p_flag_pattern ) \
	  tEventflag_eEventflag_waitPolling( \
	   &tEventflag_CB_tab[0], (wait_pattern), (wait_flag_mode), (p_flag_pattern) )
#define tUnmarshaler_sSimple_cEventflag_waitTimeout( p_that, wait_pattern, wait_flag_mode, p_flag_pattern, timeout ) \
	  tEventflag_eEventflag_waitTimeout( \
	   &tEventflag_CB_tab[0], (wait_pattern), (wait_flag_mode), (p_flag_pattern), (timeout) )
#define tUnmarshaler_sSimple_cEventflag_initialize( p_that ) \
	  tEventflag_eEventflag_initialize( \
	   &tEventflag_CB_tab[0] )
#define tUnmarshaler_sSimple_cEventflag_refer( p_that, pk_eventflag_status ) \
	  tEventflag_eEventflag_refer( \
	   &tEventflag_CB_tab[0], (pk_eventflag_status) )
#define tUnmarshaler_sSimple_cPPAllocator_alloc( p_that, size, ptr ) \
	  tPPAllocator_ePPAllocator_alloc( \
	   &tPPAllocator_CB_tab[0], (size), (ptr) )
#define tUnmarshaler_sSimple_cPPAllocator_dealloc( p_that, ptr ) \
	  tPPAllocator_ePPAllocator_dealloc( \
	   &tPPAllocator_CB_tab[0], (ptr) )
#define tUnmarshaler_sSimple_cPPAllocator_dealloc_all( p_that ) \
	  tPPAllocator_ePPAllocator_dealloc_all( \
	   &tPPAllocator_CB_tab[0] )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eUnmarshalAndCallFunction */
ER             tUnmarshaler_sSimple_eUnmarshalAndCallFunction_main_skel( const struct tag_sUnmarshalerMain_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tUnmarshaler_sSimple_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tUnmarshaler_sSimple_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tUnmarshaler_sSimple_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tUnmarshaler_sSimple_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cServerCall_onewayPtr( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cServerCall_onewayPtr( p_cellcb, in ))
#define cServerCall_onewayArray( in, len ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cServerCall_onewayArray( p_cellcb, in, len ))
#define cServerCall_onewayDoubleArray( in, len, in2, len2 ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cServerCall_onewayDoubleArray( p_cellcb, in, len, in2, len2 ))
#define cServerCall_onewayStringArray( in, len ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cServerCall_onewayStringArray( p_cellcb, in, len ))
#define cServerCall_onewayString( in, len ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cServerCall_onewayString( p_cellcb, in, len ))
#define cServerCall_onewayStruct( a ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cServerCall_onewayStruct( p_cellcb, a ))
#define cServerCall_onewayStruct2( a, len ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cServerCall_onewayStruct2( p_cellcb, a, len ))
#define cServerCall_onewayInArray( array0 ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cServerCall_onewayInArray( p_cellcb, array0 ))
#define cServerCall_onewayInArray2( array1 ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cServerCall_onewayInArray2( p_cellcb, array1 ))
#define cServerCall_onewayNulable( array ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cServerCall_onewayNulable( p_cellcb, array ))
#define cServerCall_exit( ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cServerCall_exit( p_cellcb ))
#define cTDR_reset( ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_reset( p_cellcb ))
#define cTDR_sendSOP( b_client ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_sendSOP( p_cellcb, b_client ))
#define cTDR_receiveSOP( b_client ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_receiveSOP( p_cellcb, b_client ))
#define cTDR_sendEOP( b_continue ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_sendEOP( p_cellcb, b_continue ))
#define cTDR_receiveEOP( b_continue ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_receiveEOP( p_cellcb, b_continue ))
#define cTDR_putInt8( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putInt8( p_cellcb, in ))
#define cTDR_putInt16( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putInt16( p_cellcb, in ))
#define cTDR_putInt32( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putInt32( p_cellcb, in ))
#define cTDR_putInt64( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putInt64( p_cellcb, in ))
#define cTDR_putInt128( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putInt128( p_cellcb, in ))
#define cTDR_getInt8( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getInt8( p_cellcb, out ))
#define cTDR_getInt16( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getInt16( p_cellcb, out ))
#define cTDR_getInt32( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getInt32( p_cellcb, out ))
#define cTDR_getInt64( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getInt64( p_cellcb, out ))
#define cTDR_getInt128( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getInt128( p_cellcb, out ))
#define cTDR_putUInt8( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putUInt8( p_cellcb, in ))
#define cTDR_putUInt16( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putUInt16( p_cellcb, in ))
#define cTDR_putUInt32( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putUInt32( p_cellcb, in ))
#define cTDR_putUInt64( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putUInt64( p_cellcb, in ))
#define cTDR_putUInt128( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putUInt128( p_cellcb, in ))
#define cTDR_getUInt8( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getUInt8( p_cellcb, out ))
#define cTDR_getUInt16( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getUInt16( p_cellcb, out ))
#define cTDR_getUInt32( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getUInt32( p_cellcb, out ))
#define cTDR_getUInt64( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getUInt64( p_cellcb, out ))
#define cTDR_getUInt128( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getUInt128( p_cellcb, out ))
#define cTDR_putChar( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putChar( p_cellcb, in ))
#define cTDR_getChar( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getChar( p_cellcb, out ))
#define cTDR_putBool( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putBool( p_cellcb, in ))
#define cTDR_getBool( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getBool( p_cellcb, out ))
#define cTDR_putFloat32( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putFloat32( p_cellcb, in ))
#define cTDR_putDouble64( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putDouble64( p_cellcb, in ))
#define cTDR_getFloat32( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getFloat32( p_cellcb, out ))
#define cTDR_getDouble64( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getDouble64( p_cellcb, out ))
#define cTDR_putSChar( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putSChar( p_cellcb, in ))
#define cTDR_putShort( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putShort( p_cellcb, in ))
#define cTDR_putInt( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putInt( p_cellcb, in ))
#define cTDR_putLong( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putLong( p_cellcb, in ))
#define cTDR_getSChar( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getSChar( p_cellcb, out ))
#define cTDR_getShort( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getShort( p_cellcb, out ))
#define cTDR_getInt( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getInt( p_cellcb, out ))
#define cTDR_getLong( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getLong( p_cellcb, out ))
#define cTDR_putUChar( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putUChar( p_cellcb, in ))
#define cTDR_putUShort( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putUShort( p_cellcb, in ))
#define cTDR_putUInt( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putUInt( p_cellcb, in ))
#define cTDR_putULong( in ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putULong( p_cellcb, in ))
#define cTDR_getUChar( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getUChar( p_cellcb, out ))
#define cTDR_getUShort( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getUShort( p_cellcb, out ))
#define cTDR_getUInt( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getUInt( p_cellcb, out ))
#define cTDR_getULong( out ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getULong( p_cellcb, out ))
#define cTDR_putIntptr( ptr ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_putIntptr( p_cellcb, ptr ))
#define cTDR_getIntptr( ptr ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cTDR_getIntptr( p_cellcb, ptr ))
#define cEventflag_set( set_pattern ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cEventflag_set( p_cellcb, set_pattern ))
#define cEventflag_clear( clear_pattern ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cEventflag_clear( p_cellcb, clear_pattern ))
#define cEventflag_wait( wait_pattern, wait_flag_mode, p_flag_pattern ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cEventflag_wait( p_cellcb, wait_pattern, wait_flag_mode, p_flag_pattern ))
#define cEventflag_waitPolling( wait_pattern, wait_flag_mode, p_flag_pattern ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cEventflag_waitPolling( p_cellcb, wait_pattern, wait_flag_mode, p_flag_pattern ))
#define cEventflag_waitTimeout( wait_pattern, wait_flag_mode, p_flag_pattern, timeout ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cEventflag_waitTimeout( p_cellcb, wait_pattern, wait_flag_mode, p_flag_pattern, timeout ))
#define cEventflag_initialize( ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cEventflag_initialize( p_cellcb ))
#define cEventflag_refer( pk_eventflag_status ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cEventflag_refer( p_cellcb, pk_eventflag_status ))
#define cPPAllocator_alloc( size, ptr ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cPPAllocator_alloc( p_cellcb, size, ptr ))
#define cPPAllocator_dealloc( ptr ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cPPAllocator_dealloc( p_cellcb, ptr ))
#define cPPAllocator_dealloc_all( ) \
          ((void)p_cellcb, tUnmarshaler_sSimple_cPPAllocator_dealloc_all( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eUnmarshalAndCallFunction_main tUnmarshaler_sSimple_eUnmarshalAndCallFunction_main

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tUnmarshaler_sSimple_TECSGENH */
