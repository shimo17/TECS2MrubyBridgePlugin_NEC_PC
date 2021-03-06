/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tOmit_TECSGEN_H
#define tOmit_TECSGEN_H

/*
 * celltype          :  tOmit
 * global name       :  tOmit
 * idx_is_id(actual) :  yes(yes)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tOmit_INIB {
}  tOmit_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tOmit_CB_tab           tOmit_INIB_tab
#define tOmit_SINGLE_CELL_CB   tOmit_SINGLE_CELL_INIB
#define tOmit_CB               tOmit_INIB
#define tag_tOmit_CB           tag_tOmit_INIB

extern tOmit_CB  *tOmit_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID tOmit_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tOmit_ID_BASE               (4)  /* ID のベース  #_NIDB_# */
#define tOmit_N_CELL                (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tOmit_VALID_IDX(IDX) (tOmit_ID_BASE <= (IDX) && (IDX) < tOmit_ID_BASE+tOmit_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define tOmit_GET_CELLCB(idx) (tOmit_CB_tab[(idx) - tOmit_ID_BASE])
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
#define VALID_IDX(IDX)  tOmit_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tOmit_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tOmit_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tOmit_IDX



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tOmit_N_CELL; (i)++ ){ \
       (p_cb) = tOmit_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tOmit_TECSGENH */
