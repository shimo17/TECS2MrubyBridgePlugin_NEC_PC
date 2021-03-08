/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTracePlugin_sSample_TECSGEN_H
#define tTracePlugin_sSample_TECSGEN_H

/*
 * celltype          :  tTracePlugin_sSample
 * global name       :  tTracePlugin_sSample
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
#include "sSysLog_tecsgen.h"
#include "sKernel_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTracePlugin_sSample_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        probeName_str;
    char_t*        from_str;
}  tTracePlugin_sSample_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTracePlugin_sSample_CB_tab           tTracePlugin_sSample_INIB_tab
#define tTracePlugin_sSample_SINGLE_CELL_CB   tTracePlugin_sSample_SINGLE_CELL_INIB
#define tTracePlugin_sSample_CB               tTracePlugin_sSample_INIB
#define tag_tTracePlugin_sSample_CB           tag_tTracePlugin_sSample_INIB

extern tTracePlugin_sSample_CB  tTracePlugin_sSample_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTracePlugin_sSample_INIB *tTracePlugin_sSample_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSample */
ER           tTracePlugin_sSample_eThroughEntry_sayHello(tTracePlugin_sSample_IDX idx, int32_t times);
ER           tTracePlugin_sSample_eThroughEntry_howAreYou(tTracePlugin_sSample_IDX idx, char_t* buf, int32_t len);
ER           tTracePlugin_sSample_eThroughEntry_giftToYou(tTracePlugin_sSample_IDX idx, char_t* buf, int32_t len);
ER           tTracePlugin_sSample_eThroughEntry_returnGiftFromYou(tTracePlugin_sSample_IDX idx, int16_t** buf, int32_t* len);
ER           tTracePlugin_sSample_eThroughEntry_transferStruct(tTracePlugin_sSample_IDX idx, const struct stA* a, int32_t len);
ER           tTracePlugin_sSample_eThroughEntry_transferStruct2(tTracePlugin_sSample_IDX idx, struct stA a);
ER           tTracePlugin_sSample_eThroughEntry_transferInArray(tTracePlugin_sSample_IDX idx, int8_t array0[8]);
ER           tTracePlugin_sSample_eThroughEntry_transferInArray2(tTracePlugin_sSample_IDX idx, const int8_t(* array1)[8]);
ER           tTracePlugin_sSample_eThroughEntry_transferOutArray(tTracePlugin_sSample_IDX idx, int8_t(* array2)[8]);
unsigned char tTracePlugin_sSample_eThroughEntry_UnsignedTypes(tTracePlugin_sSample_IDX idx, uint8_t in, unsigned short s, uint_t ui, ulong_t ul);
char         tTracePlugin_sSample_eThroughEntry_SignedTypes(tTracePlugin_sSample_IDX idx, int8_t in, short s, int_t ui, long_t ul);
ER           tTracePlugin_sSample_eThroughEntry_onewayFunc(tTracePlugin_sSample_IDX idx, char_t* buf, int32_t len);
void         tTracePlugin_sSample_eThroughEntry_exit(tTracePlugin_sSample_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTracePlugin_sSample_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSample_tecsgen.h"
#include "tSysLog_tecsgen.h"
#include "tKernel_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tTracePlugin_sSample_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTracePlugin_sSample_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTracePlugin_sSample_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tTracePlugin_sSample_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTracePlugin_sSample_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTracePlugin_sSample_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTracePlugin_sSample_ATTR_probeName_str( p_that )	((p_that)->probeName_str)
#define tTracePlugin_sSample_ATTR_from_str( p_that )	((p_that)->from_str)

#define tTracePlugin_sSample_GET_probeName_str(p_that)	((p_that)->probeName_str)
#define tTracePlugin_sSample_GET_from_str(p_that)	((p_that)->from_str)



 /* 呼び口関数マクロ #_CPM_# */
#define tTracePlugin_sSample_cCall_sayHello( p_that, times ) \
	  tSample_eEnt_sayHello( \
	   (tSample_IDX)0, (times) )
#define tTracePlugin_sSample_cCall_howAreYou( p_that, buf, len ) \
	  tSample_eEnt_howAreYou( \
	   (tSample_IDX)0, (buf), (len) )
#define tTracePlugin_sSample_cCall_giftToYou( p_that, buf, len ) \
	  tSample_eEnt_giftToYou( \
	   (tSample_IDX)0, (buf), (len) )
#define tTracePlugin_sSample_cCall_returnGiftFromYou( p_that, buf, len ) \
	  tSample_eEnt_returnGiftFromYou( \
	   (tSample_IDX)0, (buf), (len) )
#define tTracePlugin_sSample_cCall_transferStruct( p_that, a, len ) \
	  tSample_eEnt_transferStruct( \
	   (tSample_IDX)0, (a), (len) )
#define tTracePlugin_sSample_cCall_transferStruct2( p_that, a ) \
	  tSample_eEnt_transferStruct2( \
	   (tSample_IDX)0, (a) )
#define tTracePlugin_sSample_cCall_transferInArray( p_that, array0 ) \
	  tSample_eEnt_transferInArray( \
	   (tSample_IDX)0, (array0) )
#define tTracePlugin_sSample_cCall_transferInArray2( p_that, array1 ) \
	  tSample_eEnt_transferInArray2( \
	   (tSample_IDX)0, (array1) )
#define tTracePlugin_sSample_cCall_transferOutArray( p_that, array2 ) \
	  tSample_eEnt_transferOutArray( \
	   (tSample_IDX)0, (array2) )
#define tTracePlugin_sSample_cCall_UnsignedTypes( p_that, in, s, ui, ul ) \
	  tSample_eEnt_UnsignedTypes( \
	   (tSample_IDX)0, (in), (s), (ui), (ul) )
#define tTracePlugin_sSample_cCall_SignedTypes( p_that, in, s, ui, ul ) \
	  tSample_eEnt_SignedTypes( \
	   (tSample_IDX)0, (in), (s), (ui), (ul) )
#define tTracePlugin_sSample_cCall_onewayFunc( p_that, buf, len ) \
	  tSample_eEnt_onewayFunc( \
	   (tSample_IDX)0, (buf), (len) )
#define tTracePlugin_sSample_cCall_exit( p_that ) \
	  tSample_eEnt_exit( \
	   (tSample_IDX)0 )
#define tTracePlugin_sSample__require_call_port_tSysLog_eSysLog_write( p_that, prio, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (prio), (p_syslog) )
#define tTracePlugin_sSample__require_call_port_tSysLog_eSysLog_read( p_that, p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tTracePlugin_sSample__require_call_port_tSysLog_eSysLog_mask( p_that, logmask, lowmask ) \
	  tSysLog_eSysLog_mask( \
	    (logmask), (lowmask) )
#define tTracePlugin_sSample__require_call_port_tSysLog_eSysLog_refer( p_that, pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )
#define tTracePlugin_sSample__require_call_port_tKernel_eKernel_delay( p_that, delay_time ) \
	  tKernel_eKernel_delay( \
	    (delay_time) )
#define tTracePlugin_sSample__require_call_port_tKernel_eKernel_exitTask( p_that ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tTracePlugin_sSample__require_call_port_tKernel_eKernel_getTime( p_that, p_system_time ) \
	  tKernel_eKernel_getTime( \
	    (p_system_time) )
#define tTracePlugin_sSample__require_call_port_tKernel_eKernel_getMicroTime( p_that, p_system_micro_time ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_system_micro_time) )
#define tTracePlugin_sSample__require_call_port_tKernel_eKernel_exitKernel( p_that ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tTracePlugin_sSample_eThroughEntry_giftToYou_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tTracePlugin_sSample_eThroughEntry_giftToYou_buf_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )
#define tTracePlugin_sSample_eThroughEntry_returnGiftFromYou_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tTracePlugin_sSample_eThroughEntry_returnGiftFromYou_buf_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )
#define tTracePlugin_sSample_eThroughEntry_onewayFunc_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tTracePlugin_sSample_eThroughEntry_onewayFunc_buf_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )
#define tTracePlugin_sSample_cCall_giftToYou_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tTracePlugin_sSample_cCall_giftToYou_buf_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )
#define tTracePlugin_sSample_cCall_returnGiftFromYou_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tTracePlugin_sSample_cCall_returnGiftFromYou_buf_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )
#define tTracePlugin_sSample_cCall_onewayFunc_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tTracePlugin_sSample_cCall_onewayFunc_buf_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )

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
#define VALID_IDX(IDX)  tTracePlugin_sSample_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTracePlugin_sSample_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTracePlugin_sSample_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTracePlugin_sSample_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_probeName_str   tTracePlugin_sSample_ATTR_probeName_str( p_cellcb )
#define ATTR_from_str        tTracePlugin_sSample_ATTR_from_str( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_sayHello( times ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_sayHello( p_cellcb, times ))
#define cCall_howAreYou( buf, len ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_howAreYou( p_cellcb, buf, len ))
#define cCall_giftToYou( buf, len ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_giftToYou( p_cellcb, buf, len ))
#define cCall_returnGiftFromYou( buf, len ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_returnGiftFromYou( p_cellcb, buf, len ))
#define cCall_transferStruct( a, len ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_transferStruct( p_cellcb, a, len ))
#define cCall_transferStruct2( a ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_transferStruct2( p_cellcb, a ))
#define cCall_transferInArray( array0 ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_transferInArray( p_cellcb, array0 ))
#define cCall_transferInArray2( array1 ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_transferInArray2( p_cellcb, array1 ))
#define cCall_transferOutArray( array2 ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_transferOutArray( p_cellcb, array2 ))
#define cCall_UnsignedTypes( in, s, ui, ul ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_UnsignedTypes( p_cellcb, in, s, ui, ul ))
#define cCall_SignedTypes( in, s, ui, ul ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_SignedTypes( p_cellcb, in, s, ui, ul ))
#define cCall_onewayFunc( buf, len ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_onewayFunc( p_cellcb, buf, len ))
#define cCall_exit( ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_exit( p_cellcb ))
#define write( prio, p_syslog ) \
          ((void)p_cellcb, tTracePlugin_sSample__require_call_port_tSysLog_eSysLog_write( p_cellcb, prio, p_syslog ))
#define read( p_syslog ) \
          ((void)p_cellcb, tTracePlugin_sSample__require_call_port_tSysLog_eSysLog_read( p_cellcb, p_syslog ))
#define mask( logmask, lowmask ) \
          ((void)p_cellcb, tTracePlugin_sSample__require_call_port_tSysLog_eSysLog_mask( p_cellcb, logmask, lowmask ))
#define refer( pk_rlog ) \
          ((void)p_cellcb, tTracePlugin_sSample__require_call_port_tSysLog_eSysLog_refer( p_cellcb, pk_rlog ))
#define delay( delay_time ) \
          ((void)p_cellcb, tTracePlugin_sSample__require_call_port_tKernel_eKernel_delay( p_cellcb, delay_time ))
#define exitTask( ) \
          ((void)p_cellcb, tTracePlugin_sSample__require_call_port_tKernel_eKernel_exitTask( p_cellcb ))
#define getTime( p_system_time ) \
          ((void)p_cellcb, tTracePlugin_sSample__require_call_port_tKernel_eKernel_getTime( p_cellcb, p_system_time ))
#define getMicroTime( p_system_micro_time ) \
          ((void)p_cellcb, tTracePlugin_sSample__require_call_port_tKernel_eKernel_getMicroTime( p_cellcb, p_system_micro_time ))
#define exitKernel( ) \
          ((void)p_cellcb, tTracePlugin_sSample__require_call_port_tKernel_eKernel_exitKernel( p_cellcb ))
#define eThroughEntry_giftToYou_buf_alloc( size, p ) \
          ((void)p_cellcb, tTracePlugin_sSample_eThroughEntry_giftToYou_buf_alloc( p_cellcb, size, p ))
#define eThroughEntry_giftToYou_buf_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSample_eThroughEntry_giftToYou_buf_dealloc( p_cellcb, ptr ))
#define eThroughEntry_returnGiftFromYou_buf_alloc( size, p ) \
          ((void)p_cellcb, tTracePlugin_sSample_eThroughEntry_returnGiftFromYou_buf_alloc( p_cellcb, size, p ))
#define eThroughEntry_returnGiftFromYou_buf_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSample_eThroughEntry_returnGiftFromYou_buf_dealloc( p_cellcb, ptr ))
#define eThroughEntry_onewayFunc_buf_alloc( size, p ) \
          ((void)p_cellcb, tTracePlugin_sSample_eThroughEntry_onewayFunc_buf_alloc( p_cellcb, size, p ))
#define eThroughEntry_onewayFunc_buf_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSample_eThroughEntry_onewayFunc_buf_dealloc( p_cellcb, ptr ))
#define cCall_giftToYou_buf_alloc( size, p ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_giftToYou_buf_alloc( p_cellcb, size, p ))
#define cCall_giftToYou_buf_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_giftToYou_buf_dealloc( p_cellcb, ptr ))
#define cCall_returnGiftFromYou_buf_alloc( size, p ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_returnGiftFromYou_buf_alloc( p_cellcb, size, p ))
#define cCall_returnGiftFromYou_buf_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_returnGiftFromYou_buf_dealloc( p_cellcb, ptr ))
#define cCall_onewayFunc_buf_alloc( size, p ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_onewayFunc_buf_alloc( p_cellcb, size, p ))
#define cCall_onewayFunc_buf_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSample_cCall_onewayFunc_buf_dealloc( p_cellcb, ptr ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eThroughEntry_sayHello tTracePlugin_sSample_eThroughEntry_sayHello
#define eThroughEntry_howAreYou tTracePlugin_sSample_eThroughEntry_howAreYou
#define eThroughEntry_giftToYou tTracePlugin_sSample_eThroughEntry_giftToYou
#define eThroughEntry_returnGiftFromYou tTracePlugin_sSample_eThroughEntry_returnGiftFromYou
#define eThroughEntry_transferStruct tTracePlugin_sSample_eThroughEntry_transferStruct
#define eThroughEntry_transferStruct2 tTracePlugin_sSample_eThroughEntry_transferStruct2
#define eThroughEntry_transferInArray tTracePlugin_sSample_eThroughEntry_transferInArray
#define eThroughEntry_transferInArray2 tTracePlugin_sSample_eThroughEntry_transferInArray2
#define eThroughEntry_transferOutArray tTracePlugin_sSample_eThroughEntry_transferOutArray
#define eThroughEntry_UnsignedTypes tTracePlugin_sSample_eThroughEntry_UnsignedTypes
#define eThroughEntry_SignedTypes tTracePlugin_sSample_eThroughEntry_SignedTypes
#define eThroughEntry_onewayFunc tTracePlugin_sSample_eThroughEntry_onewayFunc
#define eThroughEntry_exit tTracePlugin_sSample_eThroughEntry_exit

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTracePlugin_sSample_N_CELL; (i)++ ){ \
       //(p_cb) = &tTracePlugin_sSample_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define ETHROUGHENTRY_GIFTTOYOU_BUF_DEALLOC(buf) \
	  eThroughEntry_giftToYou_buf_dealloc( (buf) ); 
#define ETHROUGHENTRY_RETURNGIFTFROMYOU_BUF_DEALLOC(buf) \
	  eThroughEntry_returnGiftFromYou_buf_dealloc( (buf) ); 
#define ETHROUGHENTRY_ONEWAYFUNC_BUF_DEALLOC(buf) \
	  eThroughEntry_onewayFunc_buf_dealloc( (buf) ); 
#define CCALL_GIFTTOYOU_BUF_DEALLOC(buf) \
	  cCall_giftToYou_buf_dealloc( (buf) ); 
#define CCALL_RETURNGIFTFROMYOU_BUF_DEALLOC(buf) \
	  cCall_returnGiftFromYou_buf_dealloc( (buf) ); 
#define CCALL_ONEWAYFUNC_BUF_DEALLOC(buf) \
	  cCall_onewayFunc_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define ETHROUGHENTRY_GIFTTOYOU_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eThroughEntry_giftToYou_buf_dealloc( (buf) );  \
	  }
#define ETHROUGHENTRY_RETURNGIFTFROMYOU_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eThroughEntry_returnGiftFromYou_buf_dealloc( (buf) );  \
	  }
#define ETHROUGHENTRY_ONEWAYFUNC_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eThroughEntry_onewayFunc_buf_dealloc( (buf) );  \
	  }
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

#endif /* tTracePlugin_sSample_TECSGENH */
