/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tOSEKAppl_TECSGEN_H
#define tOSEKAppl_TECSGEN_H

/*
 * celltype          :  tOSEKAppl
 * global name       :  tOSEKAppl
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
#include "OSEK_sSyscall_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tOSEKAppl_INIB {
    /* call port #_TCP_# */
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  tOSEKAppl_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tOSEKAppl_CB {
    tOSEKAppl_INIB  *_inib;
    /* call port #_TCP_# */
    /* var #_VA_# */ 
    int16_t        b;
}  tOSEKAppl_CB;
extern tOSEKAppl_CB  tOSEKAppl_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tOSEKAppl_CB *tOSEKAppl_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tOSEKAppl_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "OSEK_tKernel_tecsgen.h"
#ifdef  tOSEKAppl_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tOSEKAppl_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tOSEKAppl_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tOSEKAppl_N_CELL            (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tOSEKAppl_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tOSEKAppl_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tOSEKAppl_ATTR_a( p_that )	((p_that)->_inib->a)

#define tOSEKAppl_GET_a(p_that)	((p_that)->_inib->a)


/* var アクセスマクロ #_VAM_# */
#define tOSEKAppl_VAR_b(p_that)	((p_that)->b)

#define tOSEKAppl_GET_b(p_that)	((p_that)->b)
#define tOSEKAppl_SET_b(p_that,val)	((p_that)->b=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tOSEKAppl_ka_cre_sem( p_that ) \
	  OSEK_tKernel_ka_cre_sem( \
	   &OSEK_tKernel_CB_tab[0] )
#define tOSEKAppl_ka_wai_sem( p_that, id ) \
	  OSEK_tKernel_ka_wai_sem( \
	   &OSEK_tKernel_CB_tab[0], (id) )
#define tOSEKAppl_ka_rel_sem( p_that, id ) \
	  OSEK_tKernel_ka_rel_sem( \
	   &OSEK_tKernel_CB_tab[0], (id) )
#define tOSEKAppl_ka_del_sem( p_that, id ) \
	  OSEK_tKernel_ka_del_sem( \
	   &OSEK_tKernel_CB_tab[0], (id) )

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
#define VALID_IDX(IDX)  tOSEKAppl_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tOSEKAppl_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tOSEKAppl_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tOSEKAppl_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tOSEKAppl_ATTR_a( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_b                tOSEKAppl_VAR_b( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define ka_cre_sem( ) \
          ((void)p_cellcb, tOSEKAppl_ka_cre_sem( p_cellcb ))
#define ka_wai_sem( id ) \
          ((void)p_cellcb, tOSEKAppl_ka_wai_sem( p_cellcb, id ))
#define ka_rel_sem( id ) \
          ((void)p_cellcb, tOSEKAppl_ka_rel_sem( p_cellcb, id ))
#define ka_del_sem( id ) \
          ((void)p_cellcb, tOSEKAppl_ka_del_sem( p_cellcb, id ))



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tOSEKAppl_N_CELL; (i)++ ){ \
       (p_cb) = &tOSEKAppl_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->b = OSEK::constVal;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tOSEKAppl_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tOSEKAppl_TECSGENH */
