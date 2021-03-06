/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCtR1_TECSGEN_H
#define tCtR1_TECSGEN_H

/*
 * celltype          :  tCtR1
 * global name       :  tCtR1
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
#include "sSig3_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tCtR1_CB {
    int  dummy;
} tCtR1_CB;
extern tCtR1_CB  tCtR1_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tCtR1_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig3 */
ER           tCtR1_eEnt_func1(tCtR1_IDX idx, int32_t arg1, int32_t* res);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCtR1_ID_BASE               (1)  /* ID のベース  #_NIDB_# */
#define tCtR1_N_CELL                (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCtR1_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCtR1_GET_CELLCB(idx) ((void *)0)
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eEnt */
ER             tCtR1_eEnt_func1_skel( const struct tag_sSig3_VDES *epd, int32_t arg1, int32_t* res);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCtR1_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCtR1_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCtR1_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCtR1_IDX




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func1       tCtR1_eEnt_func1

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCtR1_TECSGENH */
