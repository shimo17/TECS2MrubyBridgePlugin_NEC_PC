/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMain_TECSGEN_H
#define tMain_TECSGEN_H

/*
 * celltype          :  tMain
 * global name       :  tMain
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSyscall_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tMain_INIB {
    /* call port #_TCP_# */
    struct tag_sSyscall_VDES *const*cCall;
    int_t n_cCall;
}  tMain_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tMain_CB_tab           tMain_INIB_tab
#define tMain_SINGLE_CELL_CB   tMain_SINGLE_CELL_INIB
#define tMain_CB               tMain_INIB
#define tag_tMain_CB           tag_tMain_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tMain_INIB  tMain_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tMain_INIB *tMain_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cCall  (tMain_SINGLE_CELL_INIB.n_cCall)
#define NCP_cCall   (tMain_SINGLE_CELL_INIB.n_cCall)

/* セルCBを得るマクロ #_GCB_# */
#define tMain_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tMain_cCall_func( subscript ) \
	  tMain_SINGLE_CELL_INIB.cCall[subscript]->VMT->func__T( \
	  tMain_SINGLE_CELL_INIB.cCall[subscript] )

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


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tMain_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tMain_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tMain_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func( subscript ) \
          tMain_cCall_func( subscript )



/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMain_TECSGENH */
