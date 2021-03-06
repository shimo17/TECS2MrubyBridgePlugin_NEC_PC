/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tRelayComponent_TECSGEN_H
#define tRelayComponent_TECSGEN_H

/*
 * celltype          :  tRelayComponent
 * global name       :  tRelayComponent
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  true
 * has_INIB          :  false
 * rom               :  no
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
/* セル CB 型宣言 #_CCTPO_# */
typedef struct tag_tRelayComponent_CB {
    /* call port #_TCP_# */
    struct tag_sSendRecv_VDES const*cSR;
    /* call port #_NEP_# */ 
    /* attribute #_AT_# */ 
    char_t*        name;
}  tRelayComponent_CB;
extern tRelayComponent_CB  tRelayComponent_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tRelayComponent_CB *tRelayComponent_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSendRecv */
ER           tRelayComponent_eA_snd(tRelayComponent_IDX idx, int_t subscript, int8_t* buf, int32_t sz);
ER           tRelayComponent_eA_rcv(tRelayComponent_IDX idx, int_t subscript, int8_t** buf, int32_t* sz);
/* sSendRecv */
ER           tRelayComponent_eS_snd(tRelayComponent_IDX idx, int8_t* buf, int32_t sz);
ER           tRelayComponent_eS_rcv(tRelayComponent_IDX idx, int8_t** buf, int32_t* sz);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tRelayComponent_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAlloc_tecsgen.h"
#ifdef  tRelayComponent_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tRelayComponent_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tRelayComponent_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tRelayComponent_N_CELL        (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tRelayComponent_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_eA_snd_buf    (2)
#define NCP_eA_snd_buf     (2)
#define N_CP_eA_rcv_buf    (2)
#define NCP_eA_rcv_buf     (2)
/* 受け口配列の大きさを得るマクロ #_NEPA_# */
#define NEP_eA     (2)

/* セルCBを得るマクロ #_GCB_# */
#define tRelayComponent_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tRelayComponent_ATTR_name( p_that )	((p_that)->name)

#define tRelayComponent_GET_name(p_that)	((p_that)->name)



 /* 呼び口関数マクロ #_CPM_# */
#define tRelayComponent_cSR_snd( p_that, buf, sz ) \
	  (p_that)->cSR->VMT->snd__T( \
	   (p_that)->cSR, (buf), (sz) )
#define tRelayComponent_cSR_rcv( p_that, buf, sz ) \
	  (p_that)->cSR->VMT->rcv__T( \
	   (p_that)->cSR, (buf), (sz) )
#define tRelayComponent_eA_snd_buf_alloc( p_that, subscript, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tRelayComponent_eA_snd_buf_dealloc( p_that, subscript, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tRelayComponent_eA_rcv_buf_alloc( p_that, subscript, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tRelayComponent_eA_rcv_buf_dealloc( p_that, subscript, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tRelayComponent_eS_snd_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tRelayComponent_eS_snd_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tRelayComponent_eS_rcv_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tRelayComponent_eS_rcv_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tRelayComponent_cSR_snd_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tRelayComponent_cSR_snd_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tRelayComponent_cSR_rcv_buf_alloc( p_that, size, p ) \
	  tAlloc_eA_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tRelayComponent_cSR_rcv_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   &tAlloc_CB_tab[0], (p) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eA */
ER             tRelayComponent_eA_snd_skel( const struct tag_sSendRecv_VDES *epd, int8_t* buf, int32_t sz);
ER             tRelayComponent_eA_rcv_skel( const struct tag_sSendRecv_VDES *epd, int8_t** buf, int32_t* sz);
/* eS */
ER             tRelayComponent_eS_snd_skel( const struct tag_sSendRecv_VDES *epd, int8_t* buf, int32_t sz);
ER             tRelayComponent_eS_rcv_skel( const struct tag_sSendRecv_VDES *epd, int8_t** buf, int32_t* sz);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tRelayComponent_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tRelayComponent_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tRelayComponent_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tRelayComponent_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            tRelayComponent_ATTR_name( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cSR_snd( buf, sz ) \
          tRelayComponent_cSR_snd( p_cellcb, buf, sz )
#define cSR_rcv( buf, sz ) \
          tRelayComponent_cSR_rcv( p_cellcb, buf, sz )
#define eA_snd_buf_alloc( subscript, size, p ) \
          ((void)p_cellcb, tRelayComponent_eA_snd_buf_alloc( p_cellcb, subscript, size, p ))
#define eA_snd_buf_dealloc( subscript, p ) \
          ((void)p_cellcb, tRelayComponent_eA_snd_buf_dealloc( p_cellcb, subscript, p ))
#define eA_rcv_buf_alloc( subscript, size, p ) \
          ((void)p_cellcb, tRelayComponent_eA_rcv_buf_alloc( p_cellcb, subscript, size, p ))
#define eA_rcv_buf_dealloc( subscript, p ) \
          ((void)p_cellcb, tRelayComponent_eA_rcv_buf_dealloc( p_cellcb, subscript, p ))
#define eS_snd_buf_alloc( size, p ) \
          ((void)p_cellcb, tRelayComponent_eS_snd_buf_alloc( p_cellcb, size, p ))
#define eS_snd_buf_dealloc( p ) \
          ((void)p_cellcb, tRelayComponent_eS_snd_buf_dealloc( p_cellcb, p ))
#define eS_rcv_buf_alloc( size, p ) \
          ((void)p_cellcb, tRelayComponent_eS_rcv_buf_alloc( p_cellcb, size, p ))
#define eS_rcv_buf_dealloc( p ) \
          ((void)p_cellcb, tRelayComponent_eS_rcv_buf_dealloc( p_cellcb, p ))
#define cSR_snd_buf_alloc( size, p ) \
          ((void)p_cellcb, tRelayComponent_cSR_snd_buf_alloc( p_cellcb, size, p ))
#define cSR_snd_buf_dealloc( p ) \
          ((void)p_cellcb, tRelayComponent_cSR_snd_buf_dealloc( p_cellcb, p ))
#define cSR_rcv_buf_alloc( size, p ) \
          ((void)p_cellcb, tRelayComponent_cSR_rcv_buf_alloc( p_cellcb, size, p ))
#define cSR_rcv_buf_dealloc( p ) \
          ((void)p_cellcb, tRelayComponent_cSR_rcv_buf_dealloc( p_cellcb, p ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eA_snd           tRelayComponent_eA_snd
#define eA_rcv           tRelayComponent_eA_rcv
#define eS_snd           tRelayComponent_eS_snd
#define eS_rcv           tRelayComponent_eS_rcv

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tRelayComponent_N_CELL; (i)++ ){ \
       (p_cb) = &tRelayComponent_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */

/* deallocate マクロ #_DAL_#   */
#define EA_SND_BUF_DEALLOC(buf) \
	  eA_snd_buf_dealloc( (buf) ); 
#define EA_RCV_BUF_DEALLOC(buf) \
	  eA_rcv_buf_dealloc( (buf) ); 
#define ES_SND_BUF_DEALLOC(buf) \
	  eS_snd_buf_dealloc( (buf) ); 
#define ES_RCV_BUF_DEALLOC(buf) \
	  eS_rcv_buf_dealloc( (buf) ); 
#define CSR_SND_BUF_DEALLOC(buf) \
	  cSR_snd_buf_dealloc( (buf) ); 
#define CSR_RCV_BUF_DEALLOC(buf) \
	  cSR_rcv_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define EA_SND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eA_snd_buf_dealloc( (buf) );  \
	  }
#define EA_RCV_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eA_rcv_buf_dealloc( (buf) );  \
	  }
#define ES_SND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eS_snd_buf_dealloc( (buf) );  \
	  }
#define ES_RCV_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eS_rcv_buf_dealloc( (buf) );  \
	  }
#define CSR_SND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cSR_snd_buf_dealloc( (buf) );  \
	  }
#define CSR_RCV_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cSR_rcv_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tRelayComponent_TECSGENH */
