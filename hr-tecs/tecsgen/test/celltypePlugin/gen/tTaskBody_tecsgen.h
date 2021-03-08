/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTaskBody_TECSGEN_H
#define tTaskBody_TECSGEN_H

/*
 * celltype          :  tTaskBody
 * global name       :  tTaskBody
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
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
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTaskBody_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        dummy;
}  tTaskBody_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTaskBody_CB_tab           tTaskBody_INIB_tab
#define tTaskBody_SINGLE_CELL_CB   tTaskBody_SINGLE_CELL_INIB
#define tTaskBody_CB               tTaskBody_INIB
#define tag_tTaskBody_CB           tag_tTaskBody_INIB

extern tTaskBody_CB  tTaskBody_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTaskBody_INIB *tTaskBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tTaskBody_eBody_main(tTaskBody_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tTaskBody_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tTaskBody_N_CELL            (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTaskBody_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTaskBody_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTaskBody_ATTR_dummy( p_that )	((p_that)->dummy)

#define tTaskBody_GET_dummy(p_that)	((p_that)->dummy)



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
#define VALID_IDX(IDX)  tTaskBody_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTaskBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTaskBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTaskBody_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_dummy           tTaskBody_ATTR_dummy( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tTaskBody_eBody_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTaskBody_N_CELL; (i)++ ){ \
       //(p_cb) = &tTaskBody_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTaskBody_TECSGENH */
