/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSample_TECSGEN_H
#define tSample_TECSGEN_H

/*
 * celltype          :  tSample
 * global name       :  tSample
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
#include "sSample_tecsgen.h"
#include "sSimple_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tSample_CB {
    int  dummy;
} tSample_CB;
extern tSample_CB  tSample_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tSample_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSample */
ER           tSample_eEnt_sayHello(tSample_IDX idx, int32_t times);
ER           tSample_eEnt_howAreYou(tSample_IDX idx, char_t* buf, int32_t len);
ER           tSample_eEnt_giftToYou(tSample_IDX idx, char_t* buf, int32_t len);
ER           tSample_eEnt_returnGiftFromYou(tSample_IDX idx, int16_t** buf, int32_t* len);
ER           tSample_eEnt_transferStruct(tSample_IDX idx, const struct stA* a, int32_t len);
ER           tSample_eEnt_transferStruct2(tSample_IDX idx, struct stA a);
ER           tSample_eEnt_transferInArray(tSample_IDX idx, int8_t array0[8]);
ER           tSample_eEnt_transferInArray2(tSample_IDX idx, const int8_t(* array1)[8]);
ER           tSample_eEnt_transferOutArray(tSample_IDX idx, int8_t(* array2)[8]);
unsigned char tSample_eEnt_UnsignedTypes(tSample_IDX idx, uint8_t in, unsigned short s, uint_t ui, ulong_t ul);
char         tSample_eEnt_SignedTypes(tSample_IDX idx, int8_t in, short s, int_t ui, long_t ul);
ER           tSample_eEnt_onewayFunc(tSample_IDX idx, char_t* buf, int32_t len);
void         tSample_eEnt_exit(tSample_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSample_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tMarshaler_sSimple_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tSample_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSample_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSample_ID_BASE             (1)  /* ID のベース  #_NIDB_# */
#define tSample_N_CELL              (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSample_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSample_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tSample_cSimple_onewayPtr( p_that, in ) \
	  tMarshaler_sSimple_eClientEntry_onewayPtr( \
	   (tMarshaler_sSimple_IDX)0, (in) )
#define tSample_cSimple_onewayArray( p_that, in, len ) \
	  tMarshaler_sSimple_eClientEntry_onewayArray( \
	   (tMarshaler_sSimple_IDX)0, (in), (len) )
#define tSample_cSimple_onewayDoubleArray( p_that, in, len, in2, len2 ) \
	  tMarshaler_sSimple_eClientEntry_onewayDoubleArray( \
	   (tMarshaler_sSimple_IDX)0, (in), (len), (in2), (len2) )
#define tSample_cSimple_onewayStringArray( p_that, in, len ) \
	  tMarshaler_sSimple_eClientEntry_onewayStringArray( \
	   (tMarshaler_sSimple_IDX)0, (in), (len) )
#define tSample_cSimple_onewayString( p_that, in, len ) \
	  tMarshaler_sSimple_eClientEntry_onewayString( \
	   (tMarshaler_sSimple_IDX)0, (in), (len) )
#define tSample_cSimple_onewayStruct( p_that, a ) \
	  tMarshaler_sSimple_eClientEntry_onewayStruct( \
	   (tMarshaler_sSimple_IDX)0, (a) )
#define tSample_cSimple_onewayStruct2( p_that, a, len ) \
	  tMarshaler_sSimple_eClientEntry_onewayStruct2( \
	   (tMarshaler_sSimple_IDX)0, (a), (len) )
#define tSample_cSimple_onewayInArray( p_that, array0 ) \
	  tMarshaler_sSimple_eClientEntry_onewayInArray( \
	   (tMarshaler_sSimple_IDX)0, (array0) )
#define tSample_cSimple_onewayInArray2( p_that, array1 ) \
	  tMarshaler_sSimple_eClientEntry_onewayInArray2( \
	   (tMarshaler_sSimple_IDX)0, (array1) )
#define tSample_cSimple_onewayNulable( p_that, array ) \
	  tMarshaler_sSimple_eClientEntry_onewayNulable( \
	   (tMarshaler_sSimple_IDX)0, (array) )
#define tSample_cSimple_exit( p_that ) \
	  tMarshaler_sSimple_eClientEntry_exit( \
	   (tMarshaler_sSimple_IDX)0 )
#define tSample_eEnt_giftToYou_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tSample_eEnt_giftToYou_buf_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )
#define tSample_eEnt_returnGiftFromYou_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tSample_eEnt_returnGiftFromYou_buf_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )
#define tSample_eEnt_onewayFunc_buf_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tSample_eEnt_onewayFunc_buf_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (ptr) )

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
#define VALID_IDX(IDX)  tSample_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSample_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSample_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSample_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cSimple_onewayPtr( in ) \
          ((void)p_cellcb, tSample_cSimple_onewayPtr( p_cellcb, in ))
#define cSimple_onewayArray( in, len ) \
          ((void)p_cellcb, tSample_cSimple_onewayArray( p_cellcb, in, len ))
#define cSimple_onewayDoubleArray( in, len, in2, len2 ) \
          ((void)p_cellcb, tSample_cSimple_onewayDoubleArray( p_cellcb, in, len, in2, len2 ))
#define cSimple_onewayStringArray( in, len ) \
          ((void)p_cellcb, tSample_cSimple_onewayStringArray( p_cellcb, in, len ))
#define cSimple_onewayString( in, len ) \
          ((void)p_cellcb, tSample_cSimple_onewayString( p_cellcb, in, len ))
#define cSimple_onewayStruct( a ) \
          ((void)p_cellcb, tSample_cSimple_onewayStruct( p_cellcb, a ))
#define cSimple_onewayStruct2( a, len ) \
          ((void)p_cellcb, tSample_cSimple_onewayStruct2( p_cellcb, a, len ))
#define cSimple_onewayInArray( array0 ) \
          ((void)p_cellcb, tSample_cSimple_onewayInArray( p_cellcb, array0 ))
#define cSimple_onewayInArray2( array1 ) \
          ((void)p_cellcb, tSample_cSimple_onewayInArray2( p_cellcb, array1 ))
#define cSimple_onewayNulable( array ) \
          ((void)p_cellcb, tSample_cSimple_onewayNulable( p_cellcb, array ))
#define cSimple_exit( ) \
          ((void)p_cellcb, tSample_cSimple_exit( p_cellcb ))
#define eEnt_giftToYou_buf_alloc( size, p ) \
          ((void)p_cellcb, tSample_eEnt_giftToYou_buf_alloc( p_cellcb, size, p ))
#define eEnt_giftToYou_buf_dealloc( ptr ) \
          ((void)p_cellcb, tSample_eEnt_giftToYou_buf_dealloc( p_cellcb, ptr ))
#define eEnt_returnGiftFromYou_buf_alloc( size, p ) \
          ((void)p_cellcb, tSample_eEnt_returnGiftFromYou_buf_alloc( p_cellcb, size, p ))
#define eEnt_returnGiftFromYou_buf_dealloc( ptr ) \
          ((void)p_cellcb, tSample_eEnt_returnGiftFromYou_buf_dealloc( p_cellcb, ptr ))
#define eEnt_onewayFunc_buf_alloc( size, p ) \
          ((void)p_cellcb, tSample_eEnt_onewayFunc_buf_alloc( p_cellcb, size, p ))
#define eEnt_onewayFunc_buf_dealloc( ptr ) \
          ((void)p_cellcb, tSample_eEnt_onewayFunc_buf_dealloc( p_cellcb, ptr ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_sayHello    tSample_eEnt_sayHello
#define eEnt_howAreYou   tSample_eEnt_howAreYou
#define eEnt_giftToYou   tSample_eEnt_giftToYou
#define eEnt_returnGiftFromYou tSample_eEnt_returnGiftFromYou
#define eEnt_transferStruct tSample_eEnt_transferStruct
#define eEnt_transferStruct2 tSample_eEnt_transferStruct2
#define eEnt_transferInArray tSample_eEnt_transferInArray
#define eEnt_transferInArray2 tSample_eEnt_transferInArray2
#define eEnt_transferOutArray tSample_eEnt_transferOutArray
#define eEnt_UnsignedTypes tSample_eEnt_UnsignedTypes
#define eEnt_SignedTypes tSample_eEnt_SignedTypes
#define eEnt_onewayFunc  tSample_eEnt_onewayFunc
#define eEnt_exit        tSample_eEnt_exit

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define EENT_GIFTTOYOU_BUF_DEALLOC(buf) \
	  eEnt_giftToYou_buf_dealloc( (buf) ); 
#define EENT_RETURNGIFTFROMYOU_BUF_DEALLOC(buf) \
	  eEnt_returnGiftFromYou_buf_dealloc( (buf) ); 
#define EENT_ONEWAYFUNC_BUF_DEALLOC(buf) \
	  eEnt_onewayFunc_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define EENT_GIFTTOYOU_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eEnt_giftToYou_buf_dealloc( (buf) );  \
	  }
#define EENT_RETURNGIFTFROMYOU_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eEnt_returnGiftFromYou_buf_dealloc( (buf) );  \
	  }
#define EENT_ONEWAYFUNC_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    eEnt_onewayFunc_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSample_TECSGENH */
