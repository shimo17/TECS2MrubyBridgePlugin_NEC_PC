/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCellCheckParam_TECSGEN_H
#define tCellCheckParam_TECSGEN_H

/*
 * celltype          :  tCellCheckParam
 * global name       :  tCellCheckParam
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
#include "sParamsIN_tecsgen.h"
#include "sParamsSEND_tecsgen.h"
#include "sParamsOUT_tecsgen.h"
#include "sParamsRECEIVE_tecsgen.h"
#include "sAllocator_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tCellCheckParam_CB {
    int  dummy;
} tCellCheckParam_CB;
extern tCellCheckParam_CB  tCellCheckParam_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tCellCheckParam_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sParamsIN */
void         tCellCheckParam_eParamsIN_func10(tCellCheckParam_IDX idx, const int16_t* wstr);
void         tCellCheckParam_eParamsIN_func21(tCellCheckParam_IDX idx, const int32_t* array);
void         tCellCheckParam_eParamsIN_func22(tCellCheckParam_IDX idx, const int32_t array[4]);
void         tCellCheckParam_eParamsIN_func23(tCellCheckParam_IDX idx, const int32_t(* array)[4]);
void         tCellCheckParam_eParamsIN_func24(tCellCheckParam_IDX idx, const int32_t* array[4]);
void         tCellCheckParam_eParamsIN_func30(tCellCheckParam_IDX idx, const int16_t** str, int32_t sz);
void         tCellCheckParam_eParamsIN_func31(tCellCheckParam_IDX idx, const int8_t*** str, int32_t sz);
void         tCellCheckParam_eParamsIN_func41(tCellCheckParam_IDX idx, const int64_t(* array2D)[4]);
void         tCellCheckParam_eParamsIN_func42(tCellCheckParam_IDX idx, const int64_t(* array2D)[4][4]);
/* sParamsSEND */
void         tCellCheckParam_eParamsSEND_func10(tCellCheckParam_IDX idx, char_t** str_array, int32_t len);
void         tCellCheckParam_eParamsSEND_func20(tCellCheckParam_IDX idx, struct finfo* finfo, int32_t len);
void         tCellCheckParam_eParamsSEND_func21(tCellCheckParam_IDX idx, struct finfo* finfo);
void         tCellCheckParam_eParamsSEND_funcA0(tCellCheckParam_IDX idx, int8_t* buf, int32_t len);
/* sParamsOUT */
void         tCellCheckParam_eParamsOUT_func00(tCellCheckParam_IDX idx, int16_t* wstr);
void         tCellCheckParam_eParamsOUT_func10(tCellCheckParam_IDX idx, int16_t* wstr);
void         tCellCheckParam_eParamsOUT_func21(tCellCheckParam_IDX idx, int32_t* array);
void         tCellCheckParam_eParamsOUT_func23(tCellCheckParam_IDX idx, int32_t(* array)[4]);
void         tCellCheckParam_eParamsOUT_func30(tCellCheckParam_IDX idx, int16_t** str, int32_t sz);
void         tCellCheckParam_eParamsOUT_func31(tCellCheckParam_IDX idx, int8_t*** str, int32_t sz);
void         tCellCheckParam_eParamsOUT_func41(tCellCheckParam_IDX idx, int64_t(* array2D)[4]);
void         tCellCheckParam_eParamsOUT_func42(tCellCheckParam_IDX idx, int64_t(* array2D)[4][4]);
/* sParamsRECEIVE */
void         tCellCheckParam_eParamsRECEIVE_func00(tCellCheckParam_IDX idx, struct complex_number** dat);
void         tCellCheckParam_eParamsRECEIVE_func11(tCellCheckParam_IDX idx, struct complex_number** dat);
void         tCellCheckParam_eParamsRECEIVE_func20(tCellCheckParam_IDX idx, int32_t** array, int32_t* sz);
void         tCellCheckParam_eParamsRECEIVE_func30(tCellCheckParam_IDX idx, char_t** str);
void         tCellCheckParam_eParamsRECEIVE_func40(tCellCheckParam_IDX idx, char_t*** str);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCellCheckParam_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAllocator_tecsgen.h"
#ifdef  tCellCheckParam_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCellCheckParam_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCellCheckParam_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tCellCheckParam_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCellCheckParam_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCellCheckParam_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tCellCheckParam_eParamsSEND_func10_str_array_alloc( p_that, size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tCellCheckParam_eParamsSEND_func10_str_array_dealloc( p_that, m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tCellCheckParam_eParamsSEND_func20_finfo_alloc( p_that, size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tCellCheckParam_eParamsSEND_func20_finfo_dealloc( p_that, m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tCellCheckParam_eParamsSEND_func21_finfo_alloc( p_that, size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tCellCheckParam_eParamsSEND_func21_finfo_dealloc( p_that, m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tCellCheckParam_eParamsSEND_funcA0_buf_alloc( p_that, size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tCellCheckParam_eParamsSEND_funcA0_buf_dealloc( p_that, m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tCellCheckParam_eParamsRECEIVE_func00_dat_alloc( p_that, size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tCellCheckParam_eParamsRECEIVE_func00_dat_dealloc( p_that, m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tCellCheckParam_eParamsRECEIVE_func11_dat_alloc( p_that, size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tCellCheckParam_eParamsRECEIVE_func11_dat_dealloc( p_that, m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tCellCheckParam_eParamsRECEIVE_func20_array_alloc( p_that, size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tCellCheckParam_eParamsRECEIVE_func20_array_dealloc( p_that, m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tCellCheckParam_eParamsRECEIVE_func30_str_alloc( p_that, size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tCellCheckParam_eParamsRECEIVE_func30_str_dealloc( p_that, m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tCellCheckParam_eParamsRECEIVE_func40_str_alloc( p_that, size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tCellCheckParam_eParamsRECEIVE_func40_str_dealloc( p_that, m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )

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
#define VALID_IDX(IDX)  tCellCheckParam_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCellCheckParam_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCellCheckParam_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCellCheckParam_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define eParamsSEND_func10_str_array_alloc( size, m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsSEND_func10_str_array_alloc( p_cellcb, size, m ))
#define eParamsSEND_func10_str_array_dealloc( m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsSEND_func10_str_array_dealloc( p_cellcb, m ))
#define eParamsSEND_func20_finfo_alloc( size, m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsSEND_func20_finfo_alloc( p_cellcb, size, m ))
#define eParamsSEND_func20_finfo_dealloc( m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsSEND_func20_finfo_dealloc( p_cellcb, m ))
#define eParamsSEND_func21_finfo_alloc( size, m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsSEND_func21_finfo_alloc( p_cellcb, size, m ))
#define eParamsSEND_func21_finfo_dealloc( m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsSEND_func21_finfo_dealloc( p_cellcb, m ))
#define eParamsSEND_funcA0_buf_alloc( size, m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsSEND_funcA0_buf_alloc( p_cellcb, size, m ))
#define eParamsSEND_funcA0_buf_dealloc( m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsSEND_funcA0_buf_dealloc( p_cellcb, m ))
#define eParamsRECEIVE_func00_dat_alloc( size, m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsRECEIVE_func00_dat_alloc( p_cellcb, size, m ))
#define eParamsRECEIVE_func00_dat_dealloc( m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsRECEIVE_func00_dat_dealloc( p_cellcb, m ))
#define eParamsRECEIVE_func11_dat_alloc( size, m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsRECEIVE_func11_dat_alloc( p_cellcb, size, m ))
#define eParamsRECEIVE_func11_dat_dealloc( m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsRECEIVE_func11_dat_dealloc( p_cellcb, m ))
#define eParamsRECEIVE_func20_array_alloc( size, m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsRECEIVE_func20_array_alloc( p_cellcb, size, m ))
#define eParamsRECEIVE_func20_array_dealloc( m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsRECEIVE_func20_array_dealloc( p_cellcb, m ))
#define eParamsRECEIVE_func30_str_alloc( size, m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsRECEIVE_func30_str_alloc( p_cellcb, size, m ))
#define eParamsRECEIVE_func30_str_dealloc( m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsRECEIVE_func30_str_dealloc( p_cellcb, m ))
#define eParamsRECEIVE_func40_str_alloc( size, m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsRECEIVE_func40_str_alloc( p_cellcb, size, m ))
#define eParamsRECEIVE_func40_str_dealloc( m ) \
          ((void)p_cellcb, tCellCheckParam_eParamsRECEIVE_func40_str_dealloc( p_cellcb, m ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eParamsIN_func10 tCellCheckParam_eParamsIN_func10
#define eParamsIN_func21 tCellCheckParam_eParamsIN_func21
#define eParamsIN_func22 tCellCheckParam_eParamsIN_func22
#define eParamsIN_func23 tCellCheckParam_eParamsIN_func23
#define eParamsIN_func24 tCellCheckParam_eParamsIN_func24
#define eParamsIN_func30 tCellCheckParam_eParamsIN_func30
#define eParamsIN_func31 tCellCheckParam_eParamsIN_func31
#define eParamsIN_func41 tCellCheckParam_eParamsIN_func41
#define eParamsIN_func42 tCellCheckParam_eParamsIN_func42
#define eParamsSEND_func10 tCellCheckParam_eParamsSEND_func10
#define eParamsSEND_func20 tCellCheckParam_eParamsSEND_func20
#define eParamsSEND_func21 tCellCheckParam_eParamsSEND_func21
#define eParamsSEND_funcA0 tCellCheckParam_eParamsSEND_funcA0
#define eParamsOUT_func00 tCellCheckParam_eParamsOUT_func00
#define eParamsOUT_func10 tCellCheckParam_eParamsOUT_func10
#define eParamsOUT_func21 tCellCheckParam_eParamsOUT_func21
#define eParamsOUT_func23 tCellCheckParam_eParamsOUT_func23
#define eParamsOUT_func30 tCellCheckParam_eParamsOUT_func30
#define eParamsOUT_func31 tCellCheckParam_eParamsOUT_func31
#define eParamsOUT_func41 tCellCheckParam_eParamsOUT_func41
#define eParamsOUT_func42 tCellCheckParam_eParamsOUT_func42
#define eParamsRECEIVE_func00 tCellCheckParam_eParamsRECEIVE_func00
#define eParamsRECEIVE_func11 tCellCheckParam_eParamsRECEIVE_func11
#define eParamsRECEIVE_func20 tCellCheckParam_eParamsRECEIVE_func20
#define eParamsRECEIVE_func30 tCellCheckParam_eParamsRECEIVE_func30
#define eParamsRECEIVE_func40 tCellCheckParam_eParamsRECEIVE_func40

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define EPARAMSSEND_FUNC10_STR_ARRAY_DEALLOC(str_array, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eParamsSEND_func10_str_array_dealloc( (str_array)[i0__] );  \
	    } \
	  } \
	  eParamsSEND_func10_str_array_dealloc( (str_array) ); 
#define EPARAMSSEND_FUNC20_FINFO_DEALLOC(finfo, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      { int_t  i2__; \
	        for( i2__ = 0; i2__ < (finfo)[i0__].size; i2__++ ){  \
	          eParamsSEND_func20_finfo_dealloc( (finfo)[i0__].name[i2__] );  \
	        } \
	      } \
	      eParamsSEND_func20_finfo_dealloc( (finfo)[i0__].name );  \
	    } \
	  } \
	  eParamsSEND_func20_finfo_dealloc( (finfo) ); 
#define EPARAMSSEND_FUNC21_FINFO_DEALLOC(finfo) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < (*(finfo)).size; i0__++ ){  \
	      eParamsSEND_func21_finfo_dealloc( (*(finfo)).name[i0__] );  \
	    } \
	  } \
	  eParamsSEND_func21_finfo_dealloc( (*(finfo)).name );  \
	  eParamsSEND_func21_finfo_dealloc( (finfo) ); 
#define EPARAMSSEND_FUNCA0_BUF_DEALLOC(buf) \
	  eParamsSEND_funcA0_buf_dealloc( (buf) ); 
#define EPARAMSRECEIVE_FUNC00_DAT_DEALLOC(dat) \
	  eParamsRECEIVE_func00_dat_dealloc( (dat) ); 
#define EPARAMSRECEIVE_FUNC11_DAT_DEALLOC(dat) \
	  eParamsRECEIVE_func11_dat_dealloc( (dat) ); 
#define EPARAMSRECEIVE_FUNC20_ARRAY_DEALLOC(array) \
	  eParamsRECEIVE_func20_array_dealloc( (array) ); 
#define EPARAMSRECEIVE_FUNC30_STR_DEALLOC(str) \
	  eParamsRECEIVE_func30_str_dealloc( (str) ); 
#define EPARAMSRECEIVE_FUNC40_STR_DEALLOC(str, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eParamsRECEIVE_func40_str_dealloc( (str)[i0__] );  \
	    } \
	  } \
	  eParamsRECEIVE_func40_str_dealloc( (str) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define EPARAMSSEND_FUNC10_STR_ARRAY_DEALLOC_RESET(str_array, count__) \
	  if( (str_array) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (str_array)[i0__] ){ \
	          eParamsSEND_func10_str_array_dealloc( (str_array)[i0__] );  \
	        } \
	      } \
	    } \
	    eParamsSEND_func10_str_array_dealloc( (str_array) );  \
	  }
#define EPARAMSSEND_FUNC20_FINFO_DEALLOC_RESET(finfo, count__) \
	  if( (finfo) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (finfo)[i0__].name ){ \
	          { int_t  i3__; \
	            for( i3__ = 0; i3__ < (finfo)[i0__].size; i3__++ ){  \
	              if( (finfo)[i0__].name[i3__] ){ \
	                eParamsSEND_func20_finfo_dealloc( (finfo)[i0__].name[i3__] );  \
	              } \
	            } \
	          } \
	          eParamsSEND_func20_finfo_dealloc( (finfo)[i0__].name );  \
	        } \
	      } \
	    } \
	    eParamsSEND_func20_finfo_dealloc( (finfo) );  \
	  }
#define EPARAMSSEND_FUNC21_FINFO_DEALLOC_RESET(finfo) \
	  if( (finfo) ){ \
	    if( (*(finfo)).name ){ \
	      { int_t  i1__; \
	        for( i1__ = 0; i1__ < (*(finfo)).size; i1__++ ){  \
	          if( (*(finfo)).name[i1__] ){ \
	            eParamsSEND_func21_finfo_dealloc( (*(finfo)).name[i1__] );  \
	          } \
	        } \
	      } \
	      eParamsSEND_func21_finfo_dealloc( (*(finfo)).name );  \
	    } \
	    eParamsSEND_func21_finfo_dealloc( (finfo) );  \
	  }
#define EPARAMSSEND_FUNCA0_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eParamsSEND_funcA0_buf_dealloc( (buf) );  \
	  }
#define EPARAMSRECEIVE_FUNC00_DAT_DEALLOC_RESET(dat) \
	  if( (dat) ){ \
	    eParamsRECEIVE_func00_dat_dealloc( (dat) );  \
	  }
#define EPARAMSRECEIVE_FUNC11_DAT_DEALLOC_RESET(dat) \
	  if( (dat) ){ \
	    eParamsRECEIVE_func11_dat_dealloc( (dat) );  \
	  }
#define EPARAMSRECEIVE_FUNC20_ARRAY_DEALLOC_RESET(array) \
	  if( (array) ){ \
	    eParamsRECEIVE_func20_array_dealloc( (array) );  \
	  }
#define EPARAMSRECEIVE_FUNC30_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    eParamsRECEIVE_func30_str_dealloc( (str) );  \
	  }
#define EPARAMSRECEIVE_FUNC40_STR_DEALLOC_RESET(str, count__) \
	  if( (str) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (str)[i0__] ){ \
	          eParamsRECEIVE_func40_str_dealloc( (str)[i0__] );  \
	        } \
	      } \
	    } \
	    eParamsRECEIVE_func40_str_dealloc( (str) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCellCheckParam_TECSGENH */
