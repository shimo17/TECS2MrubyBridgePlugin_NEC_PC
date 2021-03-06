/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tIdx_is_id_TECSGEN_H
#define tIdx_is_id_TECSGEN_H

/*
 * celltype          :  tIdx_is_id
 * global name       :  tIdx_is_id
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
typedef const struct tag_tIdx_is_id_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        a_init;
    int32_t        b_init;
    int32_t        c_init;
}  tIdx_is_id_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tIdx_is_id_CB {
    tIdx_is_id_INIB  *_inib;
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int32_t        a;
    int32_t        b;
    int32_t        c;
}  tIdx_is_id_CB;
extern tIdx_is_id_CB  *tIdx_is_id_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID tIdx_is_id_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
int32_t      tIdx_is_id_eEnt_func(tIdx_is_id_IDX idx, int32_t in, int32_t* out);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tIdx_is_id_ID_BASE          (5)  /* ID のベース  #_NIDB_# */
#define tIdx_is_id_N_CELL           (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tIdx_is_id_VALID_IDX(IDX) (tIdx_is_id_ID_BASE <= (IDX) && (IDX) < tIdx_is_id_ID_BASE+tIdx_is_id_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define tIdx_is_id_GET_CELLCB(idx) (tIdx_is_id_CB_tab[(idx) - tIdx_is_id_ID_BASE])

/* 属性アクセスマクロ #_AAM_# */
#define tIdx_is_id_ATTR_a_init( p_that )	((p_that)->_inib->a_init)
#define tIdx_is_id_ATTR_b_init( p_that )	((p_that)->_inib->b_init)
#define tIdx_is_id_ATTR_c_init( p_that )	((p_that)->_inib->c_init)

#define tIdx_is_id_GET_a_init(p_that)	((p_that)->_inib->a_init)
#define tIdx_is_id_GET_b_init(p_that)	((p_that)->_inib->b_init)
#define tIdx_is_id_GET_c_init(p_that)	((p_that)->_inib->c_init)


/* var アクセスマクロ #_VAM_# */
#define tIdx_is_id_VAR_a(p_that)	((p_that)->a)
#define tIdx_is_id_VAR_b(p_that)	((p_that)->b)
#define tIdx_is_id_VAR_c(p_that)	((p_that)->c)

#define tIdx_is_id_GET_a(p_that)	((p_that)->a)
#define tIdx_is_id_SET_a(p_that,val)	((p_that)->a=(val))
#define tIdx_is_id_GET_b(p_that)	((p_that)->b)
#define tIdx_is_id_SET_b(p_that,val)	((p_that)->b=(val))
#define tIdx_is_id_GET_c(p_that)	((p_that)->c)
#define tIdx_is_id_SET_c(p_that,val)	((p_that)->c=(val))

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
#define VALID_IDX(IDX)  tIdx_is_id_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tIdx_is_id_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tIdx_is_id_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tIdx_is_id_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a_init          tIdx_is_id_ATTR_a_init( p_cellcb )
#define ATTR_b_init          tIdx_is_id_ATTR_b_init( p_cellcb )
#define ATTR_c_init          tIdx_is_id_ATTR_c_init( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_a                tIdx_is_id_VAR_a( p_cellcb )
#define VAR_b                tIdx_is_id_VAR_b( p_cellcb )
#define VAR_c                tIdx_is_id_VAR_c( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func        tIdx_is_id_eEnt_func

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tIdx_is_id_N_CELL; (i)++ ){ \
       (p_cb) = tIdx_is_id_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->a = tIdx_is_id_ATTR_a_init(p_that);\
	(p_that)->b = tIdx_is_id_ATTR_b_init(p_that)+1;\
	(p_that)->c = tIdx_is_id_ATTR_c_init(p_that)*2;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = tIdx_is_id_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tIdx_is_id_TECSGENH */
