/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCt2_TECSGEN_H
#define tCt2_TECSGEN_H

/*
 * celltype          :  tCt2
 * global name       :  tCt2
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
typedef const struct tag_tCt2_INIB {
    /* call port #_TCP_# */
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  tCt2_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tCt2_CB {
    tCt2_INIB  *_inib;
    /* call port #_TCP_# */
    /* var #_VA_# */ 
    int32_t        v;
}  tCt2_CB;
extern tCt2_CB  *tCt2_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID tCt2_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCt2_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCt_tecsgen.h"
#ifdef  tCt2_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCt2_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCt2_ID_BASE                (3)  /* ID のベース  #_NIDB_# */
#define tCt2_N_CELL                 (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCt2_VALID_IDX(IDX) (tCt2_ID_BASE <= (IDX) && (IDX) < tCt2_ID_BASE+tCt2_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define tCt2_GET_CELLCB(idx) (tCt2_CB_tab[(idx) - tCt2_ID_BASE])

/* 属性アクセスマクロ #_AAM_# */
#define tCt2_ATTR_a( p_that )	((p_that)->_inib->a)

#define tCt2_GET_a(p_that)  	((p_that)->_inib->a)


/* var アクセスマクロ #_VAM_# */
#define tCt2_VAR_v(p_that)  	((p_that)->v)

#define tCt2_GET_v(p_that)  	((p_that)->v)
#define tCt2_SET_v(p_that,val)	((p_that)->v=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tCt2_cCall0_func( p_that, in, out ) \
	  tCt_eEnt_func( \
	   1, (in), (out) )
#define tCt2_cCall1_func( p_that, in, out ) \
	  tCt_eEnt_func( \
	   2, (in), (out) )

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
#define VALID_IDX(IDX)  tCt2_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCt2_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCt2_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCt2_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tCt2_ATTR_a( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_v                tCt2_VAR_v( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall0_func( in, out ) \
          ((void)p_cellcb, tCt2_cCall0_func( p_cellcb, in, out ))
#define cCall1_func( in, out ) \
          ((void)p_cellcb, tCt2_cCall1_func( p_cellcb, in, out ))



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCt2_N_CELL; (i)++ ){ \
       (p_cb) = tCt2_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->v = 31;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = tCt2_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCt2_TECSGENH */
