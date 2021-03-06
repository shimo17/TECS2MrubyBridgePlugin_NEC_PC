/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSingle_idx_is_id_TECSGEN_H
#define tSingle_idx_is_id_TECSGEN_H

/*
 * celltype          :  tSingle_idx_is_id
 * global name       :  tSingle_idx_is_id
 * idx_is_id(actual) :  yes(no)
 * singleton         :  yes
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
typedef const struct tag_tSingle_idx_is_id_INIB {
}  tSingle_idx_is_id_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSingle_idx_is_id_CB_tab           tSingle_idx_is_id_INIB_tab
#define tSingle_idx_is_id_SINGLE_CELL_CB   tSingle_idx_is_id_SINGLE_CELL_INIB
#define tSingle_idx_is_id_CB               tSingle_idx_is_id_INIB
#define tag_tSingle_idx_is_id_CB           tag_tSingle_idx_is_id_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tSingle_idx_is_id_INIB  tSingle_idx_is_id_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tSingle_idx_is_id_INIB *tSingle_idx_is_id_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tSingle_idx_is_id_GET_CELLCB(idx) ((void *)0)
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
#define GET_CELLCB(idx)  tSingle_idx_is_id_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSingle_idx_is_id_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSingle_idx_is_id_IDX



/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSingle_idx_is_id_TECSGENH */
