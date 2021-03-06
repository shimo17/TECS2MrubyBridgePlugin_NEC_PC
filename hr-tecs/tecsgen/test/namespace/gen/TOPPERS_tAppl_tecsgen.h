/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef TOPPERS_tAppl_TECSGEN_H
#define TOPPERS_tAppl_TECSGEN_H

/*
 * celltype          :  tAppl
 * global name       :  TOPPERS_tAppl
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
#include "TOPPERS_sSyscall_tecsgen.h"
#include "nAlloc_sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_TOPPERS_tAppl_INIB {
    /* call port #_TCP_# */
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  TOPPERS_tAppl_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_TOPPERS_tAppl_CB {
    TOPPERS_tAppl_INIB  *_inib;
    /* call port #_TCP_# */
    /* var #_VA_# */ 
    int16_t        b;
}  TOPPERS_tAppl_CB;
extern TOPPERS_tAppl_CB  TOPPERS_tAppl_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_TOPPERS_tAppl_CB *TOPPERS_tAppl_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  TOPPERS_tAppl_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "TOPPERS_tKernel_tecsgen.h"
#include "nAlloc_tAlloc_tecsgen.h"
#ifdef  TOPPERS_tAppl_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* TOPPERS_tAppl_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define TOPPERS_tAppl_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define TOPPERS_tAppl_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define TOPPERS_tAppl_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define TOPPERS_tAppl_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define TOPPERS_tAppl_ATTR_a( p_that )	((p_that)->_inib->a)

#define TOPPERS_tAppl_GET_a(p_that)	((p_that)->_inib->a)


/* var アクセスマクロ #_VAM_# */
#define TOPPERS_tAppl_VAR_b(p_that)	((p_that)->b)

#define TOPPERS_tAppl_GET_b(p_that)	((p_that)->b)
#define TOPPERS_tAppl_SET_b(p_that,val)	((p_that)->b=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define TOPPERS_tAppl_ka_cre_sem( p_that ) \
	  TOPPERS_tKernel_ka_cre_sem( \
	   &TOPPERS_tKernel_CB_tab[0] )
#define TOPPERS_tAppl_ka_wai_sem( p_that, id ) \
	  TOPPERS_tKernel_ka_wai_sem( \
	   &TOPPERS_tKernel_CB_tab[0], (id) )
#define TOPPERS_tAppl_ka_rel_sem( p_that, id ) \
	  TOPPERS_tKernel_ka_rel_sem( \
	   &TOPPERS_tKernel_CB_tab[0], (id) )
#define TOPPERS_tAppl_ka_del_sem( p_that, id ) \
	  TOPPERS_tKernel_ka_del_sem( \
	   &TOPPERS_tKernel_CB_tab[0], (id) )
#define TOPPERS_tAppl_ka_sendData( p_that, data, sz ) \
	  TOPPERS_tKernel_ka_sendData( \
	   &TOPPERS_tKernel_CB_tab[0], (data), (sz) )
#define TOPPERS_tAppl_ka_sendData_data_alloc( p_that, len, buf ) \
	  nAlloc_tAlloc_eAlloc_alloc( \
	   (nAlloc_tAlloc_IDX)0, (len), (buf) )
#define TOPPERS_tAppl_ka_sendData_data_dealloc( p_that, buf ) \
	  nAlloc_tAlloc_eAlloc_dealloc( \
	   (nAlloc_tAlloc_IDX)0, (buf) )

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
#define VALID_IDX(IDX)  TOPPERS_tAppl_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  TOPPERS_tAppl_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	TOPPERS_tAppl_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	TOPPERS_tAppl_IDX

#define tAppl_IDX  TOPPERS_tAppl_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               TOPPERS_tAppl_ATTR_a( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_b                TOPPERS_tAppl_VAR_b( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define ka_cre_sem( ) \
          ((void)p_cellcb, TOPPERS_tAppl_ka_cre_sem( p_cellcb ))
#define ka_wai_sem( id ) \
          ((void)p_cellcb, TOPPERS_tAppl_ka_wai_sem( p_cellcb, id ))
#define ka_rel_sem( id ) \
          ((void)p_cellcb, TOPPERS_tAppl_ka_rel_sem( p_cellcb, id ))
#define ka_del_sem( id ) \
          ((void)p_cellcb, TOPPERS_tAppl_ka_del_sem( p_cellcb, id ))
#define ka_sendData( data, sz ) \
          ((void)p_cellcb, TOPPERS_tAppl_ka_sendData( p_cellcb, data, sz ))
#define ka_sendData_data_alloc( len, buf ) \
          ((void)p_cellcb, TOPPERS_tAppl_ka_sendData_data_alloc( p_cellcb, len, buf ))
#define ka_sendData_data_dealloc( buf ) \
          ((void)p_cellcb, TOPPERS_tAppl_ka_sendData_data_dealloc( p_cellcb, buf ))



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < TOPPERS_tAppl_N_CELL; (i)++ ){ \
       (p_cb) = &TOPPERS_tAppl_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->b = TOPPERS_tAppl_ATTR_a(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &TOPPERS_tAppl_INIB_tab[(i)];


/* deallocate マクロ #_DAL_#   */
#define KA_SENDDATA_DATA_DEALLOC(data) \
	  ka_sendData_data_dealloc( (data) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define KA_SENDDATA_DATA_DEALLOC_RESET(data) \
	  if( (data) ){ \
	    ka_sendData_data_dealloc( (data) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* TOPPERS_tAppl_TECSGENH */
