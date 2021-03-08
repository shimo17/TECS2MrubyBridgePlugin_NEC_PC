/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCelltype2_TECSGEN_H
#define tCelltype2_TECSGEN_H

/*
 * celltype          :  tCelltype2
 * global name       :  tCelltype2
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
typedef const struct tag_tCelltype2_INIB {
    /* call port #_TCP_# */
    struct tag_sAlloc_VDES *const*eEnt2_Send_buf;
    int_t n_eEnt2_Send_buf;
    /* call port #_NEP_# */ 
    int_t n_eEnt2;
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
}  tCelltype2_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCelltype2_CB_tab           tCelltype2_INIB_tab
#define tCelltype2_SINGLE_CELL_CB   tCelltype2_SINGLE_CELL_INIB
#define tCelltype2_CB               tCelltype2_INIB
#define tag_tCelltype2_CB           tag_tCelltype2_INIB

extern tCelltype2_CB  tCelltype2_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCelltype2_INIB *tCelltype2_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
void         tCelltype2_eEnt_func(tCelltype2_IDX idx);
void         tCelltype2_eEnt_Send(tCelltype2_IDX idx, int32_t* buf, int32_t sz);
/* sSig */
void         tCelltype2_eEnt2_func(tCelltype2_IDX idx, int_t subscript);
void         tCelltype2_eEnt2_Send(tCelltype2_IDX idx, int_t subscript, int32_t* buf, int32_t sz);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCelltype2_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAlloc_tecsgen.h"
#ifdef  tCelltype2_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCelltype2_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCelltype2_ID_BASE          (1)  /* ID のベース  #_NIDB_# */
#define tCelltype2_N_CELL           (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCelltype2_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_eEnt2_Send_buf(p_that)  ((p_that)->n_eEnt2_Send_buf)
#define NCP_eEnt2_Send_buf           (N_CP_eEnt2_Send_buf(p_cellcb))
/* 受け口配列の大きさを得るマクロ #_NEPA_# */
#define NEP_eEnt2           ((p_cellcb)->n_eEnt2)

/* セルCBを得るマクロ #_GCB_# */
#define tCelltype2_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCelltype2_ATTR_name( p_that )	((p_that)->name)

#define tCelltype2_GET_name(p_that)	((p_that)->name)



 /* 呼び口関数マクロ #_CPM_# */
#define tCelltype2_eEnt_Send_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tCelltype2_eEnt_Send_buf_dealloc( p_that, p ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tCelltype2_eEnt2_Send_buf_alloc( p_that, subscript, size, p ) \
	  (p_that)->eEnt2_Send_buf[subscript]->VMT->alloc__T( \
	   (p_that)->eEnt2_Send_buf[subscript], (size), (p) )
#define tCelltype2_eEnt2_Send_buf_dealloc( p_that, subscript, p ) \
	  (p_that)->eEnt2_Send_buf[subscript]->VMT->dealloc__T( \
	   (p_that)->eEnt2_Send_buf[subscript], (p) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eEnt */
void           tCelltype2_eEnt_func_skel( const struct tag_sSig_VDES *epd);
void           tCelltype2_eEnt_Send_skel( const struct tag_sSig_VDES *epd, int32_t* buf, int32_t sz);
/* eEnt2 */
void           tCelltype2_eEnt2_func_skel( const struct tag_sSig_VDES *epd);
void           tCelltype2_eEnt2_Send_skel( const struct tag_sSig_VDES *epd, int32_t* buf, int32_t sz);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCelltype2_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCelltype2_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCelltype2_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCelltype2_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            tCelltype2_ATTR_name( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define eEnt_Send_buf_alloc( size, p ) \
          ((void)p_cellcb, tCelltype2_eEnt_Send_buf_alloc( p_cellcb, size, p ))
#define eEnt_Send_buf_dealloc( p ) \
          ((void)p_cellcb, tCelltype2_eEnt_Send_buf_dealloc( p_cellcb, p ))
#define eEnt2_Send_buf_alloc( subscript, size, p ) \
          tCelltype2_eEnt2_Send_buf_alloc( p_cellcb, subscript, size, p )
#define eEnt2_Send_buf_dealloc( subscript, p ) \
          tCelltype2_eEnt2_Send_buf_dealloc( p_cellcb, subscript, p )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func        tCelltype2_eEnt_func
#define eEnt_Send        tCelltype2_eEnt_Send
#define eEnt2_func       tCelltype2_eEnt2_func
#define eEnt2_Send       tCelltype2_eEnt2_Send

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCelltype2_N_CELL; (i)++ ){ \
       //(p_cb) = &tCelltype2_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define EENT_SEND_BUF_DEALLOC(buf) \
	  eEnt_Send_buf_dealloc( (buf) ); 
#define EENT2_SEND_BUF_DEALLOC(buf) \
	  eEnt2_Send_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define EENT_SEND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eEnt_Send_buf_dealloc( (buf) );  \
	  }
#define EENT2_SEND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eEnt2_Send_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCelltype2_TECSGENH */
