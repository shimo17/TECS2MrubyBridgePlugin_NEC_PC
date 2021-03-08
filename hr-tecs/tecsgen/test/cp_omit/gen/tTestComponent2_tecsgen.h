/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTestComponent2_TECSGEN_H
#define tTestComponent2_TECSGEN_H

/*
 * celltype          :  tTestComponent2
 * global name       :  tTestComponent2
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
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
typedef const struct tag_tTestComponent2_INIB {
    /* call port #_TCP_# */
    struct tag_sAlloc_VDES *const*eA_snd_buf;
    int_t n_eA_snd_buf;
    struct tag_sAlloc_VDES *const*eA_rcv_buf;
    int_t n_eA_rcv_buf;
    /* call port #_NEP_# */ 
    int_t n_eA;
}  tTestComponent2_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTestComponent2_CB_tab           tTestComponent2_INIB_tab
#define tTestComponent2_SINGLE_CELL_CB   tTestComponent2_SINGLE_CELL_INIB
#define tTestComponent2_CB               tTestComponent2_INIB
#define tag_tTestComponent2_CB           tag_tTestComponent2_INIB

extern tTestComponent2_CB  tTestComponent2_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTestComponent2_INIB *tTestComponent2_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSendRecv */
ER           tTestComponent2_eS_snd(tTestComponent2_IDX idx, int8_t* buf, int32_t sz);
ER           tTestComponent2_eS_rcv(tTestComponent2_IDX idx, int8_t** buf, int32_t* sz);
/* sSendRecv */
ER           tTestComponent2_eA_snd(tTestComponent2_IDX idx, int_t subscript, int8_t* buf, int32_t sz);
ER           tTestComponent2_eA_rcv(tTestComponent2_IDX idx, int_t subscript, int8_t** buf, int32_t* sz);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTestComponent2_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAlloc_tecsgen.h"
#ifdef  tTestComponent2_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTestComponent2_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTestComponent2_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tTestComponent2_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTestComponent2_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_eA_snd_buf(p_that)  ((p_that)->n_eA_snd_buf)
#define NCP_eA_snd_buf           (N_CP_eA_snd_buf(p_cellcb))
#define N_CP_eA_rcv_buf(p_that)  ((p_that)->n_eA_rcv_buf)
#define NCP_eA_rcv_buf           (N_CP_eA_rcv_buf(p_cellcb))
/* 受け口配列の大きさを得るマクロ #_NEPA_# */
#define NEP_eA           ((p_cellcb)->n_eA)

/* セルCBを得るマクロ #_GCB_# */
#define tTestComponent2_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tTestComponent2_eS_snd_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tTestComponent2_eS_snd_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tTestComponent2_eS_rcv_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tTestComponent2_eS_rcv_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tTestComponent2_eA_snd_buf_alloc( p_that, subscript, size, p ) \
	  (p_that)->eA_snd_buf[subscript]->VMT->alloc__T( \
	   (p_that)->eA_snd_buf[subscript], (size), (p) )
#define tTestComponent2_eA_snd_buf_dealloc( p_that, subscript, p ) \
	  (p_that)->eA_snd_buf[subscript]->VMT->dealloc__T( \
	   (p_that)->eA_snd_buf[subscript], (p) )
#define tTestComponent2_eA_rcv_buf_alloc( p_that, subscript, size, p ) \
	  (p_that)->eA_rcv_buf[subscript]->VMT->alloc__T( \
	   (p_that)->eA_rcv_buf[subscript], (size), (p) )
#define tTestComponent2_eA_rcv_buf_dealloc( p_that, subscript, p ) \
	  (p_that)->eA_rcv_buf[subscript]->VMT->dealloc__T( \
	   (p_that)->eA_rcv_buf[subscript], (p) )

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
#define VALID_IDX(IDX)  tTestComponent2_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTestComponent2_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTestComponent2_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTestComponent2_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define eS_snd_buf_alloc( size, p ) \
          ((void)p_cellcb, tTestComponent2_eS_snd_buf_alloc( p_cellcb, size, p ))
#define eS_snd_buf_dealloc( p ) \
          ((void)p_cellcb, tTestComponent2_eS_snd_buf_dealloc( p_cellcb, p ))
#define eS_rcv_buf_alloc( size, p ) \
          ((void)p_cellcb, tTestComponent2_eS_rcv_buf_alloc( p_cellcb, size, p ))
#define eS_rcv_buf_dealloc( p ) \
          ((void)p_cellcb, tTestComponent2_eS_rcv_buf_dealloc( p_cellcb, p ))
#define eA_snd_buf_alloc( subscript, size, p ) \
          tTestComponent2_eA_snd_buf_alloc( p_cellcb, subscript, size, p )
#define eA_snd_buf_dealloc( subscript, p ) \
          tTestComponent2_eA_snd_buf_dealloc( p_cellcb, subscript, p )
#define eA_rcv_buf_alloc( subscript, size, p ) \
          tTestComponent2_eA_rcv_buf_alloc( p_cellcb, subscript, size, p )
#define eA_rcv_buf_dealloc( subscript, p ) \
          tTestComponent2_eA_rcv_buf_dealloc( p_cellcb, subscript, p )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eS_snd           tTestComponent2_eS_snd
#define eS_rcv           tTestComponent2_eS_rcv
#define eA_snd           tTestComponent2_eA_snd
#define eA_rcv           tTestComponent2_eA_rcv

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTestComponent2_N_CELL; (i)++ ){ \
       (p_cb) = &tTestComponent2_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */

/* deallocate マクロ #_DAL_#   */
#define ES_SND_BUF_DEALLOC(buf) \
	  eS_snd_buf_dealloc( (buf) ); 
#define ES_RCV_BUF_DEALLOC(buf) \
	  eS_rcv_buf_dealloc( (buf) ); 
#define EA_SND_BUF_DEALLOC(buf) \
	  eA_snd_buf_dealloc( (buf) ); 
#define EA_RCV_BUF_DEALLOC(buf) \
	  eA_rcv_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define ES_SND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eS_snd_buf_dealloc( (buf) );  \
	  }
#define ES_RCV_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eS_rcv_buf_dealloc( (buf) );  \
	  }
#define EA_SND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eA_snd_buf_dealloc( (buf) );  \
	  }
#define EA_RCV_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eA_rcv_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTestComponent2_TECSGENH */
