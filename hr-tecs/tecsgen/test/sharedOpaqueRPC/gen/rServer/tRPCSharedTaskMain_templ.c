/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tRPCSharedTaskMain_template.c => src/tRPCSharedTaskMain.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * channelNo        int16_t          VAR_channelNo   
 *
 * 呼び口関数 #_TCPF_#
 * call port: cUnmarshalAndCallFunction signature: sUnmarshalerMain context:task
 *   ER             cUnmarshalAndCallFunction_main( subscript );
 *       subscript:  0...(NCP_cUnmarshalAndCallFunction-1)
 * call port: cServerSideTDR signature: sTDR context:task
 *   ER             cServerSideTDR_reset( );
 *   ER             cServerSideTDR_sendSOP( bool_t b_client );
 *   ER             cServerSideTDR_receiveSOP( bool_t b_client );
 *   ER             cServerSideTDR_sendEOP( bool_t b_continue );
 *   ER             cServerSideTDR_receiveEOP( bool_t b_continue );
 *   ER             cServerSideTDR_putInt8( int8_t in );
 *   ER             cServerSideTDR_putInt16( int16_t in );
 *   ER             cServerSideTDR_putInt32( int32_t in );
 *   ER             cServerSideTDR_putInt64( int64_t in );
 *   ER             cServerSideTDR_putInt128( int128_t in );
 *   ER             cServerSideTDR_getInt8( int8_t* out );
 *   ER             cServerSideTDR_getInt16( int16_t* out );
 *   ER             cServerSideTDR_getInt32( int32_t* out );
 *   ER             cServerSideTDR_getInt64( int64_t* out );
 *   ER             cServerSideTDR_getInt128( int128_t* out );
 *   ER             cServerSideTDR_putUInt8( uint8_t in );
 *   ER             cServerSideTDR_putUInt16( uint16_t in );
 *   ER             cServerSideTDR_putUInt32( uint32_t in );
 *   ER             cServerSideTDR_putUInt64( uint64_t in );
 *   ER             cServerSideTDR_putUInt128( uint128_t in );
 *   ER             cServerSideTDR_getUInt8( uint8_t* out );
 *   ER             cServerSideTDR_getUInt16( uint16_t* out );
 *   ER             cServerSideTDR_getUInt32( uint32_t* out );
 *   ER             cServerSideTDR_getUInt64( uint64_t* out );
 *   ER             cServerSideTDR_getUInt128( uint128_t* out );
 *   ER             cServerSideTDR_putChar( char_t in );
 *   ER             cServerSideTDR_getChar( char_t* out );
 *   ER             cServerSideTDR_putBool( bool_t in );
 *   ER             cServerSideTDR_getBool( bool_t* out );
 *   ER             cServerSideTDR_putFloat32( float32_t in );
 *   ER             cServerSideTDR_putDouble64( double64_t in );
 *   ER             cServerSideTDR_getFloat32( float32_t* out );
 *   ER             cServerSideTDR_getDouble64( double64_t* out );
 *   ER             cServerSideTDR_putSChar( schar_t in );
 *   ER             cServerSideTDR_putShort( short_t in );
 *   ER             cServerSideTDR_putInt( int_t in );
 *   ER             cServerSideTDR_putLong( long_t in );
 *   ER             cServerSideTDR_getSChar( schar_t* out );
 *   ER             cServerSideTDR_getShort( short_t* out );
 *   ER             cServerSideTDR_getInt( int_t* out );
 *   ER             cServerSideTDR_getLong( long_t* out );
 *   ER             cServerSideTDR_putUChar( uchar_t in );
 *   ER             cServerSideTDR_putUShort( ushort_t in );
 *   ER             cServerSideTDR_putUInt( uint_t in );
 *   ER             cServerSideTDR_putULong( ulong_t in );
 *   ER             cServerSideTDR_getUChar( unsigned char* out );
 *   ER             cServerSideTDR_getUShort( ushort_t* out );
 *   ER             cServerSideTDR_getUInt( uint_t* out );
 *   ER             cServerSideTDR_getULong( ulong_t* out );
 *   ER             cServerSideTDR_putIntptr( const intptr_t ptr );
 *   ER             cServerSideTDR_getIntptr( intptr_t* ptr );
 * require port: signature:sSysLog context:task
 *   ER             write( uint_t prio, const SYSLOG* p_syslog );
 *   ER_UINT        read( SYSLOG* p_syslog );
 *   ER             mask( uint_t logmask, uint_t lowmask );
 *   ER             refer( T_SYSLOG_RLOG* pk_rlog );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tRPCSharedTaskMain_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eMain
 * entry port: eMain
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eMain_main
 * name:         eMain_main
 * global_name:  tRPCSharedTaskMain_eMain_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eMain_main(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
