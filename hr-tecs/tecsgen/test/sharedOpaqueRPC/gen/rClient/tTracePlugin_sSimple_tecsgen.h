/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTracePlugin_sSimple_TECSGEN_H
#define tTracePlugin_sSimple_TECSGEN_H

/*
 * celltype          :  tTracePlugin_sSimple
 * global name       :  tTracePlugin_sSimple
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
#include "sSimple_tecsgen.h"
#include "sSysLog_tecsgen.h"
#include "sKernel_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTracePlugin_sSimple_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        probeName_str;
    char_t*        from_str;
}  tTracePlugin_sSimple_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTracePlugin_sSimple_CB_tab           tTracePlugin_sSimple_INIB_tab
#define tTracePlugin_sSimple_SINGLE_CELL_CB   tTracePlugin_sSimple_SINGLE_CELL_INIB
#define tTracePlugin_sSimple_CB               tTracePlugin_sSimple_INIB
#define tag_tTracePlugin_sSimple_CB           tag_tTracePlugin_sSimple_INIB

extern tTracePlugin_sSimple_CB  tTracePlugin_sSimple_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTracePlugin_sSimple_INIB *tTracePlugin_sSimple_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSimple */
void         tTracePlugin_sSimple_eThroughEntry_shutdown(tTracePlugin_sSimple_IDX idx);
ER           tTracePlugin_sSimple_eThroughEntry_func1(tTracePlugin_sSimple_IDX idx, int32_t inval);
ER           tTracePlugin_sSimple_eThroughEntry_func2(tTracePlugin_sSimple_IDX idx, const char_t* str);
ER           tTracePlugin_sSimple_eThroughEntry_func3(tTracePlugin_sSimple_IDX idx, const char_t* msg, int32_t len);
ER           tTracePlugin_sSimple_eThroughEntry_func4(tTracePlugin_sSimple_IDX idx, const char_t** msg, int32_t len);
ER           tTracePlugin_sSimple_eThroughEntry_func5(tTracePlugin_sSimple_IDX idx, const STA** sta, int32_t len);
ER           tTracePlugin_sSimple_eThroughEntry_func6(tTracePlugin_sSimple_IDX idx, const int8_t array[8]);
ER           tTracePlugin_sSimple_eThroughEntry_func7(tTracePlugin_sSimple_IDX idx, const int8_t array2[8][4]);
ER           tTracePlugin_sSimple_eThroughEntry_func8(tTracePlugin_sSimple_IDX idx, const STA arraySt[2]);
ER           tTracePlugin_sSimple_eThroughEntry_func9(tTracePlugin_sSimple_IDX idx, const STA* arraySt[2]);
ER           tTracePlugin_sSimple_eThroughEntry_func10(tTracePlugin_sSimple_IDX idx, int32_t* val);
ER           tTracePlugin_sSimple_eThroughEntry_func11(tTracePlugin_sSimple_IDX idx, char_t* msg, int32_t len);
ER           tTracePlugin_sSimple_eThroughEntry_func12(tTracePlugin_sSimple_IDX idx, char_t** msg);
ER           tTracePlugin_sSimple_eThroughEntry_func13(tTracePlugin_sSimple_IDX idx, STB* sta, int32_t len);
ER           tTracePlugin_sSimple_eThroughEntry_func14(tTracePlugin_sSimple_IDX idx, STB** sta, int32_t len);
ER           tTracePlugin_sSimple_eThroughEntry_func15(tTracePlugin_sSimple_IDX idx, int8_t(* array1)[8]);
ER           tTracePlugin_sSimple_eThroughEntry_func40(tTracePlugin_sSimple_IDX idx, int32_t* val);
ER           tTracePlugin_sSimple_eThroughEntry_func41(tTracePlugin_sSimple_IDX idx, char_t* msg, int32_t len);
ER           tTracePlugin_sSimple_eThroughEntry_func42(tTracePlugin_sSimple_IDX idx, char_t** msg);
ER           tTracePlugin_sSimple_eThroughEntry_func43(tTracePlugin_sSimple_IDX idx, STA* sta, int32_t len);
ER           tTracePlugin_sSimple_eThroughEntry_func21(tTracePlugin_sSimple_IDX idx, int32_t* a);
ER           tTracePlugin_sSimple_eThroughEntry_func22(tTracePlugin_sSimple_IDX idx, STA* sta);
ER           tTracePlugin_sSimple_eThroughEntry_func23(tTracePlugin_sSimple_IDX idx, char_t* str);
ER           tTracePlugin_sSimple_eThroughEntry_func24(tTracePlugin_sSimple_IDX idx, char_t* msg, int32_t len);
ER           tTracePlugin_sSimple_eThroughEntry_func25(tTracePlugin_sSimple_IDX idx, char_t** msg, int32_t len);
ER           tTracePlugin_sSimple_eThroughEntry_func26(tTracePlugin_sSimple_IDX idx, STA** sta, int32_t len);
ER           tTracePlugin_sSimple_eThroughEntry_func27(tTracePlugin_sSimple_IDX idx, int8_t(* array2)[8]);
ER           tTracePlugin_sSimple_eThroughEntry_func31(tTracePlugin_sSimple_IDX idx, int32_t** a);
ER           tTracePlugin_sSimple_eThroughEntry_func32(tTracePlugin_sSimple_IDX idx, STA** sta);
ER           tTracePlugin_sSimple_eThroughEntry_func33(tTracePlugin_sSimple_IDX idx, char_t** str);
ER           tTracePlugin_sSimple_eThroughEntry_func34(tTracePlugin_sSimple_IDX idx, char_t** msg, int32_t* len);
ER           tTracePlugin_sSimple_eThroughEntry_func35(tTracePlugin_sSimple_IDX idx, char_t*** msg, int32_t* len, int32_t* msglen);
ER           tTracePlugin_sSimple_eThroughEntry_func36(tTracePlugin_sSimple_IDX idx, STA** sta, int32_t* len);
ER           tTracePlugin_sSimple_eThroughEntry_func37(tTracePlugin_sSimple_IDX idx, STA*** sta, int32_t* len);
ER           tTracePlugin_sSimple_eThroughEntry_func38(tTracePlugin_sSimple_IDX idx, int8_t(** array2)[8]);
ER           tTracePlugin_sSimple_eThroughEntry_func39(tTracePlugin_sSimple_IDX idx, STA*(** arraySt)[2]);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTracePlugin_sSimple_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tOpaqueMarshaler_sSimple_tecsgen.h"
#include "tSysLog_tecsgen.h"
#include "tKernel_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tTracePlugin_sSimple_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTracePlugin_sSimple_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTracePlugin_sSimple_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tTracePlugin_sSimple_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTracePlugin_sSimple_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTracePlugin_sSimple_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTracePlugin_sSimple_ATTR_probeName_str( p_that )	((p_that)->probeName_str)
#define tTracePlugin_sSimple_ATTR_from_str( p_that )	((p_that)->from_str)

#define tTracePlugin_sSimple_GET_probeName_str(p_that)	((p_that)->probeName_str)
#define tTracePlugin_sSimple_GET_from_str(p_that)	((p_that)->from_str)



 /* 呼び口関数マクロ #_CPM_# */
#define tTracePlugin_sSimple_cCall_shutdown( p_that ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_shutdown( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func1( p_that, inval ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func1( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (inval) )
#define tTracePlugin_sSimple_cCall_func2( p_that, str ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func2( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (str) )
#define tTracePlugin_sSimple_cCall_func3( p_that, msg, len ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func3( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (msg), (len) )
#define tTracePlugin_sSimple_cCall_func4( p_that, msg, len ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func4( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (msg), (len) )
#define tTracePlugin_sSimple_cCall_func5( p_that, sta, len ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func5( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (sta), (len) )
#define tTracePlugin_sSimple_cCall_func6( p_that, array ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func6( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (array) )
#define tTracePlugin_sSimple_cCall_func7( p_that, array2 ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func7( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (array2) )
#define tTracePlugin_sSimple_cCall_func8( p_that, arraySt ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func8( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (arraySt) )
#define tTracePlugin_sSimple_cCall_func9( p_that, arraySt ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func9( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (arraySt) )
#define tTracePlugin_sSimple_cCall_func10( p_that, val ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func10( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (val) )
#define tTracePlugin_sSimple_cCall_func11( p_that, msg, len ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func11( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (msg), (len) )
#define tTracePlugin_sSimple_cCall_func12( p_that, msg ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func12( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (msg) )
#define tTracePlugin_sSimple_cCall_func13( p_that, sta, len ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func13( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (sta), (len) )
#define tTracePlugin_sSimple_cCall_func14( p_that, sta, len ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func14( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (sta), (len) )
#define tTracePlugin_sSimple_cCall_func15( p_that, array1 ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func15( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (array1) )
#define tTracePlugin_sSimple_cCall_func40( p_that, val ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func40( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (val) )
#define tTracePlugin_sSimple_cCall_func41( p_that, msg, len ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func41( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (msg), (len) )
#define tTracePlugin_sSimple_cCall_func42( p_that, msg ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func42( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (msg) )
#define tTracePlugin_sSimple_cCall_func43( p_that, sta, len ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func43( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (sta), (len) )
#define tTracePlugin_sSimple_cCall_func21( p_that, a ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func21( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (a) )
#define tTracePlugin_sSimple_cCall_func22( p_that, sta ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func22( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (sta) )
#define tTracePlugin_sSimple_cCall_func23( p_that, str ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func23( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (str) )
#define tTracePlugin_sSimple_cCall_func24( p_that, msg, len ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func24( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (msg), (len) )
#define tTracePlugin_sSimple_cCall_func25( p_that, msg, len ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func25( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (msg), (len) )
#define tTracePlugin_sSimple_cCall_func26( p_that, sta, len ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func26( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (sta), (len) )
#define tTracePlugin_sSimple_cCall_func27( p_that, array2 ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func27( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (array2) )
#define tTracePlugin_sSimple_cCall_func31( p_that, a ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func31( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (a) )
#define tTracePlugin_sSimple_cCall_func32( p_that, sta ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func32( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (sta) )
#define tTracePlugin_sSimple_cCall_func33( p_that, str ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func33( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (str) )
#define tTracePlugin_sSimple_cCall_func34( p_that, msg, len ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func34( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (msg), (len) )
#define tTracePlugin_sSimple_cCall_func35( p_that, msg, len, msglen ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func35( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (msg), (len), (msglen) )
#define tTracePlugin_sSimple_cCall_func36( p_that, sta, len ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func36( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (sta), (len) )
#define tTracePlugin_sSimple_cCall_func37( p_that, sta, len ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func37( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (sta), (len) )
#define tTracePlugin_sSimple_cCall_func38( p_that, array2 ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func38( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (array2) )
#define tTracePlugin_sSimple_cCall_func39( p_that, arraySt ) \
	  tOpaqueMarshaler_sSimple_eClientEntry_func39( \
	   &tOpaqueMarshaler_sSimple_CB_tab[0], (arraySt) )
#define tTracePlugin_sSimple__require_call_port_tSysLog_eSysLog_write( p_that, prio, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (prio), (p_syslog) )
#define tTracePlugin_sSimple__require_call_port_tSysLog_eSysLog_read( p_that, p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tTracePlugin_sSimple__require_call_port_tSysLog_eSysLog_mask( p_that, logmask, lowmask ) \
	  tSysLog_eSysLog_mask( \
	    (logmask), (lowmask) )
#define tTracePlugin_sSimple__require_call_port_tSysLog_eSysLog_refer( p_that, pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )
#define tTracePlugin_sSimple__require_call_port_tKernel_eKernel_delay( p_that, delay_time ) \
	  tKernel_eKernel_delay( \
	    (delay_time) )
#define tTracePlugin_sSimple__require_call_port_tKernel_eKernel_exitTask( p_that ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tTracePlugin_sSimple__require_call_port_tKernel_eKernel_getTime( p_that, p_system_time ) \
	  tKernel_eKernel_getTime( \
	    (p_system_time) )
#define tTracePlugin_sSimple__require_call_port_tKernel_eKernel_getMicroTime( p_that, p_system_micro_time ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_system_micro_time) )
#define tTracePlugin_sSimple__require_call_port_tKernel_eKernel_exitKernel( p_that ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tTracePlugin_sSimple_eThroughEntry_func21_a_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func21_a_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func21_a_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_eThroughEntry_func22_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func22_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func22_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_eThroughEntry_func23_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func23_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func23_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_eThroughEntry_func24_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func24_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func24_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_eThroughEntry_func25_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func25_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func25_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_eThroughEntry_func26_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func26_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func26_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_eThroughEntry_func27_array2_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func27_array2_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func27_array2_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_eThroughEntry_func31_a_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func31_a_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func31_a_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_eThroughEntry_func32_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func32_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func32_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_eThroughEntry_func33_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func33_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func33_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_eThroughEntry_func34_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func34_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func34_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_eThroughEntry_func35_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func35_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func35_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_eThroughEntry_func36_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func36_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func36_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_eThroughEntry_func37_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func37_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func37_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_eThroughEntry_func38_array2_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func38_array2_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func38_array2_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_eThroughEntry_func39_arraySt_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func39_arraySt_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_eThroughEntry_func39_arraySt_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func21_a_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func21_a_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func21_a_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func22_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func22_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func22_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func23_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func23_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func23_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func24_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func24_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func24_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func25_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func25_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func25_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func26_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func26_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func26_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func27_array2_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func27_array2_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func27_array2_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func31_a_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func31_a_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func31_a_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func32_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func32_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func32_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func33_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func33_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func33_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func34_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func34_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func34_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func35_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func35_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func35_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func36_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func36_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func36_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func37_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func37_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func37_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func38_array2_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func38_array2_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func38_array2_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tTracePlugin_sSimple_cCall_func39_arraySt_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tTracePlugin_sSimple_cCall_func39_arraySt_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tTracePlugin_sSimple_cCall_func39_arraySt_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )

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
#define VALID_IDX(IDX)  tTracePlugin_sSimple_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTracePlugin_sSimple_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTracePlugin_sSimple_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTracePlugin_sSimple_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_probeName_str   tTracePlugin_sSimple_ATTR_probeName_str( p_cellcb )
#define ATTR_from_str        tTracePlugin_sSimple_ATTR_from_str( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_shutdown( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_shutdown( p_cellcb ))
#define cCall_func1( inval ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func1( p_cellcb, inval ))
#define cCall_func2( str ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func2( p_cellcb, str ))
#define cCall_func3( msg, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func3( p_cellcb, msg, len ))
#define cCall_func4( msg, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func4( p_cellcb, msg, len ))
#define cCall_func5( sta, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func5( p_cellcb, sta, len ))
#define cCall_func6( array ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func6( p_cellcb, array ))
#define cCall_func7( array2 ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func7( p_cellcb, array2 ))
#define cCall_func8( arraySt ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func8( p_cellcb, arraySt ))
#define cCall_func9( arraySt ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func9( p_cellcb, arraySt ))
#define cCall_func10( val ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func10( p_cellcb, val ))
#define cCall_func11( msg, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func11( p_cellcb, msg, len ))
#define cCall_func12( msg ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func12( p_cellcb, msg ))
#define cCall_func13( sta, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func13( p_cellcb, sta, len ))
#define cCall_func14( sta, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func14( p_cellcb, sta, len ))
#define cCall_func15( array1 ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func15( p_cellcb, array1 ))
#define cCall_func40( val ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func40( p_cellcb, val ))
#define cCall_func41( msg, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func41( p_cellcb, msg, len ))
#define cCall_func42( msg ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func42( p_cellcb, msg ))
#define cCall_func43( sta, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func43( p_cellcb, sta, len ))
#define cCall_func21( a ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func21( p_cellcb, a ))
#define cCall_func22( sta ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func22( p_cellcb, sta ))
#define cCall_func23( str ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func23( p_cellcb, str ))
#define cCall_func24( msg, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func24( p_cellcb, msg, len ))
#define cCall_func25( msg, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func25( p_cellcb, msg, len ))
#define cCall_func26( sta, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func26( p_cellcb, sta, len ))
#define cCall_func27( array2 ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func27( p_cellcb, array2 ))
#define cCall_func31( a ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func31( p_cellcb, a ))
#define cCall_func32( sta ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func32( p_cellcb, sta ))
#define cCall_func33( str ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func33( p_cellcb, str ))
#define cCall_func34( msg, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func34( p_cellcb, msg, len ))
#define cCall_func35( msg, len, msglen ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func35( p_cellcb, msg, len, msglen ))
#define cCall_func36( sta, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func36( p_cellcb, sta, len ))
#define cCall_func37( sta, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func37( p_cellcb, sta, len ))
#define cCall_func38( array2 ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func38( p_cellcb, array2 ))
#define cCall_func39( arraySt ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func39( p_cellcb, arraySt ))
#define write( prio, p_syslog ) \
          ((void)p_cellcb, tTracePlugin_sSimple__require_call_port_tSysLog_eSysLog_write( p_cellcb, prio, p_syslog ))
#define read( p_syslog ) \
          ((void)p_cellcb, tTracePlugin_sSimple__require_call_port_tSysLog_eSysLog_read( p_cellcb, p_syslog ))
#define mask( logmask, lowmask ) \
          ((void)p_cellcb, tTracePlugin_sSimple__require_call_port_tSysLog_eSysLog_mask( p_cellcb, logmask, lowmask ))
#define refer( pk_rlog ) \
          ((void)p_cellcb, tTracePlugin_sSimple__require_call_port_tSysLog_eSysLog_refer( p_cellcb, pk_rlog ))
#define delay( delay_time ) \
          ((void)p_cellcb, tTracePlugin_sSimple__require_call_port_tKernel_eKernel_delay( p_cellcb, delay_time ))
#define exitTask( ) \
          ((void)p_cellcb, tTracePlugin_sSimple__require_call_port_tKernel_eKernel_exitTask( p_cellcb ))
#define getTime( p_system_time ) \
          ((void)p_cellcb, tTracePlugin_sSimple__require_call_port_tKernel_eKernel_getTime( p_cellcb, p_system_time ))
#define getMicroTime( p_system_micro_time ) \
          ((void)p_cellcb, tTracePlugin_sSimple__require_call_port_tKernel_eKernel_getMicroTime( p_cellcb, p_system_micro_time ))
#define exitKernel( ) \
          ((void)p_cellcb, tTracePlugin_sSimple__require_call_port_tKernel_eKernel_exitKernel( p_cellcb ))
#define eThroughEntry_func21_a_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func21_a_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func21_a_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func21_a_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func21_a_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func21_a_printStatistics( p_cellcb ))
#define eThroughEntry_func22_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func22_sta_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func22_sta_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func22_sta_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func22_sta_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func22_sta_printStatistics( p_cellcb ))
#define eThroughEntry_func23_str_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func23_str_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func23_str_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func23_str_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func23_str_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func23_str_printStatistics( p_cellcb ))
#define eThroughEntry_func24_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func24_msg_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func24_msg_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func24_msg_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func24_msg_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func24_msg_printStatistics( p_cellcb ))
#define eThroughEntry_func25_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func25_msg_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func25_msg_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func25_msg_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func25_msg_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func25_msg_printStatistics( p_cellcb ))
#define eThroughEntry_func26_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func26_sta_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func26_sta_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func26_sta_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func26_sta_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func26_sta_printStatistics( p_cellcb ))
#define eThroughEntry_func27_array2_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func27_array2_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func27_array2_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func27_array2_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func27_array2_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func27_array2_printStatistics( p_cellcb ))
#define eThroughEntry_func31_a_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func31_a_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func31_a_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func31_a_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func31_a_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func31_a_printStatistics( p_cellcb ))
#define eThroughEntry_func32_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func32_sta_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func32_sta_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func32_sta_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func32_sta_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func32_sta_printStatistics( p_cellcb ))
#define eThroughEntry_func33_str_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func33_str_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func33_str_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func33_str_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func33_str_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func33_str_printStatistics( p_cellcb ))
#define eThroughEntry_func34_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func34_msg_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func34_msg_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func34_msg_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func34_msg_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func34_msg_printStatistics( p_cellcb ))
#define eThroughEntry_func35_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func35_msg_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func35_msg_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func35_msg_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func35_msg_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func35_msg_printStatistics( p_cellcb ))
#define eThroughEntry_func36_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func36_sta_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func36_sta_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func36_sta_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func36_sta_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func36_sta_printStatistics( p_cellcb ))
#define eThroughEntry_func37_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func37_sta_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func37_sta_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func37_sta_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func37_sta_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func37_sta_printStatistics( p_cellcb ))
#define eThroughEntry_func38_array2_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func38_array2_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func38_array2_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func38_array2_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func38_array2_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func38_array2_printStatistics( p_cellcb ))
#define eThroughEntry_func39_arraySt_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func39_arraySt_alloc( p_cellcb, size, ptr ))
#define eThroughEntry_func39_arraySt_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func39_arraySt_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func39_arraySt_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_eThroughEntry_func39_arraySt_printStatistics( p_cellcb ))
#define cCall_func21_a_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func21_a_alloc( p_cellcb, size, ptr ))
#define cCall_func21_a_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func21_a_dealloc( p_cellcb, ptr ))
#define cCall_func21_a_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func21_a_printStatistics( p_cellcb ))
#define cCall_func22_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func22_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func22_sta_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func22_sta_dealloc( p_cellcb, ptr ))
#define cCall_func22_sta_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func22_sta_printStatistics( p_cellcb ))
#define cCall_func23_str_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func23_str_alloc( p_cellcb, size, ptr ))
#define cCall_func23_str_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func23_str_dealloc( p_cellcb, ptr ))
#define cCall_func23_str_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func23_str_printStatistics( p_cellcb ))
#define cCall_func24_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func24_msg_alloc( p_cellcb, size, ptr ))
#define cCall_func24_msg_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func24_msg_dealloc( p_cellcb, ptr ))
#define cCall_func24_msg_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func24_msg_printStatistics( p_cellcb ))
#define cCall_func25_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func25_msg_alloc( p_cellcb, size, ptr ))
#define cCall_func25_msg_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func25_msg_dealloc( p_cellcb, ptr ))
#define cCall_func25_msg_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func25_msg_printStatistics( p_cellcb ))
#define cCall_func26_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func26_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func26_sta_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func26_sta_dealloc( p_cellcb, ptr ))
#define cCall_func26_sta_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func26_sta_printStatistics( p_cellcb ))
#define cCall_func27_array2_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func27_array2_alloc( p_cellcb, size, ptr ))
#define cCall_func27_array2_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func27_array2_dealloc( p_cellcb, ptr ))
#define cCall_func27_array2_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func27_array2_printStatistics( p_cellcb ))
#define cCall_func31_a_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func31_a_alloc( p_cellcb, size, ptr ))
#define cCall_func31_a_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func31_a_dealloc( p_cellcb, ptr ))
#define cCall_func31_a_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func31_a_printStatistics( p_cellcb ))
#define cCall_func32_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func32_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func32_sta_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func32_sta_dealloc( p_cellcb, ptr ))
#define cCall_func32_sta_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func32_sta_printStatistics( p_cellcb ))
#define cCall_func33_str_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func33_str_alloc( p_cellcb, size, ptr ))
#define cCall_func33_str_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func33_str_dealloc( p_cellcb, ptr ))
#define cCall_func33_str_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func33_str_printStatistics( p_cellcb ))
#define cCall_func34_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func34_msg_alloc( p_cellcb, size, ptr ))
#define cCall_func34_msg_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func34_msg_dealloc( p_cellcb, ptr ))
#define cCall_func34_msg_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func34_msg_printStatistics( p_cellcb ))
#define cCall_func35_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func35_msg_alloc( p_cellcb, size, ptr ))
#define cCall_func35_msg_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func35_msg_dealloc( p_cellcb, ptr ))
#define cCall_func35_msg_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func35_msg_printStatistics( p_cellcb ))
#define cCall_func36_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func36_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func36_sta_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func36_sta_dealloc( p_cellcb, ptr ))
#define cCall_func36_sta_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func36_sta_printStatistics( p_cellcb ))
#define cCall_func37_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func37_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func37_sta_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func37_sta_dealloc( p_cellcb, ptr ))
#define cCall_func37_sta_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func37_sta_printStatistics( p_cellcb ))
#define cCall_func38_array2_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func38_array2_alloc( p_cellcb, size, ptr ))
#define cCall_func38_array2_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func38_array2_dealloc( p_cellcb, ptr ))
#define cCall_func38_array2_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func38_array2_printStatistics( p_cellcb ))
#define cCall_func39_arraySt_alloc( size, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func39_arraySt_alloc( p_cellcb, size, ptr ))
#define cCall_func39_arraySt_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func39_arraySt_dealloc( p_cellcb, ptr ))
#define cCall_func39_arraySt_printStatistics( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_func39_arraySt_printStatistics( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eThroughEntry_shutdown tTracePlugin_sSimple_eThroughEntry_shutdown
#define eThroughEntry_func1 tTracePlugin_sSimple_eThroughEntry_func1
#define eThroughEntry_func2 tTracePlugin_sSimple_eThroughEntry_func2
#define eThroughEntry_func3 tTracePlugin_sSimple_eThroughEntry_func3
#define eThroughEntry_func4 tTracePlugin_sSimple_eThroughEntry_func4
#define eThroughEntry_func5 tTracePlugin_sSimple_eThroughEntry_func5
#define eThroughEntry_func6 tTracePlugin_sSimple_eThroughEntry_func6
#define eThroughEntry_func7 tTracePlugin_sSimple_eThroughEntry_func7
#define eThroughEntry_func8 tTracePlugin_sSimple_eThroughEntry_func8
#define eThroughEntry_func9 tTracePlugin_sSimple_eThroughEntry_func9
#define eThroughEntry_func10 tTracePlugin_sSimple_eThroughEntry_func10
#define eThroughEntry_func11 tTracePlugin_sSimple_eThroughEntry_func11
#define eThroughEntry_func12 tTracePlugin_sSimple_eThroughEntry_func12
#define eThroughEntry_func13 tTracePlugin_sSimple_eThroughEntry_func13
#define eThroughEntry_func14 tTracePlugin_sSimple_eThroughEntry_func14
#define eThroughEntry_func15 tTracePlugin_sSimple_eThroughEntry_func15
#define eThroughEntry_func40 tTracePlugin_sSimple_eThroughEntry_func40
#define eThroughEntry_func41 tTracePlugin_sSimple_eThroughEntry_func41
#define eThroughEntry_func42 tTracePlugin_sSimple_eThroughEntry_func42
#define eThroughEntry_func43 tTracePlugin_sSimple_eThroughEntry_func43
#define eThroughEntry_func21 tTracePlugin_sSimple_eThroughEntry_func21
#define eThroughEntry_func22 tTracePlugin_sSimple_eThroughEntry_func22
#define eThroughEntry_func23 tTracePlugin_sSimple_eThroughEntry_func23
#define eThroughEntry_func24 tTracePlugin_sSimple_eThroughEntry_func24
#define eThroughEntry_func25 tTracePlugin_sSimple_eThroughEntry_func25
#define eThroughEntry_func26 tTracePlugin_sSimple_eThroughEntry_func26
#define eThroughEntry_func27 tTracePlugin_sSimple_eThroughEntry_func27
#define eThroughEntry_func31 tTracePlugin_sSimple_eThroughEntry_func31
#define eThroughEntry_func32 tTracePlugin_sSimple_eThroughEntry_func32
#define eThroughEntry_func33 tTracePlugin_sSimple_eThroughEntry_func33
#define eThroughEntry_func34 tTracePlugin_sSimple_eThroughEntry_func34
#define eThroughEntry_func35 tTracePlugin_sSimple_eThroughEntry_func35
#define eThroughEntry_func36 tTracePlugin_sSimple_eThroughEntry_func36
#define eThroughEntry_func37 tTracePlugin_sSimple_eThroughEntry_func37
#define eThroughEntry_func38 tTracePlugin_sSimple_eThroughEntry_func38
#define eThroughEntry_func39 tTracePlugin_sSimple_eThroughEntry_func39

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTracePlugin_sSimple_N_CELL; (i)++ ){ \
       //(p_cb) = &tTracePlugin_sSimple_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define ETHROUGHENTRY_FUNC21_A_DEALLOC(a) \
	  eThroughEntry_func21_a_dealloc( (a) ); 
#define ETHROUGHENTRY_FUNC22_STA_DEALLOC(sta) \
	  eThroughEntry_func22_sta_dealloc( (*(sta)).msg );  \
	  eThroughEntry_func22_sta_dealloc( (sta) ); 
#define ETHROUGHENTRY_FUNC23_STR_DEALLOC(str) \
	  eThroughEntry_func23_str_dealloc( (str) ); 
#define ETHROUGHENTRY_FUNC24_MSG_DEALLOC(msg) \
	  eThroughEntry_func24_msg_dealloc( (msg) ); 
#define ETHROUGHENTRY_FUNC25_MSG_DEALLOC(msg, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eThroughEntry_func25_msg_dealloc( (msg)[i0__] );  \
	    } \
	  } \
	  eThroughEntry_func25_msg_dealloc( (msg) ); 
#define ETHROUGHENTRY_FUNC26_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eThroughEntry_func26_sta_dealloc( (*(sta)[i0__]).msg );  \
	      eThroughEntry_func26_sta_dealloc( (sta)[i0__] );  \
	    } \
	  } \
	  eThroughEntry_func26_sta_dealloc( (sta) ); 
#define ETHROUGHENTRY_FUNC27_ARRAY2_DEALLOC(array2) \
	  eThroughEntry_func27_array2_dealloc( (array2) ); 
#define ETHROUGHENTRY_FUNC31_A_DEALLOC(a) \
	  eThroughEntry_func31_a_dealloc( (a) ); 
#define ETHROUGHENTRY_FUNC32_STA_DEALLOC(sta) \
	  eThroughEntry_func32_sta_dealloc( (*(sta)).msg );  \
	  eThroughEntry_func32_sta_dealloc( (sta) ); 
#define ETHROUGHENTRY_FUNC33_STR_DEALLOC(str) \
	  eThroughEntry_func33_str_dealloc( (str) ); 
#define ETHROUGHENTRY_FUNC34_MSG_DEALLOC(msg) \
	  eThroughEntry_func34_msg_dealloc( (msg) ); 
#define ETHROUGHENTRY_FUNC35_MSG_DEALLOC(msg, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eThroughEntry_func35_msg_dealloc( (msg)[i0__] );  \
	    } \
	  } \
	  eThroughEntry_func35_msg_dealloc( (msg) ); 
#define ETHROUGHENTRY_FUNC36_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eThroughEntry_func36_sta_dealloc( (sta)[i0__].msg );  \
	    } \
	  } \
	  eThroughEntry_func36_sta_dealloc( (sta) ); 
#define ETHROUGHENTRY_FUNC37_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eThroughEntry_func37_sta_dealloc( (*(sta)[i0__]).msg );  \
	      eThroughEntry_func37_sta_dealloc( (sta)[i0__] );  \
	    } \
	  } \
	  eThroughEntry_func37_sta_dealloc( (sta) ); 
#define ETHROUGHENTRY_FUNC38_ARRAY2_DEALLOC(array2) \
	  eThroughEntry_func38_array2_dealloc( (array2) ); 
#define ETHROUGHENTRY_FUNC39_ARRAYST_DEALLOC(arraySt) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < 2; i0__++ ){  \
	      eThroughEntry_func39_arraySt_dealloc( (*(*(arraySt))[i0__]).msg );  \
	      eThroughEntry_func39_arraySt_dealloc( (*(arraySt))[i0__] );  \
	    } \
	  } \
	  eThroughEntry_func39_arraySt_dealloc( (arraySt) ); 
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
#define ETHROUGHENTRY_FUNC21_A_DEALLOC_RESET(a) \
	  if( (a) ){ \
	    eThroughEntry_func21_a_dealloc( (a) );  \
	  }
#define ETHROUGHENTRY_FUNC22_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      eThroughEntry_func22_sta_dealloc( (*(sta)).msg );  \
	    } \
	    eThroughEntry_func22_sta_dealloc( (sta) );  \
	  }
#define ETHROUGHENTRY_FUNC23_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    eThroughEntry_func23_str_dealloc( (str) );  \
	  }
#define ETHROUGHENTRY_FUNC24_MSG_DEALLOC_RESET(msg) \
	  if( (msg) ){ \
	    eThroughEntry_func24_msg_dealloc( (msg) );  \
	  }
#define ETHROUGHENTRY_FUNC25_MSG_DEALLOC_RESET(msg, count__) \
	  if( (msg) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (msg)[i0__] ){ \
	          eThroughEntry_func25_msg_dealloc( (msg)[i0__] );  \
	        } \
	      } \
	    } \
	    eThroughEntry_func25_msg_dealloc( (msg) );  \
	  }
#define ETHROUGHENTRY_FUNC26_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__] ){ \
	          if( (*(sta)[i0__]).msg ){ \
	            eThroughEntry_func26_sta_dealloc( (*(sta)[i0__]).msg );  \
	          } \
	          eThroughEntry_func26_sta_dealloc( (sta)[i0__] );  \
	        } \
	      } \
	    } \
	    eThroughEntry_func26_sta_dealloc( (sta) );  \
	  }
#define ETHROUGHENTRY_FUNC27_ARRAY2_DEALLOC_RESET(array2) \
	  if( (array2) ){ \
	    eThroughEntry_func27_array2_dealloc( (array2) );  \
	  }
#define ETHROUGHENTRY_FUNC31_A_DEALLOC_RESET(a) \
	  if( (a) ){ \
	    eThroughEntry_func31_a_dealloc( (a) );  \
	  }
#define ETHROUGHENTRY_FUNC32_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      eThroughEntry_func32_sta_dealloc( (*(sta)).msg );  \
	    } \
	    eThroughEntry_func32_sta_dealloc( (sta) );  \
	  }
#define ETHROUGHENTRY_FUNC33_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    eThroughEntry_func33_str_dealloc( (str) );  \
	  }
#define ETHROUGHENTRY_FUNC34_MSG_DEALLOC_RESET(msg) \
	  if( (msg) ){ \
	    eThroughEntry_func34_msg_dealloc( (msg) );  \
	  }
#define ETHROUGHENTRY_FUNC35_MSG_DEALLOC_RESET(msg, count__) \
	  if( (msg) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (msg)[i0__] ){ \
	          eThroughEntry_func35_msg_dealloc( (msg)[i0__] );  \
	        } \
	      } \
	    } \
	    eThroughEntry_func35_msg_dealloc( (msg) );  \
	  }
#define ETHROUGHENTRY_FUNC36_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__].msg ){ \
	          eThroughEntry_func36_sta_dealloc( (sta)[i0__].msg );  \
	        } \
	      } \
	    } \
	    eThroughEntry_func36_sta_dealloc( (sta) );  \
	  }
#define ETHROUGHENTRY_FUNC37_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__] ){ \
	          if( (*(sta)[i0__]).msg ){ \
	            eThroughEntry_func37_sta_dealloc( (*(sta)[i0__]).msg );  \
	          } \
	          eThroughEntry_func37_sta_dealloc( (sta)[i0__] );  \
	        } \
	      } \
	    } \
	    eThroughEntry_func37_sta_dealloc( (sta) );  \
	  }
#define ETHROUGHENTRY_FUNC38_ARRAY2_DEALLOC_RESET(array2) \
	  if( (array2) ){ \
	    eThroughEntry_func38_array2_dealloc( (array2) );  \
	  }
#define ETHROUGHENTRY_FUNC39_ARRAYST_DEALLOC_RESET(arraySt) \
	  if( (arraySt) ){ \
	    { int_t  i1__; \
	      for( i1__ = 0; i1__ < 2; i1__++ ){  \
	        if( (*(arraySt))[i1__] ){ \
	          if( (*(*(arraySt))[i1__]).msg ){ \
	            eThroughEntry_func39_arraySt_dealloc( (*(*(arraySt))[i1__]).msg );  \
	          } \
	          eThroughEntry_func39_arraySt_dealloc( (*(arraySt))[i1__] );  \
	        } \
	      } \
	    } \
	    eThroughEntry_func39_arraySt_dealloc( (arraySt) );  \
	  }
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

#endif /* tTracePlugin_sSimple_TECSGENH */
