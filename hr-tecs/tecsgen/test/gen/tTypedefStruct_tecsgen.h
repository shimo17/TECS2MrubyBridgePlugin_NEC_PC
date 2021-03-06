/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTypedefStruct_TECSGEN_H
#define tTypedefStruct_TECSGEN_H

/*
 * celltype          :  tTypedefStruct
 * global name       :  tTypedefStruct
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
typedef const struct tag_tTypedefStruct_INIB {
    /* attribute(RO) #_ATO_# */ 
    STRUCT         st;
}  tTypedefStruct_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTypedefStruct_CB_tab           tTypedefStruct_INIB_tab
#define tTypedefStruct_SINGLE_CELL_CB   tTypedefStruct_SINGLE_CELL_INIB
#define tTypedefStruct_CB               tTypedefStruct_INIB
#define tag_tTypedefStruct_CB           tag_tTypedefStruct_INIB

extern tTypedefStruct_CB  tTypedefStruct_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTypedefStruct_INIB *tTypedefStruct_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tTypedefStruct_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tTypedefStruct_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTypedefStruct_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTypedefStruct_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTypedefStruct_ATTR_st( p_that )	((p_that)->st)

#define tTypedefStruct_GET_st(p_that)	((p_that)->st)



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
#define VALID_IDX(IDX)  tTypedefStruct_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTypedefStruct_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTypedefStruct_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTypedefStruct_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_st              tTypedefStruct_ATTR_st( p_cellcb )




/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTypedefStruct_N_CELL; (i)++ ){ \
       //(p_cb) = &tTypedefStruct_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTypedefStruct_TECSGENH */
