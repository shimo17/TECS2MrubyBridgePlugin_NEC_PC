/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSkeltonUselessOptimizeCallee_TECSGEN_H
#define tSkeltonUselessOptimizeCallee_TECSGEN_H

/*
 * celltype          :  tSkeltonUselessOptimizeCallee
 * global name       :  tSkeltonUselessOptimizeCallee
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
#include "sSig_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSkeltonUselessOptimizeCallee_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        attribute;
}  tSkeltonUselessOptimizeCallee_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSkeltonUselessOptimizeCallee_CB_tab           tSkeltonUselessOptimizeCallee_INIB_tab
#define tSkeltonUselessOptimizeCallee_SINGLE_CELL_CB   tSkeltonUselessOptimizeCallee_SINGLE_CELL_INIB
#define tSkeltonUselessOptimizeCallee_CB               tSkeltonUselessOptimizeCallee_INIB
#define tag_tSkeltonUselessOptimizeCallee_CB           tag_tSkeltonUselessOptimizeCallee_INIB

extern tSkeltonUselessOptimizeCallee_CB  tSkeltonUselessOptimizeCallee_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tSkeltonUselessOptimizeCallee_INIB *tSkeltonUselessOptimizeCallee_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
void         tSkeltonUselessOptimizeCallee_eEnt_func(tSkeltonUselessOptimizeCallee_IDX idx);
int32_t      tSkeltonUselessOptimizeCallee_eEnt_func2(tSkeltonUselessOptimizeCallee_IDX idx, int32_t arg);
struct tagST tSkeltonUselessOptimizeCallee_eEnt_func3(tSkeltonUselessOptimizeCallee_IDX idx, struct tagST a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tSkeltonUselessOptimizeCallee_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSkeltonUselessOptimizeCallee_N_CELL        (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSkeltonUselessOptimizeCallee_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSkeltonUselessOptimizeCallee_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tSkeltonUselessOptimizeCallee_ATTR_attribute( p_that )	((p_that)->attribute)

#define tSkeltonUselessOptimizeCallee_GET_attribute(p_that)	((p_that)->attribute)



#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eEnt */
void           tSkeltonUselessOptimizeCallee_eEnt_func_skel( const struct tag_sSig_VDES *epd);
int32_t        tSkeltonUselessOptimizeCallee_eEnt_func2_skel( const struct tag_sSig_VDES *epd, int32_t arg);
struct tagST   tSkeltonUselessOptimizeCallee_eEnt_func3_skel( const struct tag_sSig_VDES *epd, struct tagST a);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tSkeltonUselessOptimizeCallee_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSkeltonUselessOptimizeCallee_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSkeltonUselessOptimizeCallee_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSkeltonUselessOptimizeCallee_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_attribute       tSkeltonUselessOptimizeCallee_ATTR_attribute( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func        tSkeltonUselessOptimizeCallee_eEnt_func
#define eEnt_func2       tSkeltonUselessOptimizeCallee_eEnt_func2
#define eEnt_func3       tSkeltonUselessOptimizeCallee_eEnt_func3

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSkeltonUselessOptimizeCallee_N_CELL; (i)++ ){ \
       //(p_cb) = &tSkeltonUselessOptimizeCallee_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSkeltonUselessOptimizeCallee_TECSGENH */
