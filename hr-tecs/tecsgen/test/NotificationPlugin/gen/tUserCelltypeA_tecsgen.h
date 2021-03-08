/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tUserCelltypeA_TECSGEN_H
#define tUserCelltypeA_TECSGEN_H

/*
 * celltype          :  tUserCelltypeA
 * global name       :  tUserCelltypeA
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
#include "siHandlerBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tUserCelltypeA_CB {
    int  dummy;
} tUserCelltypeA_CB;
extern tUserCelltypeA_CB  tUserCelltypeA_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tUserCelltypeA_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* siHandlerBody */
void         tUserCelltypeA_eiHandlerBody1_main(tUserCelltypeA_IDX idx);
/* siHandlerBody */
void         tUserCelltypeA_eiHandlerBody2_main(tUserCelltypeA_IDX idx, int_t subscript);
/* siHandlerBody */
void         tUserCelltypeA_eiHandlerBody3_main(tUserCelltypeA_IDX idx);
/* siHandlerBody */
void         tUserCelltypeA_eiHandlerBody4_main(tUserCelltypeA_IDX idx, int_t subscript);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tUserCelltypeA_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tUserCelltypeA_N_CELL        (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tUserCelltypeA_VALID_IDX(IDX) (1)

/* 受け口配列の大きさを得るマクロ #_NEPA_# */
#define NEP_eiHandlerBody2     (2)
#define NEP_eiHandlerBody4     (2)

/* セルCBを得るマクロ #_GCB_# */
#define tUserCelltypeA_GET_CELLCB(idx) ((void *)0)
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
#define VALID_IDX(IDX)  tUserCelltypeA_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tUserCelltypeA_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tUserCelltypeA_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tUserCelltypeA_IDX




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eiHandlerBody1_main tUserCelltypeA_eiHandlerBody1_main
#define eiHandlerBody2_main tUserCelltypeA_eiHandlerBody2_main
#define eiHandlerBody3_main tUserCelltypeA_eiHandlerBody3_main
#define eiHandlerBody4_main tUserCelltypeA_eiHandlerBody4_main

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tUserCelltypeA_TECSGENH */
