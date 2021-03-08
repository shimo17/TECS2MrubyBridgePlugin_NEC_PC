/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTestComponent_TECSGEN_H
#define tTestComponent_TECSGEN_H

/*
 * celltype          :  tTestComponent
 * global name       :  tTestComponent
 * idx_is_id(actual) :  no(no)
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
typedef const struct tag_tTestComponent_INIB {
    /* call port #_NEP_# */ 
}  tTestComponent_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTestComponent_CB_tab           tTestComponent_INIB_tab
#define tTestComponent_SINGLE_CELL_CB   tTestComponent_SINGLE_CELL_INIB
#define tTestComponent_CB               tTestComponent_INIB
#define tag_tTestComponent_CB           tag_tTestComponent_INIB

extern tTestComponent_CB  tTestComponent_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTestComponent_INIB *tTestComponent_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tTestComponent_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tTestComponent_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTestComponent_VALID_IDX(IDX) (1)

/* 受け口配列の大きさを得るマクロ #_NEPA_# */
#define NEP_eA     (2)

/* セルCBを得るマクロ #_GCB_# */
#define tTestComponent_GET_CELLCB(idx) (idx)
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
#define VALID_IDX(IDX)  tTestComponent_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTestComponent_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTestComponent_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTestComponent_IDX




/* 受け口関数マクロ（短縮形） #_EPM_# */

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTestComponent_N_CELL; (i)++ ){ \
       (p_cb) = &tTestComponent_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTestComponent_TECSGENH */
