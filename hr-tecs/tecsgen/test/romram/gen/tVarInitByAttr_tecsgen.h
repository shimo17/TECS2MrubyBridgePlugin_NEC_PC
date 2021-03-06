/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tVarInitByAttr_TECSGEN_H
#define tVarInitByAttr_TECSGEN_H

/*
 * celltype          :  tVarInitByAttr
 * global name       :  tVarInitByAttr
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
typedef const struct tag_tVarInitByAttr_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        a0;
    int32_t        a1;
}  tVarInitByAttr_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tVarInitByAttr_CB {
    tVarInitByAttr_INIB  *_inib;
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int32_t        v0;
    int32_t        v1;
}  tVarInitByAttr_CB;
extern tVarInitByAttr_CB  *tVarInitByAttr_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID tVarInitByAttr_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
int32_t      tVarInitByAttr_eEnt_func(tVarInitByAttr_IDX idx, int32_t in, int32_t* out);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tVarInitByAttr_ID_BASE        (9)  /* ID のベース  #_NIDB_# */
#define tVarInitByAttr_N_CELL        (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tVarInitByAttr_VALID_IDX(IDX) (tVarInitByAttr_ID_BASE <= (IDX) && (IDX) < tVarInitByAttr_ID_BASE+tVarInitByAttr_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define tVarInitByAttr_GET_CELLCB(idx) (tVarInitByAttr_CB_tab[(idx) - tVarInitByAttr_ID_BASE])

/* 属性アクセスマクロ #_AAM_# */
#define tVarInitByAttr_ATTR_a0( p_that )	((p_that)->_inib->a0)
#define tVarInitByAttr_ATTR_a1( p_that )	((p_that)->_inib->a1)

#define tVarInitByAttr_GET_a0(p_that)	((p_that)->_inib->a0)
#define tVarInitByAttr_GET_a1(p_that)	((p_that)->_inib->a1)


/* var アクセスマクロ #_VAM_# */
#define tVarInitByAttr_VAR_v0(p_that)	((p_that)->v0)
#define tVarInitByAttr_VAR_v1(p_that)	((p_that)->v1)

#define tVarInitByAttr_GET_v0(p_that)	((p_that)->v0)
#define tVarInitByAttr_SET_v0(p_that,val)	((p_that)->v0=(val))
#define tVarInitByAttr_GET_v1(p_that)	((p_that)->v1)
#define tVarInitByAttr_SET_v1(p_that,val)	((p_that)->v1=(val))

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eEnt */
int32_t        tVarInitByAttr_eEnt_func_skel( const struct tag_sSig_VDES *epd, int32_t in, int32_t* out);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tVarInitByAttr_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tVarInitByAttr_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tVarInitByAttr_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tVarInitByAttr_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a0              tVarInitByAttr_ATTR_a0( p_cellcb )
#define ATTR_a1              tVarInitByAttr_ATTR_a1( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_v0               tVarInitByAttr_VAR_v0( p_cellcb )
#define VAR_v1               tVarInitByAttr_VAR_v1( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func        tVarInitByAttr_eEnt_func

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tVarInitByAttr_N_CELL; (i)++ ){ \
       (p_cb) = tVarInitByAttr_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->v0 = tVarInitByAttr_ATTR_a0(p_that);\
	(p_that)->v1 = tVarInitByAttr_ATTR_a1(p_that)+const_int;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = tVarInitByAttr_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tVarInitByAttr_TECSGENH */
