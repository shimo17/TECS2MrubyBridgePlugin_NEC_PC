/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tMain_template.c => src/tMain.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * a                int32_t          ATTR_a          
 *
 * 呼び口関数 #_TCPF_#
 * call port: cParamsIN signature: sParamsIN context:task
 *   void           cParamsIN_func10( const int16_t* wstr );
 *   void           cParamsIN_func21( const int32_t* array );
 *   void           cParamsIN_func22( const int32_t array[4] );
 *   void           cParamsIN_func23( const int32_t(* array)[4] );
 *   void           cParamsIN_func24( const int32_t* array[4] );
 *   void           cParamsIN_func30( const int16_t** str, int32_t sz );
 *   void           cParamsIN_func31( const int8_t*** str, int32_t sz );
 *   void           cParamsIN_func41( const int64_t(* array2D)[4] );
 *   void           cParamsIN_func42( const int64_t(* array2D)[4][4] );
 * call port: cParamsSEND signature: sParamsSEND context:task
 *   void           cParamsSEND_func10( char_t** str_array, int32_t len );
 *   void           cParamsSEND_func20( struct finfo* finfo, int32_t len );
 *   void           cParamsSEND_func21( struct finfo* finfo );
 *   void           cParamsSEND_funcA0( int8_t* buf, int32_t len );
 * call port: cParamsOUT signature: sParamsOUT context:task
 *   void           cParamsOUT_func00( int16_t* wstr );
 *   void           cParamsOUT_func10( int16_t* wstr );
 *   void           cParamsOUT_func21( int32_t* array );
 *   void           cParamsOUT_func23( int32_t(* array)[4] );
 *   void           cParamsOUT_func30( int16_t** str, int32_t sz );
 *   void           cParamsOUT_func31( int8_t*** str, int32_t sz );
 *   void           cParamsOUT_func41( int64_t(* array2D)[4] );
 *   void           cParamsOUT_func42( int64_t(* array2D)[4][4] );
 * call port: cParamsRECEIVE signature: sParamsRECEIVE context:task
 *   void           cParamsRECEIVE_func00( struct complex_number** dat );
 *   void           cParamsRECEIVE_func11( struct complex_number** dat );
 *   void           cParamsRECEIVE_func20( int32_t** array, int32_t* sz );
 *   void           cParamsRECEIVE_func30( char_t** str );
 *   void           cParamsRECEIVE_func40( char_t*** str );
 * allocator port for call port:cParamsSEND func:func10 param: str_array
 *   ER             cParamsSEND_func10_str_array_alloc( int32_t size, void** m );
 *   ER             cParamsSEND_func10_str_array_dealloc( const void* m );
 * allocator port for call port:cParamsSEND func:func20 param: finfo
 *   ER             cParamsSEND_func20_finfo_alloc( int32_t size, void** m );
 *   ER             cParamsSEND_func20_finfo_dealloc( const void* m );
 * allocator port for call port:cParamsSEND func:func21 param: finfo
 *   ER             cParamsSEND_func21_finfo_alloc( int32_t size, void** m );
 *   ER             cParamsSEND_func21_finfo_dealloc( const void* m );
 * allocator port for call port:cParamsSEND func:funcA0 param: buf
 *   ER             cParamsSEND_funcA0_buf_alloc( int32_t size, void** m );
 *   ER             cParamsSEND_funcA0_buf_dealloc( const void* m );
 * allocator port for call port:cParamsRECEIVE func:func00 param: dat
 *   ER             cParamsRECEIVE_func00_dat_alloc( int32_t size, void** m );
 *   ER             cParamsRECEIVE_func00_dat_dealloc( const void* m );
 * allocator port for call port:cParamsRECEIVE func:func11 param: dat
 *   ER             cParamsRECEIVE_func11_dat_alloc( int32_t size, void** m );
 *   ER             cParamsRECEIVE_func11_dat_dealloc( const void* m );
 * allocator port for call port:cParamsRECEIVE func:func20 param: array
 *   ER             cParamsRECEIVE_func20_array_alloc( int32_t size, void** m );
 *   ER             cParamsRECEIVE_func20_array_dealloc( const void* m );
 * allocator port for call port:cParamsRECEIVE func:func30 param: str
 *   ER             cParamsRECEIVE_func30_str_alloc( int32_t size, void** m );
 *   ER             cParamsRECEIVE_func30_str_dealloc( const void* m );
 * allocator port for call port:cParamsRECEIVE func:func40 param: str
 *   ER             cParamsRECEIVE_func40_str_alloc( int32_t size, void** m );
 *   ER             cParamsRECEIVE_func40_str_dealloc( const void* m );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tMain_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
