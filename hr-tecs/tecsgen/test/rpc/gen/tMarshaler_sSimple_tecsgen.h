/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMarshaler_sSimple_TECSGEN_H
#define tMarshaler_sSimple_TECSGEN_H

/*
 * celltype          :  tMarshaler_sSimple
 * global name       :  tMarshaler_sSimple
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
#include "sSemaphore_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tMarshaler_sSimple_CB {
    int  dummy;
} tMarshaler_sSimple_CB;
extern tMarshaler_sSimple_CB  tMarshaler_sSimple_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tMarshaler_sSimple_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSimple */
ER           tMarshaler_sSimple_eClientEntry_onewayPtr(tMarshaler_sSimple_IDX idx, const uint32_t* in);
ER           tMarshaler_sSimple_eClientEntry_onewayArray(tMarshaler_sSimple_IDX idx, const uint32_t* in, int32_t len);
ER           tMarshaler_sSimple_eClientEntry_onewayDoubleArray(tMarshaler_sSimple_IDX idx, const int32_t* in, int32_t len, const int32_t* in2, int32_t len2);
ER           tMarshaler_sSimple_eClientEntry_onewayStringArray(tMarshaler_sSimple_IDX idx, const char_t** in, int32_t len);
ER           tMarshaler_sSimple_eClientEntry_onewayString(tMarshaler_sSimple_IDX idx, const char_t* in, int32_t len);
ER           tMarshaler_sSimple_eClientEntry_onewayStruct(tMarshaler_sSimple_IDX idx, const struct stA* a);
ER           tMarshaler_sSimple_eClientEntry_onewayStruct2(tMarshaler_sSimple_IDX idx, const struct stA* a, int32_t len);
ER           tMarshaler_sSimple_eClientEntry_onewayInArray(tMarshaler_sSimple_IDX idx, int8_t array0[8]);
ER           tMarshaler_sSimple_eClientEntry_onewayInArray2(tMarshaler_sSimple_IDX idx, const int8_t(* array1)[8]);
ER           tMarshaler_sSimple_eClientEntry_onewayNulable(tMarshaler_sSimple_IDX idx, const int8_t(* array)[3]);
void         tMarshaler_sSimple_eClientEntry_exit(tMarshaler_sSimple_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tMarshaler_sSimple_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTDR_tecsgen.h"
#include "tEventflag_tecsgen.h"
#include "tSemaphore_tecsgen.h"
#ifdef  tMarshaler_sSimple_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tMarshaler_sSimple_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tMarshaler_sSimple_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tMarshaler_sSimple_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tMarshaler_sSimple_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tMarshaler_sSimple_is_cLockChannel_joined(p_that) \
	  (1)

/* セルCBを得るマクロ #_GCB_# */
#define tMarshaler_sSimple_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tMarshaler_sSimple_cTDR_reset( p_that ) \
	  tTDR_eTDR_reset( \
	   &tTDR_CB_tab[0] )
#define tMarshaler_sSimple_cTDR_sendSOP( p_that, b_client ) \
	  tTDR_eTDR_sendSOP( \
	   &tTDR_CB_tab[0], (b_client) )
#define tMarshaler_sSimple_cTDR_receiveSOP( p_that, b_client ) \
	  tTDR_eTDR_receiveSOP( \
	   &tTDR_CB_tab[0], (b_client) )
#define tMarshaler_sSimple_cTDR_sendEOP( p_that, b_continue ) \
	  tTDR_eTDR_sendEOP( \
	   &tTDR_CB_tab[0], (b_continue) )
#define tMarshaler_sSimple_cTDR_receiveEOP( p_that, b_continue ) \
	  tTDR_eTDR_receiveEOP( \
	   &tTDR_CB_tab[0], (b_continue) )
#define tMarshaler_sSimple_cTDR_putInt8( p_that, in ) \
	  tTDR_eTDR_putInt8( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_putInt16( p_that, in ) \
	  tTDR_eTDR_putInt16( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_putInt32( p_that, in ) \
	  tTDR_eTDR_putInt32( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_putInt64( p_that, in ) \
	  tTDR_eTDR_putInt64( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_putInt128( p_that, in ) \
	  tTDR_eTDR_putInt128( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_getInt8( p_that, out ) \
	  tTDR_eTDR_getInt8( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_getInt16( p_that, out ) \
	  tTDR_eTDR_getInt16( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_getInt32( p_that, out ) \
	  tTDR_eTDR_getInt32( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_getInt64( p_that, out ) \
	  tTDR_eTDR_getInt64( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_getInt128( p_that, out ) \
	  tTDR_eTDR_getInt128( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_putUInt8( p_that, in ) \
	  tTDR_eTDR_putUInt8( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_putUInt16( p_that, in ) \
	  tTDR_eTDR_putUInt16( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_putUInt32( p_that, in ) \
	  tTDR_eTDR_putUInt32( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_putUInt64( p_that, in ) \
	  tTDR_eTDR_putUInt64( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_putUInt128( p_that, in ) \
	  tTDR_eTDR_putUInt128( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_getUInt8( p_that, out ) \
	  tTDR_eTDR_getUInt8( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_getUInt16( p_that, out ) \
	  tTDR_eTDR_getUInt16( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_getUInt32( p_that, out ) \
	  tTDR_eTDR_getUInt32( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_getUInt64( p_that, out ) \
	  tTDR_eTDR_getUInt64( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_getUInt128( p_that, out ) \
	  tTDR_eTDR_getUInt128( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_putChar( p_that, in ) \
	  tTDR_eTDR_putChar( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_getChar( p_that, out ) \
	  tTDR_eTDR_getChar( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_putBool( p_that, in ) \
	  tTDR_eTDR_putBool( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_getBool( p_that, out ) \
	  tTDR_eTDR_getBool( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_putFloat32( p_that, in ) \
	  tTDR_eTDR_putFloat32( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_putDouble64( p_that, in ) \
	  tTDR_eTDR_putDouble64( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_getFloat32( p_that, out ) \
	  tTDR_eTDR_getFloat32( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_getDouble64( p_that, out ) \
	  tTDR_eTDR_getDouble64( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_putSChar( p_that, in ) \
	  tTDR_eTDR_putSChar( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_putShort( p_that, in ) \
	  tTDR_eTDR_putShort( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_putInt( p_that, in ) \
	  tTDR_eTDR_putInt( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_putLong( p_that, in ) \
	  tTDR_eTDR_putLong( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_getSChar( p_that, out ) \
	  tTDR_eTDR_getSChar( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_getShort( p_that, out ) \
	  tTDR_eTDR_getShort( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_getInt( p_that, out ) \
	  tTDR_eTDR_getInt( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_getLong( p_that, out ) \
	  tTDR_eTDR_getLong( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_putUChar( p_that, in ) \
	  tTDR_eTDR_putUChar( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_putUShort( p_that, in ) \
	  tTDR_eTDR_putUShort( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_putUInt( p_that, in ) \
	  tTDR_eTDR_putUInt( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_putULong( p_that, in ) \
	  tTDR_eTDR_putULong( \
	   &tTDR_CB_tab[0], (in) )
#define tMarshaler_sSimple_cTDR_getUChar( p_that, out ) \
	  tTDR_eTDR_getUChar( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_getUShort( p_that, out ) \
	  tTDR_eTDR_getUShort( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_getUInt( p_that, out ) \
	  tTDR_eTDR_getUInt( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_getULong( p_that, out ) \
	  tTDR_eTDR_getULong( \
	   &tTDR_CB_tab[0], (out) )
#define tMarshaler_sSimple_cTDR_putIntptr( p_that, ptr ) \
	  tTDR_eTDR_putIntptr( \
	   &tTDR_CB_tab[0], (ptr) )
#define tMarshaler_sSimple_cTDR_getIntptr( p_that, ptr ) \
	  tTDR_eTDR_getIntptr( \
	   &tTDR_CB_tab[0], (ptr) )
#define tMarshaler_sSimple_cEventflag_set( p_that, set_pattern ) \
	  tEventflag_eEventflag_set( \
	   &tEventflag_CB_tab[0], (set_pattern) )
#define tMarshaler_sSimple_cEventflag_clear( p_that, clear_pattern ) \
	  tEventflag_eEventflag_clear( \
	   &tEventflag_CB_tab[0], (clear_pattern) )
#define tMarshaler_sSimple_cEventflag_wait( p_that, wait_pattern, wait_flag_mode, p_flag_pattern ) \
	  tEventflag_eEventflag_wait( \
	   &tEventflag_CB_tab[0], (wait_pattern), (wait_flag_mode), (p_flag_pattern) )
#define tMarshaler_sSimple_cEventflag_waitPolling( p_that, wait_pattern, wait_flag_mode, p_flag_pattern ) \
	  tEventflag_eEventflag_waitPolling( \
	   &tEventflag_CB_tab[0], (wait_pattern), (wait_flag_mode), (p_flag_pattern) )
#define tMarshaler_sSimple_cEventflag_waitTimeout( p_that, wait_pattern, wait_flag_mode, p_flag_pattern, timeout ) \
	  tEventflag_eEventflag_waitTimeout( \
	   &tEventflag_CB_tab[0], (wait_pattern), (wait_flag_mode), (p_flag_pattern), (timeout) )
#define tMarshaler_sSimple_cEventflag_initialize( p_that ) \
	  tEventflag_eEventflag_initialize( \
	   &tEventflag_CB_tab[0] )
#define tMarshaler_sSimple_cEventflag_refer( p_that, pk_eventflag_status ) \
	  tEventflag_eEventflag_refer( \
	   &tEventflag_CB_tab[0], (pk_eventflag_status) )
#define tMarshaler_sSimple_cLockChannel_signal( p_that ) \
	  tSemaphore_eSemaphore_signal( \
	   &tSemaphore_CB_tab[1] )
#define tMarshaler_sSimple_cLockChannel_wait( p_that ) \
	  tSemaphore_eSemaphore_wait( \
	   &tSemaphore_CB_tab[1] )
#define tMarshaler_sSimple_cLockChannel_waitPolling( p_that ) \
	  tSemaphore_eSemaphore_waitPolling( \
	   &tSemaphore_CB_tab[1] )
#define tMarshaler_sSimple_cLockChannel_waitTimeout( p_that, timeout ) \
	  tSemaphore_eSemaphore_waitTimeout( \
	   &tSemaphore_CB_tab[1], (timeout) )
#define tMarshaler_sSimple_cLockChannel_initialize( p_that ) \
	  tSemaphore_eSemaphore_initialize( \
	   &tSemaphore_CB_tab[1] )
#define tMarshaler_sSimple_cLockChannel_refer( p_that, pk_semaphore_status ) \
	  tSemaphore_eSemaphore_refer( \
	   &tSemaphore_CB_tab[1], (pk_semaphore_status) )

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
#define VALID_IDX(IDX)  tMarshaler_sSimple_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tMarshaler_sSimple_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tMarshaler_sSimple_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tMarshaler_sSimple_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTDR_reset( ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_reset( p_cellcb ))
#define cTDR_sendSOP( b_client ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_sendSOP( p_cellcb, b_client ))
#define cTDR_receiveSOP( b_client ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_receiveSOP( p_cellcb, b_client ))
#define cTDR_sendEOP( b_continue ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_sendEOP( p_cellcb, b_continue ))
#define cTDR_receiveEOP( b_continue ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_receiveEOP( p_cellcb, b_continue ))
#define cTDR_putInt8( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putInt8( p_cellcb, in ))
#define cTDR_putInt16( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putInt16( p_cellcb, in ))
#define cTDR_putInt32( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putInt32( p_cellcb, in ))
#define cTDR_putInt64( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putInt64( p_cellcb, in ))
#define cTDR_putInt128( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putInt128( p_cellcb, in ))
#define cTDR_getInt8( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getInt8( p_cellcb, out ))
#define cTDR_getInt16( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getInt16( p_cellcb, out ))
#define cTDR_getInt32( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getInt32( p_cellcb, out ))
#define cTDR_getInt64( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getInt64( p_cellcb, out ))
#define cTDR_getInt128( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getInt128( p_cellcb, out ))
#define cTDR_putUInt8( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putUInt8( p_cellcb, in ))
#define cTDR_putUInt16( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putUInt16( p_cellcb, in ))
#define cTDR_putUInt32( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putUInt32( p_cellcb, in ))
#define cTDR_putUInt64( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putUInt64( p_cellcb, in ))
#define cTDR_putUInt128( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putUInt128( p_cellcb, in ))
#define cTDR_getUInt8( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getUInt8( p_cellcb, out ))
#define cTDR_getUInt16( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getUInt16( p_cellcb, out ))
#define cTDR_getUInt32( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getUInt32( p_cellcb, out ))
#define cTDR_getUInt64( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getUInt64( p_cellcb, out ))
#define cTDR_getUInt128( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getUInt128( p_cellcb, out ))
#define cTDR_putChar( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putChar( p_cellcb, in ))
#define cTDR_getChar( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getChar( p_cellcb, out ))
#define cTDR_putBool( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putBool( p_cellcb, in ))
#define cTDR_getBool( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getBool( p_cellcb, out ))
#define cTDR_putFloat32( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putFloat32( p_cellcb, in ))
#define cTDR_putDouble64( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putDouble64( p_cellcb, in ))
#define cTDR_getFloat32( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getFloat32( p_cellcb, out ))
#define cTDR_getDouble64( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getDouble64( p_cellcb, out ))
#define cTDR_putSChar( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putSChar( p_cellcb, in ))
#define cTDR_putShort( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putShort( p_cellcb, in ))
#define cTDR_putInt( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putInt( p_cellcb, in ))
#define cTDR_putLong( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putLong( p_cellcb, in ))
#define cTDR_getSChar( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getSChar( p_cellcb, out ))
#define cTDR_getShort( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getShort( p_cellcb, out ))
#define cTDR_getInt( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getInt( p_cellcb, out ))
#define cTDR_getLong( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getLong( p_cellcb, out ))
#define cTDR_putUChar( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putUChar( p_cellcb, in ))
#define cTDR_putUShort( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putUShort( p_cellcb, in ))
#define cTDR_putUInt( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putUInt( p_cellcb, in ))
#define cTDR_putULong( in ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putULong( p_cellcb, in ))
#define cTDR_getUChar( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getUChar( p_cellcb, out ))
#define cTDR_getUShort( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getUShort( p_cellcb, out ))
#define cTDR_getUInt( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getUInt( p_cellcb, out ))
#define cTDR_getULong( out ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getULong( p_cellcb, out ))
#define cTDR_putIntptr( ptr ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_putIntptr( p_cellcb, ptr ))
#define cTDR_getIntptr( ptr ) \
          ((void)p_cellcb, tMarshaler_sSimple_cTDR_getIntptr( p_cellcb, ptr ))
#define cEventflag_set( set_pattern ) \
          ((void)p_cellcb, tMarshaler_sSimple_cEventflag_set( p_cellcb, set_pattern ))
#define cEventflag_clear( clear_pattern ) \
          ((void)p_cellcb, tMarshaler_sSimple_cEventflag_clear( p_cellcb, clear_pattern ))
#define cEventflag_wait( wait_pattern, wait_flag_mode, p_flag_pattern ) \
          ((void)p_cellcb, tMarshaler_sSimple_cEventflag_wait( p_cellcb, wait_pattern, wait_flag_mode, p_flag_pattern ))
#define cEventflag_waitPolling( wait_pattern, wait_flag_mode, p_flag_pattern ) \
          ((void)p_cellcb, tMarshaler_sSimple_cEventflag_waitPolling( p_cellcb, wait_pattern, wait_flag_mode, p_flag_pattern ))
#define cEventflag_waitTimeout( wait_pattern, wait_flag_mode, p_flag_pattern, timeout ) \
          ((void)p_cellcb, tMarshaler_sSimple_cEventflag_waitTimeout( p_cellcb, wait_pattern, wait_flag_mode, p_flag_pattern, timeout ))
#define cEventflag_initialize( ) \
          ((void)p_cellcb, tMarshaler_sSimple_cEventflag_initialize( p_cellcb ))
#define cEventflag_refer( pk_eventflag_status ) \
          ((void)p_cellcb, tMarshaler_sSimple_cEventflag_refer( p_cellcb, pk_eventflag_status ))
#define cLockChannel_signal( ) \
          ((void)p_cellcb, tMarshaler_sSimple_cLockChannel_signal( p_cellcb ))
#define cLockChannel_wait( ) \
          ((void)p_cellcb, tMarshaler_sSimple_cLockChannel_wait( p_cellcb ))
#define cLockChannel_waitPolling( ) \
          ((void)p_cellcb, tMarshaler_sSimple_cLockChannel_waitPolling( p_cellcb ))
#define cLockChannel_waitTimeout( timeout ) \
          ((void)p_cellcb, tMarshaler_sSimple_cLockChannel_waitTimeout( p_cellcb, timeout ))
#define cLockChannel_initialize( ) \
          ((void)p_cellcb, tMarshaler_sSimple_cLockChannel_initialize( p_cellcb ))
#define cLockChannel_refer( pk_semaphore_status ) \
          ((void)p_cellcb, tMarshaler_sSimple_cLockChannel_refer( p_cellcb, pk_semaphore_status ))



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cLockChannel_joined()\
		tMarshaler_sSimple_is_cLockChannel_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eClientEntry_onewayPtr tMarshaler_sSimple_eClientEntry_onewayPtr
#define eClientEntry_onewayArray tMarshaler_sSimple_eClientEntry_onewayArray
#define eClientEntry_onewayDoubleArray tMarshaler_sSimple_eClientEntry_onewayDoubleArray
#define eClientEntry_onewayStringArray tMarshaler_sSimple_eClientEntry_onewayStringArray
#define eClientEntry_onewayString tMarshaler_sSimple_eClientEntry_onewayString
#define eClientEntry_onewayStruct tMarshaler_sSimple_eClientEntry_onewayStruct
#define eClientEntry_onewayStruct2 tMarshaler_sSimple_eClientEntry_onewayStruct2
#define eClientEntry_onewayInArray tMarshaler_sSimple_eClientEntry_onewayInArray
#define eClientEntry_onewayInArray2 tMarshaler_sSimple_eClientEntry_onewayInArray2
#define eClientEntry_onewayNulable tMarshaler_sSimple_eClientEntry_onewayNulable
#define eClientEntry_exit tMarshaler_sSimple_eClientEntry_exit

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMarshaler_sSimple_TECSGENH */