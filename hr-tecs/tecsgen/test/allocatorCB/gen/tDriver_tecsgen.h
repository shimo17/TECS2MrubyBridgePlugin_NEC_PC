/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tDriver_TECSGEN_H
#define tDriver_TECSGEN_H

/*
 * celltype          :  tDriver
 * global name       :  tDriver
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
#include "sSigCB_tecsgen.h"
#include "sSigDev_tecsgen.h"
#include "sTaskBody_tecsgen.h"
#include "sSysLog_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tDriver_CB {
    int  dummy;
} tDriver_CB;
extern tDriver_CB  tDriver_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tDriver_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSigCB */
ER           tDriver_eCB_Send(tDriver_IDX idx, int8_t* buf, int32_t len);
ER           tDriver_eCB_Receive(tDriver_IDX idx, int8_t** buf, int32_t* len);
/* sTaskBody */
void         tDriver_eTaskBody_main(tDriver_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tDriver_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tDev_tecsgen.h"
#include "tSysLog_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tDriver_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tDriver_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tDriver_ID_BASE             (1)  /* ID のベース  #_NIDB_# */
#define tDriver_N_CELL              (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tDriver_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tDriver_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tDriver_cDev_Send( p_that, buf, len ) \
	  tDev_eDev_Send( \
	   (tDev_IDX)0, (buf), (len) )
#define tDriver_cDev_Receive( p_that, buf, len ) \
	  tDev_eDev_Receive( \
	   (tDev_IDX)0, (buf), (len) )
#define tDriver__require_call_port_tSysLog_eSysLog_write( p_that, prio, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (prio), (p_syslog) )
#define tDriver__require_call_port_tSysLog_eSysLog_read( p_that, p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tDriver__require_call_port_tSysLog_eSysLog_mask( p_that, logmask, lowmask ) \
	  tSysLog_eSysLog_mask( \
	    (logmask), (lowmask) )
#define tDriver__require_call_port_tSysLog_eSysLog_refer( p_that, pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )
#define tDriver_eCB_Send_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tDriver_eCB_Send_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tDriver_eCB_Receive_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tDriver_eCB_Receive_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tDriver_cDev_Send_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tDriver_cDev_Send_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tDriver_cDev_Receive_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tDriver_cDev_Receive_buf_dealloc( p_that, p ) \
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
#define VALID_IDX(IDX)  tDriver_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tDriver_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tDriver_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tDriver_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cDev_Send( buf, len ) \
          ((void)p_cellcb, tDriver_cDev_Send( p_cellcb, buf, len ))
#define cDev_Receive( buf, len ) \
          ((void)p_cellcb, tDriver_cDev_Receive( p_cellcb, buf, len ))
#define write( prio, p_syslog ) \
          ((void)p_cellcb, tDriver__require_call_port_tSysLog_eSysLog_write( p_cellcb, prio, p_syslog ))
#define read( p_syslog ) \
          ((void)p_cellcb, tDriver__require_call_port_tSysLog_eSysLog_read( p_cellcb, p_syslog ))
#define mask( logmask, lowmask ) \
          ((void)p_cellcb, tDriver__require_call_port_tSysLog_eSysLog_mask( p_cellcb, logmask, lowmask ))
#define refer( pk_rlog ) \
          ((void)p_cellcb, tDriver__require_call_port_tSysLog_eSysLog_refer( p_cellcb, pk_rlog ))
#define eCB_Send_buf_alloc( size, p ) \
          ((void)p_cellcb, tDriver_eCB_Send_buf_alloc( p_cellcb, size, p ))
#define eCB_Send_buf_dealloc( p ) \
          ((void)p_cellcb, tDriver_eCB_Send_buf_dealloc( p_cellcb, p ))
#define eCB_Receive_buf_alloc( size, p ) \
          ((void)p_cellcb, tDriver_eCB_Receive_buf_alloc( p_cellcb, size, p ))
#define eCB_Receive_buf_dealloc( p ) \
          ((void)p_cellcb, tDriver_eCB_Receive_buf_dealloc( p_cellcb, p ))
#define cDev_Send_buf_alloc( size, p ) \
          ((void)p_cellcb, tDriver_cDev_Send_buf_alloc( p_cellcb, size, p ))
#define cDev_Send_buf_dealloc( p ) \
          ((void)p_cellcb, tDriver_cDev_Send_buf_dealloc( p_cellcb, p ))
#define cDev_Receive_buf_alloc( size, p ) \
          ((void)p_cellcb, tDriver_cDev_Receive_buf_alloc( p_cellcb, size, p ))
#define cDev_Receive_buf_dealloc( p ) \
          ((void)p_cellcb, tDriver_cDev_Receive_buf_dealloc( p_cellcb, p ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eCB_Send         tDriver_eCB_Send
#define eCB_Receive      tDriver_eCB_Receive
#define eTaskBody_main   tDriver_eTaskBody_main

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define ECB_SEND_BUF_DEALLOC(buf) \
	  eCB_Send_buf_dealloc( (buf) ); 
#define ECB_RECEIVE_BUF_DEALLOC(buf) \
	  eCB_Receive_buf_dealloc( (buf) ); 
#define CDEV_SEND_BUF_DEALLOC(buf) \
	  cDev_Send_buf_dealloc( (buf) ); 
#define CDEV_RECEIVE_BUF_DEALLOC(buf) \
	  cDev_Receive_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define ECB_SEND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eCB_Send_buf_dealloc( (buf) );  \
	  }
#define ECB_RECEIVE_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eCB_Receive_buf_dealloc( (buf) );  \
	  }
#define CDEV_SEND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cDev_Send_buf_dealloc( (buf) );  \
	  }
#define CDEV_RECEIVE_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cDev_Receive_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tDriver_TECSGENH */
