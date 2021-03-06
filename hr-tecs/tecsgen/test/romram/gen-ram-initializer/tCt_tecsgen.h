/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCt_TECSGEN_H
#define tCt_TECSGEN_H

/*
 * celltype          :  tCt
 * global name       :  tCt
 * idx_is_id(actual) :  yes(yes)
 * singleton         :  no
 * has_CB            :  true
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
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
typedef const struct tag_tCt_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  tCt_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tCt_CB {
    tCt_INIB  *_inib;
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int32_t        v;
}  tCt_CB;
extern tCt_CB  *tCt_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID tCt_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
int32_t      tCt_eEnt_func(tCt_IDX idx, int32_t in, int32_t* out);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCt_ID_BASE                 (1)  /* ID のベース  #_NIDB_# */
#define tCt_N_CELL                  (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCt_VALID_IDX(IDX) (tCt_ID_BASE <= (IDX) && (IDX) < tCt_ID_BASE+tCt_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define tCt_GET_CELLCB(idx) (tCt_CB_tab[(idx) - tCt_ID_BASE])

/* 属性アクセスマクロ #_AAM_# */
#define tCt_ATTR_a( p_that )	((p_that)->_inib->a)

#define tCt_GET_a(p_that)   	((p_that)->_inib->a)


/* var アクセスマクロ #_VAM_# */
#define tCt_VAR_v(p_that)   	((p_that)->v)

#define tCt_GET_v(p_that)   	((p_that)->v)
#define tCt_SET_v(p_that,val)	((p_that)->v=(val))

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eEnt */
int32_t        tCt_eEnt_func_skel( const struct tag_sSig_VDES *epd, int32_t in, int32_t* out);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCt_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCt_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCt_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCt_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tCt_ATTR_a( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_v                tCt_VAR_v( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func        tCt_eEnt_func

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCt_N_CELL; (i)++ ){ \
       (p_cb) = tCt_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->v = 31;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = tCt_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCt_TECSGENH */
