/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCelltype_TECSGEN_H
#define tCelltype_TECSGEN_H

/*
 * celltype          :  tCelltype
 * global name       :  tCelltype
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
#include "sSig_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCelltype_INIB {
    /* call port #_TCP_# */
    struct tag_sSig_VDES *const*cCall;
    int_t n_cCall;
    struct tag_sSig_VDES *const*cCallX;
    int_t n_cCallX;
}  tCelltype_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCelltype_CB_tab           tCelltype_INIB_tab
#define tCelltype_SINGLE_CELL_CB   tCelltype_SINGLE_CELL_INIB
#define tCelltype_CB               tCelltype_INIB
#define tag_tCelltype_CB           tag_tCelltype_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tCelltype_INIB  tCelltype_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCelltype_INIB *tCelltype_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCelltype_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCelltype3_tecsgen.h"
#ifdef  tCelltype_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCelltype_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cCall  (tCelltype_SINGLE_CELL_INIB.n_cCall)
#define NCP_cCall   (tCelltype_SINGLE_CELL_INIB.n_cCall)
#define N_CP_cCallX  (tCelltype_SINGLE_CELL_INIB.n_cCallX)
#define NCP_cCallX   (tCelltype_SINGLE_CELL_INIB.n_cCallX)

/* セルCBを得るマクロ #_GCB_# */
#define tCelltype_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tCelltype_cCall_func( subscript ) \
	  tCelltype_SINGLE_CELL_INIB.cCall[subscript]->VMT->func__T( \
	  tCelltype_SINGLE_CELL_INIB.cCall[subscript] )
#define tCelltype_cCallX_func( subscript ) \
	  tCelltype_SINGLE_CELL_INIB.cCallX[subscript]->VMT->func__T( \
	  tCelltype_SINGLE_CELL_INIB.cCallX[subscript] )
#define tCelltype_cCall2_func( ) \
	  tCelltype3_eEnt2_func( \
	   &tCelltype3_CB_tab[0] )

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
#define GET_CELLCB(idx)  tCelltype_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCelltype_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCelltype_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func( subscript ) \
          tCelltype_cCall_func( subscript )
#define cCallX_func( subscript ) \
          tCelltype_cCallX_func( subscript )
#define cCall2_func( ) \
          tCelltype_cCall2_func( )



/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCelltype_TECSGENH */
