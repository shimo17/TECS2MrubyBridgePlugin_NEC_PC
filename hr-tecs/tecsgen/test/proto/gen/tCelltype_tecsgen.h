/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCelltype_TECSGEN_H
#define tCelltype_TECSGEN_H

/*
 * celltype          :  tCelltype
 * global name       :  tCelltype
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
#include "sTaskBody_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCelltype_INIB {
    /* call port #_TCP_# */
    struct tag_sSig_VDES const*cCall;
    struct tag_sSig_VDES *const*cCall2;
    int_t n_cCall2;
    struct tag_sAlloc_VDES *const*cCall2_Send_buf;
    int_t n_cCall2_Send_buf;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        attr1;
    int32_t        attr2;
    int32_t        attr3;
    int32_t        attr4;
}  tCelltype_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tCelltype_CB {
    tCelltype_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int32_t        var1;
    int32_t        var2;
    int32_t        var3;
    int32_t        var4;
}  tCelltype_CB;
extern tCelltype_CB  tCelltype_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tCelltype_CB *tCelltype_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tCelltype_eBody_main(tCelltype_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCelltype_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAlloc_tecsgen.h"
#ifdef  tCelltype_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCelltype_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCelltype_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tCelltype_N_CELL            (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCelltype_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cCall2(p_that)  ((p_that)->_inib->n_cCall2)
#define NCP_cCall2           (N_CP_cCall2(p_cellcb))
#define N_CP_cCall2_Send_buf(p_that)  ((p_that)->_inib->n_cCall2_Send_buf)
#define NCP_cCall2_Send_buf           (N_CP_cCall2_Send_buf(p_cellcb))

/* セルCBを得るマクロ #_GCB_# */
#define tCelltype_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCelltype_ATTR_attr1( p_that )	((p_that)->_inib->attr1)
#define tCelltype_ATTR_attr2( p_that )	((p_that)->_inib->attr2)
#define tCelltype_ATTR_attr3( p_that )	((p_that)->_inib->attr3)
#define tCelltype_ATTR_attr4( p_that )	((p_that)->_inib->attr4)

#define tCelltype_GET_attr1(p_that)	((p_that)->_inib->attr1)
#define tCelltype_GET_attr2(p_that)	((p_that)->_inib->attr2)
#define tCelltype_GET_attr3(p_that)	((p_that)->_inib->attr3)
#define tCelltype_GET_attr4(p_that)	((p_that)->_inib->attr4)


/* var アクセスマクロ #_VAM_# */
#define tCelltype_VAR_var1(p_that)	((p_that)->var1)
#define tCelltype_VAR_var2(p_that)	((p_that)->var2)
#define tCelltype_VAR_var3(p_that)	((p_that)->var3)
#define tCelltype_VAR_var4(p_that)	((p_that)->var4)

#define tCelltype_GET_var1(p_that)	((p_that)->var1)
#define tCelltype_SET_var1(p_that,val)	((p_that)->var1=(val))
#define tCelltype_GET_var2(p_that)	((p_that)->var2)
#define tCelltype_SET_var2(p_that,val)	((p_that)->var2=(val))
#define tCelltype_GET_var3(p_that)	((p_that)->var3)
#define tCelltype_SET_var3(p_that,val)	((p_that)->var3=(val))
#define tCelltype_GET_var4(p_that)	((p_that)->var4)
#define tCelltype_SET_var4(p_that,val)	((p_that)->var4=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tCelltype_cCall_func( p_that ) \
	  (p_that)->_inib->cCall->VMT->func__T( \
	   (p_that)->_inib->cCall )
#define tCelltype_cCall_Send( p_that, buf, sz ) \
	  (p_that)->_inib->cCall->VMT->Send__T( \
	   (p_that)->_inib->cCall, (buf), (sz) )
#define tCelltype_cCall2_func( p_that, subscript ) \
	  (p_that)->_inib->cCall2[subscript]->VMT->func__T( \
	   (p_that)->_inib->cCall2[subscript] )
#define tCelltype_cCall2_Send( p_that, subscript, buf, sz ) \
	  (p_that)->_inib->cCall2[subscript]->VMT->Send__T( \
	   (p_that)->_inib->cCall2[subscript], (buf), (sz) )
#define tCelltype_cCall_Send_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (p) )
#define tCelltype_cCall_Send_buf_dealloc( p_that, p ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (p) )
#define tCelltype_cCall2_Send_buf_alloc( p_that, subscript, size, p ) \
	  (p_that)->_inib->cCall2_Send_buf[subscript]->VMT->alloc__T( \
	   (p_that)->_inib->cCall2_Send_buf[subscript], (size), (p) )
#define tCelltype_cCall2_Send_buf_dealloc( p_that, subscript, p ) \
	  (p_that)->_inib->cCall2_Send_buf[subscript]->VMT->dealloc__T( \
	   (p_that)->_inib->cCall2_Send_buf[subscript], (p) )

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
#define VALID_IDX(IDX)  tCelltype_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCelltype_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCelltype_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCelltype_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_attr1           tCelltype_ATTR_attr1( p_cellcb )
#define ATTR_attr2           tCelltype_ATTR_attr2( p_cellcb )
#define ATTR_attr3           tCelltype_ATTR_attr3( p_cellcb )
#define ATTR_attr4           tCelltype_ATTR_attr4( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_var1             tCelltype_VAR_var1( p_cellcb )
#define VAR_var2             tCelltype_VAR_var2( p_cellcb )
#define VAR_var3             tCelltype_VAR_var3( p_cellcb )
#define VAR_var4             tCelltype_VAR_var4( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func( ) \
          tCelltype_cCall_func( p_cellcb )
#define cCall_Send( buf, sz ) \
          tCelltype_cCall_Send( p_cellcb, buf, sz )
#define cCall2_func( subscript ) \
          tCelltype_cCall2_func( p_cellcb, subscript )
#define cCall2_Send( subscript, buf, sz ) \
          tCelltype_cCall2_Send( p_cellcb, subscript, buf, sz )
#define cCall_Send_buf_alloc( size, p ) \
          ((void)p_cellcb, tCelltype_cCall_Send_buf_alloc( p_cellcb, size, p ))
#define cCall_Send_buf_dealloc( p ) \
          ((void)p_cellcb, tCelltype_cCall_Send_buf_dealloc( p_cellcb, p ))
#define cCall2_Send_buf_alloc( subscript, size, p ) \
          tCelltype_cCall2_Send_buf_alloc( p_cellcb, subscript, size, p )
#define cCall2_Send_buf_dealloc( subscript, p ) \
          tCelltype_cCall2_Send_buf_dealloc( p_cellcb, subscript, p )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tCelltype_eBody_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCelltype_N_CELL; (i)++ ){ \
       (p_cb) = &tCelltype_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->var2 = tCelltype_ATTR_attr2(p_that);\
	(p_that)->var3 = tCelltype_ATTR_attr3(p_that);\
	(p_that)->var4 = tCelltype_ATTR_attr4(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tCelltype_INIB_tab[(i)];


/* deallocate マクロ #_DAL_#   */
#define CCALL_SEND_BUF_DEALLOC(buf) \
	  cCall_Send_buf_dealloc( (buf) ); 
#define CCALL2_SEND_BUF_DEALLOC(buf) \
	  cCall2_Send_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define CCALL_SEND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall_Send_buf_dealloc( (buf) );  \
	  }
#define CCALL2_SEND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cCall2_Send_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCelltype_TECSGENH */
