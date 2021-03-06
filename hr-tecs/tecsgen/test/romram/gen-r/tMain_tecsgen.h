/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMain_TECSGEN_H
#define tMain_TECSGEN_H

/*
 * celltype          :  tMain
 * global name       :  tMain
 * idx_is_id(actual) :  yes(no)
 * singleton         :  yes
 * has_CB            :  true
 * has_INIB          :  false
 * rom               :  no
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSig_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPO_# */
typedef struct tag_tMain_CB {
    /* call port #_TCP_# */
    struct tag_sSig_VDES *const*cSig;
    int_t n_cSig;
}  tMain_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tMain_CB  tMain_SINGLE_CELL_CB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tMain_CB *tMain_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cSig  (tMain_SINGLE_CELL_CB.n_cSig)
#define NCP_cSig   (tMain_SINGLE_CELL_CB.n_cSig)

/* セルCBを得るマクロ #_GCB_# */
#define tMain_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tMain_cSig_func( subscript, in, out ) \
	  tMain_SINGLE_CELL_CB.cSig[subscript]->VMT->func__T( \
	  tMain_SINGLE_CELL_CB.cSig[subscript], (in), (out) )

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
#define cSig_func( subscript, in, out ) \
          tMain_cSig_func( subscript, in, out )



/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMain_TECSGENH */
