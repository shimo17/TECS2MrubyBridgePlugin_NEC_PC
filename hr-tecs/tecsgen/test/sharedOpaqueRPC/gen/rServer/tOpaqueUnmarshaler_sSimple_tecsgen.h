/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tOpaqueUnmarshaler_sSimple_TECSGEN_H
#define tOpaqueUnmarshaler_sSimple_TECSGEN_H

/*
 * celltype          :  tOpaqueUnmarshaler_sSimple
 * global name       :  tOpaqueUnmarshaler_sSimple
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
#include "sRPCErrorHandler_tecsgen.h"
#include "sUnmarshalerMain_tecsgen.h"
#include "sPPAllocator_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tOpaqueUnmarshaler_sSimple_CB {
    int  dummy;
} tOpaqueUnmarshaler_sSimple_CB;
extern tOpaqueUnmarshaler_sSimple_CB  tOpaqueUnmarshaler_sSimple_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tOpaqueUnmarshaler_sSimple_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sUnmarshalerMain */
ER           tOpaqueUnmarshaler_sSimple_eService_main(tOpaqueUnmarshaler_sSimple_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tOpaqueUnmarshaler_sSimple_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTracePlugin_sSimple_tecsgen.h"
#include "tTDR_tecsgen.h"
#include "tPPAllocator_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tOpaqueUnmarshaler_sSimple_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tOpaqueUnmarshaler_sSimple_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tOpaqueUnmarshaler_sSimple_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tOpaqueUnmarshaler_sSimple_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tOpaqueUnmarshaler_sSimple_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tOpaqueUnmarshaler_sSimple_is_cErrorHandler_joined(p_that) \
	  (0)    /* not joined */

/* セルCBを得るマクロ #_GCB_# */
#define tOpaqueUnmarshaler_sSimple_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tOpaqueUnmarshaler_sSimple_cServerCall_shutdown( p_that ) \
	  tTracePlugin_sSimple_eThroughEntry_shutdown( \
	   &tTracePlugin_sSimple_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func1( p_that, inval ) \
	  tTracePlugin_sSimple_eThroughEntry_func1( \
	   &tTracePlugin_sSimple_CB_tab[0], (inval) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func2( p_that, str ) \
	  tTracePlugin_sSimple_eThroughEntry_func2( \
	   &tTracePlugin_sSimple_CB_tab[0], (str) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func3( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func3( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func4( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func4( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func5( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func5( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func6( p_that, array ) \
	  tTracePlugin_sSimple_eThroughEntry_func6( \
	   &tTracePlugin_sSimple_CB_tab[0], (array) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func7( p_that, array2 ) \
	  tTracePlugin_sSimple_eThroughEntry_func7( \
	   &tTracePlugin_sSimple_CB_tab[0], (array2) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func8( p_that, arraySt ) \
	  tTracePlugin_sSimple_eThroughEntry_func8( \
	   &tTracePlugin_sSimple_CB_tab[0], (arraySt) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func9( p_that, arraySt ) \
	  tTracePlugin_sSimple_eThroughEntry_func9( \
	   &tTracePlugin_sSimple_CB_tab[0], (arraySt) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func10( p_that, val ) \
	  tTracePlugin_sSimple_eThroughEntry_func10( \
	   &tTracePlugin_sSimple_CB_tab[0], (val) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func11( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func11( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func12( p_that, msg ) \
	  tTracePlugin_sSimple_eThroughEntry_func12( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func13( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func13( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func14( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func14( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func15( p_that, array1 ) \
	  tTracePlugin_sSimple_eThroughEntry_func15( \
	   &tTracePlugin_sSimple_CB_tab[0], (array1) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func40( p_that, val ) \
	  tTracePlugin_sSimple_eThroughEntry_func40( \
	   &tTracePlugin_sSimple_CB_tab[0], (val) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func41( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func41( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func42( p_that, msg ) \
	  tTracePlugin_sSimple_eThroughEntry_func42( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func43( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func43( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func21( p_that, a ) \
	  tTracePlugin_sSimple_eThroughEntry_func21( \
	   &tTracePlugin_sSimple_CB_tab[0], (a) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func22( p_that, sta ) \
	  tTracePlugin_sSimple_eThroughEntry_func22( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func23( p_that, str ) \
	  tTracePlugin_sSimple_eThroughEntry_func23( \
	   &tTracePlugin_sSimple_CB_tab[0], (str) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func24( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func24( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func25( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func25( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func26( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func26( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func27( p_that, array2 ) \
	  tTracePlugin_sSimple_eThroughEntry_func27( \
	   &tTracePlugin_sSimple_CB_tab[0], (array2) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func31( p_that, a ) \
	  tTracePlugin_sSimple_eThroughEntry_func31( \
	   &tTracePlugin_sSimple_CB_tab[0], (a) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func32( p_that, sta ) \
	  tTracePlugin_sSimple_eThroughEntry_func32( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func33( p_that, str ) \
	  tTracePlugin_sSimple_eThroughEntry_func33( \
	   &tTracePlugin_sSimple_CB_tab[0], (str) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func34( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func34( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func35( p_that, msg, len, msglen ) \
	  tTracePlugin_sSimple_eThroughEntry_func35( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len), (msglen) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func36( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func36( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func37( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func37( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func38( p_that, array2 ) \
	  tTracePlugin_sSimple_eThroughEntry_func38( \
	   &tTracePlugin_sSimple_CB_tab[0], (array2) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func39( p_that, arraySt ) \
	  tTracePlugin_sSimple_eThroughEntry_func39( \
	   &tTracePlugin_sSimple_CB_tab[0], (arraySt) )
#define tOpaqueUnmarshaler_sSimple_cTDR_reset( p_that ) \
	  tTDR_eTDR_reset( \
	   &tTDR_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cTDR_sendSOP( p_that, b_client ) \
	  tTDR_eTDR_sendSOP( \
	   &tTDR_CB_tab[0], (b_client) )
#define tOpaqueUnmarshaler_sSimple_cTDR_receiveSOP( p_that, b_client ) \
	  tTDR_eTDR_receiveSOP( \
	   &tTDR_CB_tab[0], (b_client) )
#define tOpaqueUnmarshaler_sSimple_cTDR_sendEOP( p_that, b_continue ) \
	  tTDR_eTDR_sendEOP( \
	   &tTDR_CB_tab[0], (b_continue) )
#define tOpaqueUnmarshaler_sSimple_cTDR_receiveEOP( p_that, b_continue ) \
	  tTDR_eTDR_receiveEOP( \
	   &tTDR_CB_tab[0], (b_continue) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putInt8( p_that, in ) \
	  tTDR_eTDR_putInt8( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putInt16( p_that, in ) \
	  tTDR_eTDR_putInt16( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putInt32( p_that, in ) \
	  tTDR_eTDR_putInt32( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putInt64( p_that, in ) \
	  tTDR_eTDR_putInt64( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putInt128( p_that, in ) \
	  tTDR_eTDR_putInt128( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getInt8( p_that, out ) \
	  tTDR_eTDR_getInt8( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getInt16( p_that, out ) \
	  tTDR_eTDR_getInt16( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getInt32( p_that, out ) \
	  tTDR_eTDR_getInt32( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getInt64( p_that, out ) \
	  tTDR_eTDR_getInt64( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getInt128( p_that, out ) \
	  tTDR_eTDR_getInt128( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putUInt8( p_that, in ) \
	  tTDR_eTDR_putUInt8( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putUInt16( p_that, in ) \
	  tTDR_eTDR_putUInt16( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putUInt32( p_that, in ) \
	  tTDR_eTDR_putUInt32( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putUInt64( p_that, in ) \
	  tTDR_eTDR_putUInt64( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putUInt128( p_that, in ) \
	  tTDR_eTDR_putUInt128( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getUInt8( p_that, out ) \
	  tTDR_eTDR_getUInt8( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getUInt16( p_that, out ) \
	  tTDR_eTDR_getUInt16( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getUInt32( p_that, out ) \
	  tTDR_eTDR_getUInt32( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getUInt64( p_that, out ) \
	  tTDR_eTDR_getUInt64( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getUInt128( p_that, out ) \
	  tTDR_eTDR_getUInt128( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putChar( p_that, in ) \
	  tTDR_eTDR_putChar( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getChar( p_that, out ) \
	  tTDR_eTDR_getChar( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putBool( p_that, in ) \
	  tTDR_eTDR_putBool( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getBool( p_that, out ) \
	  tTDR_eTDR_getBool( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putFloat32( p_that, in ) \
	  tTDR_eTDR_putFloat32( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putDouble64( p_that, in ) \
	  tTDR_eTDR_putDouble64( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getFloat32( p_that, out ) \
	  tTDR_eTDR_getFloat32( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getDouble64( p_that, out ) \
	  tTDR_eTDR_getDouble64( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putSChar( p_that, in ) \
	  tTDR_eTDR_putSChar( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putShort( p_that, in ) \
	  tTDR_eTDR_putShort( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putInt( p_that, in ) \
	  tTDR_eTDR_putInt( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putLong( p_that, in ) \
	  tTDR_eTDR_putLong( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getSChar( p_that, out ) \
	  tTDR_eTDR_getSChar( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getShort( p_that, out ) \
	  tTDR_eTDR_getShort( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getInt( p_that, out ) \
	  tTDR_eTDR_getInt( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getLong( p_that, out ) \
	  tTDR_eTDR_getLong( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putUChar( p_that, in ) \
	  tTDR_eTDR_putUChar( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putUShort( p_that, in ) \
	  tTDR_eTDR_putUShort( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putUInt( p_that, in ) \
	  tTDR_eTDR_putUInt( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putULong( p_that, in ) \
	  tTDR_eTDR_putULong( \
	   &tTDR_CB_tab[0], (in) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getUChar( p_that, out ) \
	  tTDR_eTDR_getUChar( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getUShort( p_that, out ) \
	  tTDR_eTDR_getUShort( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getUInt( p_that, out ) \
	  tTDR_eTDR_getUInt( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getULong( p_that, out ) \
	  tTDR_eTDR_getULong( \
	   &tTDR_CB_tab[0], (out) )
#define tOpaqueUnmarshaler_sSimple_cTDR_putIntptr( p_that, ptr ) \
	  tTDR_eTDR_putIntptr( \
	   &tTDR_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cTDR_getIntptr( p_that, ptr ) \
	  tTDR_eTDR_getIntptr( \
	   &tTDR_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cErrorHandler_errorOccured( p_that, func_id, er, state ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */
#define tOpaqueUnmarshaler_sSimple_cPPAllocator_alloc( p_that, size, ptr ) \
	  tPPAllocator_ePPAllocator_alloc( \
	   &tPPAllocator_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cPPAllocator_dealloc( p_that, ptr ) \
	  tPPAllocator_ePPAllocator_dealloc( \
	   &tPPAllocator_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cPPAllocator_dealloc_all( p_that ) \
	  tPPAllocator_ePPAllocator_dealloc_all( \
	   &tPPAllocator_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func21_a_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func21_a_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func21_a_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func22_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func22_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func22_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func23_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func23_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func23_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func24_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func24_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func24_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func25_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func25_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func25_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func26_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func26_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func26_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func27_array2_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func27_array2_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func27_array2_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func31_a_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func31_a_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func31_a_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func32_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func32_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func32_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func33_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func33_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func33_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func34_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func34_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func34_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func35_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func35_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func35_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func36_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func36_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func36_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func37_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func37_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func37_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func38_array2_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func38_array2_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func38_array2_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func39_arraySt_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func39_arraySt_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueUnmarshaler_sSimple_cServerCall_func39_arraySt_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eService */
ER             tOpaqueUnmarshaler_sSimple_eService_main_skel( const struct tag_sUnmarshalerMain_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tOpaqueUnmarshaler_sSimple_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tOpaqueUnmarshaler_sSimple_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tOpaqueUnmarshaler_sSimple_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tOpaqueUnmarshaler_sSimple_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cServerCall_shutdown( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_shutdown( p_cellcb ))
#define cServerCall_func1( inval ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func1( p_cellcb, inval ))
#define cServerCall_func2( str ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func2( p_cellcb, str ))
#define cServerCall_func3( msg, len ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func3( p_cellcb, msg, len ))
#define cServerCall_func4( msg, len ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func4( p_cellcb, msg, len ))
#define cServerCall_func5( sta, len ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func5( p_cellcb, sta, len ))
#define cServerCall_func6( array ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func6( p_cellcb, array ))
#define cServerCall_func7( array2 ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func7( p_cellcb, array2 ))
#define cServerCall_func8( arraySt ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func8( p_cellcb, arraySt ))
#define cServerCall_func9( arraySt ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func9( p_cellcb, arraySt ))
#define cServerCall_func10( val ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func10( p_cellcb, val ))
#define cServerCall_func11( msg, len ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func11( p_cellcb, msg, len ))
#define cServerCall_func12( msg ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func12( p_cellcb, msg ))
#define cServerCall_func13( sta, len ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func13( p_cellcb, sta, len ))
#define cServerCall_func14( sta, len ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func14( p_cellcb, sta, len ))
#define cServerCall_func15( array1 ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func15( p_cellcb, array1 ))
#define cServerCall_func40( val ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func40( p_cellcb, val ))
#define cServerCall_func41( msg, len ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func41( p_cellcb, msg, len ))
#define cServerCall_func42( msg ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func42( p_cellcb, msg ))
#define cServerCall_func43( sta, len ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func43( p_cellcb, sta, len ))
#define cServerCall_func21( a ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func21( p_cellcb, a ))
#define cServerCall_func22( sta ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func22( p_cellcb, sta ))
#define cServerCall_func23( str ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func23( p_cellcb, str ))
#define cServerCall_func24( msg, len ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func24( p_cellcb, msg, len ))
#define cServerCall_func25( msg, len ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func25( p_cellcb, msg, len ))
#define cServerCall_func26( sta, len ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func26( p_cellcb, sta, len ))
#define cServerCall_func27( array2 ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func27( p_cellcb, array2 ))
#define cServerCall_func31( a ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func31( p_cellcb, a ))
#define cServerCall_func32( sta ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func32( p_cellcb, sta ))
#define cServerCall_func33( str ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func33( p_cellcb, str ))
#define cServerCall_func34( msg, len ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func34( p_cellcb, msg, len ))
#define cServerCall_func35( msg, len, msglen ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func35( p_cellcb, msg, len, msglen ))
#define cServerCall_func36( sta, len ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func36( p_cellcb, sta, len ))
#define cServerCall_func37( sta, len ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func37( p_cellcb, sta, len ))
#define cServerCall_func38( array2 ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func38( p_cellcb, array2 ))
#define cServerCall_func39( arraySt ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func39( p_cellcb, arraySt ))
#define cTDR_reset( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_reset( p_cellcb ))
#define cTDR_sendSOP( b_client ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_sendSOP( p_cellcb, b_client ))
#define cTDR_receiveSOP( b_client ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_receiveSOP( p_cellcb, b_client ))
#define cTDR_sendEOP( b_continue ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_sendEOP( p_cellcb, b_continue ))
#define cTDR_receiveEOP( b_continue ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_receiveEOP( p_cellcb, b_continue ))
#define cTDR_putInt8( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putInt8( p_cellcb, in ))
#define cTDR_putInt16( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putInt16( p_cellcb, in ))
#define cTDR_putInt32( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putInt32( p_cellcb, in ))
#define cTDR_putInt64( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putInt64( p_cellcb, in ))
#define cTDR_putInt128( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putInt128( p_cellcb, in ))
#define cTDR_getInt8( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getInt8( p_cellcb, out ))
#define cTDR_getInt16( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getInt16( p_cellcb, out ))
#define cTDR_getInt32( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getInt32( p_cellcb, out ))
#define cTDR_getInt64( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getInt64( p_cellcb, out ))
#define cTDR_getInt128( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getInt128( p_cellcb, out ))
#define cTDR_putUInt8( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putUInt8( p_cellcb, in ))
#define cTDR_putUInt16( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putUInt16( p_cellcb, in ))
#define cTDR_putUInt32( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putUInt32( p_cellcb, in ))
#define cTDR_putUInt64( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putUInt64( p_cellcb, in ))
#define cTDR_putUInt128( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putUInt128( p_cellcb, in ))
#define cTDR_getUInt8( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getUInt8( p_cellcb, out ))
#define cTDR_getUInt16( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getUInt16( p_cellcb, out ))
#define cTDR_getUInt32( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getUInt32( p_cellcb, out ))
#define cTDR_getUInt64( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getUInt64( p_cellcb, out ))
#define cTDR_getUInt128( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getUInt128( p_cellcb, out ))
#define cTDR_putChar( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putChar( p_cellcb, in ))
#define cTDR_getChar( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getChar( p_cellcb, out ))
#define cTDR_putBool( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putBool( p_cellcb, in ))
#define cTDR_getBool( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getBool( p_cellcb, out ))
#define cTDR_putFloat32( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putFloat32( p_cellcb, in ))
#define cTDR_putDouble64( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putDouble64( p_cellcb, in ))
#define cTDR_getFloat32( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getFloat32( p_cellcb, out ))
#define cTDR_getDouble64( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getDouble64( p_cellcb, out ))
#define cTDR_putSChar( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putSChar( p_cellcb, in ))
#define cTDR_putShort( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putShort( p_cellcb, in ))
#define cTDR_putInt( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putInt( p_cellcb, in ))
#define cTDR_putLong( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putLong( p_cellcb, in ))
#define cTDR_getSChar( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getSChar( p_cellcb, out ))
#define cTDR_getShort( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getShort( p_cellcb, out ))
#define cTDR_getInt( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getInt( p_cellcb, out ))
#define cTDR_getLong( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getLong( p_cellcb, out ))
#define cTDR_putUChar( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putUChar( p_cellcb, in ))
#define cTDR_putUShort( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putUShort( p_cellcb, in ))
#define cTDR_putUInt( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putUInt( p_cellcb, in ))
#define cTDR_putULong( in ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putULong( p_cellcb, in ))
#define cTDR_getUChar( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getUChar( p_cellcb, out ))
#define cTDR_getUShort( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getUShort( p_cellcb, out ))
#define cTDR_getUInt( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getUInt( p_cellcb, out ))
#define cTDR_getULong( out ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getULong( p_cellcb, out ))
#define cTDR_putIntptr( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_putIntptr( p_cellcb, ptr ))
#define cTDR_getIntptr( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cTDR_getIntptr( p_cellcb, ptr ))
#define cErrorHandler_errorOccured( func_id, er, state ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cErrorHandler_errorOccured( p_cellcb, func_id, er, state ))
#define cPPAllocator_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cPPAllocator_alloc( p_cellcb, size, ptr ))
#define cPPAllocator_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cPPAllocator_dealloc( p_cellcb, ptr ))
#define cPPAllocator_dealloc_all( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cPPAllocator_dealloc_all( p_cellcb ))
#define cServerCall_func21_a_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func21_a_alloc( p_cellcb, size, ptr ))
#define cServerCall_func21_a_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func21_a_dealloc( p_cellcb, ptr ))
#define cServerCall_func21_a_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func21_a_printStatistics( p_cellcb ))
#define cServerCall_func22_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func22_sta_alloc( p_cellcb, size, ptr ))
#define cServerCall_func22_sta_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func22_sta_dealloc( p_cellcb, ptr ))
#define cServerCall_func22_sta_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func22_sta_printStatistics( p_cellcb ))
#define cServerCall_func23_str_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func23_str_alloc( p_cellcb, size, ptr ))
#define cServerCall_func23_str_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func23_str_dealloc( p_cellcb, ptr ))
#define cServerCall_func23_str_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func23_str_printStatistics( p_cellcb ))
#define cServerCall_func24_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func24_msg_alloc( p_cellcb, size, ptr ))
#define cServerCall_func24_msg_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func24_msg_dealloc( p_cellcb, ptr ))
#define cServerCall_func24_msg_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func24_msg_printStatistics( p_cellcb ))
#define cServerCall_func25_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func25_msg_alloc( p_cellcb, size, ptr ))
#define cServerCall_func25_msg_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func25_msg_dealloc( p_cellcb, ptr ))
#define cServerCall_func25_msg_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func25_msg_printStatistics( p_cellcb ))
#define cServerCall_func26_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func26_sta_alloc( p_cellcb, size, ptr ))
#define cServerCall_func26_sta_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func26_sta_dealloc( p_cellcb, ptr ))
#define cServerCall_func26_sta_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func26_sta_printStatistics( p_cellcb ))
#define cServerCall_func27_array2_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func27_array2_alloc( p_cellcb, size, ptr ))
#define cServerCall_func27_array2_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func27_array2_dealloc( p_cellcb, ptr ))
#define cServerCall_func27_array2_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func27_array2_printStatistics( p_cellcb ))
#define cServerCall_func31_a_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func31_a_alloc( p_cellcb, size, ptr ))
#define cServerCall_func31_a_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func31_a_dealloc( p_cellcb, ptr ))
#define cServerCall_func31_a_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func31_a_printStatistics( p_cellcb ))
#define cServerCall_func32_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func32_sta_alloc( p_cellcb, size, ptr ))
#define cServerCall_func32_sta_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func32_sta_dealloc( p_cellcb, ptr ))
#define cServerCall_func32_sta_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func32_sta_printStatistics( p_cellcb ))
#define cServerCall_func33_str_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func33_str_alloc( p_cellcb, size, ptr ))
#define cServerCall_func33_str_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func33_str_dealloc( p_cellcb, ptr ))
#define cServerCall_func33_str_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func33_str_printStatistics( p_cellcb ))
#define cServerCall_func34_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func34_msg_alloc( p_cellcb, size, ptr ))
#define cServerCall_func34_msg_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func34_msg_dealloc( p_cellcb, ptr ))
#define cServerCall_func34_msg_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func34_msg_printStatistics( p_cellcb ))
#define cServerCall_func35_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func35_msg_alloc( p_cellcb, size, ptr ))
#define cServerCall_func35_msg_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func35_msg_dealloc( p_cellcb, ptr ))
#define cServerCall_func35_msg_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func35_msg_printStatistics( p_cellcb ))
#define cServerCall_func36_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func36_sta_alloc( p_cellcb, size, ptr ))
#define cServerCall_func36_sta_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func36_sta_dealloc( p_cellcb, ptr ))
#define cServerCall_func36_sta_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func36_sta_printStatistics( p_cellcb ))
#define cServerCall_func37_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func37_sta_alloc( p_cellcb, size, ptr ))
#define cServerCall_func37_sta_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func37_sta_dealloc( p_cellcb, ptr ))
#define cServerCall_func37_sta_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func37_sta_printStatistics( p_cellcb ))
#define cServerCall_func38_array2_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func38_array2_alloc( p_cellcb, size, ptr ))
#define cServerCall_func38_array2_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func38_array2_dealloc( p_cellcb, ptr ))
#define cServerCall_func38_array2_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func38_array2_printStatistics( p_cellcb ))
#define cServerCall_func39_arraySt_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func39_arraySt_alloc( p_cellcb, size, ptr ))
#define cServerCall_func39_arraySt_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func39_arraySt_dealloc( p_cellcb, ptr ))
#define cServerCall_func39_arraySt_printStatistics( ) \
          ((void)p_cellcb, tOpaqueUnmarshaler_sSimple_cServerCall_func39_arraySt_printStatistics( p_cellcb ))



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cErrorHandler_joined()\
		tOpaqueUnmarshaler_sSimple_is_cErrorHandler_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eService_main    tOpaqueUnmarshaler_sSimple_eService_main

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define CSERVERCALL_FUNC21_A_DEALLOC(a) \
	  cServerCall_func21_a_dealloc( (a) ); 
#define CSERVERCALL_FUNC22_STA_DEALLOC(sta) \
	  cServerCall_func22_sta_dealloc( (*(sta)).msg );  \
	  cServerCall_func22_sta_dealloc( (sta) ); 
#define CSERVERCALL_FUNC23_STR_DEALLOC(str) \
	  cServerCall_func23_str_dealloc( (str) ); 
#define CSERVERCALL_FUNC24_MSG_DEALLOC(msg) \
	  cServerCall_func24_msg_dealloc( (msg) ); 
#define CSERVERCALL_FUNC25_MSG_DEALLOC(msg, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cServerCall_func25_msg_dealloc( (msg)[i0__] );  \
	    } \
	  } \
	  cServerCall_func25_msg_dealloc( (msg) ); 
#define CSERVERCALL_FUNC26_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cServerCall_func26_sta_dealloc( (*(sta)[i0__]).msg );  \
	      cServerCall_func26_sta_dealloc( (sta)[i0__] );  \
	    } \
	  } \
	  cServerCall_func26_sta_dealloc( (sta) ); 
#define CSERVERCALL_FUNC27_ARRAY2_DEALLOC(array2) \
	  cServerCall_func27_array2_dealloc( (array2) ); 
#define CSERVERCALL_FUNC31_A_DEALLOC(a) \
	  cServerCall_func31_a_dealloc( (a) ); 
#define CSERVERCALL_FUNC32_STA_DEALLOC(sta) \
	  cServerCall_func32_sta_dealloc( (*(sta)).msg );  \
	  cServerCall_func32_sta_dealloc( (sta) ); 
#define CSERVERCALL_FUNC33_STR_DEALLOC(str) \
	  cServerCall_func33_str_dealloc( (str) ); 
#define CSERVERCALL_FUNC34_MSG_DEALLOC(msg) \
	  cServerCall_func34_msg_dealloc( (msg) ); 
#define CSERVERCALL_FUNC35_MSG_DEALLOC(msg, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cServerCall_func35_msg_dealloc( (msg)[i0__] );  \
	    } \
	  } \
	  cServerCall_func35_msg_dealloc( (msg) ); 
#define CSERVERCALL_FUNC36_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cServerCall_func36_sta_dealloc( (sta)[i0__].msg );  \
	    } \
	  } \
	  cServerCall_func36_sta_dealloc( (sta) ); 
#define CSERVERCALL_FUNC37_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cServerCall_func37_sta_dealloc( (*(sta)[i0__]).msg );  \
	      cServerCall_func37_sta_dealloc( (sta)[i0__] );  \
	    } \
	  } \
	  cServerCall_func37_sta_dealloc( (sta) ); 
#define CSERVERCALL_FUNC38_ARRAY2_DEALLOC(array2) \
	  cServerCall_func38_array2_dealloc( (array2) ); 
#define CSERVERCALL_FUNC39_ARRAYST_DEALLOC(arraySt) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < 2; i0__++ ){  \
	      cServerCall_func39_arraySt_dealloc( (*(*(arraySt))[i0__]).msg );  \
	      cServerCall_func39_arraySt_dealloc( (*(arraySt))[i0__] );  \
	    } \
	  } \
	  cServerCall_func39_arraySt_dealloc( (arraySt) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define CSERVERCALL_FUNC21_A_DEALLOC_RESET(a) \
	  if( (a) ){ \
	    cServerCall_func21_a_dealloc( (a) );  \
	  }
#define CSERVERCALL_FUNC22_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      cServerCall_func22_sta_dealloc( (*(sta)).msg );  \
	    } \
	    cServerCall_func22_sta_dealloc( (sta) );  \
	  }
#define CSERVERCALL_FUNC23_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    cServerCall_func23_str_dealloc( (str) );  \
	  }
#define CSERVERCALL_FUNC24_MSG_DEALLOC_RESET(msg) \
	  if( (msg) ){ \
	    cServerCall_func24_msg_dealloc( (msg) );  \
	  }
#define CSERVERCALL_FUNC25_MSG_DEALLOC_RESET(msg, count__) \
	  if( (msg) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (msg)[i0__] ){ \
	          cServerCall_func25_msg_dealloc( (msg)[i0__] );  \
	        } \
	      } \
	    } \
	    cServerCall_func25_msg_dealloc( (msg) );  \
	  }
#define CSERVERCALL_FUNC26_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__] ){ \
	          if( (*(sta)[i0__]).msg ){ \
	            cServerCall_func26_sta_dealloc( (*(sta)[i0__]).msg );  \
	          } \
	          cServerCall_func26_sta_dealloc( (sta)[i0__] );  \
	        } \
	      } \
	    } \
	    cServerCall_func26_sta_dealloc( (sta) );  \
	  }
#define CSERVERCALL_FUNC27_ARRAY2_DEALLOC_RESET(array2) \
	  if( (array2) ){ \
	    cServerCall_func27_array2_dealloc( (array2) );  \
	  }
#define CSERVERCALL_FUNC31_A_DEALLOC_RESET(a) \
	  if( (a) ){ \
	    cServerCall_func31_a_dealloc( (a) );  \
	  }
#define CSERVERCALL_FUNC32_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      cServerCall_func32_sta_dealloc( (*(sta)).msg );  \
	    } \
	    cServerCall_func32_sta_dealloc( (sta) );  \
	  }
#define CSERVERCALL_FUNC33_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    cServerCall_func33_str_dealloc( (str) );  \
	  }
#define CSERVERCALL_FUNC34_MSG_DEALLOC_RESET(msg) \
	  if( (msg) ){ \
	    cServerCall_func34_msg_dealloc( (msg) );  \
	  }
#define CSERVERCALL_FUNC35_MSG_DEALLOC_RESET(msg, count__) \
	  if( (msg) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (msg)[i0__] ){ \
	          cServerCall_func35_msg_dealloc( (msg)[i0__] );  \
	        } \
	      } \
	    } \
	    cServerCall_func35_msg_dealloc( (msg) );  \
	  }
#define CSERVERCALL_FUNC36_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__].msg ){ \
	          cServerCall_func36_sta_dealloc( (sta)[i0__].msg );  \
	        } \
	      } \
	    } \
	    cServerCall_func36_sta_dealloc( (sta) );  \
	  }
#define CSERVERCALL_FUNC37_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__] ){ \
	          if( (*(sta)[i0__]).msg ){ \
	            cServerCall_func37_sta_dealloc( (*(sta)[i0__]).msg );  \
	          } \
	          cServerCall_func37_sta_dealloc( (sta)[i0__] );  \
	        } \
	      } \
	    } \
	    cServerCall_func37_sta_dealloc( (sta) );  \
	  }
#define CSERVERCALL_FUNC38_ARRAY2_DEALLOC_RESET(array2) \
	  if( (array2) ){ \
	    cServerCall_func38_array2_dealloc( (array2) );  \
	  }
#define CSERVERCALL_FUNC39_ARRAYST_DEALLOC_RESET(arraySt) \
	  if( (arraySt) ){ \
	    { int_t  i1__; \
	      for( i1__ = 0; i1__ < 2; i1__++ ){  \
	        if( (*(arraySt))[i1__] ){ \
	          if( (*(*(arraySt))[i1__]).msg ){ \
	            cServerCall_func39_arraySt_dealloc( (*(*(arraySt))[i1__]).msg );  \
	          } \
	          cServerCall_func39_arraySt_dealloc( (*(arraySt))[i1__] );  \
	        } \
	      } \
	    } \
	    cServerCall_func39_arraySt_dealloc( (arraySt) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tOpaqueUnmarshaler_sSimple_TECSGENH */
