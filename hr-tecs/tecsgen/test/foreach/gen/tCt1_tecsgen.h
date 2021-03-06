/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCt1_TECSGEN_H
#define tCt1_TECSGEN_H

/*
 * celltype          :  tCt1
 * global name       :  tCt1
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
#include "sSig_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCt1_INIB {
    /* call port #_TCP_# */
    ID cC;
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    int32_t        a;
    int_t          b;
}  tCt1_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tCt1_CB {
    tCt1_INIB  *_inib;
    /* call port #_TCP_# */
    /* var #_VA_# */ 
    int32_t        a0;
    int16_t        b0;
}  tCt1_CB;
extern tCt1_CB  tCt1_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tCt1_CB *tCt1_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCt1_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCt2_tecsgen.h"
#ifdef  tCt1_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCt1_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCt1_ID_BASE                (1)  /* ID のベース  #_NIDB_# */
#define tCt1_N_CELL                 (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCt1_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCt1_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCt1_ATTR_name( p_that )	((p_that)->_inib->name)
#define tCt1_ATTR_a( p_that )	((p_that)->_inib->a)
#define tCt1_ATTR_b( p_that )	((p_that)->_inib->b)

#define tCt1_GET_name(p_that)	((p_that)->_inib->name)
#define tCt1_GET_a(p_that)  	((p_that)->_inib->a)
#define tCt1_GET_b(p_that)  	((p_that)->_inib->b)


/* var アクセスマクロ #_VAM_# */
#define tCt1_VAR_a0(p_that) 	((p_that)->a0)
#define tCt1_VAR_b0(p_that) 	((p_that)->b0)

#define tCt1_GET_a0(p_that) 	((p_that)->a0)
#define tCt1_SET_a0(p_that,val)	((p_that)->a0=(val))
#define tCt1_GET_b0(p_that) 	((p_that)->b0)
#define tCt1_SET_b0(p_that,val)	((p_that)->b0=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tCt1_cC_func( p_that, a ) \
	  tCt2_eE_func( \
	   (p_that)->_inib->cC, (a) )

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
#define VALID_IDX(IDX)  tCt1_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCt1_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCt1_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCt1_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            tCt1_ATTR_name( p_cellcb )
#define ATTR_a               tCt1_ATTR_a( p_cellcb )
#define ATTR_b               tCt1_ATTR_b( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_a0               tCt1_VAR_a0( p_cellcb )
#define VAR_b0               tCt1_VAR_b0( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cC_func( a ) \
          ((void)p_cellcb, tCt1_cC_func( p_cellcb, a ))



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCt1_N_CELL; (i)++ ){ \
       (p_cb) = &tCt1_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tCt1_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCt1_TECSGENH */
