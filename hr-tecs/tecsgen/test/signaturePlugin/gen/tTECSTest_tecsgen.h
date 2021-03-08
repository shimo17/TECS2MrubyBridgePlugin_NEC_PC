/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTECSTest_TECSGEN_H
#define tTECSTest_TECSGEN_H

/*
 * celltype          :  tTECSTest
 * global name       :  tTECSTest
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
#include "sTaskBody_tecsgen.h"
#include "sTest_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tTECSTest_CB {
    int  dummy;
} tTECSTest_CB;
extern tTECSTest_CB  tTECSTest_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tTECSTest_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tTECSTest_eTaskBody_main(tTECSTest_IDX idx);
/* sTest */
void         tTECSTest_eTest_test(tTECSTest_IDX idx, int_t input);
int32_t      tTECSTest_eTest_test2(tTECSTest_IDX idx, int_t input, int32_t* ret);
int32_t      tTECSTest_eTest_test3(tTECSTest_IDX idx, const char_t* input, int32_t* ret);
int32_t      tTECSTest_eTest_test4(tTECSTest_IDX idx, const char_t* input, int32_t len);
int32_t      tTECSTest_eTest_test5(tTECSTest_IDX idx, const ST* input);
int32_t      tTECSTest_eTest_test6(tTECSTest_IDX idx, SYSTIM* systim);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tTECSTest_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tTECSTest_N_CELL            (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTECSTest_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTECSTest_GET_CELLCB(idx) ((void *)0)
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
#define VALID_IDX(IDX)  tTECSTest_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTECSTest_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTECSTest_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTECSTest_IDX




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTaskBody_main   tTECSTest_eTaskBody_main
#define eTest_test       tTECSTest_eTest_test
#define eTest_test2      tTECSTest_eTest_test2
#define eTest_test3      tTECSTest_eTest_test3
#define eTest_test4      tTECSTest_eTest_test4
#define eTest_test5      tTECSTest_eTest_test5
#define eTest_test6      tTECSTest_eTest_test6

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTECSTest_TECSGENH */
