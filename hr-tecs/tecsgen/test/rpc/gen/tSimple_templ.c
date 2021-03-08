/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tSimple_template.c => src/tSimple.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cCall signature: sSample context:task
 *   ER             cCall_sayHello( int32_t times );
 *   ER             cCall_howAreYou( char_t* buf, int32_t len );
 *   ER             cCall_giftToYou( char_t* buf, int32_t len );
 *   ER             cCall_returnGiftFromYou( int16_t** buf, int32_t* len );
 *   ER             cCall_transferStruct( const struct stA* a, int32_t len );
 *   ER             cCall_transferStruct2( struct stA a );
 *   ER             cCall_transferInArray( int8_t array0[8] );
 *   ER             cCall_transferInArray2( const int8_t(* array1)[8] );
 *   ER             cCall_transferOutArray( int8_t(* array2)[8] );
 *   unsigned char  cCall_UnsignedTypes( uint8_t in, unsigned short s, uint_t ui, ulong_t ul );
 *   char           cCall_SignedTypes( int8_t in, short s, int_t ui, long_t ul );
 *   ER             cCall_onewayFunc( char_t* buf, int32_t len );
 *   void           cCall_exit( );
 * require port: signature:sKernel context:task
 *   ER             delay( RELTIM delay_time );
 *   ER             exitTask( );
 *   ER             getTime( SYSTIM* p_system_time );
 *   ER             getMicroTime( SYSUTM* p_system_micro_time );
 *   ER             exitKernel( );
 * allocator port for call port:cCall func:giftToYou param: buf
 *   ER             cCall_giftToYou_buf_alloc( int32_t size, void** p );
 *   ER             cCall_giftToYou_buf_dealloc( const void* ptr );
 * allocator port for call port:cCall func:returnGiftFromYou param: buf
 *   ER             cCall_returnGiftFromYou_buf_alloc( int32_t size, void** p );
 *   ER             cCall_returnGiftFromYou_buf_dealloc( const void* ptr );
 * allocator port for call port:cCall func:onewayFunc param: buf
 *   ER             cCall_onewayFunc_buf_alloc( int32_t size, void** p );
 *   ER             cCall_onewayFunc_buf_dealloc( const void* ptr );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tSimple_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eBody
 * entry port: eBody
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eBody_main
 * name:         eBody_main
 * global_name:  tSimple_eBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBody_main()
{
}

/* #[<ENTRY_PORT>]# eSimple
 * entry port: eSimple
 * signature:  sSimple
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSimple_onewayPtr
 * name:         eSimple_onewayPtr
 * global_name:  tSimple_eSimple_onewayPtr
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eSimple_onewayPtr(const uint32_t* in)
{
}

/* #[<ENTRY_FUNC>]# eSimple_onewayArray
 * name:         eSimple_onewayArray
 * global_name:  tSimple_eSimple_onewayArray
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eSimple_onewayArray(const uint32_t* in, int32_t len)
{
}

/* #[<ENTRY_FUNC>]# eSimple_onewayDoubleArray
 * name:         eSimple_onewayDoubleArray
 * global_name:  tSimple_eSimple_onewayDoubleArray
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eSimple_onewayDoubleArray(const int32_t* in, int32_t len, const int32_t* in2, int32_t len2)
{
}

/* #[<ENTRY_FUNC>]# eSimple_onewayStringArray
 * name:         eSimple_onewayStringArray
 * global_name:  tSimple_eSimple_onewayStringArray
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eSimple_onewayStringArray(const char_t** in, int32_t len)
{
}

/* #[<ENTRY_FUNC>]# eSimple_onewayString
 * name:         eSimple_onewayString
 * global_name:  tSimple_eSimple_onewayString
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eSimple_onewayString(const char_t* in, int32_t len)
{
}

/* #[<ENTRY_FUNC>]# eSimple_onewayStruct
 * name:         eSimple_onewayStruct
 * global_name:  tSimple_eSimple_onewayStruct
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eSimple_onewayStruct(const struct stA* a)
{
}

/* #[<ENTRY_FUNC>]# eSimple_onewayStruct2
 * name:         eSimple_onewayStruct2
 * global_name:  tSimple_eSimple_onewayStruct2
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eSimple_onewayStruct2(const struct stA* a, int32_t len)
{
}

/* #[<ENTRY_FUNC>]# eSimple_onewayInArray
 * name:         eSimple_onewayInArray
 * global_name:  tSimple_eSimple_onewayInArray
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eSimple_onewayInArray(int8_t array0[8])
{
}

/* #[<ENTRY_FUNC>]# eSimple_onewayInArray2
 * name:         eSimple_onewayInArray2
 * global_name:  tSimple_eSimple_onewayInArray2
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eSimple_onewayInArray2(const int8_t(* array1)[8])
{
}

/* #[<ENTRY_FUNC>]# eSimple_onewayNulable
 * name:         eSimple_onewayNulable
 * global_name:  tSimple_eSimple_onewayNulable
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eSimple_onewayNulable(const int8_t(* array)[3])
{
}

/* #[<ENTRY_FUNC>]# eSimple_exit
 * name:         eSimple_exit
 * global_name:  tSimple_eSimple_exit
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
void
eSimple_exit()
{
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
