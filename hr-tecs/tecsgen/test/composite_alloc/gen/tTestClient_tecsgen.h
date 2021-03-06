/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTestClient_TECSGEN_H
#define tTestClient_TECSGEN_H

/*
 * celltype          :  tTestClient
 * global name       :  tTestClient
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
#include "sTaskBody_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTestClient_INIB {
    /* call port #_TCP_# */
    const struct tag_tTestComponent_INIB * cS;
    const struct tag_tAlloc_INIB * cS_snd_buf;
    const struct tag_tAlloc_INIB * cS_rcv_buf;
    /* call port #_NEP_# */ 
}  tTestClient_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTestClient_CB_tab           tTestClient_INIB_tab
#define tTestClient_SINGLE_CELL_CB   tTestClient_SINGLE_CELL_INIB
#define tTestClient_CB               tTestClient_INIB
#define tag_tTestClient_CB           tag_tTestClient_INIB

extern tTestClient_CB  tTestClient_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTestClient_INIB *tTestClient_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tTestClient_eBody_main(tTestClient_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTestClient_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTestComponent_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tTestClient_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTestClient_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTestClient_ID_BASE         (1)  /* ID のベース  #_NIDB_# */
#define tTestClient_N_CELL          (4)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTestClient_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTestClient_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tTestClient_cS_snd( p_that, buf, sz ) \
	  tTestComponent_eS_snd( \
	   (p_that)->cS, (buf), (sz) )
#define tTestClient_cS_rcv( p_that, buf, sz ) \
	  tTestComponent_eS_rcv( \
	   (p_that)->cS, (buf), (sz) )
#define tTestClient_cS_snd_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   (p_that)->cS_snd_buf, (size), (p) )
#define tTestClient_cS_snd_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   (p_that)->cS_snd_buf, (p) )
#define tTestClient_cS_rcv_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   (p_that)->cS_rcv_buf, (size), (p) )
#define tTestClient_cS_rcv_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   (p_that)->cS_rcv_buf, (p) )

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
#define VALID_IDX(IDX)  tTestClient_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTestClient_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTestClient_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTestClient_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cS_snd( buf, sz ) \
          ((void)p_cellcb, tTestClient_cS_snd( p_cellcb, buf, sz ))
#define cS_rcv( buf, sz ) \
          ((void)p_cellcb, tTestClient_cS_rcv( p_cellcb, buf, sz ))
#define cS_snd_buf_alloc( size, p ) \
          ((void)p_cellcb, tTestClient_cS_snd_buf_alloc( p_cellcb, size, p ))
#define cS_snd_buf_dealloc( p ) \
          ((void)p_cellcb, tTestClient_cS_snd_buf_dealloc( p_cellcb, p ))
#define cS_rcv_buf_alloc( size, p ) \
          ((void)p_cellcb, tTestClient_cS_rcv_buf_alloc( p_cellcb, size, p ))
#define cS_rcv_buf_dealloc( p ) \
          ((void)p_cellcb, tTestClient_cS_rcv_buf_dealloc( p_cellcb, p ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tTestClient_eBody_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTestClient_N_CELL; (i)++ ){ \
       //(p_cb) = &tTestClient_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define CS_SND_BUF_DEALLOC(buf) \
	  cS_snd_buf_dealloc( (buf) ); 
#define CS_RCV_BUF_DEALLOC(buf) \
	  cS_rcv_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define CS_SND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cS_snd_buf_dealloc( (buf) );  \
	  }
#define CS_RCV_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cS_rcv_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTestClient_TECSGENH */
