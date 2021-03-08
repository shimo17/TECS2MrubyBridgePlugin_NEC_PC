/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTestNotifier_TECSGEN_H
#define tTestNotifier_TECSGEN_H

/*
 * celltype          :  tTestNotifier
 * global name       :  tTestNotifier
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

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tTestNotifier_CB {
    int  dummy;
} tTestNotifier_CB;
extern tTestNotifier_CB  tTestNotifier_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tTestNotifier_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTestNotifier_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#ifdef  tTestNotifier_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTestNotifier_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTestNotifier_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tTestNotifier_N_CELL       (33)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTestNotifier_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tTestNotifier_is_ciNotificationHandler_joined(p_that) \
   omit  is_ciNotificationHandler_joined
#define tTestNotifier_is_ciErrorNotificationHandler_joined(p_that) \
   omit  is_ciErrorNotificationHandler_joined

/* セルCBを得るマクロ #_GCB_# */
#define tTestNotifier_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTestNotifier_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTestNotifier_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTestNotifier_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTestNotifier_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_ciNotificationHandler_joined()\
		tTestNotifier_is_ciNotificationHandler_joined(p_cellcb)
#define is_ciErrorNotificationHandler_joined()\
		tTestNotifier_is_ciErrorNotificationHandler_joined(p_cellcb)
/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTestNotifier_TECSGENH */
