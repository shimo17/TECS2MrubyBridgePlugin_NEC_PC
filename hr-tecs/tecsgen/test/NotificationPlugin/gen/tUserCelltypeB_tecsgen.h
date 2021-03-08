/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tUserCelltypeB_TECSGEN_H
#define tUserCelltypeB_TECSGEN_H

/*
 * celltype          :  tUserCelltypeB
 * global name       :  tUserCelltypeB
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  true
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "siHandlerBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tUserCelltypeB_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int            dummyToMakeSureCBCreated;
}  tUserCelltypeB_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tUserCelltypeB_CB {
    tUserCelltypeB_INIB  *_inib;
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int            dummyToMakeSureINITBCreated;
}  tUserCelltypeB_CB;
extern tUserCelltypeB_CB  tUserCelltypeB_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tUserCelltypeB_CB *tUserCelltypeB_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* siHandlerBody */
void         tUserCelltypeB_eiHandlerBody1_main(tUserCelltypeB_IDX idx);
/* siHandlerBody */
void         tUserCelltypeB_eiHandlerBody2_main(tUserCelltypeB_IDX idx, int_t subscript);
/* siHandlerBody */
void         tUserCelltypeB_eiHandlerBody3_main(tUserCelltypeB_IDX idx);
/* siHandlerBody */
void         tUserCelltypeB_eiHandlerBody4_main(tUserCelltypeB_IDX idx, int_t subscript);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tUserCelltypeB_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tUserCelltypeB_N_CELL        (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tUserCelltypeB_VALID_IDX(IDX) (1)

/* 受け口配列の大きさを得るマクロ #_NEPA_# */
#define NEP_eiHandlerBody2     (2)
#define NEP_eiHandlerBody4     (2)

/* セルCBを得るマクロ #_GCB_# */
#define tUserCelltypeB_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tUserCelltypeB_ATTR_dummyToMakeSureCBCreated( p_that )	((p_that)->_inib->dummyToMakeSureCBCreated)

#define tUserCelltypeB_GET_dummyToMakeSureCBCreated(p_that)	((p_that)->_inib->dummyToMakeSureCBCreated)


/* var アクセスマクロ #_VAM_# */
#define tUserCelltypeB_VAR_dummyToMakeSureINITBCreated(p_that)	((p_that)->dummyToMakeSureINITBCreated)

#define tUserCelltypeB_GET_dummyToMakeSureINITBCreated(p_that)	((p_that)->dummyToMakeSureINITBCreated)
#define tUserCelltypeB_SET_dummyToMakeSureINITBCreated(p_that,val)	((p_that)->dummyToMakeSureINITBCreated=(val))

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
#define VALID_IDX(IDX)  tUserCelltypeB_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tUserCelltypeB_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tUserCelltypeB_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tUserCelltypeB_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_dummyToMakeSureCBCreated tUserCelltypeB_ATTR_dummyToMakeSureCBCreated( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_dummyToMakeSureINITBCreated tUserCelltypeB_VAR_dummyToMakeSureINITBCreated( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eiHandlerBody1_main tUserCelltypeB_eiHandlerBody1_main
#define eiHandlerBody2_main tUserCelltypeB_eiHandlerBody2_main
#define eiHandlerBody3_main tUserCelltypeB_eiHandlerBody3_main
#define eiHandlerBody4_main tUserCelltypeB_eiHandlerBody4_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tUserCelltypeB_N_CELL; (i)++ ){ \
       (p_cb) = &tUserCelltypeB_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->dummyToMakeSureINITBCreated = 1;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tUserCelltypeB_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tUserCelltypeB_TECSGENH */
