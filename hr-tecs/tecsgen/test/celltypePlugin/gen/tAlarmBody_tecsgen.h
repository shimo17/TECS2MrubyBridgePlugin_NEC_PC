/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tAlarmBody_TECSGEN_H
#define tAlarmBody_TECSGEN_H

/*
 * celltype          :  tAlarmBody
 * global name       :  tAlarmBody
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
#include "sCallbackBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tAlarmBody_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        dummy;
}  tAlarmBody_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tAlarmBody_CB_tab           tAlarmBody_INIB_tab
#define tAlarmBody_SINGLE_CELL_CB   tAlarmBody_SINGLE_CELL_INIB
#define tAlarmBody_CB               tAlarmBody_INIB
#define tag_tAlarmBody_CB           tag_tAlarmBody_INIB

extern tAlarmBody_CB  tAlarmBody_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tAlarmBody_INIB *tAlarmBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sCallbackBody */
void         tAlarmBody_eBody_main(tAlarmBody_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tAlarmBody_ID_BASE          (1)  /* ID のベース  #_NIDB_# */
#define tAlarmBody_N_CELL           (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tAlarmBody_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tAlarmBody_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tAlarmBody_ATTR_dummy( p_that )	((p_that)->dummy)

#define tAlarmBody_GET_dummy(p_that)	((p_that)->dummy)



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
#define VALID_IDX(IDX)  tAlarmBody_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tAlarmBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tAlarmBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tAlarmBody_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_dummy           tAlarmBody_ATTR_dummy( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tAlarmBody_eBody_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tAlarmBody_N_CELL; (i)++ ){ \
       //(p_cb) = &tAlarmBody_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tAlarmBody_TECSGENH */
