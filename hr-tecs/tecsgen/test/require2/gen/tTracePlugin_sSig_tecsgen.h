/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTracePlugin_sSig_TECSGEN_H
#define tTracePlugin_sSig_TECSGEN_H

/*
 * celltype          :  tTracePlugin_sSig
 * global name       :  tTracePlugin_sSig
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
typedef const struct tag_tTracePlugin_sSig_INIB {
    /* call port #_TCP_# */
    struct tag_sSig_VDES const*cCall;
    struct tag_sSysLog_VDES const*_require_call_port_tSysLog_eSysLog;
    struct tag_sKernel_VDES const*_require_call_port_tKernel_eKernel;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        probeName_str;
    char_t*        from_str;
}  tTracePlugin_sSig_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTracePlugin_sSig_CB_tab           tTracePlugin_sSig_INIB_tab
#define tTracePlugin_sSig_SINGLE_CELL_CB   tTracePlugin_sSig_SINGLE_CELL_INIB
#define tTracePlugin_sSig_CB               tTracePlugin_sSig_INIB
#define tag_tTracePlugin_sSig_CB           tag_tTracePlugin_sSig_INIB

extern tTracePlugin_sSig_CB  tTracePlugin_sSig_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTracePlugin_sSig_INIB *tTracePlugin_sSig_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
int          tTracePlugin_sSig_eThroughEntry_func(tTracePlugin_sSig_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tTracePlugin_sSig_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tTracePlugin_sSig_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTracePlugin_sSig_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTracePlugin_sSig_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTracePlugin_sSig_ATTR_probeName_str( p_that )	((p_that)->probeName_str)
#define tTracePlugin_sSig_ATTR_from_str( p_that )	((p_that)->from_str)

#define tTracePlugin_sSig_GET_probeName_str(p_that)	((p_that)->probeName_str)
#define tTracePlugin_sSig_GET_from_str(p_that)	((p_that)->from_str)



 /* 呼び口関数マクロ #_CPM_# */
#define tTracePlugin_sSig_cCall_func( p_that ) \
	  (p_that)->cCall->VMT->func__T( \
	   (p_that)->cCall )
#define tTracePlugin_sSig__require_call_port_tSysLog_eSysLog_write( p_that, prio, p_syslog ) \
	  (p_that)->_require_call_port_tSysLog_eSysLog->VMT->write__T( \
	   (p_that)->_require_call_port_tSysLog_eSysLog, (prio), (p_syslog) )
#define tTracePlugin_sSig__require_call_port_tSysLog_eSysLog_read( p_that, p_syslog ) \
	  (p_that)->_require_call_port_tSysLog_eSysLog->VMT->read__T( \
	   (p_that)->_require_call_port_tSysLog_eSysLog, (p_syslog) )
#define tTracePlugin_sSig__require_call_port_tSysLog_eSysLog_mask( p_that, logmask, lowmask ) \
	  (p_that)->_require_call_port_tSysLog_eSysLog->VMT->mask__T( \
	   (p_that)->_require_call_port_tSysLog_eSysLog, (logmask), (lowmask) )
#define tTracePlugin_sSig__require_call_port_tSysLog_eSysLog_refer( p_that, pk_rlog ) \
	  (p_that)->_require_call_port_tSysLog_eSysLog->VMT->refer__T( \
	   (p_that)->_require_call_port_tSysLog_eSysLog, (pk_rlog) )
#define tTracePlugin_sSig__require_call_port_tKernel_eKernel_delay( p_that, delay_time ) \
	  (p_that)->_require_call_port_tKernel_eKernel->VMT->delay__T( \
	   (p_that)->_require_call_port_tKernel_eKernel, (delay_time) )
#define tTracePlugin_sSig__require_call_port_tKernel_eKernel_exitTask( p_that ) \
	  (p_that)->_require_call_port_tKernel_eKernel->VMT->exitTask__T( \
	   (p_that)->_require_call_port_tKernel_eKernel )
#define tTracePlugin_sSig__require_call_port_tKernel_eKernel_getTime( p_that, p_system_time ) \
	  (p_that)->_require_call_port_tKernel_eKernel->VMT->getTime__T( \
	   (p_that)->_require_call_port_tKernel_eKernel, (p_system_time) )
#define tTracePlugin_sSig__require_call_port_tKernel_eKernel_getMicroTime( p_that, p_system_micro_time ) \
	  (p_that)->_require_call_port_tKernel_eKernel->VMT->getMicroTime__T( \
	   (p_that)->_require_call_port_tKernel_eKernel, (p_system_micro_time) )
#define tTracePlugin_sSig__require_call_port_tKernel_eKernel_exitKernel( p_that ) \
	  (p_that)->_require_call_port_tKernel_eKernel->VMT->exitKernel__T( \
	   (p_that)->_require_call_port_tKernel_eKernel )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eThroughEntry */
int            tTracePlugin_sSig_eThroughEntry_func_skel( const struct tag_sSig_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTracePlugin_sSig_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTracePlugin_sSig_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTracePlugin_sSig_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTracePlugin_sSig_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_probeName_str   tTracePlugin_sSig_ATTR_probeName_str( p_cellcb )
#define ATTR_from_str        tTracePlugin_sSig_ATTR_from_str( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func( ) \
          tTracePlugin_sSig_cCall_func( p_cellcb )
#define write( prio, p_syslog ) \
          tTracePlugin_sSig__require_call_port_tSysLog_eSysLog_write( p_cellcb, prio, p_syslog )
#define read( p_syslog ) \
          tTracePlugin_sSig__require_call_port_tSysLog_eSysLog_read( p_cellcb, p_syslog )
#define mask( logmask, lowmask ) \
          tTracePlugin_sSig__require_call_port_tSysLog_eSysLog_mask( p_cellcb, logmask, lowmask )
#define refer( pk_rlog ) \
          tTracePlugin_sSig__require_call_port_tSysLog_eSysLog_refer( p_cellcb, pk_rlog )
#define delay( delay_time ) \
          tTracePlugin_sSig__require_call_port_tKernel_eKernel_delay( p_cellcb, delay_time )
#define exitTask( ) \
          tTracePlugin_sSig__require_call_port_tKernel_eKernel_exitTask( p_cellcb )
#define getTime( p_system_time ) \
          tTracePlugin_sSig__require_call_port_tKernel_eKernel_getTime( p_cellcb, p_system_time )
#define getMicroTime( p_system_micro_time ) \
          tTracePlugin_sSig__require_call_port_tKernel_eKernel_getMicroTime( p_cellcb, p_system_micro_time )
#define exitKernel( ) \
          tTracePlugin_sSig__require_call_port_tKernel_eKernel_exitKernel( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eThroughEntry_func tTracePlugin_sSig_eThroughEntry_func

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTracePlugin_sSig_N_CELL; (i)++ ){ \
       //(p_cb) = &tTracePlugin_sSig_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTracePlugin_sSig_TECSGENH */
