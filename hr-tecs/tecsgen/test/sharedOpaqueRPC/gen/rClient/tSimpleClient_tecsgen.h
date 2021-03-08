/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSimpleClient_TECSGEN_H
#define tSimpleClient_TECSGEN_H

/*
 * celltype          :  tSimpleClient
 * global name       :  tSimpleClient
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
#include "sSysLog_tecsgen.h"
#include "sSimple_tecsgen.h"
#include "sSocketClientOpener_tecsgen.h"
#include "sTask_tecsgen.h"
#include "sTaskBody_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tSimpleClient_CB {
    int  dummy;
} tSimpleClient_CB;
extern tSimpleClient_CB  tSimpleClient_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tSimpleClient_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tSimpleClient_eMain_main(tSimpleClient_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSimpleClient_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTracePlugin_sSysLog_tecsgen.h"
#include "tTracePlugin_sSimple_tecsgen.h"
#include "tTracePlugin_sSocketClientOpener_tecsgen.h"
#include "tTracePlugin_sTask_tecsgen.h"
#include "tTracePlugin_sAlloc_tecsgen.h"
#ifdef  tSimpleClient_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSimpleClient_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSimpleClient_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSimpleClient_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSimpleClient_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSimpleClient_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tSimpleClient__require_call_port_tSysLog_eSysLog_write( p_that, prio, p_syslog ) \
	  tTracePlugin_sSysLog_eThroughEntry_write( \
	   &tTracePlugin_sSysLog_CB_tab[0], (prio), (p_syslog) )
#define tSimpleClient__require_call_port_tSysLog_eSysLog_read( p_that, p_syslog ) \
	  tTracePlugin_sSysLog_eThroughEntry_read( \
	   &tTracePlugin_sSysLog_CB_tab[0], (p_syslog) )
#define tSimpleClient__require_call_port_tSysLog_eSysLog_mask( p_that, logmask, lowmask ) \
	  tTracePlugin_sSysLog_eThroughEntry_mask( \
	   &tTracePlugin_sSysLog_CB_tab[0], (logmask), (lowmask) )
#define tSimpleClient__require_call_port_tSysLog_eSysLog_refer( p_that, pk_rlog ) \
	  tTracePlugin_sSysLog_eThroughEntry_refer( \
	   &tTracePlugin_sSysLog_CB_tab[0], (pk_rlog) )
#define tSimpleClient_cCall_shutdown( p_that ) \
	  tTracePlugin_sSimple_eThroughEntry_shutdown( \
	   &tTracePlugin_sSimple_CB_tab[0] )
#define tSimpleClient_cCall_func1( p_that, inval ) \
	  tTracePlugin_sSimple_eThroughEntry_func1( \
	   &tTracePlugin_sSimple_CB_tab[0], (inval) )
#define tSimpleClient_cCall_func2( p_that, str ) \
	  tTracePlugin_sSimple_eThroughEntry_func2( \
	   &tTracePlugin_sSimple_CB_tab[0], (str) )
#define tSimpleClient_cCall_func3( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func3( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tSimpleClient_cCall_func4( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func4( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tSimpleClient_cCall_func5( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func5( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tSimpleClient_cCall_func6( p_that, array ) \
	  tTracePlugin_sSimple_eThroughEntry_func6( \
	   &tTracePlugin_sSimple_CB_tab[0], (array) )
#define tSimpleClient_cCall_func7( p_that, array2 ) \
	  tTracePlugin_sSimple_eThroughEntry_func7( \
	   &tTracePlugin_sSimple_CB_tab[0], (array2) )
#define tSimpleClient_cCall_func8( p_that, arraySt ) \
	  tTracePlugin_sSimple_eThroughEntry_func8( \
	   &tTracePlugin_sSimple_CB_tab[0], (arraySt) )
#define tSimpleClient_cCall_func9( p_that, arraySt ) \
	  tTracePlugin_sSimple_eThroughEntry_func9( \
	   &tTracePlugin_sSimple_CB_tab[0], (arraySt) )
#define tSimpleClient_cCall_func10( p_that, val ) \
	  tTracePlugin_sSimple_eThroughEntry_func10( \
	   &tTracePlugin_sSimple_CB_tab[0], (val) )
#define tSimpleClient_cCall_func11( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func11( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tSimpleClient_cCall_func12( p_that, msg ) \
	  tTracePlugin_sSimple_eThroughEntry_func12( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg) )
#define tSimpleClient_cCall_func13( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func13( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tSimpleClient_cCall_func14( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func14( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tSimpleClient_cCall_func15( p_that, array1 ) \
	  tTracePlugin_sSimple_eThroughEntry_func15( \
	   &tTracePlugin_sSimple_CB_tab[0], (array1) )
#define tSimpleClient_cCall_func40( p_that, val ) \
	  tTracePlugin_sSimple_eThroughEntry_func40( \
	   &tTracePlugin_sSimple_CB_tab[0], (val) )
#define tSimpleClient_cCall_func41( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func41( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tSimpleClient_cCall_func42( p_that, msg ) \
	  tTracePlugin_sSimple_eThroughEntry_func42( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg) )
#define tSimpleClient_cCall_func43( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func43( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tSimpleClient_cCall_func21( p_that, a ) \
	  tTracePlugin_sSimple_eThroughEntry_func21( \
	   &tTracePlugin_sSimple_CB_tab[0], (a) )
#define tSimpleClient_cCall_func22( p_that, sta ) \
	  tTracePlugin_sSimple_eThroughEntry_func22( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta) )
#define tSimpleClient_cCall_func23( p_that, str ) \
	  tTracePlugin_sSimple_eThroughEntry_func23( \
	   &tTracePlugin_sSimple_CB_tab[0], (str) )
#define tSimpleClient_cCall_func24( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func24( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tSimpleClient_cCall_func25( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func25( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tSimpleClient_cCall_func26( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func26( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tSimpleClient_cCall_func27( p_that, array2 ) \
	  tTracePlugin_sSimple_eThroughEntry_func27( \
	   &tTracePlugin_sSimple_CB_tab[0], (array2) )
#define tSimpleClient_cCall_func31( p_that, a ) \
	  tTracePlugin_sSimple_eThroughEntry_func31( \
	   &tTracePlugin_sSimple_CB_tab[0], (a) )
#define tSimpleClient_cCall_func32( p_that, sta ) \
	  tTracePlugin_sSimple_eThroughEntry_func32( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta) )
#define tSimpleClient_cCall_func33( p_that, str ) \
	  tTracePlugin_sSimple_eThroughEntry_func33( \
	   &tTracePlugin_sSimple_CB_tab[0], (str) )
#define tSimpleClient_cCall_func34( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func34( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tSimpleClient_cCall_func35( p_that, msg, len, msglen ) \
	  tTracePlugin_sSimple_eThroughEntry_func35( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len), (msglen) )
#define tSimpleClient_cCall_func36( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func36( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tSimpleClient_cCall_func37( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func37( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tSimpleClient_cCall_func38( p_that, array2 ) \
	  tTracePlugin_sSimple_eThroughEntry_func38( \
	   &tTracePlugin_sSimple_CB_tab[0], (array2) )
#define tSimpleClient_cCall_func39( p_that, arraySt ) \
	  tTracePlugin_sSimple_eThroughEntry_func39( \
	   &tTracePlugin_sSimple_CB_tab[0], (arraySt) )
#define tSimpleClient_cOpener_open( p_that, serverAddr, portNo, tmo ) \
	  tTracePlugin_sSocketClientOpener_eThroughEntry_open( \
	   &tTracePlugin_sSocketClientOpener_CB_tab[0], (serverAddr), (portNo), (tmo) )
#define tSimpleClient_cOpener_simpleOpen( p_that, tmo ) \
	  tTracePlugin_sSocketClientOpener_eThroughEntry_simpleOpen( \
	   &tTracePlugin_sSocketClientOpener_CB_tab[0], (tmo) )
#define tSimpleClient_cOpener_close( p_that, tmo ) \
	  tTracePlugin_sSocketClientOpener_eThroughEntry_close( \
	   &tTracePlugin_sSocketClientOpener_CB_tab[0], (tmo) )
#define tSimpleClient_cSampleTask_activate( p_that ) \
	  tTracePlugin_sTask_eThroughEntry_activate( \
	   &tTracePlugin_sTask_CB_tab[0] )
#define tSimpleClient_cSampleTask_suspend( p_that ) \
	  tTracePlugin_sTask_eThroughEntry_suspend( \
	   &tTracePlugin_sTask_CB_tab[0] )
#define tSimpleClient_cSampleTask_resume( p_that ) \
	  tTracePlugin_sTask_eThroughEntry_resume( \
	   &tTracePlugin_sTask_CB_tab[0] )
#define tSimpleClient_cCall_func21_a_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func21_a_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func21_a_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func22_sta_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func22_sta_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func22_sta_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func23_str_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func23_str_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func23_str_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func24_msg_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func24_msg_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func24_msg_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func25_msg_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func25_msg_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func25_msg_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func26_sta_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func26_sta_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func26_sta_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func27_array2_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func27_array2_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func27_array2_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func31_a_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func31_a_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func31_a_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func32_sta_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func32_sta_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func32_sta_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func33_str_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func33_str_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func33_str_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func34_msg_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func34_msg_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func34_msg_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func35_msg_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func35_msg_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func35_msg_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func36_sta_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func36_sta_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func36_sta_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func37_sta_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func37_sta_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func37_sta_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func38_array2_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func38_array2_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func38_array2_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func39_arraySt_alloc( p_that, size, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_alloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func39_arraySt_dealloc( p_that, ptr ) \
	  tTracePlugin_sAlloc_eThroughEntry_dealloc( \
	   &tTracePlugin_sAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func39_arraySt_printStatistics( p_that ) \
	  tTracePlugin_sAlloc_eThroughEntry_printStatistics( \
	   &tTracePlugin_sAlloc_CB_tab[0] )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eMain */
void           tSimpleClient_eMain_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tSimpleClient_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSimpleClient_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSimpleClient_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSimpleClient_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define write( prio, p_syslog ) \
          ((void)p_cellcb, tSimpleClient__require_call_port_tSysLog_eSysLog_write( p_cellcb, prio, p_syslog ))
#define read( p_syslog ) \
          ((void)p_cellcb, tSimpleClient__require_call_port_tSysLog_eSysLog_read( p_cellcb, p_syslog ))
#define mask( logmask, lowmask ) \
          ((void)p_cellcb, tSimpleClient__require_call_port_tSysLog_eSysLog_mask( p_cellcb, logmask, lowmask ))
#define refer( pk_rlog ) \
          ((void)p_cellcb, tSimpleClient__require_call_port_tSysLog_eSysLog_refer( p_cellcb, pk_rlog ))
#define cCall_shutdown( ) \
          ((void)p_cellcb, tSimpleClient_cCall_shutdown( p_cellcb ))
#define cCall_func1( inval ) \
          ((void)p_cellcb, tSimpleClient_cCall_func1( p_cellcb, inval ))
#define cCall_func2( str ) \
          ((void)p_cellcb, tSimpleClient_cCall_func2( p_cellcb, str ))
#define cCall_func3( msg, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func3( p_cellcb, msg, len ))
#define cCall_func4( msg, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func4( p_cellcb, msg, len ))
#define cCall_func5( sta, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func5( p_cellcb, sta, len ))
#define cCall_func6( array ) \
          ((void)p_cellcb, tSimpleClient_cCall_func6( p_cellcb, array ))
#define cCall_func7( array2 ) \
          ((void)p_cellcb, tSimpleClient_cCall_func7( p_cellcb, array2 ))
#define cCall_func8( arraySt ) \
          ((void)p_cellcb, tSimpleClient_cCall_func8( p_cellcb, arraySt ))
#define cCall_func9( arraySt ) \
          ((void)p_cellcb, tSimpleClient_cCall_func9( p_cellcb, arraySt ))
#define cCall_func10( val ) \
          ((void)p_cellcb, tSimpleClient_cCall_func10( p_cellcb, val ))
#define cCall_func11( msg, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func11( p_cellcb, msg, len ))
#define cCall_func12( msg ) \
          ((void)p_cellcb, tSimpleClient_cCall_func12( p_cellcb, msg ))
#define cCall_func13( sta, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func13( p_cellcb, sta, len ))
#define cCall_func14( sta, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func14( p_cellcb, sta, len ))
#define cCall_func15( array1 ) \
          ((void)p_cellcb, tSimpleClient_cCall_func15( p_cellcb, array1 ))
#define cCall_func40( val ) \
          ((void)p_cellcb, tSimpleClient_cCall_func40( p_cellcb, val ))
#define cCall_func41( msg, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func41( p_cellcb, msg, len ))
#define cCall_func42( msg ) \
          ((void)p_cellcb, tSimpleClient_cCall_func42( p_cellcb, msg ))
#define cCall_func43( sta, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func43( p_cellcb, sta, len ))
#define cCall_func21( a ) \
          ((void)p_cellcb, tSimpleClient_cCall_func21( p_cellcb, a ))
#define cCall_func22( sta ) \
          ((void)p_cellcb, tSimpleClient_cCall_func22( p_cellcb, sta ))
#define cCall_func23( str ) \
          ((void)p_cellcb, tSimpleClient_cCall_func23( p_cellcb, str ))
#define cCall_func24( msg, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func24( p_cellcb, msg, len ))
#define cCall_func25( msg, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func25( p_cellcb, msg, len ))
#define cCall_func26( sta, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func26( p_cellcb, sta, len ))
#define cCall_func27( array2 ) \
          ((void)p_cellcb, tSimpleClient_cCall_func27( p_cellcb, array2 ))
#define cCall_func31( a ) \
          ((void)p_cellcb, tSimpleClient_cCall_func31( p_cellcb, a ))
#define cCall_func32( sta ) \
          ((void)p_cellcb, tSimpleClient_cCall_func32( p_cellcb, sta ))
#define cCall_func33( str ) \
          ((void)p_cellcb, tSimpleClient_cCall_func33( p_cellcb, str ))
#define cCall_func34( msg, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func34( p_cellcb, msg, len ))
#define cCall_func35( msg, len, msglen ) \
          ((void)p_cellcb, tSimpleClient_cCall_func35( p_cellcb, msg, len, msglen ))
#define cCall_func36( sta, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func36( p_cellcb, sta, len ))
#define cCall_func37( sta, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func37( p_cellcb, sta, len ))
#define cCall_func38( array2 ) \
          ((void)p_cellcb, tSimpleClient_cCall_func38( p_cellcb, array2 ))
#define cCall_func39( arraySt ) \
          ((void)p_cellcb, tSimpleClient_cCall_func39( p_cellcb, arraySt ))
#define cOpener_open( serverAddr, portNo, tmo ) \
          ((void)p_cellcb, tSimpleClient_cOpener_open( p_cellcb, serverAddr, portNo, tmo ))
#define cOpener_simpleOpen( tmo ) \
          ((void)p_cellcb, tSimpleClient_cOpener_simpleOpen( p_cellcb, tmo ))
#define cOpener_close( tmo ) \
          ((void)p_cellcb, tSimpleClient_cOpener_close( p_cellcb, tmo ))
#define cSampleTask_activate( ) \
          ((void)p_cellcb, tSimpleClient_cSampleTask_activate( p_cellcb ))
#define cSampleTask_suspend( ) \
          ((void)p_cellcb, tSimpleClient_cSampleTask_suspend( p_cellcb ))
#define cSampleTask_resume( ) \
          ((void)p_cellcb, tSimpleClient_cSampleTask_resume( p_cellcb ))
#define cCall_func21_a_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func21_a_alloc( p_cellcb, size, ptr ))
#define cCall_func21_a_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func21_a_dealloc( p_cellcb, ptr ))
#define cCall_func21_a_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func21_a_printStatistics( p_cellcb ))
#define cCall_func22_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func22_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func22_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func22_sta_dealloc( p_cellcb, ptr ))
#define cCall_func22_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func22_sta_printStatistics( p_cellcb ))
#define cCall_func23_str_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func23_str_alloc( p_cellcb, size, ptr ))
#define cCall_func23_str_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func23_str_dealloc( p_cellcb, ptr ))
#define cCall_func23_str_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func23_str_printStatistics( p_cellcb ))
#define cCall_func24_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func24_msg_alloc( p_cellcb, size, ptr ))
#define cCall_func24_msg_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func24_msg_dealloc( p_cellcb, ptr ))
#define cCall_func24_msg_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func24_msg_printStatistics( p_cellcb ))
#define cCall_func25_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func25_msg_alloc( p_cellcb, size, ptr ))
#define cCall_func25_msg_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func25_msg_dealloc( p_cellcb, ptr ))
#define cCall_func25_msg_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func25_msg_printStatistics( p_cellcb ))
#define cCall_func26_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func26_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func26_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func26_sta_dealloc( p_cellcb, ptr ))
#define cCall_func26_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func26_sta_printStatistics( p_cellcb ))
#define cCall_func27_array2_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func27_array2_alloc( p_cellcb, size, ptr ))
#define cCall_func27_array2_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func27_array2_dealloc( p_cellcb, ptr ))
#define cCall_func27_array2_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func27_array2_printStatistics( p_cellcb ))
#define cCall_func31_a_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func31_a_alloc( p_cellcb, size, ptr ))
#define cCall_func31_a_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func31_a_dealloc( p_cellcb, ptr ))
#define cCall_func31_a_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func31_a_printStatistics( p_cellcb ))
#define cCall_func32_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func32_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func32_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func32_sta_dealloc( p_cellcb, ptr ))
#define cCall_func32_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func32_sta_printStatistics( p_cellcb ))
#define cCall_func33_str_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func33_str_alloc( p_cellcb, size, ptr ))
#define cCall_func33_str_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func33_str_dealloc( p_cellcb, ptr ))
#define cCall_func33_str_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func33_str_printStatistics( p_cellcb ))
#define cCall_func34_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func34_msg_alloc( p_cellcb, size, ptr ))
#define cCall_func34_msg_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func34_msg_dealloc( p_cellcb, ptr ))
#define cCall_func34_msg_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func34_msg_printStatistics( p_cellcb ))
#define cCall_func35_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func35_msg_alloc( p_cellcb, size, ptr ))
#define cCall_func35_msg_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func35_msg_dealloc( p_cellcb, ptr ))
#define cCall_func35_msg_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func35_msg_printStatistics( p_cellcb ))
#define cCall_func36_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func36_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func36_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func36_sta_dealloc( p_cellcb, ptr ))
#define cCall_func36_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func36_sta_printStatistics( p_cellcb ))
#define cCall_func37_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func37_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func37_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func37_sta_dealloc( p_cellcb, ptr ))
#define cCall_func37_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func37_sta_printStatistics( p_cellcb ))
#define cCall_func38_array2_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func38_array2_alloc( p_cellcb, size, ptr ))
#define cCall_func38_array2_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func38_array2_dealloc( p_cellcb, ptr ))
#define cCall_func38_array2_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func38_array2_printStatistics( p_cellcb ))
#define cCall_func39_arraySt_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func39_arraySt_alloc( p_cellcb, size, ptr ))
#define cCall_func39_arraySt_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func39_arraySt_dealloc( p_cellcb, ptr ))
#define cCall_func39_arraySt_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func39_arraySt_printStatistics( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tSimpleClient_eMain_main

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define CCALL_FUNC21_A_DEALLOC(a) \
	  cCall_func21_a_dealloc( (a) ); 
#define CCALL_FUNC22_STA_DEALLOC(sta) \
	  cCall_func22_sta_dealloc( (*(sta)).msg );  \
	  cCall_func22_sta_dealloc( (sta) ); 
#define CCALL_FUNC23_STR_DEALLOC(str) \
	  cCall_func23_str_dealloc( (str) ); 
#define CCALL_FUNC24_MSG_DEALLOC(msg) \
	  cCall_func24_msg_dealloc( (msg) ); 
#define CCALL_FUNC25_MSG_DEALLOC(msg, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cCall_func25_msg_dealloc( (msg)[i0__] );  \
	    } \
	  } \
	  cCall_func25_msg_dealloc( (msg) ); 
#define CCALL_FUNC26_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cCall_func26_sta_dealloc( (*(sta)[i0__]).msg );  \
	      cCall_func26_sta_dealloc( (sta)[i0__] );  \
	    } \
	  } \
	  cCall_func26_sta_dealloc( (sta) ); 
#define CCALL_FUNC27_ARRAY2_DEALLOC(array2) \
	  cCall_func27_array2_dealloc( (array2) ); 
#define CCALL_FUNC31_A_DEALLOC(a) \
	  cCall_func31_a_dealloc( (a) ); 
#define CCALL_FUNC32_STA_DEALLOC(sta) \
	  cCall_func32_sta_dealloc( (*(sta)).msg );  \
	  cCall_func32_sta_dealloc( (sta) ); 
#define CCALL_FUNC33_STR_DEALLOC(str) \
	  cCall_func33_str_dealloc( (str) ); 
#define CCALL_FUNC34_MSG_DEALLOC(msg) \
	  cCall_func34_msg_dealloc( (msg) ); 
#define CCALL_FUNC35_MSG_DEALLOC(msg, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cCall_func35_msg_dealloc( (msg)[i0__] );  \
	    } \
	  } \
	  cCall_func35_msg_dealloc( (msg) ); 
#define CCALL_FUNC36_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cCall_func36_sta_dealloc( (sta)[i0__].msg );  \
	    } \
	  } \
	  cCall_func36_sta_dealloc( (sta) ); 
#define CCALL_FUNC37_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cCall_func37_sta_dealloc( (*(sta)[i0__]).msg );  \
	      cCall_func37_sta_dealloc( (sta)[i0__] );  \
	    } \
	  } \
	  cCall_func37_sta_dealloc( (sta) ); 
#define CCALL_FUNC38_ARRAY2_DEALLOC(array2) \
	  cCall_func38_array2_dealloc( (array2) ); 
#define CCALL_FUNC39_ARRAYST_DEALLOC(arraySt) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < 2; i0__++ ){  \
	      cCall_func39_arraySt_dealloc( (*(*(arraySt))[i0__]).msg );  \
	      cCall_func39_arraySt_dealloc( (*(arraySt))[i0__] );  \
	    } \
	  } \
	  cCall_func39_arraySt_dealloc( (arraySt) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define CCALL_FUNC21_A_DEALLOC_RESET(a) \
	  if( (a) ){ \
	    cCall_func21_a_dealloc( (a) );  \
	  }
#define CCALL_FUNC22_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      cCall_func22_sta_dealloc( (*(sta)).msg );  \
	    } \
	    cCall_func22_sta_dealloc( (sta) );  \
	  }
#define CCALL_FUNC23_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    cCall_func23_str_dealloc( (str) );  \
	  }
#define CCALL_FUNC24_MSG_DEALLOC_RESET(msg) \
	  if( (msg) ){ \
	    cCall_func24_msg_dealloc( (msg) );  \
	  }
#define CCALL_FUNC25_MSG_DEALLOC_RESET(msg, count__) \
	  if( (msg) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (msg)[i0__] ){ \
	          cCall_func25_msg_dealloc( (msg)[i0__] );  \
	        } \
	      } \
	    } \
	    cCall_func25_msg_dealloc( (msg) );  \
	  }
#define CCALL_FUNC26_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__] ){ \
	          if( (*(sta)[i0__]).msg ){ \
	            cCall_func26_sta_dealloc( (*(sta)[i0__]).msg );  \
	          } \
	          cCall_func26_sta_dealloc( (sta)[i0__] );  \
	        } \
	      } \
	    } \
	    cCall_func26_sta_dealloc( (sta) );  \
	  }
#define CCALL_FUNC27_ARRAY2_DEALLOC_RESET(array2) \
	  if( (array2) ){ \
	    cCall_func27_array2_dealloc( (array2) );  \
	  }
#define CCALL_FUNC31_A_DEALLOC_RESET(a) \
	  if( (a) ){ \
	    cCall_func31_a_dealloc( (a) );  \
	  }
#define CCALL_FUNC32_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      cCall_func32_sta_dealloc( (*(sta)).msg );  \
	    } \
	    cCall_func32_sta_dealloc( (sta) );  \
	  }
#define CCALL_FUNC33_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    cCall_func33_str_dealloc( (str) );  \
	  }
#define CCALL_FUNC34_MSG_DEALLOC_RESET(msg) \
	  if( (msg) ){ \
	    cCall_func34_msg_dealloc( (msg) );  \
	  }
#define CCALL_FUNC35_MSG_DEALLOC_RESET(msg, count__) \
	  if( (msg) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (msg)[i0__] ){ \
	          cCall_func35_msg_dealloc( (msg)[i0__] );  \
	        } \
	      } \
	    } \
	    cCall_func35_msg_dealloc( (msg) );  \
	  }
#define CCALL_FUNC36_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__].msg ){ \
	          cCall_func36_sta_dealloc( (sta)[i0__].msg );  \
	        } \
	      } \
	    } \
	    cCall_func36_sta_dealloc( (sta) );  \
	  }
#define CCALL_FUNC37_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__] ){ \
	          if( (*(sta)[i0__]).msg ){ \
	            cCall_func37_sta_dealloc( (*(sta)[i0__]).msg );  \
	          } \
	          cCall_func37_sta_dealloc( (sta)[i0__] );  \
	        } \
	      } \
	    } \
	    cCall_func37_sta_dealloc( (sta) );  \
	  }
#define CCALL_FUNC38_ARRAY2_DEALLOC_RESET(array2) \
	  if( (array2) ){ \
	    cCall_func38_array2_dealloc( (array2) );  \
	  }
#define CCALL_FUNC39_ARRAYST_DEALLOC_RESET(arraySt) \
	  if( (arraySt) ){ \
	    { int_t  i1__; \
	      for( i1__ = 0; i1__ < 2; i1__++ ){  \
	        if( (*(arraySt))[i1__] ){ \
	          if( (*(*(arraySt))[i1__]).msg ){ \
	            cCall_func39_arraySt_dealloc( (*(*(arraySt))[i1__]).msg );  \
	          } \
	          cCall_func39_arraySt_dealloc( (*(arraySt))[i1__] );  \
	        } \
	      } \
	    } \
	    cCall_func39_arraySt_dealloc( (arraySt) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSimpleClient_TECSGENH */
