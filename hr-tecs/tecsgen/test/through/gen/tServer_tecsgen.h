/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tServer_TECSGEN_H
#define tServer_TECSGEN_H

/*
 * celltype          :  tServer
 * global name       :  tServer
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSignature_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tServer_CB {
    int  dummy;
} tServer_CB;
extern tServer_CB  tServer_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tServer_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSignature */
ER           tServer_eEntry_func1(tServer_IDX idx, int32_t inval);
ER           tServer_eEntry_func2(tServer_IDX idx, int32_t* outval);
ER           tServer_eEntry_func3(tServer_IDX idx, struct tag stval);
ER           tServer_eEntry_func4(tServer_IDX idx, stTag stval, INT inval);
ER           tServer_eEntry_func5(tServer_IDX idx, stTag* stval, INT inval);
ER           tServer_eEntry_func6(tServer_IDX idx, int8_t* buf, int32_t sz);
ER           tServer_eEntry_func7(tServer_IDX idx, int8_t** buf, int32_t* sz);
ER           tServer_eEntry_func10(tServer_IDX idx, const stTag* stval, int32_t a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tServer_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAlloc_tecsgen.h"
#ifdef  tServer_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tServer_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tServer_ID_BASE             (1)  /* ID のベース  #_NIDB_# */
#define tServer_N_CELL              (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tServer_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tServer_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tServer_eEntry_func6_buf_alloc( p_that, sz, ptr ) \
	  tAlloc_eA_alloc( \
	    (sz), (ptr) )
#define tServer_eEntry_func6_buf_dealloc( p_that, ptr ) \
	  tAlloc_eA_dealloc( \
	    (ptr) )
#define tServer_eEntry_func7_buf_alloc( p_that, sz, ptr ) \
	  tAlloc_eA_alloc( \
	    (sz), (ptr) )
#define tServer_eEntry_func7_buf_dealloc( p_that, ptr ) \
	  tAlloc_eA_dealloc( \
	    (ptr) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eEntry */
ER             tServer_eEntry_func1_skel( const struct tag_sSignature_VDES *epd, int32_t inval);
ER             tServer_eEntry_func2_skel( const struct tag_sSignature_VDES *epd, int32_t* outval);
ER             tServer_eEntry_func3_skel( const struct tag_sSignature_VDES *epd, struct tag stval);
ER             tServer_eEntry_func4_skel( const struct tag_sSignature_VDES *epd, stTag stval, INT inval);
ER             tServer_eEntry_func5_skel( const struct tag_sSignature_VDES *epd, stTag* stval, INT inval);
ER             tServer_eEntry_func6_skel( const struct tag_sSignature_VDES *epd, int8_t* buf, int32_t sz);
ER             tServer_eEntry_func7_skel( const struct tag_sSignature_VDES *epd, int8_t** buf, int32_t* sz);
ER             tServer_eEntry_func10_skel( const struct tag_sSignature_VDES *epd, const stTag* stval, int32_t a);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tServer_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tServer_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tServer_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tServer_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define eEntry_func6_buf_alloc( sz, ptr ) \
          ((void)p_cellcb, tServer_eEntry_func6_buf_alloc( p_cellcb, sz, ptr ))
#define eEntry_func6_buf_dealloc( ptr ) \
          ((void)p_cellcb, tServer_eEntry_func6_buf_dealloc( p_cellcb, ptr ))
#define eEntry_func7_buf_alloc( sz, ptr ) \
          ((void)p_cellcb, tServer_eEntry_func7_buf_alloc( p_cellcb, sz, ptr ))
#define eEntry_func7_buf_dealloc( ptr ) \
          ((void)p_cellcb, tServer_eEntry_func7_buf_dealloc( p_cellcb, ptr ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEntry_func1     tServer_eEntry_func1
#define eEntry_func2     tServer_eEntry_func2
#define eEntry_func3     tServer_eEntry_func3
#define eEntry_func4     tServer_eEntry_func4
#define eEntry_func5     tServer_eEntry_func5
#define eEntry_func6     tServer_eEntry_func6
#define eEntry_func7     tServer_eEntry_func7
#define eEntry_func10    tServer_eEntry_func10

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define EENTRY_FUNC6_BUF_DEALLOC(buf) \
	  eEntry_func6_buf_dealloc( (buf) ); 
#define EENTRY_FUNC7_BUF_DEALLOC(buf) \
	  eEntry_func7_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define EENTRY_FUNC6_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eEntry_func6_buf_dealloc( (buf) );  \
	  }
#define EENTRY_FUNC7_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eEntry_func7_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tServer_TECSGENH */
