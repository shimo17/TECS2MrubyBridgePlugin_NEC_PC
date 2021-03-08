/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tC_exp_TECSGEN_H
#define tC_exp_TECSGEN_H

/*
 * celltype          :  tC_exp
 * global name       :  tC_exp
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

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tC_exp_INIB {
    /* attribute(RO) #_ATO_# */ 
    int32_t        id;
    char_t*        cbp;
}  tC_exp_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tC_exp_CB {
    tC_exp_INIB  *_inib;
    /* var #_VA_# */ 
    int32_t        v;
}  tC_exp_CB;
extern tC_exp_CB  tC_exp_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tC_exp_CB *tC_exp_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tC_exp_ID_BASE              (1)  /* ID のベース  #_NIDB_# */
#define tC_exp_N_CELL               (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tC_exp_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tC_exp_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tC_exp_ATTR_id( p_that )	((p_that)->_inib->id)
#define tC_exp_ATTR_cbp( p_that )	((p_that)->_inib->cbp)

#define tC_exp_GET_id(p_that)	((p_that)->_inib->id)
#define tC_exp_GET_cbp(p_that)	((p_that)->_inib->cbp)


/* var アクセスマクロ #_VAM_# */
#define tC_exp_VAR_v(p_that)	((p_that)->v)

#define tC_exp_GET_v(p_that)	((p_that)->v)
#define tC_exp_SET_v(p_that,val)	((p_that)->v=(val))

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tC_exp_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tC_exp_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tC_exp_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tC_exp_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_id              tC_exp_ATTR_id( p_cellcb )
#define ATTR_cbp             tC_exp_ATTR_cbp( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_v                tC_exp_VAR_v( p_cellcb )



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tC_exp_N_CELL; (i)++ ){ \
       (p_cb) = &tC_exp_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->v = false;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tC_exp_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tC_exp_TECSGENH */
