/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTestServ_TECSGEN_H
#define tTestServ_TECSGEN_H

/*
 * celltype          :  tTestServ
 * global name       :  tTestServ
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
#include "sSendRecv_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTestServ_INIB {
    /* call port #_TCP_# */
    const struct tag_tAlloc_INIB * eS_snd_buf;
    const struct tag_tAlloc_INIB * eS_rcv_buf;
    /* call port #_NEP_# */ 
}  tTestServ_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTestServ_CB_tab           tTestServ_INIB_tab
#define tTestServ_SINGLE_CELL_CB   tTestServ_SINGLE_CELL_INIB
#define tTestServ_CB               tTestServ_INIB
#define tag_tTestServ_CB           tag_tTestServ_INIB

extern tTestServ_CB  tTestServ_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTestServ_INIB *tTestServ_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSendRecv */
ER           tTestServ_eS_snd(tTestServ_IDX idx, int8_t* buf, int32_t sz);
ER           tTestServ_eS_rcv(tTestServ_IDX idx, int8_t** buf, int32_t* sz);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTestServ_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAlloc_tecsgen.h"
#ifdef  tTestServ_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTestServ_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTestServ_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tTestServ_N_CELL            (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTestServ_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTestServ_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tTestServ_eS_snd_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   (p_that)->eS_snd_buf, (size), (p) )
#define tTestServ_eS_snd_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   (p_that)->eS_snd_buf, (p) )
#define tTestServ_eS_rcv_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   (p_that)->eS_rcv_buf, (size), (p) )
#define tTestServ_eS_rcv_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   (p_that)->eS_rcv_buf, (p) )

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
#define VALID_IDX(IDX)  tTestServ_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTestServ_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTestServ_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTestServ_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define eS_snd_buf_alloc( size, p ) \
          ((void)p_cellcb, tTestServ_eS_snd_buf_alloc( p_cellcb, size, p ))
#define eS_snd_buf_dealloc( p ) \
          ((void)p_cellcb, tTestServ_eS_snd_buf_dealloc( p_cellcb, p ))
#define eS_rcv_buf_alloc( size, p ) \
          ((void)p_cellcb, tTestServ_eS_rcv_buf_alloc( p_cellcb, size, p ))
#define eS_rcv_buf_dealloc( p ) \
          ((void)p_cellcb, tTestServ_eS_rcv_buf_dealloc( p_cellcb, p ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eS_snd           tTestServ_eS_snd
#define eS_rcv           tTestServ_eS_rcv

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTestServ_N_CELL; (i)++ ){ \
       //(p_cb) = &tTestServ_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define ES_SND_BUF_DEALLOC(buf) \
	  eS_snd_buf_dealloc( (buf) ); 
#define ES_RCV_BUF_DEALLOC(buf) \
	  eS_rcv_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define ES_SND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eS_snd_buf_dealloc( (buf) );  \
	  }
#define ES_RCV_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eS_rcv_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTestServ_TECSGENH */
