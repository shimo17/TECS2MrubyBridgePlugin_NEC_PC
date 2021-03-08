/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tISRBody_TECSGEN_H
#define tISRBody_TECSGEN_H

/*
 * celltype          :  tISRBody
 * global name       :  tISRBody
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
#include "sHandlerBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tISRBody_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        dummy;
}  tISRBody_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tISRBody_CB_tab           tISRBody_INIB_tab
#define tISRBody_SINGLE_CELL_CB   tISRBody_SINGLE_CELL_INIB
#define tISRBody_CB               tISRBody_INIB
#define tag_tISRBody_CB           tag_tISRBody_INIB

extern tISRBody_CB  tISRBody_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tISRBody_INIB *tISRBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sHandlerBody */
void         tISRBody_eBody_main(tISRBody_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tISRBody_ID_BASE            (1)  /* ID のベース  #_NIDB_# */
#define tISRBody_N_CELL             (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tISRBody_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tISRBody_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tISRBody_ATTR_dummy( p_that )	((p_that)->dummy)

#define tISRBody_GET_dummy(p_that)	((p_that)->dummy)



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
#define VALID_IDX(IDX)  tISRBody_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tISRBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tISRBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tISRBody_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_dummy           tISRBody_ATTR_dummy( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tISRBody_eBody_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tISRBody_N_CELL; (i)++ ){ \
       //(p_cb) = &tISRBody_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tISRBody_TECSGENH */
