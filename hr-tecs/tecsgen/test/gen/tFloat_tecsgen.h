/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tFloat_TECSGEN_H
#define tFloat_TECSGEN_H

/*
 * celltype          :  tFloat
 * global name       :  tFloat
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
#include "sFloat_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tFloat_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    float32_t      f;
    double64_t     d;
}  tFloat_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tFloat_CB_tab           tFloat_INIB_tab
#define tFloat_SINGLE_CELL_CB   tFloat_SINGLE_CELL_INIB
#define tFloat_CB               tFloat_INIB
#define tag_tFloat_CB           tag_tFloat_INIB

extern tFloat_CB  tFloat_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tFloat_INIB *tFloat_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sFloat */
float32_t    tFloat_eFloat_func(tFloat_IDX idx, double64_t a, double64_t* b);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tFloat_ID_BASE              (1)  /* ID のベース  #_NIDB_# */
#define tFloat_N_CELL               (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tFloat_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tFloat_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tFloat_ATTR_f( p_that )	((p_that)->f)
#define tFloat_ATTR_d( p_that )	((p_that)->d)

#define tFloat_GET_f(p_that)	((p_that)->f)
#define tFloat_GET_d(p_that)	((p_that)->d)



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
#define VALID_IDX(IDX)  tFloat_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tFloat_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tFloat_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tFloat_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_f               tFloat_ATTR_f( p_cellcb )
#define ATTR_d               tFloat_ATTR_d( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eFloat_func      tFloat_eFloat_func

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tFloat_N_CELL; (i)++ ){ \
       //(p_cb) = &tFloat_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tFloat_TECSGENH */
