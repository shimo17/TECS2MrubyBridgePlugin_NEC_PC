/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCt_a_CB_a_INIB_TECSGEN_H
#define tCt_a_CB_a_INIB_TECSGEN_H

/*
 * celltype          :  tCt_a_CB_a_INIB
 * global name       :  tCt_a_CB_a_INIB
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

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCt_a_CB_a_INIB_INIB {
    /* attribute(RO) #_ATO_# */ 
    int32_t        size;
    int8_t*        buf;
}  tCt_a_CB_a_INIB_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tCt_a_CB_a_INIB_CB {
    tCt_a_CB_a_INIB_INIB  *_inib;
    /* var #_VA_# */ 
    int32_t        a;
}  tCt_a_CB_a_INIB_CB;
extern tCt_a_CB_a_INIB_CB  *tCt_a_CB_a_INIB_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID tCt_a_CB_a_INIB_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCt_a_CB_a_INIB_ID_BASE       (19)  /* ID のベース  #_NIDB_# */
#define tCt_a_CB_a_INIB_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCt_a_CB_a_INIB_VALID_IDX(IDX) (tCt_a_CB_a_INIB_ID_BASE <= (IDX) && (IDX) < tCt_a_CB_a_INIB_ID_BASE+tCt_a_CB_a_INIB_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define tCt_a_CB_a_INIB_GET_CELLCB(idx) (tCt_a_CB_a_INIB_CB_tab[(idx) - tCt_a_CB_a_INIB_ID_BASE])

/* 属性アクセスマクロ #_AAM_# */
#define tCt_a_CB_a_INIB_ATTR_size( p_that )	((p_that)->_inib->size)

#define tCt_a_CB_a_INIB_GET_size(p_that)	((p_that)->_inib->size)


/* var アクセスマクロ #_VAM_# */
#define tCt_a_CB_a_INIB_VAR_a(p_that)	((p_that)->a)
#define tCt_a_CB_a_INIB_VAR_buf(p_that)	((p_that)->_inib->buf)

#define tCt_a_CB_a_INIB_GET_a(p_that)	((p_that)->a)
#define tCt_a_CB_a_INIB_SET_a(p_that,val)	((p_that)->a=(val))
#define tCt_a_CB_a_INIB_GET_buf(p_that)	((p_that)->buf)
#define tCt_a_CB_a_INIB_SET_buf(p_that,val)	((p_that)->buf=(val))

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
#define VALID_IDX(IDX)  tCt_a_CB_a_INIB_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCt_a_CB_a_INIB_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCt_a_CB_a_INIB_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCt_a_CB_a_INIB_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_size            tCt_a_CB_a_INIB_ATTR_size( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_a                tCt_a_CB_a_INIB_VAR_a( p_cellcb )
#define VAR_buf              tCt_a_CB_a_INIB_VAR_buf( p_cellcb )



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCt_a_CB_a_INIB_N_CELL; (i)++ ){ \
       (p_cb) = tCt_a_CB_a_INIB_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->a = 9;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = tCt_a_CB_a_INIB_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCt_a_CB_a_INIB_TECSGENH */
