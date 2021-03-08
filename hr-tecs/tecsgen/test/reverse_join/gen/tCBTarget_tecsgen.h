/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCBTarget_TECSGEN_H
#define tCBTarget_TECSGEN_H

/*
 * celltype          :  tCBTarget
 * global name       :  tCBTarget
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
#include "sCallback_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCBTarget_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
}  tCBTarget_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCBTarget_CB_tab           tCBTarget_INIB_tab
#define tCBTarget_SINGLE_CELL_CB   tCBTarget_SINGLE_CELL_INIB
#define tCBTarget_CB               tCBTarget_INIB
#define tag_tCBTarget_CB           tag_tCBTarget_INIB

extern tCBTarget_CB  tCBTarget_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCBTarget_INIB *tCBTarget_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sCallback */
void         tCBTarget_eCallback_func(tCBTarget_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCBTarget_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tCBTarget_N_CELL            (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCBTarget_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCBTarget_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCBTarget_ATTR_name( p_that )	((p_that)->name)

#define tCBTarget_GET_name(p_that)	((p_that)->name)



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
#define VALID_IDX(IDX)  tCBTarget_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCBTarget_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCBTarget_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCBTarget_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            tCBTarget_ATTR_name( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eCallback_func   tCBTarget_eCallback_func

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCBTarget_N_CELL; (i)++ ){ \
       //(p_cb) = &tCBTarget_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCBTarget_TECSGENH */
