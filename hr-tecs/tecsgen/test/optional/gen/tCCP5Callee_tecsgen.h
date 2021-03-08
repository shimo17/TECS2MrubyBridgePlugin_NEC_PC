/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCCP5Callee_TECSGEN_H
#define tCCP5Callee_TECSGEN_H

/*
 * celltype          :  tCCP5Callee
 * global name       :  tCCP5Callee
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
#include "sSig_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tCCP5Callee_CB {
    int  dummy;
} tCCP5Callee_CB;
extern tCCP5Callee_CB  tCCP5Callee_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tCCP5Callee_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
void         tCCP5Callee_eEnt_func(tCCP5Callee_IDX idx);
int32_t      tCCP5Callee_eEnt_func2(tCCP5Callee_IDX idx, int32_t arg);
struct tagST tCCP5Callee_eEnt_func3(tCCP5Callee_IDX idx, struct tagST a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCCP5Callee_ID_BASE         (1)  /* ID のベース  #_NIDB_# */
#define tCCP5Callee_N_CELL          (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCCP5Callee_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCCP5Callee_GET_CELLCB(idx) ((void *)0)
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eEnt */
void           tCCP5Callee_eEnt_func_skel( const struct tag_sSig_VDES *epd);
int32_t        tCCP5Callee_eEnt_func2_skel( const struct tag_sSig_VDES *epd, int32_t arg);
struct tagST   tCCP5Callee_eEnt_func3_skel( const struct tag_sSig_VDES *epd, struct tagST a);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCCP5Callee_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCCP5Callee_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCCP5Callee_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCCP5Callee_IDX




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func        tCCP5Callee_eEnt_func
#define eEnt_func2       tCCP5Callee_eEnt_func2
#define eEnt_func3       tCCP5Callee_eEnt_func3

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCCP5Callee_TECSGENH */
