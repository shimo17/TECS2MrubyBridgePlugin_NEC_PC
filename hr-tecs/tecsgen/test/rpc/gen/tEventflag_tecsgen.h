/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tEventflag_TECSGEN_H
#define tEventflag_TECSGEN_H

/*
 * celltype          :  tEventflag
 * global name       :  tEventflag
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
#include "sEventflag_tecsgen.h"
#include "siEventflag_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tEventflag_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ID             id;
}  tEventflag_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tEventflag_CB {
    tEventflag_INIB  *_inib;
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    pthread_mutex_t mutex;
    pthread_cond_t cond;
    pthread_once_t once;
    FLGPTN         pattern;
}  tEventflag_CB;
extern tEventflag_CB  tEventflag_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tEventflag_CB *tEventflag_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sEventflag */
ER           tEventflag_eEventflag_set(tEventflag_IDX idx, FLGPTN set_pattern);
ER           tEventflag_eEventflag_clear(tEventflag_IDX idx, FLGPTN clear_pattern);
ER           tEventflag_eEventflag_wait(tEventflag_IDX idx, FLGPTN wait_pattern, MODE wait_flag_mode, FLGPTN* p_flag_pattern);
ER           tEventflag_eEventflag_waitPolling(tEventflag_IDX idx, FLGPTN wait_pattern, MODE wait_flag_mode, FLGPTN* p_flag_pattern);
ER           tEventflag_eEventflag_waitTimeout(tEventflag_IDX idx, FLGPTN wait_pattern, MODE wait_flag_mode, FLGPTN* p_flag_pattern, TMO timeout);
ER           tEventflag_eEventflag_initialize(tEventflag_IDX idx);
ER           tEventflag_eEventflag_refer(tEventflag_IDX idx, T_RFLG* pk_eventflag_status);
/* siEventflag */
ER           tEventflag_eiEventflag_set(tEventflag_IDX idx, FLGPTN set_pattern);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tEventflag_ID_BASE          (1)  /* ID のベース  #_NIDB_# */
#define tEventflag_N_CELL           (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tEventflag_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tEventflag_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tEventflag_ATTR_id( p_that )	((p_that)->_inib->id)

#define tEventflag_GET_id(p_that)	((p_that)->_inib->id)


/* var アクセスマクロ #_VAM_# */
#define tEventflag_VAR_mutex(p_that)	((p_that)->mutex)
#define tEventflag_VAR_cond(p_that)	((p_that)->cond)
#define tEventflag_VAR_once(p_that)	((p_that)->once)
#define tEventflag_VAR_pattern(p_that)	((p_that)->pattern)

#define tEventflag_GET_mutex(p_that)	((p_that)->mutex)
#define tEventflag_SET_mutex(p_that,val)	((p_that)->mutex=(val))
#define tEventflag_GET_cond(p_that)	((p_that)->cond)
#define tEventflag_SET_cond(p_that,val)	((p_that)->cond=(val))
#define tEventflag_GET_once(p_that)	((p_that)->once)
#define tEventflag_SET_once(p_that,val)	((p_that)->once=(val))
#define tEventflag_GET_pattern(p_that)	((p_that)->pattern)
#define tEventflag_SET_pattern(p_that,val)	((p_that)->pattern=(val))

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
#define VALID_IDX(IDX)  tEventflag_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tEventflag_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tEventflag_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tEventflag_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_id              tEventflag_ATTR_id( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_mutex            tEventflag_VAR_mutex( p_cellcb )
#define VAR_cond             tEventflag_VAR_cond( p_cellcb )
#define VAR_once             tEventflag_VAR_once( p_cellcb )
#define VAR_pattern          tEventflag_VAR_pattern( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEventflag_set   tEventflag_eEventflag_set
#define eEventflag_clear tEventflag_eEventflag_clear
#define eEventflag_wait  tEventflag_eEventflag_wait
#define eEventflag_waitPolling tEventflag_eEventflag_waitPolling
#define eEventflag_waitTimeout tEventflag_eEventflag_waitTimeout
#define eEventflag_initialize tEventflag_eEventflag_initialize
#define eEventflag_refer tEventflag_eEventflag_refer
#define eiEventflag_set  tEventflag_eiEventflag_set

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tEventflag_N_CELL; (i)++ ){ \
       (p_cb) = &tEventflag_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
extern const pthread_once_t tEventflag_once_VAR_INIT;
#define INITIALIZE_CB(p_that)\
	(p_that)->mutex = PTHREAD_MUTEX_INITIALIZER;\
	(p_that)->cond = PTHREAD_COND_INITIALIZER;\
	memcpy((void*)&tEventflag_VAR_once(p_that), (void*)&tEventflag_once_VAR_INIT, sizeof(tEventflag_once_VAR_INIT));\
	(p_that)->pattern = tEventflag_ATTR_flagPattern(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tEventflag_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tEventflag_TECSGENH */
