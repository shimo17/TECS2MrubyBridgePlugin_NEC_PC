/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSendRecvClnt_TECSGEN_H
#define tSendRecvClnt_TECSGEN_H

/*
 * celltype          :  tSendRecvClnt
 * global name       :  tSendRecvClnt
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTaskBody_tecsgen.h"
#include "sSigSendRecv_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSendRecvClnt_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
}  tSendRecvClnt_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSendRecvClnt_CB_tab           tSendRecvClnt_INIB_tab
#define tSendRecvClnt_SINGLE_CELL_CB   tSendRecvClnt_SINGLE_CELL_INIB
#define tSendRecvClnt_CB               tSendRecvClnt_INIB
#define tag_tSendRecvClnt_CB           tag_tSendRecvClnt_INIB

extern tSendRecvClnt_CB  tSendRecvClnt_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tSendRecvClnt_INIB *tSendRecvClnt_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tSendRecvClnt_eMain_main(tSendRecvClnt_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSendRecvClnt_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#ifdef  tSendRecvClnt_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSendRecvClnt_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSendRecvClnt_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSendRecvClnt_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSendRecvClnt_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tSendRecvClnt_is_cCall_joined(p_that) \
	  (0)    /* not joined */
#define tSendRecvClnt_is_cCall_snd_st_val_joined(p_that) \
	  (0)    /* not joined */
#define tSendRecvClnt_is_cCall_rcv_st_val_joined(p_that) \
	  (0)    /* not joined */

/* セルCBを得るマクロ #_GCB_# */
#define tSendRecvClnt_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tSendRecvClnt_cCall_snd( p_that, st_val ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */
#define tSendRecvClnt_cCall_rcv( p_that, st_val ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */
#define tSendRecvClnt_cCall_snd_st_val_alloc( p_that, size, p ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */
#define tSendRecvClnt_cCall_snd_st_val_dealloc( p_that, p ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */
#define tSendRecvClnt_cCall_rcv_st_val_alloc( p_that, size, p ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */
#define tSendRecvClnt_cCall_rcv_st_val_dealloc( p_that, p ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eMain */
void           tSendRecvClnt_eMain_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tSendRecvClnt_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSendRecvClnt_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSendRecvClnt_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSendRecvClnt_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_snd( st_val ) \
          ((void)p_cellcb, tSendRecvClnt_cCall_snd( p_cellcb, st_val ))
#define cCall_rcv( st_val ) \
          ((void)p_cellcb, tSendRecvClnt_cCall_rcv( p_cellcb, st_val ))
#define cCall_snd_st_val_alloc( size, p ) \
          ((void)p_cellcb, tSendRecvClnt_cCall_snd_st_val_alloc( p_cellcb, size, p ))
#define cCall_snd_st_val_dealloc( p ) \
          ((void)p_cellcb, tSendRecvClnt_cCall_snd_st_val_dealloc( p_cellcb, p ))
#define cCall_rcv_st_val_alloc( size, p ) \
          ((void)p_cellcb, tSendRecvClnt_cCall_rcv_st_val_alloc( p_cellcb, size, p ))
#define cCall_rcv_st_val_dealloc( p ) \
          ((void)p_cellcb, tSendRecvClnt_cCall_rcv_st_val_dealloc( p_cellcb, p ))



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cCall_joined()\
		tSendRecvClnt_is_cCall_joined(p_cellcb)
#define is_cCall_snd_st_val_joined()\
		tSendRecvClnt_is_cCall_snd_st_val_joined(p_cellcb)
#define is_cCall_rcv_st_val_joined()\
		tSendRecvClnt_is_cCall_rcv_st_val_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tSendRecvClnt_eMain_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSendRecvClnt_N_CELL; (i)++ ){ \
       (p_cb) = &tSendRecvClnt_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */

/* deallocate マクロ #_DAL_#   */
#define CCALL_SND_ST_VAL_DEALLOC(st_val) \
	  cCall_snd_st_val_dealloc( (st_val) ); 
#define CCALL_RCV_ST_VAL_DEALLOC(st_val) \
	  cCall_rcv_st_val_dealloc( (st_val) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define CCALL_SND_ST_VAL_DEALLOC_RESET(st_val) \
	  if( (st_val) ){ \
	    cCall_snd_st_val_dealloc( (st_val) );  \
	  }
#define CCALL_RCV_ST_VAL_DEALLOC_RESET(st_val) \
	  if( (st_val) ){ \
	    cCall_rcv_st_val_dealloc( (st_val) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSendRecvClnt_TECSGENH */
