/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nAlloc_tAlloc_TECSGEN_H
#define nAlloc_tAlloc_TECSGEN_H

/*
 * celltype          :  tAlloc
 * global name       :  nAlloc_tAlloc
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "nAlloc_sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_nAlloc_tAlloc_CB {
    int  dummy;
} nAlloc_tAlloc_CB;
extern nAlloc_tAlloc_CB  nAlloc_tAlloc_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   nAlloc_tAlloc_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nAlloc_sAlloc */
ER           nAlloc_tAlloc_eAlloc_alloc(nAlloc_tAlloc_IDX idx, int32_t len, void** buf);
ER           nAlloc_tAlloc_eAlloc_dealloc(nAlloc_tAlloc_IDX idx, const void* buf);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nAlloc_tAlloc_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nAlloc_tAlloc_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nAlloc_tAlloc_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nAlloc_tAlloc_GET_CELLCB(idx) ((void *)0)
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
#define VALID_IDX(IDX)  nAlloc_tAlloc_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nAlloc_tAlloc_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nAlloc_tAlloc_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nAlloc_tAlloc_IDX

#define tAlloc_IDX  nAlloc_tAlloc_IDX



/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eAlloc_alloc     nAlloc_tAlloc_eAlloc_alloc
#define eAlloc_dealloc   nAlloc_tAlloc_eAlloc_dealloc

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nAlloc_tAlloc_TECSGENH */
