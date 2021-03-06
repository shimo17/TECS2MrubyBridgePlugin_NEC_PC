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
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSig_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCt1_INIB {
    /* call port #_TCP_# */
    const struct tag_tAlloc_INIB * eEnt_func_a;
    const struct tag_tAlloc_INIB * eEnt_func2_buf;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        num;
}  tCt1_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCt1_CB_tab           tCt1_INIB_tab
#define tCt1_SINGLE_CELL_CB   tCt1_SINGLE_CELL_INIB
#define tCt1_CB               tCt1_INIB
#define tag_tCt1_CB           tag_tCt1_INIB

extern tCt1_CB  tCt1_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCt1_INIB *tCt1_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
ER           tCt1_eEnt_func(tCt1_IDX idx, int32_t* a);
ER           tCt1_eEnt_func2(tCt1_IDX idx, int8_t* buf, int32_t sz);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCt1_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAlloc_tecsgen.h"
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
#define tCt1_ATTR_num( p_that )	((p_that)->num)

#define tCt1_GET_num(p_that)	((p_that)->num)



 /* 呼び口関数マクロ #_CPM_# */
#define tCt1_eEnt_func_a_alloc( p_that, sz, p ) \
	  tAlloc_eA_alloc( \
	   (p_that)->eEnt_func_a, (sz), (p) )
#define tCt1_eEnt_func_a_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   (p_that)->eEnt_func_a, (p) )
#define tCt1_eEnt_func2_buf_alloc( p_that, sz, p ) \
	  tAlloc_eA_alloc( \
	   (p_that)->eEnt_func2_buf, (sz), (p) )
#define tCt1_eEnt_func2_buf_dealloc( p_that, p ) \
	  tAlloc_eA_dealloc( \
	   (p_that)->eEnt_func2_buf, (p) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eEnt */
ER             tCt1_eEnt_func_skel( const struct tag_sSig_VDES *epd, int32_t* a);
ER             tCt1_eEnt_func2_skel( const struct tag_sSig_VDES *epd, int8_t* buf, int32_t sz);

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
#define ATTR_num             tCt1_ATTR_num( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define eEnt_func_a_alloc( sz, p ) \
          ((void)p_cellcb, tCt1_eEnt_func_a_alloc( p_cellcb, sz, p ))
#define eEnt_func_a_dealloc( p ) \
          ((void)p_cellcb, tCt1_eEnt_func_a_dealloc( p_cellcb, p ))
#define eEnt_func2_buf_alloc( sz, p ) \
          ((void)p_cellcb, tCt1_eEnt_func2_buf_alloc( p_cellcb, sz, p ))
#define eEnt_func2_buf_dealloc( p ) \
          ((void)p_cellcb, tCt1_eEnt_func2_buf_dealloc( p_cellcb, p ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func        tCt1_eEnt_func
#define eEnt_func2       tCt1_eEnt_func2

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCt1_N_CELL; (i)++ ){ \
       //(p_cb) = &tCt1_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define EENT_FUNC_A_DEALLOC(a) \
	  eEnt_func_a_dealloc( (a) ); 
#define EENT_FUNC2_BUF_DEALLOC(buf) \
	  eEnt_func2_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define EENT_FUNC_A_DEALLOC_RESET(a) \
	  if( (a) ){ \
	    eEnt_func_a_dealloc( (a) );  \
	  }
#define EENT_FUNC2_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eEnt_func2_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCt1_TECSGENH */
