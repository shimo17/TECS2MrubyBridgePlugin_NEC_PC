/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tInitializer_TECSGEN_H
#define tInitializer_TECSGEN_H

/*
 * celltype          :  tInitializer
 * global name       :  tInitializer
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
#include "sInit_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tInitializer_INIB {
    /* call port #_TCP_# */
    struct tag_sInit_VDES *const*cInit;
    int_t n_cInit;
}  tInitializer_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tInitializer_CB_tab           tInitializer_INIB_tab
#define tInitializer_SINGLE_CELL_CB   tInitializer_SINGLE_CELL_INIB
#define tInitializer_CB               tInitializer_INIB
#define tag_tInitializer_CB           tag_tInitializer_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tInitializer_INIB  tInitializer_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tInitializer_INIB *tInitializer_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cInit  (tInitializer_SINGLE_CELL_INIB.n_cInit)
#define NCP_cInit   (tInitializer_SINGLE_CELL_INIB.n_cInit)

/* セルCBを得るマクロ #_GCB_# */
#define tInitializer_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tInitializer_cInit_initialize( subscript ) \
	  tInitializer_SINGLE_CELL_INIB.cInit[subscript]->VMT->initialize__T( \
	  tInitializer_SINGLE_CELL_INIB.cInit[subscript] )

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
#define GET_CELLCB(idx)  tInitializer_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tInitializer_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tInitializer_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cInit_initialize( subscript ) \
          tInitializer_cInit_initialize( subscript )



/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tInitializer_TECSGENH */
