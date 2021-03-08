/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTracePlugin_sSignature_TECSGEN_H
#define tTracePlugin_sSignature_TECSGEN_H

/*
 * celltype          :  tTracePlugin_sSignature
 * global name       :  tTracePlugin_sSignature
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
#include "sSignature_tecsgen.h"
#include "sSysLog_tecsgen.h"
#include "sKernel_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTracePlugin_sSignature_INIB {
    /* call port #_TCP_# */
    struct tag_sSignature_VDES const*cCall;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        probeName_str;
    char_t*        from_str;
}  tTracePlugin_sSignature_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTracePlugin_sSignature_CB_tab           tTracePlugin_sSignature_INIB_tab
#define tTracePlugin_sSignature_SINGLE_CELL_CB   tTracePlugin_sSignature_SINGLE_CELL_INIB
#define tTracePlugin_sSignature_CB               tTracePlugin_sSignature_INIB
#define tag_tTracePlugin_sSignature_CB           tag_tTracePlugin_sSignature_INIB

extern tTracePlugin_sSignature_CB  tTracePlugin_sSignature_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTracePlugin_sSignature_INIB *tTracePlugin_sSignature_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSignature */
ER           tTracePlugin_sSignature_eThroughEntry_func1(tTracePlugin_sSignature_IDX idx, int32_t inval);
ER           tTracePlugin_sSignature_eThroughEntry_func2(tTracePlugin_sSignature_IDX idx, int32_t* outval);
ER           tTracePlugin_sSignature_eThroughEntry_func3(tTracePlugin_sSignature_IDX idx, struct tag stval);
ER           tTracePlugin_sSignature_eThroughEntry_func4(tTracePlugin_sSignature_IDX idx, stTag stval, INT inval);
ER           tTracePlugin_sSignature_eThroughEntry_func5(tTracePlugin_sSignature_IDX idx, stTag* stval, INT inval);
ER           tTracePlugin_sSignature_eThroughEntry_func6(tTracePlugin_sSignature_IDX idx, int8_t* buf, int32_t sz);
ER           tTracePlugin_sSignature_eThroughEntry_func7(tTracePlugin_sSignature_IDX idx, int8_t** buf, int32_t* sz);
ER           tTracePlugin_sSignature_eThroughEntry_func10(tTracePlugin_sSignature_IDX idx, const stTag* stval, int32_t a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTracePlugin_sSignature_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSysLog_tecsgen.h"
#include "tKernel_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tTracePlugin_sSignature_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTracePlugin_sSignature_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTracePlugin_sSignature_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tTracePlugin_sSignature_N_CELL        (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTracePlugin_sSignature_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTracePlugin_sSignature_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTracePlugin_sSignature_ATTR_probeName_str( p_that )	((p_that)->probeName_str)
#define tTracePlugin_sSignature_ATTR_from_str( p_that )	((p_that)->from_str)

#define tTracePlugin_sSignature_GET_probeName_str(p_that)	((p_that)->probeName_str)
#define tTracePlugin_sSignature_GET_from_str(p_that)	((p_that)->from_str)



 /* 呼び口関数マクロ #_CPM_# */
#define tTracePlugin_sSignature_cCall_func1( p_that, inval ) \
	  (p_that)->cCall->VMT->func1__T( \
	   (p_that)->cCall, (inval) )
#define tTracePlugin_sSignature_cCall_func2( p_that, outval ) \
	  (p_that)->cCall->VMT->func2__T( \
	   (p_that)->cCall, (outval) )
#define tTracePlugin_sSignature_cCall_func3( p_that, stval ) \
	  (p_that)->cCall->VMT->func3__T( \
	   (p_that)->cCall, (stval) )
#define tTracePlugin_sSignature_cCall_func4( p_that, stval, inval ) \
	  (p_that)->cCall->VMT->func4__T( \
	   (p_that)->cCall, (stval), (inval) )
#define tTracePlugin_sSignature_cCall_func5( p_that, stval, inval ) \
	  (p_that)->cCall->VMT->func5__T( \
	   (p_that)->cCall, (stval), (inval) )
#define tTracePlugin_sSignature_cCall_func6( p_that, buf, sz ) \
	  (p_that)->cCall->VMT->func6__T( \
	   (p_that)->cCall, (buf), (sz) )
#define tTracePlugin_sSignature_cCall_func7( p_that, buf, sz ) \
	  (p_that)->cCall->VMT->func7__T( \
	   (p_that)->cCall, (buf), (sz) )
#define tTracePlugin_sSignature_cCall_func10( p_that, stval, a ) \
	  (p_that)->cCall->VMT->func10__T( \
	   (p_that)->cCall, (stval), (a) )
#define tTracePlugin_sSignature__require_call_port_tSysLog_eSysLog_write( p_that, prio, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (prio), (p_syslog) )
#define tTracePlugin_sSignature__require_call_port_tSysLog_eSysLog_read( p_that, p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tTracePlugin_sSignature__require_call_port_tSysLog_eSysLog_mask( p_that, logmask, lowmask ) \
	  tSysLog_eSysLog_mask( \
	    (logmask), (lowmask) )
#define tTracePlugin_sSignature__require_call_port_tSysLog_eSysLog_refer( p_that, pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )
#define tTracePlugin_sSignature__require_call_port_tKernel_eKernel_delay( p_that, delay_time ) \
	  tKernel_eKernel_delay( \
	    (delay_time) )
#define tTracePlugin_sSignature__require_call_port_tKernel_eKernel_exitTask( p_that ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tTracePlugin_sSignature__require_call_port_tKernel_eKernel_getTime( p_that, p_system_time ) \
	  tKernel_eKernel_getTime( \
	    (p_system_time) )
#define tTracePlugin_sSignature__require_call_port_tKernel_eKernel_getMicroTime( p_that, p_system_micro_time ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_system_micro_time) )
#define tTracePlugin_sSignature__require_call_port_tKernel_eKernel_exitKernel( p_that ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tTracePlugin_sSignature_eThroughEntry_func6_buf_alloc( p_that, sz, ptr ) \
	  tAlloc_eA_alloc( \
	    (sz), (ptr) )
#define tTracePlugin_sSignature_eThroughEntry_func6_buf_dealloc( p_that, ptr ) \
	  tAlloc_eA_dealloc( \
	    (ptr) )
#define tTracePlugin_sSignature_eThroughEntry_func7_buf_alloc( p_that, sz, ptr ) \
	  tAlloc_eA_alloc( \
	    (sz), (ptr) )
#define tTracePlugin_sSignature_eThroughEntry_func7_buf_dealloc( p_that, ptr ) \
	  tAlloc_eA_dealloc( \
	    (ptr) )
#define tTracePlugin_sSignature_cCall_func6_buf_alloc( p_that, sz, ptr ) \
	  tAlloc_eA_alloc( \
	    (sz), (ptr) )
#define tTracePlugin_sSignature_cCall_func6_buf_dealloc( p_that, ptr ) \
	  tAlloc_eA_dealloc( \
	    (ptr) )
#define tTracePlugin_sSignature_cCall_func7_buf_alloc( p_that, sz, ptr ) \
	  tAlloc_eA_alloc( \
	    (sz), (ptr) )
#define tTracePlugin_sSignature_cCall_func7_buf_dealloc( p_that, ptr ) \
	  tAlloc_eA_dealloc( \
	    (ptr) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eThroughEntry */
ER             tTracePlugin_sSignature_eThroughEntry_func1_skel( const struct tag_sSignature_VDES *epd, int32_t inval);
ER             tTracePlugin_sSignature_eThroughEntry_func2_skel( const struct tag_sSignature_VDES *epd, int32_t* outval);
ER             tTracePlugin_sSignature_eThroughEntry_func3_skel( const struct tag_sSignature_VDES *epd, struct tag stval);
ER             tTracePlugin_sSignature_eThroughEntry_func4_skel( const struct tag_sSignature_VDES *epd, stTag stval, INT inval);
ER             tTracePlugin_sSignature_eThroughEntry_func5_skel( const struct tag_sSignature_VDES *epd, stTag* stval, INT inval);
ER             tTracePlugin_sSignature_eThroughEntry_func6_skel( const struct tag_sSignature_VDES *epd, int8_t* buf, int32_t sz);
ER             tTracePlugin_sSignature_eThroughEntry_func7_skel( const struct tag_sSignature_VDES *epd, int8_t** buf, int32_t* sz);
ER             tTracePlugin_sSignature_eThroughEntry_func10_skel( const struct tag_sSignature_VDES *epd, const stTag* stval, int32_t a);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTracePlugin_sSignature_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTracePlugin_sSignature_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTracePlugin_sSignature_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTracePlugin_sSignature_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_probeName_str   tTracePlugin_sSignature_ATTR_probeName_str( p_cellcb )
#define ATTR_from_str        tTracePlugin_sSignature_ATTR_from_str( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func1( inval ) \
          tTracePlugin_sSignature_cCall_func1( p_cellcb, inval )
#define cCall_func2( outval ) \
          tTracePlugin_sSignature_cCall_func2( p_cellcb, outval )
#define cCall_func3( stval ) \
          tTracePlugin_sSignature_cCall_func3( p_cellcb, stval )
#define cCall_func4( stval, inval ) \
          tTracePlugin_sSignature_cCall_func4( p_cellcb, stval, inval )
#define cCall_func5( stval, inval ) \
          tTracePlugin_sSignature_cCall_func5( p_cellcb, stval, inval )
#define cCall_func6( buf, sz ) \
          tTracePlugin_sSignature_cCall_func6( p_cellcb, buf, sz )
#define cCall_func7( buf, sz ) \
          tTracePlugin_sSignature_cCall_func7( p_cellcb, buf, sz )
#define cCall_func10( stval, a ) \
          tTracePlugin_sSignature_cCall_func10( p_cellcb, stval, a )
#define write( prio, p_syslog ) \
          ((void)p_cellcb, tTracePlugin_sSignature__require_call_port_tSysLog_eSysLog_write( p_cellcb, prio, p_syslog ))
#define read( p_syslog ) \
          ((void)p_cellcb, tTracePlugin_sSignature__require_call_port_tSysLog_eSysLog_read( p_cellcb, p_syslog ))
#define mask( logmask, lowmask ) \
          ((void)p_cellcb, tTracePlugin_sSignature__require_call_port_tSysLog_eSysLog_mask( p_cellcb, logmask, lowmask ))
#define refer( pk_rlog ) \
          ((void)p_cellcb, tTracePlugin_sSignature__require_call_port_tSysLog_eSysLog_refer( p_cellcb, pk_rlog ))
#define delay( delay_time ) \
          ((void)p_cellcb, tTracePlugin_sSignature__require_call_port_tKernel_eKernel_delay( p_cellcb, delay_time ))
#define exitTask( ) \
          ((void)p_cellcb, tTracePlugin_sSignature__require_call_port_tKernel_eKernel_exitTask( p_cellcb ))
#define getTime( p_system_time ) \
          ((void)p_cellcb, tTracePlugin_sSignature__require_call_port_tKernel_eKernel_getTime( p_cellcb, p_system_time ))
#define getMicroTime( p_system_micro_time ) \
          ((void)p_cellcb, tTracePlugin_sSignature__require_call_port_tKernel_eKernel_getMicroTime( p_cellcb, p_system_micro_time ))
#define exitKernel( ) \
          ((void)p_cellcb, tTracePlugin_sSignature__require_call_port_tKernel_eKernel_exitKernel( p_cellcb ))
#define eThroughEntry_func6_buf_alloc( sz, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSignature_eThroughEntry_func6_buf_alloc( p_cellcb, sz, ptr ))
#define eThroughEntry_func6_buf_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSignature_eThroughEntry_func6_buf_dealloc( p_cellcb, ptr ))
#define eThroughEntry_func7_buf_alloc( sz, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSignature_eThroughEntry_func7_buf_alloc( p_cellcb, sz, ptr ))
#define eThroughEntry_func7_buf_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSignature_eThroughEntry_func7_buf_dealloc( p_cellcb, ptr ))
#define cCall_func6_buf_alloc( sz, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSignature_cCall_func6_buf_alloc( p_cellcb, sz, ptr ))
#define cCall_func6_buf_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSignature_cCall_func6_buf_dealloc( p_cellcb, ptr ))
#define cCall_func7_buf_alloc( sz, ptr ) \
          ((void)p_cellcb, tTracePlugin_sSignature_cCall_func7_buf_alloc( p_cellcb, sz, ptr ))
#define cCall_func7_buf_dealloc( ptr ) \
          ((void)p_cellcb, tTracePlugin_sSignature_cCall_func7_buf_dealloc( p_cellcb, ptr ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eThroughEntry_func1 tTracePlugin_sSignature_eThroughEntry_func1
#define eThroughEntry_func2 tTracePlugin_sSignature_eThroughEntry_func2
#define eThroughEntry_func3 tTracePlugin_sSignature_eThroughEntry_func3
#define eThroughEntry_func4 tTracePlugin_sSignature_eThroughEntry_func4
#define eThroughEntry_func5 tTracePlugin_sSignature_eThroughEntry_func5
#define eThroughEntry_func6 tTracePlugin_sSignature_eThroughEntry_func6
#define eThroughEntry_func7 tTracePlugin_sSignature_eThroughEntry_func7
#define eThroughEntry_func10 tTracePlugin_sSignature_eThroughEntry_func10

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTracePlugin_sSignature_N_CELL; (i)++ ){ \
       //(p_cb) = &tTracePlugin_sSignature_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define ETHROUGHENTRY_FUNC6_BUF_DEALLOC(buf) \
	  eThroughEntry_func6_buf_dealloc( (buf) ); 
#define ETHROUGHENTRY_FUNC7_BUF_DEALLOC(buf) \
	  eThroughEntry_func7_buf_dealloc( (buf) ); 
#define CCALL_FUNC6_BUF_DEALLOC(buf) \
	  cCall_func6_buf_dealloc( (buf) ); 
#define CCALL_FUNC7_BUF_DEALLOC(buf) \
	  cCall_func7_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define ETHROUGHENTRY_FUNC6_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eThroughEntry_func6_buf_dealloc( (buf) );  \
	  }
#define ETHROUGHENTRY_FUNC7_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eThroughEntry_func7_buf_dealloc( (buf) );  \
	  }
#define CCALL_FUNC6_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall_func6_buf_dealloc( (buf) );  \
	  }
#define CCALL_FUNC7_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall_func7_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTracePlugin_sSignature_TECSGENH */
