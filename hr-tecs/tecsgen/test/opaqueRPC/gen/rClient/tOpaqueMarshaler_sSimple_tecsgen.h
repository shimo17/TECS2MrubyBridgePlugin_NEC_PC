/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tOpaqueMarshaler_sSimple_TECSGEN_H
#define tOpaqueMarshaler_sSimple_TECSGEN_H

/*
 * celltype          :  tOpaqueMarshaler_sSimple
 * global name       :  tOpaqueMarshaler_sSimple
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
#include "sSemaphore_tecsgen.h"
#include "sRPCErrorHandler_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tOpaqueMarshaler_sSimple_CB {
    int  dummy;
} tOpaqueMarshaler_sSimple_CB;
extern tOpaqueMarshaler_sSimple_CB  tOpaqueMarshaler_sSimple_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tOpaqueMarshaler_sSimple_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSimple */
void         tOpaqueMarshaler_sSimple_eClientEntry_shutdown(tOpaqueMarshaler_sSimple_IDX idx);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func1(tOpaqueMarshaler_sSimple_IDX idx, int32_t inval);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func2(tOpaqueMarshaler_sSimple_IDX idx, const char_t* str);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func3(tOpaqueMarshaler_sSimple_IDX idx, const char_t* msg, int32_t len);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func4(tOpaqueMarshaler_sSimple_IDX idx, const char_t** msg, int32_t len);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func5(tOpaqueMarshaler_sSimple_IDX idx, const STA** sta, int32_t len);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func6(tOpaqueMarshaler_sSimple_IDX idx, const int8_t array[64]);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func7(tOpaqueMarshaler_sSimple_IDX idx, const int8_t array2[64][4]);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func8(tOpaqueMarshaler_sSimple_IDX idx, const STA arraySt[2]);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func9(tOpaqueMarshaler_sSimple_IDX idx, const STA* arraySt[2]);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func10(tOpaqueMarshaler_sSimple_IDX idx, int32_t* val);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func11(tOpaqueMarshaler_sSimple_IDX idx, char_t* msg, int32_t len);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func12(tOpaqueMarshaler_sSimple_IDX idx, char_t** msg);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func13(tOpaqueMarshaler_sSimple_IDX idx, STB* sta, int32_t len);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func14(tOpaqueMarshaler_sSimple_IDX idx, STB** sta, int32_t len);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func15(tOpaqueMarshaler_sSimple_IDX idx, int8_t(* array1)[64]);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func16(tOpaqueMarshaler_sSimple_IDX idx, int8_t* array, int16_t* sz);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func40(tOpaqueMarshaler_sSimple_IDX idx, int32_t* val);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func41(tOpaqueMarshaler_sSimple_IDX idx, char_t* msg, int32_t len);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func42(tOpaqueMarshaler_sSimple_IDX idx, char_t** msg);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func43(tOpaqueMarshaler_sSimple_IDX idx, STA* sta, int32_t len);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func44(tOpaqueMarshaler_sSimple_IDX idx, int8_t* array, int32_t* len);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func21(tOpaqueMarshaler_sSimple_IDX idx, int32_t* a);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func22(tOpaqueMarshaler_sSimple_IDX idx, STA* sta);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func23(tOpaqueMarshaler_sSimple_IDX idx, char_t* str);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func24(tOpaqueMarshaler_sSimple_IDX idx, char_t* msg, int32_t len);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func25(tOpaqueMarshaler_sSimple_IDX idx, char_t** msg, int32_t len);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func26(tOpaqueMarshaler_sSimple_IDX idx, STA** sta, int32_t len);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func27(tOpaqueMarshaler_sSimple_IDX idx, int8_t(* array2)[64]);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func31(tOpaqueMarshaler_sSimple_IDX idx, int32_t** a);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func32(tOpaqueMarshaler_sSimple_IDX idx, STA** sta);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func33(tOpaqueMarshaler_sSimple_IDX idx, char_t** str);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func34(tOpaqueMarshaler_sSimple_IDX idx, char_t** msg, int32_t* len);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func35(tOpaqueMarshaler_sSimple_IDX idx, char_t*** msg, int32_t* len, int32_t* msglen);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func36(tOpaqueMarshaler_sSimple_IDX idx, STA** sta, int32_t* len);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func37(tOpaqueMarshaler_sSimple_IDX idx, STA*** sta, int32_t* len);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func38(tOpaqueMarshaler_sSimple_IDX idx, int8_t(** array2)[64]);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func39(tOpaqueMarshaler_sSimple_IDX idx, STA*(** arraySt)[2]);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func50(tOpaqueMarshaler_sSimple_IDX idx, int_t i, short_t s, long_t l);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func51(tOpaqueMarshaler_sSimple_IDX idx, uint_t i, ushort_t s, ulong_t l);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func52(tOpaqueMarshaler_sSimple_IDX idx, int_t* i, short_t* s, long_t* l);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func53(tOpaqueMarshaler_sSimple_IDX idx, uint_t* i, ushort_t* s, ulong_t* l);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func54(tOpaqueMarshaler_sSimple_IDX idx, char_t c, schar_t sc, uchar_t uc);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func55(tOpaqueMarshaler_sSimple_IDX idx, char_t* c, schar_t* sc, uchar_t* uc);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func56(tOpaqueMarshaler_sSimple_IDX idx, intptr_t ip, intptr_t* op);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func60(tOpaqueMarshaler_sSimple_IDX idx, intptr_t ip, intptr_t* op);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func61(tOpaqueMarshaler_sSimple_IDX idx, const int32_t* ip, intptr_t* op);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func62(tOpaqueMarshaler_sSimple_IDX idx, int32_t* iop);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func63(tOpaqueMarshaler_sSimple_IDX idx, int32_t* sp);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func64(tOpaqueMarshaler_sSimple_IDX idx, int32_t** rp, bool_t b_zero);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func70(tOpaqueMarshaler_sSimple_IDX idx, STA* sta);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func71(tOpaqueMarshaler_sSimple_IDX idx, char_t* str);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func72(tOpaqueMarshaler_sSimple_IDX idx, STA** sta, bool_t b_zero);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func73(tOpaqueMarshaler_sSimple_IDX idx, char_t** str, bool_t b_zero);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func80(tOpaqueMarshaler_sSimple_IDX idx, float32_t val);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func81(tOpaqueMarshaler_sSimple_IDX idx, float32_t* val);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func82(tOpaqueMarshaler_sSimple_IDX idx, double64_t val);
ER           tOpaqueMarshaler_sSimple_eClientEntry_func83(tOpaqueMarshaler_sSimple_IDX idx, double64_t* val);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tOpaqueMarshaler_sSimple_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tNBOTDR_tecsgen.h"
#include "tSemaphore_tecsgen.h"
#include "tClientRPCErrorHandler_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tOpaqueMarshaler_sSimple_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tOpaqueMarshaler_sSimple_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tOpaqueMarshaler_sSimple_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tOpaqueMarshaler_sSimple_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tOpaqueMarshaler_sSimple_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tOpaqueMarshaler_sSimple_is_cLockChannel_joined(p_that) \
	  (1)
#define tOpaqueMarshaler_sSimple_is_cErrorHandler_joined(p_that) \
	  (1)

/* セルCBを得るマクロ #_GCB_# */
#define tOpaqueMarshaler_sSimple_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tOpaqueMarshaler_sSimple_cTDR_reset( p_that ) \
	  tNBOTDR_eTDR_reset( \
	   &tNBOTDR_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_cTDR_sendSOP( p_that, b_client ) \
	  tNBOTDR_eTDR_sendSOP( \
	   &tNBOTDR_CB_tab[0], (b_client) )
#define tOpaqueMarshaler_sSimple_cTDR_receiveSOP( p_that, b_client ) \
	  tNBOTDR_eTDR_receiveSOP( \
	   &tNBOTDR_CB_tab[0], (b_client) )
#define tOpaqueMarshaler_sSimple_cTDR_sendEOP( p_that, b_continue ) \
	  tNBOTDR_eTDR_sendEOP( \
	   &tNBOTDR_CB_tab[0], (b_continue) )
#define tOpaqueMarshaler_sSimple_cTDR_receiveEOP( p_that, b_continue ) \
	  tNBOTDR_eTDR_receiveEOP( \
	   &tNBOTDR_CB_tab[0], (b_continue) )
#define tOpaqueMarshaler_sSimple_cTDR_putInt8( p_that, in ) \
	  tNBOTDR_eTDR_putInt8( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_putInt16( p_that, in ) \
	  tNBOTDR_eTDR_putInt16( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_putInt32( p_that, in ) \
	  tNBOTDR_eTDR_putInt32( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_putInt64( p_that, in ) \
	  tNBOTDR_eTDR_putInt64( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_putInt128( p_that, in ) \
	  tNBOTDR_eTDR_putInt128( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_getInt8( p_that, out ) \
	  tNBOTDR_eTDR_getInt8( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_getInt16( p_that, out ) \
	  tNBOTDR_eTDR_getInt16( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_getInt32( p_that, out ) \
	  tNBOTDR_eTDR_getInt32( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_getInt64( p_that, out ) \
	  tNBOTDR_eTDR_getInt64( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_getInt128( p_that, out ) \
	  tNBOTDR_eTDR_getInt128( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_putUInt8( p_that, in ) \
	  tNBOTDR_eTDR_putUInt8( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_putUInt16( p_that, in ) \
	  tNBOTDR_eTDR_putUInt16( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_putUInt32( p_that, in ) \
	  tNBOTDR_eTDR_putUInt32( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_putUInt64( p_that, in ) \
	  tNBOTDR_eTDR_putUInt64( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_putUInt128( p_that, in ) \
	  tNBOTDR_eTDR_putUInt128( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_getUInt8( p_that, out ) \
	  tNBOTDR_eTDR_getUInt8( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_getUInt16( p_that, out ) \
	  tNBOTDR_eTDR_getUInt16( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_getUInt32( p_that, out ) \
	  tNBOTDR_eTDR_getUInt32( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_getUInt64( p_that, out ) \
	  tNBOTDR_eTDR_getUInt64( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_getUInt128( p_that, out ) \
	  tNBOTDR_eTDR_getUInt128( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_putChar( p_that, in ) \
	  tNBOTDR_eTDR_putChar( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_getChar( p_that, out ) \
	  tNBOTDR_eTDR_getChar( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_putBool( p_that, in ) \
	  tNBOTDR_eTDR_putBool( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_getBool( p_that, out ) \
	  tNBOTDR_eTDR_getBool( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_putFloat32( p_that, in ) \
	  tNBOTDR_eTDR_putFloat32( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_putDouble64( p_that, in ) \
	  tNBOTDR_eTDR_putDouble64( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_getFloat32( p_that, out ) \
	  tNBOTDR_eTDR_getFloat32( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_getDouble64( p_that, out ) \
	  tNBOTDR_eTDR_getDouble64( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_putSChar( p_that, in ) \
	  tNBOTDR_eTDR_putSChar( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_putShort( p_that, in ) \
	  tNBOTDR_eTDR_putShort( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_putInt( p_that, in ) \
	  tNBOTDR_eTDR_putInt( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_putLong( p_that, in ) \
	  tNBOTDR_eTDR_putLong( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_getSChar( p_that, out ) \
	  tNBOTDR_eTDR_getSChar( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_getShort( p_that, out ) \
	  tNBOTDR_eTDR_getShort( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_getInt( p_that, out ) \
	  tNBOTDR_eTDR_getInt( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_getLong( p_that, out ) \
	  tNBOTDR_eTDR_getLong( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_putUChar( p_that, in ) \
	  tNBOTDR_eTDR_putUChar( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_putUShort( p_that, in ) \
	  tNBOTDR_eTDR_putUShort( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_putUInt( p_that, in ) \
	  tNBOTDR_eTDR_putUInt( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_putULong( p_that, in ) \
	  tNBOTDR_eTDR_putULong( \
	   &tNBOTDR_CB_tab[0], (in) )
#define tOpaqueMarshaler_sSimple_cTDR_getUChar( p_that, out ) \
	  tNBOTDR_eTDR_getUChar( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_getUShort( p_that, out ) \
	  tNBOTDR_eTDR_getUShort( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_getUInt( p_that, out ) \
	  tNBOTDR_eTDR_getUInt( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_getULong( p_that, out ) \
	  tNBOTDR_eTDR_getULong( \
	   &tNBOTDR_CB_tab[0], (out) )
#define tOpaqueMarshaler_sSimple_cTDR_putIntptr( p_that, ptr ) \
	  tNBOTDR_eTDR_putIntptr( \
	   &tNBOTDR_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_cTDR_getIntptr( p_that, ptr ) \
	  tNBOTDR_eTDR_getIntptr( \
	   &tNBOTDR_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_cLockChannel_signal( p_that ) \
	  tSemaphore_eSemaphore_signal( \
	   &tSemaphore_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_cLockChannel_wait( p_that ) \
	  tSemaphore_eSemaphore_wait( \
	   &tSemaphore_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_cLockChannel_waitPolling( p_that ) \
	  tSemaphore_eSemaphore_waitPolling( \
	   &tSemaphore_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_cLockChannel_waitTimeout( p_that, timeout ) \
	  tSemaphore_eSemaphore_waitTimeout( \
	   &tSemaphore_CB_tab[0], (timeout) )
#define tOpaqueMarshaler_sSimple_cLockChannel_initialize( p_that ) \
	  tSemaphore_eSemaphore_initialize( \
	   &tSemaphore_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_cLockChannel_refer( p_that, pk_semaphore_status ) \
	  tSemaphore_eSemaphore_refer( \
	   &tSemaphore_CB_tab[0], (pk_semaphore_status) )
#define tOpaqueMarshaler_sSimple_cErrorHandler_errorOccured( p_that, func_id, er, state ) \
	  tClientRPCErrorHandler_eHandler_errorOccured( \
	   (tClientRPCErrorHandler_IDX)0, (func_id), (er), (state) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func21_a_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func21_a_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func21_a_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func22_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func22_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func22_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func23_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func23_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func23_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func24_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func24_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func24_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func25_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func25_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func25_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func26_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func26_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func26_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func27_array2_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func27_array2_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func27_array2_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func31_a_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func31_a_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func31_a_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func32_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func32_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func32_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func33_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func33_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func33_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func34_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func34_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func34_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func35_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func35_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func35_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func36_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func36_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func36_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func37_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func37_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func37_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func38_array2_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func38_array2_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func38_array2_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func39_arraySt_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func39_arraySt_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func39_arraySt_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func63_sp_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func63_sp_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func63_sp_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func64_rp_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func64_rp_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func64_rp_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func70_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func70_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func70_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func71_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func71_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func71_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func72_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func72_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func72_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tOpaqueMarshaler_sSimple_eClientEntry_func73_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func73_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tOpaqueMarshaler_sSimple_eClientEntry_func73_str_printStatistics( p_that ) \
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
#define VALID_IDX(IDX)  tOpaqueMarshaler_sSimple_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tOpaqueMarshaler_sSimple_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tOpaqueMarshaler_sSimple_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tOpaqueMarshaler_sSimple_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTDR_reset( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_reset( p_cellcb ))
#define cTDR_sendSOP( b_client ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_sendSOP( p_cellcb, b_client ))
#define cTDR_receiveSOP( b_client ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_receiveSOP( p_cellcb, b_client ))
#define cTDR_sendEOP( b_continue ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_sendEOP( p_cellcb, b_continue ))
#define cTDR_receiveEOP( b_continue ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_receiveEOP( p_cellcb, b_continue ))
#define cTDR_putInt8( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putInt8( p_cellcb, in ))
#define cTDR_putInt16( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putInt16( p_cellcb, in ))
#define cTDR_putInt32( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putInt32( p_cellcb, in ))
#define cTDR_putInt64( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putInt64( p_cellcb, in ))
#define cTDR_putInt128( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putInt128( p_cellcb, in ))
#define cTDR_getInt8( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getInt8( p_cellcb, out ))
#define cTDR_getInt16( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getInt16( p_cellcb, out ))
#define cTDR_getInt32( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getInt32( p_cellcb, out ))
#define cTDR_getInt64( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getInt64( p_cellcb, out ))
#define cTDR_getInt128( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getInt128( p_cellcb, out ))
#define cTDR_putUInt8( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putUInt8( p_cellcb, in ))
#define cTDR_putUInt16( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putUInt16( p_cellcb, in ))
#define cTDR_putUInt32( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putUInt32( p_cellcb, in ))
#define cTDR_putUInt64( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putUInt64( p_cellcb, in ))
#define cTDR_putUInt128( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putUInt128( p_cellcb, in ))
#define cTDR_getUInt8( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getUInt8( p_cellcb, out ))
#define cTDR_getUInt16( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getUInt16( p_cellcb, out ))
#define cTDR_getUInt32( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getUInt32( p_cellcb, out ))
#define cTDR_getUInt64( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getUInt64( p_cellcb, out ))
#define cTDR_getUInt128( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getUInt128( p_cellcb, out ))
#define cTDR_putChar( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putChar( p_cellcb, in ))
#define cTDR_getChar( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getChar( p_cellcb, out ))
#define cTDR_putBool( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putBool( p_cellcb, in ))
#define cTDR_getBool( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getBool( p_cellcb, out ))
#define cTDR_putFloat32( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putFloat32( p_cellcb, in ))
#define cTDR_putDouble64( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putDouble64( p_cellcb, in ))
#define cTDR_getFloat32( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getFloat32( p_cellcb, out ))
#define cTDR_getDouble64( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getDouble64( p_cellcb, out ))
#define cTDR_putSChar( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putSChar( p_cellcb, in ))
#define cTDR_putShort( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putShort( p_cellcb, in ))
#define cTDR_putInt( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putInt( p_cellcb, in ))
#define cTDR_putLong( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putLong( p_cellcb, in ))
#define cTDR_getSChar( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getSChar( p_cellcb, out ))
#define cTDR_getShort( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getShort( p_cellcb, out ))
#define cTDR_getInt( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getInt( p_cellcb, out ))
#define cTDR_getLong( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getLong( p_cellcb, out ))
#define cTDR_putUChar( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putUChar( p_cellcb, in ))
#define cTDR_putUShort( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putUShort( p_cellcb, in ))
#define cTDR_putUInt( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putUInt( p_cellcb, in ))
#define cTDR_putULong( in ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putULong( p_cellcb, in ))
#define cTDR_getUChar( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getUChar( p_cellcb, out ))
#define cTDR_getUShort( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getUShort( p_cellcb, out ))
#define cTDR_getUInt( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getUInt( p_cellcb, out ))
#define cTDR_getULong( out ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getULong( p_cellcb, out ))
#define cTDR_putIntptr( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_putIntptr( p_cellcb, ptr ))
#define cTDR_getIntptr( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cTDR_getIntptr( p_cellcb, ptr ))
#define cLockChannel_signal( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cLockChannel_signal( p_cellcb ))
#define cLockChannel_wait( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cLockChannel_wait( p_cellcb ))
#define cLockChannel_waitPolling( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cLockChannel_waitPolling( p_cellcb ))
#define cLockChannel_waitTimeout( timeout ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cLockChannel_waitTimeout( p_cellcb, timeout ))
#define cLockChannel_initialize( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cLockChannel_initialize( p_cellcb ))
#define cLockChannel_refer( pk_semaphore_status ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cLockChannel_refer( p_cellcb, pk_semaphore_status ))
#define cErrorHandler_errorOccured( func_id, er, state ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_cErrorHandler_errorOccured( p_cellcb, func_id, er, state ))
#define eClientEntry_func21_a_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func21_a_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func21_a_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func21_a_dealloc( p_cellcb, ptr ))
#define eClientEntry_func21_a_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func21_a_printStatistics( p_cellcb ))
#define eClientEntry_func22_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func22_sta_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func22_sta_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func22_sta_dealloc( p_cellcb, ptr ))
#define eClientEntry_func22_sta_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func22_sta_printStatistics( p_cellcb ))
#define eClientEntry_func23_str_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func23_str_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func23_str_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func23_str_dealloc( p_cellcb, ptr ))
#define eClientEntry_func23_str_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func23_str_printStatistics( p_cellcb ))
#define eClientEntry_func24_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func24_msg_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func24_msg_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func24_msg_dealloc( p_cellcb, ptr ))
#define eClientEntry_func24_msg_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func24_msg_printStatistics( p_cellcb ))
#define eClientEntry_func25_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func25_msg_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func25_msg_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func25_msg_dealloc( p_cellcb, ptr ))
#define eClientEntry_func25_msg_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func25_msg_printStatistics( p_cellcb ))
#define eClientEntry_func26_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func26_sta_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func26_sta_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func26_sta_dealloc( p_cellcb, ptr ))
#define eClientEntry_func26_sta_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func26_sta_printStatistics( p_cellcb ))
#define eClientEntry_func27_array2_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func27_array2_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func27_array2_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func27_array2_dealloc( p_cellcb, ptr ))
#define eClientEntry_func27_array2_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func27_array2_printStatistics( p_cellcb ))
#define eClientEntry_func31_a_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func31_a_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func31_a_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func31_a_dealloc( p_cellcb, ptr ))
#define eClientEntry_func31_a_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func31_a_printStatistics( p_cellcb ))
#define eClientEntry_func32_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func32_sta_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func32_sta_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func32_sta_dealloc( p_cellcb, ptr ))
#define eClientEntry_func32_sta_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func32_sta_printStatistics( p_cellcb ))
#define eClientEntry_func33_str_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func33_str_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func33_str_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func33_str_dealloc( p_cellcb, ptr ))
#define eClientEntry_func33_str_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func33_str_printStatistics( p_cellcb ))
#define eClientEntry_func34_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func34_msg_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func34_msg_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func34_msg_dealloc( p_cellcb, ptr ))
#define eClientEntry_func34_msg_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func34_msg_printStatistics( p_cellcb ))
#define eClientEntry_func35_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func35_msg_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func35_msg_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func35_msg_dealloc( p_cellcb, ptr ))
#define eClientEntry_func35_msg_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func35_msg_printStatistics( p_cellcb ))
#define eClientEntry_func36_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func36_sta_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func36_sta_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func36_sta_dealloc( p_cellcb, ptr ))
#define eClientEntry_func36_sta_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func36_sta_printStatistics( p_cellcb ))
#define eClientEntry_func37_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func37_sta_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func37_sta_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func37_sta_dealloc( p_cellcb, ptr ))
#define eClientEntry_func37_sta_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func37_sta_printStatistics( p_cellcb ))
#define eClientEntry_func38_array2_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func38_array2_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func38_array2_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func38_array2_dealloc( p_cellcb, ptr ))
#define eClientEntry_func38_array2_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func38_array2_printStatistics( p_cellcb ))
#define eClientEntry_func39_arraySt_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func39_arraySt_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func39_arraySt_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func39_arraySt_dealloc( p_cellcb, ptr ))
#define eClientEntry_func39_arraySt_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func39_arraySt_printStatistics( p_cellcb ))
#define eClientEntry_func63_sp_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func63_sp_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func63_sp_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func63_sp_dealloc( p_cellcb, ptr ))
#define eClientEntry_func63_sp_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func63_sp_printStatistics( p_cellcb ))
#define eClientEntry_func64_rp_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func64_rp_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func64_rp_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func64_rp_dealloc( p_cellcb, ptr ))
#define eClientEntry_func64_rp_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func64_rp_printStatistics( p_cellcb ))
#define eClientEntry_func70_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func70_sta_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func70_sta_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func70_sta_dealloc( p_cellcb, ptr ))
#define eClientEntry_func70_sta_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func70_sta_printStatistics( p_cellcb ))
#define eClientEntry_func71_str_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func71_str_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func71_str_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func71_str_dealloc( p_cellcb, ptr ))
#define eClientEntry_func71_str_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func71_str_printStatistics( p_cellcb ))
#define eClientEntry_func72_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func72_sta_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func72_sta_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func72_sta_dealloc( p_cellcb, ptr ))
#define eClientEntry_func72_sta_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func72_sta_printStatistics( p_cellcb ))
#define eClientEntry_func73_str_alloc( size, ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func73_str_alloc( p_cellcb, size, ptr ))
#define eClientEntry_func73_str_dealloc( ptr ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func73_str_dealloc( p_cellcb, ptr ))
#define eClientEntry_func73_str_printStatistics( ) \
          ((void)p_cellcb, tOpaqueMarshaler_sSimple_eClientEntry_func73_str_printStatistics( p_cellcb ))



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cLockChannel_joined()\
		tOpaqueMarshaler_sSimple_is_cLockChannel_joined(p_cellcb)
#define is_cErrorHandler_joined()\
		tOpaqueMarshaler_sSimple_is_cErrorHandler_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eClientEntry_shutdown tOpaqueMarshaler_sSimple_eClientEntry_shutdown
#define eClientEntry_func1 tOpaqueMarshaler_sSimple_eClientEntry_func1
#define eClientEntry_func2 tOpaqueMarshaler_sSimple_eClientEntry_func2
#define eClientEntry_func3 tOpaqueMarshaler_sSimple_eClientEntry_func3
#define eClientEntry_func4 tOpaqueMarshaler_sSimple_eClientEntry_func4
#define eClientEntry_func5 tOpaqueMarshaler_sSimple_eClientEntry_func5
#define eClientEntry_func6 tOpaqueMarshaler_sSimple_eClientEntry_func6
#define eClientEntry_func7 tOpaqueMarshaler_sSimple_eClientEntry_func7
#define eClientEntry_func8 tOpaqueMarshaler_sSimple_eClientEntry_func8
#define eClientEntry_func9 tOpaqueMarshaler_sSimple_eClientEntry_func9
#define eClientEntry_func10 tOpaqueMarshaler_sSimple_eClientEntry_func10
#define eClientEntry_func11 tOpaqueMarshaler_sSimple_eClientEntry_func11
#define eClientEntry_func12 tOpaqueMarshaler_sSimple_eClientEntry_func12
#define eClientEntry_func13 tOpaqueMarshaler_sSimple_eClientEntry_func13
#define eClientEntry_func14 tOpaqueMarshaler_sSimple_eClientEntry_func14
#define eClientEntry_func15 tOpaqueMarshaler_sSimple_eClientEntry_func15
#define eClientEntry_func16 tOpaqueMarshaler_sSimple_eClientEntry_func16
#define eClientEntry_func40 tOpaqueMarshaler_sSimple_eClientEntry_func40
#define eClientEntry_func41 tOpaqueMarshaler_sSimple_eClientEntry_func41
#define eClientEntry_func42 tOpaqueMarshaler_sSimple_eClientEntry_func42
#define eClientEntry_func43 tOpaqueMarshaler_sSimple_eClientEntry_func43
#define eClientEntry_func44 tOpaqueMarshaler_sSimple_eClientEntry_func44
#define eClientEntry_func21 tOpaqueMarshaler_sSimple_eClientEntry_func21
#define eClientEntry_func22 tOpaqueMarshaler_sSimple_eClientEntry_func22
#define eClientEntry_func23 tOpaqueMarshaler_sSimple_eClientEntry_func23
#define eClientEntry_func24 tOpaqueMarshaler_sSimple_eClientEntry_func24
#define eClientEntry_func25 tOpaqueMarshaler_sSimple_eClientEntry_func25
#define eClientEntry_func26 tOpaqueMarshaler_sSimple_eClientEntry_func26
#define eClientEntry_func27 tOpaqueMarshaler_sSimple_eClientEntry_func27
#define eClientEntry_func31 tOpaqueMarshaler_sSimple_eClientEntry_func31
#define eClientEntry_func32 tOpaqueMarshaler_sSimple_eClientEntry_func32
#define eClientEntry_func33 tOpaqueMarshaler_sSimple_eClientEntry_func33
#define eClientEntry_func34 tOpaqueMarshaler_sSimple_eClientEntry_func34
#define eClientEntry_func35 tOpaqueMarshaler_sSimple_eClientEntry_func35
#define eClientEntry_func36 tOpaqueMarshaler_sSimple_eClientEntry_func36
#define eClientEntry_func37 tOpaqueMarshaler_sSimple_eClientEntry_func37
#define eClientEntry_func38 tOpaqueMarshaler_sSimple_eClientEntry_func38
#define eClientEntry_func39 tOpaqueMarshaler_sSimple_eClientEntry_func39
#define eClientEntry_func50 tOpaqueMarshaler_sSimple_eClientEntry_func50
#define eClientEntry_func51 tOpaqueMarshaler_sSimple_eClientEntry_func51
#define eClientEntry_func52 tOpaqueMarshaler_sSimple_eClientEntry_func52
#define eClientEntry_func53 tOpaqueMarshaler_sSimple_eClientEntry_func53
#define eClientEntry_func54 tOpaqueMarshaler_sSimple_eClientEntry_func54
#define eClientEntry_func55 tOpaqueMarshaler_sSimple_eClientEntry_func55
#define eClientEntry_func56 tOpaqueMarshaler_sSimple_eClientEntry_func56
#define eClientEntry_func60 tOpaqueMarshaler_sSimple_eClientEntry_func60
#define eClientEntry_func61 tOpaqueMarshaler_sSimple_eClientEntry_func61
#define eClientEntry_func62 tOpaqueMarshaler_sSimple_eClientEntry_func62
#define eClientEntry_func63 tOpaqueMarshaler_sSimple_eClientEntry_func63
#define eClientEntry_func64 tOpaqueMarshaler_sSimple_eClientEntry_func64
#define eClientEntry_func70 tOpaqueMarshaler_sSimple_eClientEntry_func70
#define eClientEntry_func71 tOpaqueMarshaler_sSimple_eClientEntry_func71
#define eClientEntry_func72 tOpaqueMarshaler_sSimple_eClientEntry_func72
#define eClientEntry_func73 tOpaqueMarshaler_sSimple_eClientEntry_func73
#define eClientEntry_func80 tOpaqueMarshaler_sSimple_eClientEntry_func80
#define eClientEntry_func81 tOpaqueMarshaler_sSimple_eClientEntry_func81
#define eClientEntry_func82 tOpaqueMarshaler_sSimple_eClientEntry_func82
#define eClientEntry_func83 tOpaqueMarshaler_sSimple_eClientEntry_func83

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define ECLIENTENTRY_FUNC21_A_DEALLOC(a) \
	  eClientEntry_func21_a_dealloc( (a) ); 
#define ECLIENTENTRY_FUNC22_STA_DEALLOC(sta) \
	  eClientEntry_func22_sta_dealloc( (*(sta)).msg );  \
	  eClientEntry_func22_sta_dealloc( (sta) ); 
#define ECLIENTENTRY_FUNC23_STR_DEALLOC(str) \
	  eClientEntry_func23_str_dealloc( (str) ); 
#define ECLIENTENTRY_FUNC24_MSG_DEALLOC(msg) \
	  eClientEntry_func24_msg_dealloc( (msg) ); 
#define ECLIENTENTRY_FUNC25_MSG_DEALLOC(msg, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eClientEntry_func25_msg_dealloc( (msg)[i0__] );  \
	    } \
	  } \
	  eClientEntry_func25_msg_dealloc( (msg) ); 
#define ECLIENTENTRY_FUNC26_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eClientEntry_func26_sta_dealloc( (*(sta)[i0__]).msg );  \
	      eClientEntry_func26_sta_dealloc( (sta)[i0__] );  \
	    } \
	  } \
	  eClientEntry_func26_sta_dealloc( (sta) ); 
#define ECLIENTENTRY_FUNC27_ARRAY2_DEALLOC(array2) \
	  eClientEntry_func27_array2_dealloc( (array2) ); 
#define ECLIENTENTRY_FUNC31_A_DEALLOC(a) \
	  eClientEntry_func31_a_dealloc( (a) ); 
#define ECLIENTENTRY_FUNC32_STA_DEALLOC(sta) \
	  eClientEntry_func32_sta_dealloc( (*(sta)).msg );  \
	  eClientEntry_func32_sta_dealloc( (sta) ); 
#define ECLIENTENTRY_FUNC33_STR_DEALLOC(str) \
	  eClientEntry_func33_str_dealloc( (str) ); 
#define ECLIENTENTRY_FUNC34_MSG_DEALLOC(msg) \
	  eClientEntry_func34_msg_dealloc( (msg) ); 
#define ECLIENTENTRY_FUNC35_MSG_DEALLOC(msg, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eClientEntry_func35_msg_dealloc( (msg)[i0__] );  \
	    } \
	  } \
	  eClientEntry_func35_msg_dealloc( (msg) ); 
#define ECLIENTENTRY_FUNC36_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eClientEntry_func36_sta_dealloc( (sta)[i0__].msg );  \
	    } \
	  } \
	  eClientEntry_func36_sta_dealloc( (sta) ); 
#define ECLIENTENTRY_FUNC37_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eClientEntry_func37_sta_dealloc( (*(sta)[i0__]).msg );  \
	      eClientEntry_func37_sta_dealloc( (sta)[i0__] );  \
	    } \
	  } \
	  eClientEntry_func37_sta_dealloc( (sta) ); 
#define ECLIENTENTRY_FUNC38_ARRAY2_DEALLOC(array2) \
	  eClientEntry_func38_array2_dealloc( (array2) ); 
#define ECLIENTENTRY_FUNC39_ARRAYST_DEALLOC(arraySt) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < 2; i0__++ ){  \
	      eClientEntry_func39_arraySt_dealloc( (*(*(arraySt))[i0__]).msg );  \
	      eClientEntry_func39_arraySt_dealloc( (*(arraySt))[i0__] );  \
	    } \
	  } \
	  eClientEntry_func39_arraySt_dealloc( (arraySt) ); 
#define ECLIENTENTRY_FUNC63_SP_DEALLOC(sp) \
	  if( (sp) ){	/* nullable */ \
	    eClientEntry_func63_sp_dealloc( (sp) );  \
	  }
#define ECLIENTENTRY_FUNC64_RP_DEALLOC(rp) \
	  if( (rp) ){	/* nullable */ \
	    eClientEntry_func64_rp_dealloc( (rp) );  \
	  }
#define ECLIENTENTRY_FUNC70_STA_DEALLOC(sta) \
	  if( (sta) ){	/* nullable */ \
	    eClientEntry_func70_sta_dealloc( (*(sta)).msg );  \
	    eClientEntry_func70_sta_dealloc( (sta) );  \
	  }
#define ECLIENTENTRY_FUNC71_STR_DEALLOC(str) \
	  if( (str) ){	/* nullable */ \
	    eClientEntry_func71_str_dealloc( (str) );  \
	  }
#define ECLIENTENTRY_FUNC72_STA_DEALLOC(sta) \
	  if( (sta) ){	/* nullable */ \
	    eClientEntry_func72_sta_dealloc( (*(sta)).msg );  \
	    eClientEntry_func72_sta_dealloc( (sta) );  \
	  }
#define ECLIENTENTRY_FUNC73_STR_DEALLOC(str) \
	  if( (str) ){	/* nullable */ \
	    eClientEntry_func73_str_dealloc( (str) );  \
	  }

/* deallocate マクロ #_DAL_#  _RESET */
#define ECLIENTENTRY_FUNC21_A_DEALLOC_RESET(a) \
	  if( (a) ){ \
	    eClientEntry_func21_a_dealloc( (a) );  \
	  }
#define ECLIENTENTRY_FUNC22_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      eClientEntry_func22_sta_dealloc( (*(sta)).msg );  \
	    } \
	    eClientEntry_func22_sta_dealloc( (sta) );  \
	  }
#define ECLIENTENTRY_FUNC23_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    eClientEntry_func23_str_dealloc( (str) );  \
	  }
#define ECLIENTENTRY_FUNC24_MSG_DEALLOC_RESET(msg) \
	  if( (msg) ){ \
	    eClientEntry_func24_msg_dealloc( (msg) );  \
	  }
#define ECLIENTENTRY_FUNC25_MSG_DEALLOC_RESET(msg, count__) \
	  if( (msg) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (msg)[i0__] ){ \
	          eClientEntry_func25_msg_dealloc( (msg)[i0__] );  \
	        } \
	      } \
	    } \
	    eClientEntry_func25_msg_dealloc( (msg) );  \
	  }
#define ECLIENTENTRY_FUNC26_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__] ){ \
	          if( (*(sta)[i0__]).msg ){ \
	            eClientEntry_func26_sta_dealloc( (*(sta)[i0__]).msg );  \
	          } \
	          eClientEntry_func26_sta_dealloc( (sta)[i0__] );  \
	        } \
	      } \
	    } \
	    eClientEntry_func26_sta_dealloc( (sta) );  \
	  }
#define ECLIENTENTRY_FUNC27_ARRAY2_DEALLOC_RESET(array2) \
	  if( (array2) ){ \
	    eClientEntry_func27_array2_dealloc( (array2) );  \
	  }
#define ECLIENTENTRY_FUNC31_A_DEALLOC_RESET(a) \
	  if( (a) ){ \
	    eClientEntry_func31_a_dealloc( (a) );  \
	  }
#define ECLIENTENTRY_FUNC32_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      eClientEntry_func32_sta_dealloc( (*(sta)).msg );  \
	    } \
	    eClientEntry_func32_sta_dealloc( (sta) );  \
	  }
#define ECLIENTENTRY_FUNC33_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    eClientEntry_func33_str_dealloc( (str) );  \
	  }
#define ECLIENTENTRY_FUNC34_MSG_DEALLOC_RESET(msg) \
	  if( (msg) ){ \
	    eClientEntry_func34_msg_dealloc( (msg) );  \
	  }
#define ECLIENTENTRY_FUNC35_MSG_DEALLOC_RESET(msg, count__) \
	  if( (msg) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (msg)[i0__] ){ \
	          eClientEntry_func35_msg_dealloc( (msg)[i0__] );  \
	        } \
	      } \
	    } \
	    eClientEntry_func35_msg_dealloc( (msg) );  \
	  }
#define ECLIENTENTRY_FUNC36_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__].msg ){ \
	          eClientEntry_func36_sta_dealloc( (sta)[i0__].msg );  \
	        } \
	      } \
	    } \
	    eClientEntry_func36_sta_dealloc( (sta) );  \
	  }
#define ECLIENTENTRY_FUNC37_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__] ){ \
	          if( (*(sta)[i0__]).msg ){ \
	            eClientEntry_func37_sta_dealloc( (*(sta)[i0__]).msg );  \
	          } \
	          eClientEntry_func37_sta_dealloc( (sta)[i0__] );  \
	        } \
	      } \
	    } \
	    eClientEntry_func37_sta_dealloc( (sta) );  \
	  }
#define ECLIENTENTRY_FUNC38_ARRAY2_DEALLOC_RESET(array2) \
	  if( (array2) ){ \
	    eClientEntry_func38_array2_dealloc( (array2) );  \
	  }
#define ECLIENTENTRY_FUNC39_ARRAYST_DEALLOC_RESET(arraySt) \
	  if( (arraySt) ){ \
	    { int_t  i1__; \
	      for( i1__ = 0; i1__ < 2; i1__++ ){  \
	        if( (*(arraySt))[i1__] ){ \
	          if( (*(*(arraySt))[i1__]).msg ){ \
	            eClientEntry_func39_arraySt_dealloc( (*(*(arraySt))[i1__]).msg );  \
	          } \
	          eClientEntry_func39_arraySt_dealloc( (*(arraySt))[i1__] );  \
	        } \
	      } \
	    } \
	    eClientEntry_func39_arraySt_dealloc( (arraySt) );  \
	  }
#define ECLIENTENTRY_FUNC63_SP_DEALLOC_RESET(sp) \
	  if( (sp) ){ \
	    eClientEntry_func63_sp_dealloc( (sp) );  \
	  }
#define ECLIENTENTRY_FUNC64_RP_DEALLOC_RESET(rp) \
	  if( (rp) ){ \
	    eClientEntry_func64_rp_dealloc( (rp) );  \
	  }
#define ECLIENTENTRY_FUNC70_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      eClientEntry_func70_sta_dealloc( (*(sta)).msg );  \
	    } \
	    eClientEntry_func70_sta_dealloc( (sta) );  \
	  }
#define ECLIENTENTRY_FUNC71_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    eClientEntry_func71_str_dealloc( (str) );  \
	  }
#define ECLIENTENTRY_FUNC72_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      eClientEntry_func72_sta_dealloc( (*(sta)).msg );  \
	    } \
	    eClientEntry_func72_sta_dealloc( (sta) );  \
	  }
#define ECLIENTENTRY_FUNC73_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    eClientEntry_func73_str_dealloc( (str) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tOpaqueMarshaler_sSimple_TECSGENH */
