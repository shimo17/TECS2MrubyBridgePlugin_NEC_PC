/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tEventflag_TECSGEN_H
#define tEventflag_TECSGEN_H

/*
 * celltype          :  tEventflag
 * global name       :  tEventflag
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

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tEventflag_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int            id;
}  tEventflag_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tEventflag_CB_tab           tEventflag_INIB_tab
#define tEventflag_SINGLE_CELL_CB   tEventflag_SINGLE_CELL_INIB
#define tEventflag_CB               tEventflag_INIB
#define tag_tEventflag_CB           tag_tEventflag_INIB

extern tEventflag_CB  tEventflag_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tEventflag_INIB *tEventflag_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tEventflag_ID_BASE          (1)  /* ID のベース  #_NIDB_# */
#define tEventflag_N_CELL           (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tEventflag_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tEventflag_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tEventflag_ATTR_id( p_that )	((p_that)->id)

#define tEventflag_GET_id(p_that)	((p_that)->id)



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
#define VALID_IDX(IDX)  tEventflag_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tEventflag_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tEventflag_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tEventflag_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_id              tEventflag_ATTR_id( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tEventflag_N_CELL; (i)++ ){ \
       //(p_cb) = &tEventflag_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tEventflag_TECSGENH */
