/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tDev_TECSGEN_H
#define tDev_TECSGEN_H

/*
 * celltype          :  tDev
 * global name       :  tDev
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
#include "sSigDev_tecsgen.h"
#include "sSigCB_tecsgen.h"
#include "sSysLog_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tDev_CB {
    int  dummy;
} tDev_CB;
extern tDev_CB  tDev_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tDev_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSigDev */
ER           tDev_eDev_Send(tDev_IDX idx, int8_t* buf, int32_t len);
ER           tDev_eDev_Receive(tDev_IDX idx, int8_t** buf, int32_t* len);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tDev_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tDriver_tecsgen.h"
#include "tSysLog_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tDev_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tDev_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tDev_ID_BASE                (1)  /* ID のベース  #_NIDB_# */
#define tDev_N_CELL                 (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tDev_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tDev_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tDev_cCB_Send( p_that, buf, len ) \
	  tDriver_eCB_Send( \
	   (tDriver_IDX)0, (buf), (len) )
#define tDev_cCB_Receive( p_that, buf, len ) \
	  tDriver_eCB_Receive( \
	   (tDriver_IDX)0, (buf), (len) )
#define tDev__require_call_port_tSysLog_eSysLog_write( p_that, prio, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (prio), (p_syslog) )
#define tDev__require_call_port_tSysLog_eSysLog_read( p_that, p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tDev__require_call_port_tSysLog_eSysLog_mask( p_that, logmask, lowmask ) \
	  tSysLog_eSysLog_mask( \
	    (logmask), (lowmask) )
#define tDev__require_call_port_tSysLog_eSysLog_refer( p_that, pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )
#define tDev_eDev_Send_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tDev_eDev_Send_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tDev_eDev_Receive_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tDev_eDev_Receive_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tDev_cCB_Send_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tDev_cCB_Send_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tDev_cCB_Receive_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tDev_cCB_Receive_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )

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
#define VALID_IDX(IDX)  tDev_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tDev_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tDev_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tDev_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCB_Send( buf, len ) \
          ((void)p_cellcb, tDev_cCB_Send( p_cellcb, buf, len ))
#define cCB_Receive( buf, len ) \
          ((void)p_cellcb, tDev_cCB_Receive( p_cellcb, buf, len ))
#define write( prio, p_syslog ) \
          ((void)p_cellcb, tDev__require_call_port_tSysLog_eSysLog_write( p_cellcb, prio, p_syslog ))
#define read( p_syslog ) \
          ((void)p_cellcb, tDev__require_call_port_tSysLog_eSysLog_read( p_cellcb, p_syslog ))
#define mask( logmask, lowmask ) \
          ((void)p_cellcb, tDev__require_call_port_tSysLog_eSysLog_mask( p_cellcb, logmask, lowmask ))
#define refer( pk_rlog ) \
          ((void)p_cellcb, tDev__require_call_port_tSysLog_eSysLog_refer( p_cellcb, pk_rlog ))
#define eDev_Send_buf_alloc( size, p ) \
          ((void)p_cellcb, tDev_eDev_Send_buf_alloc( p_cellcb, size, p ))
#define eDev_Send_buf_dealloc( p ) \
          ((void)p_cellcb, tDev_eDev_Send_buf_dealloc( p_cellcb, p ))
#define eDev_Receive_buf_alloc( size, p ) \
          ((void)p_cellcb, tDev_eDev_Receive_buf_alloc( p_cellcb, size, p ))
#define eDev_Receive_buf_dealloc( p ) \
          ((void)p_cellcb, tDev_eDev_Receive_buf_dealloc( p_cellcb, p ))
#define cCB_Send_buf_alloc( size, p ) \
          ((void)p_cellcb, tDev_cCB_Send_buf_alloc( p_cellcb, size, p ))
#define cCB_Send_buf_dealloc( p ) \
          ((void)p_cellcb, tDev_cCB_Send_buf_dealloc( p_cellcb, p ))
#define cCB_Receive_buf_alloc( size, p ) \
          ((void)p_cellcb, tDev_cCB_Receive_buf_alloc( p_cellcb, size, p ))
#define cCB_Receive_buf_dealloc( p ) \
          ((void)p_cellcb, tDev_cCB_Receive_buf_dealloc( p_cellcb, p ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eDev_Send        tDev_eDev_Send
#define eDev_Receive     tDev_eDev_Receive

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define EDEV_SEND_BUF_DEALLOC(buf) \
	  eDev_Send_buf_dealloc( (buf) ); 
#define EDEV_RECEIVE_BUF_DEALLOC(buf) \
	  eDev_Receive_buf_dealloc( (buf) ); 
#define CCB_SEND_BUF_DEALLOC(buf) \
	  cCB_Send_buf_dealloc( (buf) ); 
#define CCB_RECEIVE_BUF_DEALLOC(buf) \
	  cCB_Receive_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define EDEV_SEND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eDev_Send_buf_dealloc( (buf) );  \
	  }
#define EDEV_RECEIVE_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eDev_Receive_buf_dealloc( (buf) );  \
	  }
#define CCB_SEND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCB_Send_buf_dealloc( (buf) );  \
	  }
#define CCB_RECEIVE_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCB_Receive_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tDev_TECSGENH */
