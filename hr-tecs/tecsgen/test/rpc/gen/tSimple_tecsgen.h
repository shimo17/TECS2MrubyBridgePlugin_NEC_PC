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
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTaskBody_tecsgen.h"
#include "sSample_tecsgen.h"
#include "sSimple_tecsgen.h"
#include "sKernel_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tSimple_CB {
    int  dummy;
} tSimple_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */


/* セルタイプのIDX型 #_CTIX_# */
typedef int   tSimple_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tSimple_eBody_main();
/* sSimple */
ER           tSimple_eSimple_onewayPtr( const uint32_t* in);
ER           tSimple_eSimple_onewayArray( const uint32_t* in, int32_t len);
ER           tSimple_eSimple_onewayDoubleArray( const int32_t* in, int32_t len, const int32_t* in2, int32_t len2);
ER           tSimple_eSimple_onewayStringArray( const char_t** in, int32_t len);
ER           tSimple_eSimple_onewayString( const char_t* in, int32_t len);
ER           tSimple_eSimple_onewayStruct( const struct stA* a);
ER           tSimple_eSimple_onewayStruct2( const struct stA* a, int32_t len);
ER           tSimple_eSimple_onewayInArray( int8_t array0[8]);
ER           tSimple_eSimple_onewayInArray2( const int8_t(* array1)[8]);
ER           tSimple_eSimple_onewayNulable( const int8_t(* array)[3]);
void         tSimple_eSimple_exit();
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
#include "tKernel_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tSimple_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSimple_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tSimple_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tSimple_cCall_sayHello( times ) \
	  tMarshaler_sSample_eClientEntry_sayHello( \
	   (tMarshaler_sSample_IDX)0, (times) )
#define tSimple_cCall_howAreYou( buf, len ) \
	  tMarshaler_sSample_eClientEntry_howAreYou( \
	   (tMarshaler_sSample_IDX)0, (buf), (len) )
#define tSimple_cCall_giftToYou( buf, len ) \
	  tMarshaler_sSample_eClientEntry_giftToYou( \
	   (tMarshaler_sSample_IDX)0, (buf), (len) )
#define tSimple_cCall_returnGiftFromYou( buf, len ) \
	  tMarshaler_sSample_eClientEntry_returnGiftFromYou( \
	   (tMarshaler_sSample_IDX)0, (buf), (len) )
#define tSimple_cCall_transferStruct( a, len ) \
	  tMarshaler_sSample_eClientEntry_transferStruct( \
	   (tMarshaler_sSample_IDX)0, (a), (len) )
#define tSimple_cCall_transferStruct2( a ) \
	  tMarshaler_sSample_eClientEntry_transferStruct2( \
	   (tMarshaler_sSample_IDX)0, (a) )
#define tSimple_cCall_transferInArray( array0 ) \
	  tMarshaler_sSample_eClientEntry_transferInArray( \
	   (tMarshaler_sSample_IDX)0, (array0) )
#define tSimple_cCall_transferInArray2( array1 ) \
	  tMarshaler_sSample_eClientEntry_transferInArray2( \
	   (tMarshaler_sSample_IDX)0, (array1) )
#define tSimple_cCall_transferOutArray( array2 ) \
	  tMarshaler_sSample_eClientEntry_transferOutArray( \
	   (tMarshaler_sSample_IDX)0, (array2) )
#define tSimple_cCall_UnsignedTypes( in, s, ui, ul ) \
	  tMarshaler_sSample_eClientEntry_UnsignedTypes( \
	   (tMarshaler_sSample_IDX)0, (in), (s), (ui), (ul) )
#define tSimple_cCall_SignedTypes( in, s, ui, ul ) \
	  tMarshaler_sSample_eClientEntry_SignedTypes( \
	   (tMarshaler_sSample_IDX)0, (in), (s), (ui), (ul) )
#define tSimple_cCall_onewayFunc( buf, len ) \
	  tMarshaler_sSample_eClientEntry_onewayFunc( \
	   (tMarshaler_sSample_IDX)0, (buf), (len) )
#define tSimple_cCall_exit( ) \
	  tMarshaler_sSample_eClientEntry_exit( \
	   (tMarshaler_sSample_IDX)0 )
#define tSimple__require_call_port_tKernel_eKernel_delay( delay_time ) \
	  tKernel_eKernel_delay( \
	    (delay_time) )
#define tSimple__require_call_port_tKernel_eKernel_exitTask( ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tSimple__require_call_port_tKernel_eKernel_getTime( p_system_time ) \
	  tKernel_eKernel_getTime( \
	    (p_system_time) )
#define tSimple__require_call_port_tKernel_eKernel_getMicroTime( p_system_micro_time ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_system_micro_time) )
#define tSimple__require_call_port_tKernel_eKernel_exitKernel( ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tSimple_cCall_giftToYou_buf_alloc( size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tSimple_cCall_giftToYou_buf_dealloc( ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )
#define tSimple_cCall_returnGiftFromYou_buf_alloc( size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tSimple_cCall_returnGiftFromYou_buf_dealloc( ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )
#define tSimple_cCall_onewayFunc_buf_alloc( size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tSimple_cCall_onewayFunc_buf_dealloc( ptr ) \
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


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSimple_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSimple_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSimple_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_sayHello( times ) \
          tSimple_cCall_sayHello( times )
#define cCall_howAreYou( buf, len ) \
          tSimple_cCall_howAreYou( buf, len )
#define cCall_giftToYou( buf, len ) \
          tSimple_cCall_giftToYou( buf, len )
#define cCall_returnGiftFromYou( buf, len ) \
          tSimple_cCall_returnGiftFromYou( buf, len )
#define cCall_transferStruct( a, len ) \
          tSimple_cCall_transferStruct( a, len )
#define cCall_transferStruct2( a ) \
          tSimple_cCall_transferStruct2( a )
#define cCall_transferInArray( array0 ) \
          tSimple_cCall_transferInArray( array0 )
#define cCall_transferInArray2( array1 ) \
          tSimple_cCall_transferInArray2( array1 )
#define cCall_transferOutArray( array2 ) \
          tSimple_cCall_transferOutArray( array2 )
#define cCall_UnsignedTypes( in, s, ui, ul ) \
          tSimple_cCall_UnsignedTypes( in, s, ui, ul )
#define cCall_SignedTypes( in, s, ui, ul ) \
          tSimple_cCall_SignedTypes( in, s, ui, ul )
#define cCall_onewayFunc( buf, len ) \
          tSimple_cCall_onewayFunc( buf, len )
#define cCall_exit( ) \
          tSimple_cCall_exit( )
#define delay( delay_time ) \
          tSimple__require_call_port_tKernel_eKernel_delay( delay_time )
#define exitTask( ) \
          tSimple__require_call_port_tKernel_eKernel_exitTask( )
#define getTime( p_system_time ) \
          tSimple__require_call_port_tKernel_eKernel_getTime( p_system_time )
#define getMicroTime( p_system_micro_time ) \
          tSimple__require_call_port_tKernel_eKernel_getMicroTime( p_system_micro_time )
#define exitKernel( ) \
          tSimple__require_call_port_tKernel_eKernel_exitKernel( )
#define cCall_giftToYou_buf_alloc( size, p ) \
          tSimple_cCall_giftToYou_buf_alloc( size, p )
#define cCall_giftToYou_buf_dealloc( ptr ) \
          tSimple_cCall_giftToYou_buf_dealloc( ptr )
#define cCall_returnGiftFromYou_buf_alloc( size, p ) \
          tSimple_cCall_returnGiftFromYou_buf_alloc( size, p )
#define cCall_returnGiftFromYou_buf_dealloc( ptr ) \
          tSimple_cCall_returnGiftFromYou_buf_dealloc( ptr )
#define cCall_onewayFunc_buf_alloc( size, p ) \
          tSimple_cCall_onewayFunc_buf_alloc( size, p )
#define cCall_onewayFunc_buf_dealloc( ptr ) \
          tSimple_cCall_onewayFunc_buf_dealloc( ptr )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tSimple_eBody_main
#define eSimple_onewayPtr tSimple_eSimple_onewayPtr
#define eSimple_onewayArray tSimple_eSimple_onewayArray
#define eSimple_onewayDoubleArray tSimple_eSimple_onewayDoubleArray
#define eSimple_onewayStringArray tSimple_eSimple_onewayStringArray
#define eSimple_onewayString tSimple_eSimple_onewayString
#define eSimple_onewayStruct tSimple_eSimple_onewayStruct
#define eSimple_onewayStruct2 tSimple_eSimple_onewayStruct2
#define eSimple_onewayInArray tSimple_eSimple_onewayInArray
#define eSimple_onewayInArray2 tSimple_eSimple_onewayInArray2
#define eSimple_onewayNulable tSimple_eSimple_onewayNulable
#define eSimple_exit     tSimple_eSimple_exit

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define CCALL_GIFTTOYOU_BUF_DEALLOC(buf) \
	  cCall_giftToYou_buf_dealloc( (buf) ); 
#define CCALL_RETURNGIFTFROMYOU_BUF_DEALLOC(buf) \
	  cCall_returnGiftFromYou_buf_dealloc( (buf) ); 
#define CCALL_ONEWAYFUNC_BUF_DEALLOC(buf) \
	  cCall_onewayFunc_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define CCALL_GIFTTOYOU_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall_giftToYou_buf_dealloc( (buf) );  \
	  }
#define CCALL_RETURNGIFTFROMYOU_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall_returnGiftFromYou_buf_dealloc( (buf) );  \
	  }
#define CCALL_ONEWAYFUNC_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall_onewayFunc_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSimple_TECSGENH */
