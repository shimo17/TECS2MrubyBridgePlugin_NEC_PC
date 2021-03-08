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
ER           tTracePlugin_sSimple_eThroughEntry_onewayPtr(tTracePlugin_sSimple_IDX idx, const uint32_t* in);
ER           tTracePlugin_sSimple_eThroughEntry_onewayArray(tTracePlugin_sSimple_IDX idx, const uint32_t* in, int32_t len);
ER           tTracePlugin_sSimple_eThroughEntry_onewayDoubleArray(tTracePlugin_sSimple_IDX idx, const int32_t* in, int32_t len, const int32_t* in2, int32_t len2);
ER           tTracePlugin_sSimple_eThroughEntry_onewayStringArray(tTracePlugin_sSimple_IDX idx, const char_t** in, int32_t len);
ER           tTracePlugin_sSimple_eThroughEntry_onewayString(tTracePlugin_sSimple_IDX idx, const char_t* in, int32_t len);
ER           tTracePlugin_sSimple_eThroughEntry_onewayStruct(tTracePlugin_sSimple_IDX idx, const struct stA* a);
ER           tTracePlugin_sSimple_eThroughEntry_onewayStruct2(tTracePlugin_sSimple_IDX idx, const struct stA* a, int32_t len);
ER           tTracePlugin_sSimple_eThroughEntry_onewayInArray(tTracePlugin_sSimple_IDX idx, int8_t array0[8]);
ER           tTracePlugin_sSimple_eThroughEntry_onewayInArray2(tTracePlugin_sSimple_IDX idx, const int8_t(* array1)[8]);
ER           tTracePlugin_sSimple_eThroughEntry_onewayNulable(tTracePlugin_sSimple_IDX idx, const int8_t(* array)[3]);
void         tTracePlugin_sSimple_eThroughEntry_exit(tTracePlugin_sSimple_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTracePlugin_sSimple_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSimple_tecsgen.h"
#include "tSysLog_tecsgen.h"
#include "tKernel_tecsgen.h"
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
#define tTracePlugin_sSimple_cCall_onewayPtr( p_that, in ) \
	  tSimple_eSimple_onewayPtr( \
	    (in) )
#define tTracePlugin_sSimple_cCall_onewayArray( p_that, in, len ) \
	  tSimple_eSimple_onewayArray( \
	    (in), (len) )
#define tTracePlugin_sSimple_cCall_onewayDoubleArray( p_that, in, len, in2, len2 ) \
	  tSimple_eSimple_onewayDoubleArray( \
	    (in), (len), (in2), (len2) )
#define tTracePlugin_sSimple_cCall_onewayStringArray( p_that, in, len ) \
	  tSimple_eSimple_onewayStringArray( \
	    (in), (len) )
#define tTracePlugin_sSimple_cCall_onewayString( p_that, in, len ) \
	  tSimple_eSimple_onewayString( \
	    (in), (len) )
#define tTracePlugin_sSimple_cCall_onewayStruct( p_that, a ) \
	  tSimple_eSimple_onewayStruct( \
	    (a) )
#define tTracePlugin_sSimple_cCall_onewayStruct2( p_that, a, len ) \
	  tSimple_eSimple_onewayStruct2( \
	    (a), (len) )
#define tTracePlugin_sSimple_cCall_onewayInArray( p_that, array0 ) \
	  tSimple_eSimple_onewayInArray( \
	    (array0) )
#define tTracePlugin_sSimple_cCall_onewayInArray2( p_that, array1 ) \
	  tSimple_eSimple_onewayInArray2( \
	    (array1) )
#define tTracePlugin_sSimple_cCall_onewayNulable( p_that, array ) \
	  tSimple_eSimple_onewayNulable( \
	    (array) )
#define tTracePlugin_sSimple_cCall_exit( p_that ) \
	  tSimple_eSimple_exit( \
	    )
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
#define cCall_onewayPtr( in ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_onewayPtr( p_cellcb, in ))
#define cCall_onewayArray( in, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_onewayArray( p_cellcb, in, len ))
#define cCall_onewayDoubleArray( in, len, in2, len2 ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_onewayDoubleArray( p_cellcb, in, len, in2, len2 ))
#define cCall_onewayStringArray( in, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_onewayStringArray( p_cellcb, in, len ))
#define cCall_onewayString( in, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_onewayString( p_cellcb, in, len ))
#define cCall_onewayStruct( a ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_onewayStruct( p_cellcb, a ))
#define cCall_onewayStruct2( a, len ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_onewayStruct2( p_cellcb, a, len ))
#define cCall_onewayInArray( array0 ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_onewayInArray( p_cellcb, array0 ))
#define cCall_onewayInArray2( array1 ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_onewayInArray2( p_cellcb, array1 ))
#define cCall_onewayNulable( array ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_onewayNulable( p_cellcb, array ))
#define cCall_exit( ) \
          ((void)p_cellcb, tTracePlugin_sSimple_cCall_exit( p_cellcb ))
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




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eThroughEntry_onewayPtr tTracePlugin_sSimple_eThroughEntry_onewayPtr
#define eThroughEntry_onewayArray tTracePlugin_sSimple_eThroughEntry_onewayArray
#define eThroughEntry_onewayDoubleArray tTracePlugin_sSimple_eThroughEntry_onewayDoubleArray
#define eThroughEntry_onewayStringArray tTracePlugin_sSimple_eThroughEntry_onewayStringArray
#define eThroughEntry_onewayString tTracePlugin_sSimple_eThroughEntry_onewayString
#define eThroughEntry_onewayStruct tTracePlugin_sSimple_eThroughEntry_onewayStruct
#define eThroughEntry_onewayStruct2 tTracePlugin_sSimple_eThroughEntry_onewayStruct2
#define eThroughEntry_onewayInArray tTracePlugin_sSimple_eThroughEntry_onewayInArray
#define eThroughEntry_onewayInArray2 tTracePlugin_sSimple_eThroughEntry_onewayInArray2
#define eThroughEntry_onewayNulable tTracePlugin_sSimple_eThroughEntry_onewayNulable
#define eThroughEntry_exit tTracePlugin_sSimple_eThroughEntry_exit

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTracePlugin_sSimple_N_CELL; (i)++ ){ \
       //(p_cb) = &tTracePlugin_sSimple_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTracePlugin_sSimple_TECSGENH */
