/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSendRecvServ_TECSGEN_H
#define tSendRecvServ_TECSGEN_H

/*
 * celltype          :  tSendRecvServ
 * global name       :  tSendRecvServ
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  no
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSigSendRecv_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPO_# */
typedef struct tag_tSendRecvServ_CB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
}  tSendRecvServ_CB;
extern tSendRecvServ_CB  tSendRecvServ_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tSendRecvServ_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSigSendRecv */
ER           tSendRecvServ_eEnt_snd(tSendRecvServ_IDX idx, ST_VAL* st_val);
ER           tSendRecvServ_eEnt_rcv(tSendRecvServ_IDX idx, ST_VAL** st_val);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSendRecvServ_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAlloc_tecsgen.h"
#ifdef  tSendRecvServ_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSendRecvServ_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSendRecvServ_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSendRecvServ_N_CELL        (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSendRecvServ_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSendRecvServ_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tSendRecvServ_eEnt_snd_st_val_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tSendRecvServ_eEnt_snd_st_val_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tSendRecvServ_eEnt_rcv_st_val_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tSendRecvServ_eEnt_rcv_st_val_dealloc( p_that, p ) \
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
#define VALID_IDX(IDX)  tSendRecvServ_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSendRecvServ_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSendRecvServ_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSendRecvServ_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define eEnt_snd_st_val_alloc( size, p ) \
          ((void)p_cellcb, tSendRecvServ_eEnt_snd_st_val_alloc( p_cellcb, size, p ))
#define eEnt_snd_st_val_dealloc( p ) \
          ((void)p_cellcb, tSendRecvServ_eEnt_snd_st_val_dealloc( p_cellcb, p ))
#define eEnt_rcv_st_val_alloc( size, p ) \
          ((void)p_cellcb, tSendRecvServ_eEnt_rcv_st_val_alloc( p_cellcb, size, p ))
#define eEnt_rcv_st_val_dealloc( p ) \
          ((void)p_cellcb, tSendRecvServ_eEnt_rcv_st_val_dealloc( p_cellcb, p ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_snd         tSendRecvServ_eEnt_snd
#define eEnt_rcv         tSendRecvServ_eEnt_rcv

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define EENT_SND_ST_VAL_DEALLOC(st_val) \
	  eEnt_snd_st_val_dealloc( (st_val) ); 
#define EENT_RCV_ST_VAL_DEALLOC(st_val) \
	  eEnt_rcv_st_val_dealloc( (st_val) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define EENT_SND_ST_VAL_DEALLOC_RESET(st_val) \
	  if( (st_val) ){ \
	    eEnt_snd_st_val_dealloc( (st_val) );  \
	  }
#define EENT_RCV_ST_VAL_DEALLOC_RESET(st_val) \
	  if( (st_val) ){ \
	    eEnt_rcv_st_val_dealloc( (st_val) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSendRecvServ_TECSGENH */
