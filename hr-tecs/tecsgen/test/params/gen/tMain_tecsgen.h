/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMain_TECSGEN_H
#define tMain_TECSGEN_H

/*
 * celltype          :  tMain
 * global name       :  tMain
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  true
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
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tMain_INIB {
    /* call port #_TCP_# */
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  tMain_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tMain_CB_tab           tMain_INIB_tab
#define tMain_SINGLE_CELL_CB   tMain_SINGLE_CELL_INIB
#define tMain_CB               tMain_INIB
#define tag_tMain_CB           tag_tMain_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tMain_INIB  tMain_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tMain_INIB *tMain_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tMain_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCellCheckParam_tecsgen.h"
#include "tAllocator_tecsgen.h"
#ifdef  tMain_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tMain_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tMain_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tMain_ATTR_a        	(tMain_SINGLE_CELL_INIB.a)

#define tMain_GET_a()       	(tMain_SINGLE_CELL_INIB.a)



 /* 呼び口関数マクロ #_CPM_# */
#define tMain_cParamsIN_func10( wstr ) \
	  tCellCheckParam_eParamsIN_func10( \
	   (tCellCheckParam_IDX)0, (wstr) )
#define tMain_cParamsIN_func21( array ) \
	  tCellCheckParam_eParamsIN_func21( \
	   (tCellCheckParam_IDX)0, (array) )
#define tMain_cParamsIN_func22( array ) \
	  tCellCheckParam_eParamsIN_func22( \
	   (tCellCheckParam_IDX)0, (array) )
#define tMain_cParamsIN_func23( array ) \
	  tCellCheckParam_eParamsIN_func23( \
	   (tCellCheckParam_IDX)0, (array) )
#define tMain_cParamsIN_func24( array ) \
	  tCellCheckParam_eParamsIN_func24( \
	   (tCellCheckParam_IDX)0, (array) )
#define tMain_cParamsIN_func30( str, sz ) \
	  tCellCheckParam_eParamsIN_func30( \
	   (tCellCheckParam_IDX)0, (str), (sz) )
#define tMain_cParamsIN_func31( str, sz ) \
	  tCellCheckParam_eParamsIN_func31( \
	   (tCellCheckParam_IDX)0, (str), (sz) )
#define tMain_cParamsIN_func41( array2D ) \
	  tCellCheckParam_eParamsIN_func41( \
	   (tCellCheckParam_IDX)0, (array2D) )
#define tMain_cParamsIN_func42( array2D ) \
	  tCellCheckParam_eParamsIN_func42( \
	   (tCellCheckParam_IDX)0, (array2D) )
#define tMain_cParamsSEND_func10( str_array, len ) \
	  tCellCheckParam_eParamsSEND_func10( \
	   (tCellCheckParam_IDX)0, (str_array), (len) )
#define tMain_cParamsSEND_func20( finfo, len ) \
	  tCellCheckParam_eParamsSEND_func20( \
	   (tCellCheckParam_IDX)0, (finfo), (len) )
#define tMain_cParamsSEND_func21( finfo ) \
	  tCellCheckParam_eParamsSEND_func21( \
	   (tCellCheckParam_IDX)0, (finfo) )
#define tMain_cParamsSEND_funcA0( buf, len ) \
	  tCellCheckParam_eParamsSEND_funcA0( \
	   (tCellCheckParam_IDX)0, (buf), (len) )
#define tMain_cParamsOUT_func00( wstr ) \
	  tCellCheckParam_eParamsOUT_func00( \
	   (tCellCheckParam_IDX)0, (wstr) )
#define tMain_cParamsOUT_func10( wstr ) \
	  tCellCheckParam_eParamsOUT_func10( \
	   (tCellCheckParam_IDX)0, (wstr) )
#define tMain_cParamsOUT_func21( array ) \
	  tCellCheckParam_eParamsOUT_func21( \
	   (tCellCheckParam_IDX)0, (array) )
#define tMain_cParamsOUT_func23( array ) \
	  tCellCheckParam_eParamsOUT_func23( \
	   (tCellCheckParam_IDX)0, (array) )
#define tMain_cParamsOUT_func30( str, sz ) \
	  tCellCheckParam_eParamsOUT_func30( \
	   (tCellCheckParam_IDX)0, (str), (sz) )
#define tMain_cParamsOUT_func31( str, sz ) \
	  tCellCheckParam_eParamsOUT_func31( \
	   (tCellCheckParam_IDX)0, (str), (sz) )
#define tMain_cParamsOUT_func41( array2D ) \
	  tCellCheckParam_eParamsOUT_func41( \
	   (tCellCheckParam_IDX)0, (array2D) )
#define tMain_cParamsOUT_func42( array2D ) \
	  tCellCheckParam_eParamsOUT_func42( \
	   (tCellCheckParam_IDX)0, (array2D) )
#define tMain_cParamsRECEIVE_func00( dat ) \
	  tCellCheckParam_eParamsRECEIVE_func00( \
	   (tCellCheckParam_IDX)0, (dat) )
#define tMain_cParamsRECEIVE_func11( dat ) \
	  tCellCheckParam_eParamsRECEIVE_func11( \
	   (tCellCheckParam_IDX)0, (dat) )
#define tMain_cParamsRECEIVE_func20( array, sz ) \
	  tCellCheckParam_eParamsRECEIVE_func20( \
	   (tCellCheckParam_IDX)0, (array), (sz) )
#define tMain_cParamsRECEIVE_func30( str ) \
	  tCellCheckParam_eParamsRECEIVE_func30( \
	   (tCellCheckParam_IDX)0, (str) )
#define tMain_cParamsRECEIVE_func40( str ) \
	  tCellCheckParam_eParamsRECEIVE_func40( \
	   (tCellCheckParam_IDX)0, (str) )
#define tMain_cParamsSEND_func10_str_array_alloc( size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tMain_cParamsSEND_func10_str_array_dealloc( m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tMain_cParamsSEND_func20_finfo_alloc( size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tMain_cParamsSEND_func20_finfo_dealloc( m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tMain_cParamsSEND_func21_finfo_alloc( size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tMain_cParamsSEND_func21_finfo_dealloc( m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tMain_cParamsSEND_funcA0_buf_alloc( size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tMain_cParamsSEND_funcA0_buf_dealloc( m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tMain_cParamsRECEIVE_func00_dat_alloc( size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tMain_cParamsRECEIVE_func00_dat_dealloc( m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tMain_cParamsRECEIVE_func11_dat_alloc( size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tMain_cParamsRECEIVE_func11_dat_dealloc( m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tMain_cParamsRECEIVE_func20_array_alloc( size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tMain_cParamsRECEIVE_func20_array_dealloc( m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tMain_cParamsRECEIVE_func30_str_alloc( size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tMain_cParamsRECEIVE_func30_str_dealloc( m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )
#define tMain_cParamsRECEIVE_func40_str_alloc( size, m ) \
	  tAllocator_eAlloc_alloc( \
	    (size), (m) )
#define tMain_cParamsRECEIVE_func40_str_dealloc( m ) \
	  tAllocator_eAlloc_dealloc( \
	    (m) )

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


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tMain_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tMain_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tMain_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tMain_ATTR_a


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cParamsIN_func10( wstr ) \
          tMain_cParamsIN_func10( wstr )
#define cParamsIN_func21( array ) \
          tMain_cParamsIN_func21( array )
#define cParamsIN_func22( array ) \
          tMain_cParamsIN_func22( array )
#define cParamsIN_func23( array ) \
          tMain_cParamsIN_func23( array )
#define cParamsIN_func24( array ) \
          tMain_cParamsIN_func24( array )
#define cParamsIN_func30( str, sz ) \
          tMain_cParamsIN_func30( str, sz )
#define cParamsIN_func31( str, sz ) \
          tMain_cParamsIN_func31( str, sz )
#define cParamsIN_func41( array2D ) \
          tMain_cParamsIN_func41( array2D )
#define cParamsIN_func42( array2D ) \
          tMain_cParamsIN_func42( array2D )
#define cParamsSEND_func10( str_array, len ) \
          tMain_cParamsSEND_func10( str_array, len )
#define cParamsSEND_func20( finfo, len ) \
          tMain_cParamsSEND_func20( finfo, len )
#define cParamsSEND_func21( finfo ) \
          tMain_cParamsSEND_func21( finfo )
#define cParamsSEND_funcA0( buf, len ) \
          tMain_cParamsSEND_funcA0( buf, len )
#define cParamsOUT_func00( wstr ) \
          tMain_cParamsOUT_func00( wstr )
#define cParamsOUT_func10( wstr ) \
          tMain_cParamsOUT_func10( wstr )
#define cParamsOUT_func21( array ) \
          tMain_cParamsOUT_func21( array )
#define cParamsOUT_func23( array ) \
          tMain_cParamsOUT_func23( array )
#define cParamsOUT_func30( str, sz ) \
          tMain_cParamsOUT_func30( str, sz )
#define cParamsOUT_func31( str, sz ) \
          tMain_cParamsOUT_func31( str, sz )
#define cParamsOUT_func41( array2D ) \
          tMain_cParamsOUT_func41( array2D )
#define cParamsOUT_func42( array2D ) \
          tMain_cParamsOUT_func42( array2D )
#define cParamsRECEIVE_func00( dat ) \
          tMain_cParamsRECEIVE_func00( dat )
#define cParamsRECEIVE_func11( dat ) \
          tMain_cParamsRECEIVE_func11( dat )
#define cParamsRECEIVE_func20( array, sz ) \
          tMain_cParamsRECEIVE_func20( array, sz )
#define cParamsRECEIVE_func30( str ) \
          tMain_cParamsRECEIVE_func30( str )
#define cParamsRECEIVE_func40( str ) \
          tMain_cParamsRECEIVE_func40( str )
#define cParamsSEND_func10_str_array_alloc( size, m ) \
          tMain_cParamsSEND_func10_str_array_alloc( size, m )
#define cParamsSEND_func10_str_array_dealloc( m ) \
          tMain_cParamsSEND_func10_str_array_dealloc( m )
#define cParamsSEND_func20_finfo_alloc( size, m ) \
          tMain_cParamsSEND_func20_finfo_alloc( size, m )
#define cParamsSEND_func20_finfo_dealloc( m ) \
          tMain_cParamsSEND_func20_finfo_dealloc( m )
#define cParamsSEND_func21_finfo_alloc( size, m ) \
          tMain_cParamsSEND_func21_finfo_alloc( size, m )
#define cParamsSEND_func21_finfo_dealloc( m ) \
          tMain_cParamsSEND_func21_finfo_dealloc( m )
#define cParamsSEND_funcA0_buf_alloc( size, m ) \
          tMain_cParamsSEND_funcA0_buf_alloc( size, m )
#define cParamsSEND_funcA0_buf_dealloc( m ) \
          tMain_cParamsSEND_funcA0_buf_dealloc( m )
#define cParamsRECEIVE_func00_dat_alloc( size, m ) \
          tMain_cParamsRECEIVE_func00_dat_alloc( size, m )
#define cParamsRECEIVE_func00_dat_dealloc( m ) \
          tMain_cParamsRECEIVE_func00_dat_dealloc( m )
#define cParamsRECEIVE_func11_dat_alloc( size, m ) \
          tMain_cParamsRECEIVE_func11_dat_alloc( size, m )
#define cParamsRECEIVE_func11_dat_dealloc( m ) \
          tMain_cParamsRECEIVE_func11_dat_dealloc( m )
#define cParamsRECEIVE_func20_array_alloc( size, m ) \
          tMain_cParamsRECEIVE_func20_array_alloc( size, m )
#define cParamsRECEIVE_func20_array_dealloc( m ) \
          tMain_cParamsRECEIVE_func20_array_dealloc( m )
#define cParamsRECEIVE_func30_str_alloc( size, m ) \
          tMain_cParamsRECEIVE_func30_str_alloc( size, m )
#define cParamsRECEIVE_func30_str_dealloc( m ) \
          tMain_cParamsRECEIVE_func30_str_dealloc( m )
#define cParamsRECEIVE_func40_str_alloc( size, m ) \
          tMain_cParamsRECEIVE_func40_str_alloc( size, m )
#define cParamsRECEIVE_func40_str_dealloc( m ) \
          tMain_cParamsRECEIVE_func40_str_dealloc( m )



/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define CPARAMSSEND_FUNC10_STR_ARRAY_DEALLOC(str_array, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cParamsSEND_func10_str_array_dealloc( (str_array)[i0__] );  \
	    } \
	  } \
	  cParamsSEND_func10_str_array_dealloc( (str_array) ); 
#define CPARAMSSEND_FUNC20_FINFO_DEALLOC(finfo, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      { int_t  i2__; \
	        for( i2__ = 0; i2__ < (finfo)[i0__].size; i2__++ ){  \
	          cParamsSEND_func20_finfo_dealloc( (finfo)[i0__].name[i2__] );  \
	        } \
	      } \
	      cParamsSEND_func20_finfo_dealloc( (finfo)[i0__].name );  \
	    } \
	  } \
	  cParamsSEND_func20_finfo_dealloc( (finfo) ); 
#define CPARAMSSEND_FUNC21_FINFO_DEALLOC(finfo) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < (*(finfo)).size; i0__++ ){  \
	      cParamsSEND_func21_finfo_dealloc( (*(finfo)).name[i0__] );  \
	    } \
	  } \
	  cParamsSEND_func21_finfo_dealloc( (*(finfo)).name );  \
	  cParamsSEND_func21_finfo_dealloc( (finfo) ); 
#define CPARAMSSEND_FUNCA0_BUF_DEALLOC(buf) \
	  cParamsSEND_funcA0_buf_dealloc( (buf) ); 
#define CPARAMSRECEIVE_FUNC00_DAT_DEALLOC(dat) \
	  cParamsRECEIVE_func00_dat_dealloc( (dat) ); 
#define CPARAMSRECEIVE_FUNC11_DAT_DEALLOC(dat) \
	  cParamsRECEIVE_func11_dat_dealloc( (dat) ); 
#define CPARAMSRECEIVE_FUNC20_ARRAY_DEALLOC(array) \
	  cParamsRECEIVE_func20_array_dealloc( (array) ); 
#define CPARAMSRECEIVE_FUNC30_STR_DEALLOC(str) \
	  cParamsRECEIVE_func30_str_dealloc( (str) ); 
#define CPARAMSRECEIVE_FUNC40_STR_DEALLOC(str, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cParamsRECEIVE_func40_str_dealloc( (str)[i0__] );  \
	    } \
	  } \
	  cParamsRECEIVE_func40_str_dealloc( (str) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define CPARAMSSEND_FUNC10_STR_ARRAY_DEALLOC_RESET(str_array, count__) \
	  if( (str_array) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (str_array)[i0__] ){ \
	          cParamsSEND_func10_str_array_dealloc( (str_array)[i0__] );  \
	        } \
	      } \
	    } \
	    cParamsSEND_func10_str_array_dealloc( (str_array) );  \
	  }
#define CPARAMSSEND_FUNC20_FINFO_DEALLOC_RESET(finfo, count__) \
	  if( (finfo) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (finfo)[i0__].name ){ \
	          { int_t  i3__; \
	            for( i3__ = 0; i3__ < (finfo)[i0__].size; i3__++ ){  \
	              if( (finfo)[i0__].name[i3__] ){ \
	                cParamsSEND_func20_finfo_dealloc( (finfo)[i0__].name[i3__] );  \
	              } \
	            } \
	          } \
	          cParamsSEND_func20_finfo_dealloc( (finfo)[i0__].name );  \
	        } \
	      } \
	    } \
	    cParamsSEND_func20_finfo_dealloc( (finfo) );  \
	  }
#define CPARAMSSEND_FUNC21_FINFO_DEALLOC_RESET(finfo) \
	  if( (finfo) ){ \
	    if( (*(finfo)).name ){ \
	      { int_t  i1__; \
	        for( i1__ = 0; i1__ < (*(finfo)).size; i1__++ ){  \
	          if( (*(finfo)).name[i1__] ){ \
	            cParamsSEND_func21_finfo_dealloc( (*(finfo)).name[i1__] );  \
	          } \
	        } \
	      } \
	      cParamsSEND_func21_finfo_dealloc( (*(finfo)).name );  \
	    } \
	    cParamsSEND_func21_finfo_dealloc( (finfo) );  \
	  }
#define CPARAMSSEND_FUNCA0_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cParamsSEND_funcA0_buf_dealloc( (buf) );  \
	  }
#define CPARAMSRECEIVE_FUNC00_DAT_DEALLOC_RESET(dat) \
	  if( (dat) ){ \
	    cParamsRECEIVE_func00_dat_dealloc( (dat) );  \
	  }
#define CPARAMSRECEIVE_FUNC11_DAT_DEALLOC_RESET(dat) \
	  if( (dat) ){ \
	    cParamsRECEIVE_func11_dat_dealloc( (dat) );  \
	  }
#define CPARAMSRECEIVE_FUNC20_ARRAY_DEALLOC_RESET(array) \
	  if( (array) ){ \
	    cParamsRECEIVE_func20_array_dealloc( (array) );  \
	  }
#define CPARAMSRECEIVE_FUNC30_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    cParamsRECEIVE_func30_str_dealloc( (str) );  \
	  }
#define CPARAMSRECEIVE_FUNC40_STR_DEALLOC_RESET(str, count__) \
	  if( (str) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (str)[i0__] ){ \
	          cParamsRECEIVE_func40_str_dealloc( (str)[i0__] );  \
	        } \
	      } \
	    } \
	    cParamsRECEIVE_func40_str_dealloc( (str) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMain_TECSGENH */
