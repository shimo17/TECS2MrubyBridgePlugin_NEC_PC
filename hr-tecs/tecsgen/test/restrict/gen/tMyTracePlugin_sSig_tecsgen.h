/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMyTracePlugin_sSig_TECSGEN_H
#define tMyTracePlugin_sSig_TECSGEN_H

/*
 * celltype          :  tMyTracePlugin_sSig
 * global name       :  tMyTracePlugin_sSig
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
#include "sSig_tecsgen.h"
#include "sSysLog_tecsgen.h"
#include "sKernel_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tMyTracePlugin_sSig_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        probeName_str;
    char_t*        from_str;
}  tMyTracePlugin_sSig_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tMyTracePlugin_sSig_CB_tab           tMyTracePlugin_sSig_INIB_tab
#define tMyTracePlugin_sSig_SINGLE_CELL_CB   tMyTracePlugin_sSig_SINGLE_CELL_INIB
#define tMyTracePlugin_sSig_CB               tMyTracePlugin_sSig_INIB
#define tag_tMyTracePlugin_sSig_CB           tag_tMyTracePlugin_sSig_INIB

extern tMyTracePlugin_sSig_CB  tMyTracePlugin_sSig_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tMyTracePlugin_sSig_INIB *tMyTracePlugin_sSig_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
void         tMyTracePlugin_sSig_eThroughEntry_func1(tMyTracePlugin_sSig_IDX idx);
void         tMyTracePlugin_sSig_eThroughEntry_func2(tMyTracePlugin_sSig_IDX idx);
void         tMyTracePlugin_sSig_eThroughEntry_func3(tMyTracePlugin_sSig_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tMyTracePlugin_sSig_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCelltype_tecsgen.h"
#include "tSysLog_tecsgen.h"
#include "tKernel_tecsgen.h"
#ifdef  tMyTracePlugin_sSig_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tMyTracePlugin_sSig_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tMyTracePlugin_sSig_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tMyTracePlugin_sSig_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tMyTracePlugin_sSig_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tMyTracePlugin_sSig_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tMyTracePlugin_sSig_ATTR_probeName_str( p_that )	((p_that)->probeName_str)
#define tMyTracePlugin_sSig_ATTR_from_str( p_that )	((p_that)->from_str)

#define tMyTracePlugin_sSig_GET_probeName_str(p_that)	((p_that)->probeName_str)
#define tMyTracePlugin_sSig_GET_from_str(p_that)	((p_that)->from_str)



 /* 呼び口関数マクロ #_CPM_# */
#define tMyTracePlugin_sSig_cCall_func1( p_that ) \
	  tCelltype_eEnt_func1( \
	   (tCelltype_IDX)0 )
#define tMyTracePlugin_sSig_cCall_func2( p_that ) \
	  tCelltype_eEnt_func2( \
	   (tCelltype_IDX)0 )
#define tMyTracePlugin_sSig_cCall_func3( p_that ) \
	  tCelltype_eEnt_func3( \
	   (tCelltype_IDX)0 )
#define tMyTracePlugin_sSig__require_call_port_tSysLog_eSysLog_write( p_that, prio, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (prio), (p_syslog) )
#define tMyTracePlugin_sSig__require_call_port_tSysLog_eSysLog_read( p_that, p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tMyTracePlugin_sSig__require_call_port_tSysLog_eSysLog_mask( p_that, logmask, lowmask ) \
	  tSysLog_eSysLog_mask( \
	    (logmask), (lowmask) )
#define tMyTracePlugin_sSig__require_call_port_tSysLog_eSysLog_refer( p_that, pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )
#define tMyTracePlugin_sSig__require_call_port_tKernel_eKernel_delay( p_that, delay_time ) \
	  tKernel_eKernel_delay( \
	    (delay_time) )
#define tMyTracePlugin_sSig__require_call_port_tKernel_eKernel_exitTask( p_that ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tMyTracePlugin_sSig__require_call_port_tKernel_eKernel_getTime( p_that, p_system_time ) \
	  tKernel_eKernel_getTime( \
	    (p_system_time) )
#define tMyTracePlugin_sSig__require_call_port_tKernel_eKernel_getMicroTime( p_that, p_system_micro_time ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_system_micro_time) )
#define tMyTracePlugin_sSig__require_call_port_tKernel_eKernel_exitKernel( p_that ) \
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
#define VALID_IDX(IDX)  tMyTracePlugin_sSig_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tMyTracePlugin_sSig_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tMyTracePlugin_sSig_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tMyTracePlugin_sSig_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_probeName_str   tMyTracePlugin_sSig_ATTR_probeName_str( p_cellcb )
#define ATTR_from_str        tMyTracePlugin_sSig_ATTR_from_str( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func1( ) \
          ((void)p_cellcb, tMyTracePlugin_sSig_cCall_func1( p_cellcb ))
#define cCall_func2( ) \
          ((void)p_cellcb, tMyTracePlugin_sSig_cCall_func2( p_cellcb ))
#define cCall_func3( ) \
          ((void)p_cellcb, tMyTracePlugin_sSig_cCall_func3( p_cellcb ))
#define write( prio, p_syslog ) \
          ((void)p_cellcb, tMyTracePlugin_sSig__require_call_port_tSysLog_eSysLog_write( p_cellcb, prio, p_syslog ))
#define read( p_syslog ) \
          ((void)p_cellcb, tMyTracePlugin_sSig__require_call_port_tSysLog_eSysLog_read( p_cellcb, p_syslog ))
#define mask( logmask, lowmask ) \
          ((void)p_cellcb, tMyTracePlugin_sSig__require_call_port_tSysLog_eSysLog_mask( p_cellcb, logmask, lowmask ))
#define refer( pk_rlog ) \
          ((void)p_cellcb, tMyTracePlugin_sSig__require_call_port_tSysLog_eSysLog_refer( p_cellcb, pk_rlog ))
#define delay( delay_time ) \
          ((void)p_cellcb, tMyTracePlugin_sSig__require_call_port_tKernel_eKernel_delay( p_cellcb, delay_time ))
#define exitTask( ) \
          ((void)p_cellcb, tMyTracePlugin_sSig__require_call_port_tKernel_eKernel_exitTask( p_cellcb ))
#define getTime( p_system_time ) \
          ((void)p_cellcb, tMyTracePlugin_sSig__require_call_port_tKernel_eKernel_getTime( p_cellcb, p_system_time ))
#define getMicroTime( p_system_micro_time ) \
          ((void)p_cellcb, tMyTracePlugin_sSig__require_call_port_tKernel_eKernel_getMicroTime( p_cellcb, p_system_micro_time ))
#define exitKernel( ) \
          ((void)p_cellcb, tMyTracePlugin_sSig__require_call_port_tKernel_eKernel_exitKernel( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eThroughEntry_func1 tMyTracePlugin_sSig_eThroughEntry_func1
#define eThroughEntry_func2 tMyTracePlugin_sSig_eThroughEntry_func2
#define eThroughEntry_func3 tMyTracePlugin_sSig_eThroughEntry_func3

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tMyTracePlugin_sSig_N_CELL; (i)++ ){ \
       //(p_cb) = &tMyTracePlugin_sSig_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMyTracePlugin_sSig_TECSGENH */
