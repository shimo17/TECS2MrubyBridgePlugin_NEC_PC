/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tDataqueuePeer_TECSGEN_H
#define tDataqueuePeer_TECSGEN_H

/*
 * celltype          :  tDataqueuePeer
 * global name       :  tDataqueuePeer
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  true
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sDataqueue_tecsgen.h"
#include "siDataqueue_tecsgen.h"
#include "sSemaphore_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tDataqueuePeer_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ATR            attribute;
    uint_t         count;
    void*          pdqmb;
}  tDataqueuePeer_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tDataqueuePeer_CB {
    tDataqueuePeer_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int_t          fd[2];
    bool_t         b_init;
}  tDataqueuePeer_CB;
extern tDataqueuePeer_CB  tDataqueuePeer_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tDataqueuePeer_CB *tDataqueuePeer_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sDataqueue */
Inline ER           tDataqueuePeer_eDataqueue_send(tDataqueuePeer_IDX idx, intptr_t data);
Inline ER           tDataqueuePeer_eDataqueue_sendPolling(tDataqueuePeer_IDX idx, intptr_t data);
Inline ER           tDataqueuePeer_eDataqueue_sendTimeout(tDataqueuePeer_IDX idx, intptr_t data, TMO timeout);
Inline ER           tDataqueuePeer_eDataqueue_sendForce(tDataqueuePeer_IDX idx, intptr_t data);
Inline ER           tDataqueuePeer_eDataqueue_receive(tDataqueuePeer_IDX idx, intptr_t* p_data);
Inline ER           tDataqueuePeer_eDataqueue_receivePolling(tDataqueuePeer_IDX idx, intptr_t* p_data);
Inline ER           tDataqueuePeer_eDataqueue_receiveTimeout(tDataqueuePeer_IDX idx, intptr_t* p_data, TMO timeout);
Inline ER           tDataqueuePeer_eDataqueue_initialize(tDataqueuePeer_IDX idx);
Inline ER           tDataqueuePeer_eDataqueue_refer(tDataqueuePeer_IDX idx, T_RDTQ* pk_dataqueue_status);
/* siDataqueue */
Inline ER           tDataqueuePeer_eiDataqueue_sendPolling(tDataqueuePeer_IDX idx, intptr_t data);
Inline ER           tDataqueuePeer_eiDataqueue_sendForce(tDataqueuePeer_IDX idx, intptr_t data);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tDataqueuePeer_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSemaphore_tecsgen.h"
#ifdef  tDataqueuePeer_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tDataqueuePeer_CB_TYPE_ONLY */
#define tDataqueuePeer_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tDataqueuePeer_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tDataqueuePeer_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tDataqueuePeer_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tDataqueuePeer_ATTR_attribute( p_that )	((p_that)->_inib->attribute)
#define tDataqueuePeer_ATTR_count( p_that )	((p_that)->_inib->count)
#define tDataqueuePeer_ATTR_pdqmb( p_that )	((p_that)->_inib->pdqmb)

#define tDataqueuePeer_GET_attribute(p_that)	((p_that)->_inib->attribute)
#define tDataqueuePeer_GET_count(p_that)	((p_that)->_inib->count)
#define tDataqueuePeer_GET_pdqmb(p_that)	((p_that)->_inib->pdqmb)


/* var アクセスマクロ #_VAM_# */
#define tDataqueuePeer_VAR_fd(p_that)	((p_that)->fd)
#define tDataqueuePeer_VAR_b_init(p_that)	((p_that)->b_init)

#define tDataqueuePeer_GET_fd(p_that)	((p_that)->fd)
#define tDataqueuePeer_SET_fd(p_that,val)	((p_that)->fd=(val))
#define tDataqueuePeer_GET_b_init(p_that)	((p_that)->b_init)
#define tDataqueuePeer_SET_b_init(p_that,val)	((p_that)->b_init=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tDataqueuePeer_cInitializing_signal( p_that ) \
	  tSemaphore_eSemaphore_signal( \
	   &tSemaphore_CB_tab[0] )
#define tDataqueuePeer_cInitializing_wait( p_that ) \
	  tSemaphore_eSemaphore_wait( \
	   &tSemaphore_CB_tab[0] )
#define tDataqueuePeer_cInitializing_waitPolling( p_that ) \
	  tSemaphore_eSemaphore_waitPolling( \
	   &tSemaphore_CB_tab[0] )
#define tDataqueuePeer_cInitializing_waitTimeout( p_that, timeout ) \
	  tSemaphore_eSemaphore_waitTimeout( \
	   &tSemaphore_CB_tab[0], (timeout) )
#define tDataqueuePeer_cInitializing_initialize( p_that ) \
	  tSemaphore_eSemaphore_initialize( \
	   &tSemaphore_CB_tab[0] )
#define tDataqueuePeer_cInitializing_refer( p_that, pk_semaphore_status ) \
	  tSemaphore_eSemaphore_refer( \
	   &tSemaphore_CB_tab[0], (pk_semaphore_status) )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tDataqueuePeer_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tDataqueuePeer_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tDataqueuePeer_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tDataqueuePeer_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_attribute       tDataqueuePeer_ATTR_attribute( p_cellcb )
#define ATTR_count           tDataqueuePeer_ATTR_count( p_cellcb )
#define ATTR_pdqmb           tDataqueuePeer_ATTR_pdqmb( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_fd               tDataqueuePeer_VAR_fd( p_cellcb )
#define VAR_b_init           tDataqueuePeer_VAR_b_init( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cInitializing_signal( ) \
          ((void)p_cellcb, tDataqueuePeer_cInitializing_signal( p_cellcb ))
#define cInitializing_wait( ) \
          ((void)p_cellcb, tDataqueuePeer_cInitializing_wait( p_cellcb ))
#define cInitializing_waitPolling( ) \
          ((void)p_cellcb, tDataqueuePeer_cInitializing_waitPolling( p_cellcb ))
#define cInitializing_waitTimeout( timeout ) \
          ((void)p_cellcb, tDataqueuePeer_cInitializing_waitTimeout( p_cellcb, timeout ))
#define cInitializing_initialize( ) \
          ((void)p_cellcb, tDataqueuePeer_cInitializing_initialize( p_cellcb ))
#define cInitializing_refer( pk_semaphore_status ) \
          ((void)p_cellcb, tDataqueuePeer_cInitializing_refer( p_cellcb, pk_semaphore_status ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eDataqueue_send  tDataqueuePeer_eDataqueue_send
#define eDataqueue_sendPolling tDataqueuePeer_eDataqueue_sendPolling
#define eDataqueue_sendTimeout tDataqueuePeer_eDataqueue_sendTimeout
#define eDataqueue_sendForce tDataqueuePeer_eDataqueue_sendForce
#define eDataqueue_receive tDataqueuePeer_eDataqueue_receive
#define eDataqueue_receivePolling tDataqueuePeer_eDataqueue_receivePolling
#define eDataqueue_receiveTimeout tDataqueuePeer_eDataqueue_receiveTimeout
#define eDataqueue_initialize tDataqueuePeer_eDataqueue_initialize
#define eDataqueue_refer tDataqueuePeer_eDataqueue_refer
#define eiDataqueue_sendPolling tDataqueuePeer_eiDataqueue_sendPolling
#define eiDataqueue_sendForce tDataqueuePeer_eiDataqueue_sendForce

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tDataqueuePeer_N_CELL; (i)++ ){ \
       (p_cb) = &tDataqueuePeer_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tDataqueuePeer_INIB_tab[(i)];

#ifndef TOPPERS_MACRO_ONLY

/* inline ヘッダの include #_INL_# */
#include "tDataqueuePeer_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline のための undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tDataqueuePeer_IDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef ATTR_attribute
#undef tDataqueuePeer_ATTR_attribute
#undef tDataqueuePeer_GET_attribute
#undef ATTR_count
#undef tDataqueuePeer_ATTR_count
#undef tDataqueuePeer_GET_count
#undef ATTR_pdqmb
#undef tDataqueuePeer_ATTR_pdqmb
#undef tDataqueuePeer_GET_pdqmb
#undef VAR_fd
#undef VAR_fd
#undef tDataqueuePeer_VAR_fd
#undef tDataqueuePeer_GET_fd
#undef tDataqueuePeer_SET_fd
#undef VAR_b_init
#undef VAR_b_init
#undef tDataqueuePeer_VAR_b_init
#undef tDataqueuePeer_GET_b_init
#undef tDataqueuePeer_SET_b_init
#undef tDataqueuePeer_cInitializing_signal
#undef cInitializing_signal
#undef tDataqueuePeer_cInitializing_wait
#undef cInitializing_wait
#undef tDataqueuePeer_cInitializing_waitPolling
#undef cInitializing_waitPolling
#undef tDataqueuePeer_cInitializing_waitTimeout
#undef cInitializing_waitTimeout
#undef tDataqueuePeer_cInitializing_initialize
#undef cInitializing_initialize
#undef tDataqueuePeer_cInitializing_refer
#undef cInitializing_refer
#undef eDataqueue_send
#undef eDataqueue_sendPolling
#undef eDataqueue_sendTimeout
#undef eDataqueue_sendForce
#undef eDataqueue_receive
#undef eDataqueue_receivePolling
#undef eDataqueue_receiveTimeout
#undef eDataqueue_initialize
#undef eDataqueue_refer
#undef eiDataqueue_sendPolling
#undef eiDataqueue_sendForce
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tDataqueuePeer_TECSGENH */
