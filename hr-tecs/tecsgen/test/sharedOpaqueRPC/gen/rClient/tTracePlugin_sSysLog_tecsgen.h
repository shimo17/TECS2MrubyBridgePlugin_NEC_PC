/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTracePlugin_sSysLog_TECSGEN_H
#define tTracePlugin_sSysLog_TECSGEN_H

/*
 * celltype          :  tTracePlugin_sSysLog
 * global name       :  tTracePlugin_sSysLog
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
#include "sSysLog_tecsgen.h"
#include "sKernel_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTracePlugin_sSysLog_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        probeName_str;
    char_t*        from_str;
}  tTracePlugin_sSysLog_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTracePlugin_sSysLog_CB_tab           tTracePlugin_sSysLog_INIB_tab
#define tTracePlugin_sSysLog_SINGLE_CELL_CB   tTracePlugin_sSysLog_SINGLE_CELL_INIB
#define tTracePlugin_sSysLog_CB               tTracePlugin_sSysLog_INIB
#define tag_tTracePlugin_sSysLog_CB           tag_tTracePlugin_sSysLog_INIB

extern tTracePlugin_sSysLog_CB  tTracePlugin_sSysLog_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTracePlugin_sSysLog_INIB *tTracePlugin_sSysLog_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSysLog */
ER           tTracePlugin_sSysLog_eThroughEntry_write(tTracePlugin_sSysLog_IDX idx, uint_t prio, const SYSLOG* p_syslog);
ER_UINT      tTracePlugin_sSysLog_eThroughEntry_read(tTracePlugin_sSysLog_IDX idx, SYSLOG* p_syslog);
ER           tTracePlugin_sSysLog_eThroughEntry_mask(tTracePlugin_sSysLog_IDX idx, uint_t logmask, uint_t lowmask);
ER           tTracePlugin_sSysLog_eThroughEntry_refer(tTracePlugin_sSysLog_IDX idx, T_SYSLOG_RLOG* pk_rlog);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTracePlugin_sSysLog_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSysLog_tecsgen.h"
#include "tKernel_tecsgen.h"
#ifdef  tTracePlugin_sSysLog_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTracePlugin_sSysLog_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTracePlugin_sSysLog_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tTracePlugin_sSysLog_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTracePlugin_sSysLog_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTracePlugin_sSysLog_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTracePlugin_sSysLog_ATTR_probeName_str( p_that )	((p_that)->probeName_str)
#define tTracePlugin_sSysLog_ATTR_from_str( p_that )	((p_that)->from_str)

#define tTracePlugin_sSysLog_GET_probeName_str(p_that)	((p_that)->probeName_str)
#define tTracePlugin_sSysLog_GET_from_str(p_that)	((p_that)->from_str)



 /* 呼び口関数マクロ #_CPM_# */
#define tTracePlugin_sSysLog_cCall_write( p_that, prio, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (prio), (p_syslog) )
#define tTracePlugin_sSysLog_cCall_read( p_that, p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tTracePlugin_sSysLog_cCall_mask( p_that, logmask, lowmask ) \
	  tSysLog_eSysLog_mask( \
	    (logmask), (lowmask) )
#define tTracePlugin_sSysLog_cCall_refer( p_that, pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )
#define tTracePlugin_sSysLog__require_call_port_tSysLog_eSysLog_write( p_that, prio, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (prio), (p_syslog) )
#define tTracePlugin_sSysLog__require_call_port_tSysLog_eSysLog_read( p_that, p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tTracePlugin_sSysLog__require_call_port_tSysLog_eSysLog_mask( p_that, logmask, lowmask ) \
	  tSysLog_eSysLog_mask( \
	    (logmask), (lowmask) )
#define tTracePlugin_sSysLog__require_call_port_tSysLog_eSysLog_refer( p_that, pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )
#define tTracePlugin_sSysLog__require_call_port_tKernel_eKernel_delay( p_that, delay_time ) \
	  tKernel_eKernel_delay( \
	    (delay_time) )
#define tTracePlugin_sSysLog__require_call_port_tKernel_eKernel_exitTask( p_that ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tTracePlugin_sSysLog__require_call_port_tKernel_eKernel_getTime( p_that, p_system_time ) \
	  tKernel_eKernel_getTime( \
	    (p_system_time) )
#define tTracePlugin_sSysLog__require_call_port_tKernel_eKernel_getMicroTime( p_that, p_system_micro_time ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_system_micro_time) )
#define tTracePlugin_sSysLog__require_call_port_tKernel_eKernel_exitKernel( p_that ) \
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
#define VALID_IDX(IDX)  tTracePlugin_sSysLog_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTracePlugin_sSysLog_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTracePlugin_sSysLog_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTracePlugin_sSysLog_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_probeName_str   tTracePlugin_sSysLog_ATTR_probeName_str( p_cellcb )
#define ATTR_from_str        tTracePlugin_sSysLog_ATTR_from_str( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_write( prio, p_syslog ) \
          ((void)p_cellcb, tTracePlugin_sSysLog_cCall_write( p_cellcb, prio, p_syslog ))
#define cCall_read( p_syslog ) \
          ((void)p_cellcb, tTracePlugin_sSysLog_cCall_read( p_cellcb, p_syslog ))
#define cCall_mask( logmask, lowmask ) \
          ((void)p_cellcb, tTracePlugin_sSysLog_cCall_mask( p_cellcb, logmask, lowmask ))
#define cCall_refer( pk_rlog ) \
          ((void)p_cellcb, tTracePlugin_sSysLog_cCall_refer( p_cellcb, pk_rlog ))
#define write( prio, p_syslog ) \
          ((void)p_cellcb, tTracePlugin_sSysLog__require_call_port_tSysLog_eSysLog_write( p_cellcb, prio, p_syslog ))
#define read( p_syslog ) \
          ((void)p_cellcb, tTracePlugin_sSysLog__require_call_port_tSysLog_eSysLog_read( p_cellcb, p_syslog ))
#define mask( logmask, lowmask ) \
          ((void)p_cellcb, tTracePlugin_sSysLog__require_call_port_tSysLog_eSysLog_mask( p_cellcb, logmask, lowmask ))
#define refer( pk_rlog ) \
          ((void)p_cellcb, tTracePlugin_sSysLog__require_call_port_tSysLog_eSysLog_refer( p_cellcb, pk_rlog ))
#define delay( delay_time ) \
          ((void)p_cellcb, tTracePlugin_sSysLog__require_call_port_tKernel_eKernel_delay( p_cellcb, delay_time ))
#define exitTask( ) \
          ((void)p_cellcb, tTracePlugin_sSysLog__require_call_port_tKernel_eKernel_exitTask( p_cellcb ))
#define getTime( p_system_time ) \
          ((void)p_cellcb, tTracePlugin_sSysLog__require_call_port_tKernel_eKernel_getTime( p_cellcb, p_system_time ))
#define getMicroTime( p_system_micro_time ) \
          ((void)p_cellcb, tTracePlugin_sSysLog__require_call_port_tKernel_eKernel_getMicroTime( p_cellcb, p_system_micro_time ))
#define exitKernel( ) \
          ((void)p_cellcb, tTracePlugin_sSysLog__require_call_port_tKernel_eKernel_exitKernel( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eThroughEntry_write tTracePlugin_sSysLog_eThroughEntry_write
#define eThroughEntry_read tTracePlugin_sSysLog_eThroughEntry_read
#define eThroughEntry_mask tTracePlugin_sSysLog_eThroughEntry_mask
#define eThroughEntry_refer tTracePlugin_sSysLog_eThroughEntry_refer

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTracePlugin_sSysLog_N_CELL; (i)++ ){ \
       //(p_cb) = &tTracePlugin_sSysLog_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTracePlugin_sSysLog_TECSGENH */
