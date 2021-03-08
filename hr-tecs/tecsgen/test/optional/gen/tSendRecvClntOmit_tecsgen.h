/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSendRecvClntOmit_TECSGEN_H
#define tSendRecvClntOmit_TECSGEN_H

/*
 * celltype          :  tSendRecvClntOmit
 * global name       :  tSendRecvClntOmit
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
#include "sTaskBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tSendRecvClntOmit_CB {
    int  dummy;
} tSendRecvClntOmit_CB;
extern tSendRecvClntOmit_CB  tSendRecvClntOmit_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tSendRecvClntOmit_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tSendRecvClntOmit_eMain_main(tSendRecvClntOmit_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSendRecvClntOmit_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#ifdef  tSendRecvClntOmit_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSendRecvClntOmit_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSendRecvClntOmit_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSendRecvClntOmit_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSendRecvClntOmit_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tSendRecvClntOmit_is_cCall_joined(p_that) \
   omit  is_cCall_joined
#define tSendRecvClntOmit_is_cCall_snd_st_val_joined(p_that) \
   omit  is_cCall_snd_st_val_joined
#define tSendRecvClntOmit_is_cCall_rcv_st_val_joined(p_that) \
   omit  is_cCall_rcv_st_val_joined

/* セルCBを得るマクロ #_GCB_# */
#define tSendRecvClntOmit_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eMain */
void           tSendRecvClntOmit_eMain_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tSendRecvClntOmit_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSendRecvClntOmit_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSendRecvClntOmit_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSendRecvClntOmit_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_snd( st_val ) \
          ((void)p_cellcb, omitted cCall_snd( p_cellcb, st_val ))
#define cCall_rcv( st_val ) \
          ((void)p_cellcb, omitted cCall_rcv( p_cellcb, st_val ))
#define cCall_snd_st_val_alloc( size, p ) \
          ((void)p_cellcb, omitted cCall_snd_st_val_alloc( p_cellcb, size, p ))
#define cCall_snd_st_val_dealloc( p ) \
          ((void)p_cellcb, omitted cCall_snd_st_val_dealloc( p_cellcb, p ))
#define cCall_rcv_st_val_alloc( size, p ) \
          ((void)p_cellcb, omitted cCall_rcv_st_val_alloc( p_cellcb, size, p ))
#define cCall_rcv_st_val_dealloc( p ) \
          ((void)p_cellcb, omitted cCall_rcv_st_val_dealloc( p_cellcb, p ))



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cCall_joined()\
		tSendRecvClntOmit_is_cCall_joined(p_cellcb)
#define is_cCall_snd_st_val_joined()\
		tSendRecvClntOmit_is_cCall_snd_st_val_joined(p_cellcb)
#define is_cCall_rcv_st_val_joined()\
		tSendRecvClntOmit_is_cCall_rcv_st_val_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tSendRecvClntOmit_eMain_main

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSendRecvClntOmit_TECSGENH */
