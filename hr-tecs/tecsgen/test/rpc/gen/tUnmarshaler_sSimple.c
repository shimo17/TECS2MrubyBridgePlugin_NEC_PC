/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cServerCall signature: sSimple context:task
 *   ER             cServerCall_onewayPtr( const uint32_t* in );
 *   ER             cServerCall_onewayArray( const uint32_t* in, int32_t len );
 *   ER             cServerCall_onewayDoubleArray( const int32_t* in, int32_t len, const int32_t* in2, int32_t len2 );
 *   ER             cServerCall_onewayStringArray( const char_t** in, int32_t len );
 *   ER             cServerCall_onewayString( const char_t* in, int32_t len );
 *   ER             cServerCall_onewayStruct( const struct stA* a );
 *   ER             cServerCall_onewayStruct2( const struct stA* a, int32_t len );
 *   ER             cServerCall_onewayInArray( int8_t array0[8] );
 *   ER             cServerCall_onewayInArray2( const int8_t(* array1)[8] );
 *   ER             cServerCall_onewayNulable( const int8_t(* array)[3] );
 *   void           cServerCall_exit( );
 * call port: cTDR signature: sTDR context:task
 *   ER             cTDR_reset( );
 *   ER             cTDR_sendSOP( bool_t b_client );
 *   ER             cTDR_receiveSOP( bool_t b_client );
 *   ER             cTDR_sendEOP( bool_t b_continue );
 *   ER             cTDR_receiveEOP( bool_t b_continue );
 *   ER             cTDR_putInt8( int8_t in );
 *   ER             cTDR_putInt16( int16_t in );
 *   ER             cTDR_putInt32( int32_t in );
 *   ER             cTDR_putInt64( int64_t in );
 *   ER             cTDR_putInt128( int128_t in );
 *   ER             cTDR_getInt8( int8_t* out );
 *   ER             cTDR_getInt16( int16_t* out );
 *   ER             cTDR_getInt32( int32_t* out );
 *   ER             cTDR_getInt64( int64_t* out );
 *   ER             cTDR_getInt128( int128_t* out );
 *   ER             cTDR_putUInt8( uint8_t in );
 *   ER             cTDR_putUInt16( uint16_t in );
 *   ER             cTDR_putUInt32( uint32_t in );
 *   ER             cTDR_putUInt64( uint64_t in );
 *   ER             cTDR_putUInt128( uint128_t in );
 *   ER             cTDR_getUInt8( uint8_t* out );
 *   ER             cTDR_getUInt16( uint16_t* out );
 *   ER             cTDR_getUInt32( uint32_t* out );
 *   ER             cTDR_getUInt64( uint64_t* out );
 *   ER             cTDR_getUInt128( uint128_t* out );
 *   ER             cTDR_putChar( char_t in );
 *   ER             cTDR_getChar( char_t* out );
 *   ER             cTDR_putBool( bool_t in );
 *   ER             cTDR_getBool( bool_t* out );
 *   ER             cTDR_putFloat32( float32_t in );
 *   ER             cTDR_putDouble64( double64_t in );
 *   ER             cTDR_getFloat32( float32_t* out );
 *   ER             cTDR_getDouble64( double64_t* out );
 *   ER             cTDR_putSChar( schar_t in );
 *   ER             cTDR_putShort( short_t in );
 *   ER             cTDR_putInt( int_t in );
 *   ER             cTDR_putLong( long_t in );
 *   ER             cTDR_getSChar( schar_t* out );
 *   ER             cTDR_getShort( short_t* out );
 *   ER             cTDR_getInt( int_t* out );
 *   ER             cTDR_getLong( long_t* out );
 *   ER             cTDR_putUChar( uchar_t in );
 *   ER             cTDR_putUShort( ushort_t in );
 *   ER             cTDR_putUInt( uint_t in );
 *   ER             cTDR_putULong( ulong_t in );
 *   ER             cTDR_getUChar( unsigned char* out );
 *   ER             cTDR_getUShort( ushort_t* out );
 *   ER             cTDR_getUInt( uint_t* out );
 *   ER             cTDR_getULong( ulong_t* out );
 *   ER             cTDR_putIntptr( const intptr_t ptr );
 *   ER             cTDR_getIntptr( intptr_t* ptr );
 * call port: cEventflag signature: sEventflag context:task
 *   ER             cEventflag_set( FLGPTN set_pattern );
 *   ER             cEventflag_clear( FLGPTN clear_pattern );
 *   ER             cEventflag_wait( FLGPTN wait_pattern, MODE wait_flag_mode, FLGPTN* p_flag_pattern );
 *   ER             cEventflag_waitPolling( FLGPTN wait_pattern, MODE wait_flag_mode, FLGPTN* p_flag_pattern );
 *   ER             cEventflag_waitTimeout( FLGPTN wait_pattern, MODE wait_flag_mode, FLGPTN* p_flag_pattern, TMO timeout );
 *   ER             cEventflag_initialize( );
 *   ER             cEventflag_refer( T_RFLG* pk_eventflag_status );
 * call port: cPPAllocator signature: sPPAllocator context:task
 *   ER             cPPAllocator_alloc( uint32_t size, void** ptr );
 *   ER             cPPAllocator_dealloc( const void* ptr );
 *   ER             cPPAllocator_dealloc_all( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tUnmarshaler_sSimple_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* アンマーシャラ関数のプロトタイプ宣言 */
static ER  tTransparentUnmarshaler_sSimple_onewayPtr();	/* func_id: 1 */
static ER  tTransparentUnmarshaler_sSimple_onewayArray();	/* func_id: 2 */
static ER  tTransparentUnmarshaler_sSimple_onewayDoubleArray();	/* func_id: 3 */
static ER  tTransparentUnmarshaler_sSimple_onewayStringArray();	/* func_id: 4 */
static ER  tTransparentUnmarshaler_sSimple_onewayString();	/* func_id: 5 */
static ER  tTransparentUnmarshaler_sSimple_onewayStruct();	/* func_id: 6 */
static ER  tTransparentUnmarshaler_sSimple_onewayStruct2();	/* func_id: 7 */
static ER  tTransparentUnmarshaler_sSimple_onewayInArray();	/* func_id: 8 */
static ER  tTransparentUnmarshaler_sSimple_onewayInArray2();	/* func_id: 9 */
static ER  tTransparentUnmarshaler_sSimple_onewayNulable();	/* func_id: 10 */
static ER  tTransparentUnmarshaler_sSimple_exit();	/* func_id: 11 */

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eUnmarshalAndCallFunction
 * entry port: eUnmarshalAndCallFunction
 * signature:  sUnmarshalerMain
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eUnmarshalAndCallFunction_main
 * name:         eUnmarshalAndCallFunction_main
 * global_name:  tUnmarshaler_sSimple_eUnmarshalAndCallFunction_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eUnmarshalAndCallFunction_main(CELLIDX idx)
{

    int16_t   func_id_;
    ER        ercd_;

    tUnmarshaler_sSimple_CB *p_cellcb;

    if( VALID_IDX( idx ) ){
        p_cellcb = GET_CELLCB(idx);
    }else{
        /* エラー処理コードをここに記述 */
    }

    /* SOPのチェック */
    if( (ercd_=cTDR_receiveSOP( false )) != E_OK )
        goto error_reset;
    /* func_id の取得 */
    if( (ercd_=cTDR_getInt16( &func_id_ )) != E_OK )
        goto error_reset;

#ifdef RPC_DEBUG
    syslog(LOG_INFO, "unmarshaler task: func_id: %d", func_id_ );
#endif
    switch( func_id_ ){
    case 1:       /*** onewayPtr ***/ 
        if( tTransparentUnmarshaler_sSimple_onewayPtr() != E_OK )
            goto error_reset;
        break;
    case 2:       /*** onewayArray ***/ 
        if( tTransparentUnmarshaler_sSimple_onewayArray() != E_OK )
            goto error_reset;
        break;
    case 3:       /*** onewayDoubleArray ***/ 
        if( tTransparentUnmarshaler_sSimple_onewayDoubleArray() != E_OK )
            goto error_reset;
        break;
    case 4:       /*** onewayStringArray ***/ 
        if( tTransparentUnmarshaler_sSimple_onewayStringArray() != E_OK )
            goto error_reset;
        break;
    case 5:       /*** onewayString ***/ 
        if( tTransparentUnmarshaler_sSimple_onewayString() != E_OK )
            goto error_reset;
        break;
    case 6:       /*** onewayStruct ***/ 
        if( tTransparentUnmarshaler_sSimple_onewayStruct() != E_OK )
            goto error_reset;
        break;
    case 7:       /*** onewayStruct2 ***/ 
        if( tTransparentUnmarshaler_sSimple_onewayStruct2() != E_OK )
            goto error_reset;
        break;
    case 8:       /*** onewayInArray ***/ 
        if( tTransparentUnmarshaler_sSimple_onewayInArray() != E_OK )
            goto error_reset;
        break;
    case 9:       /*** onewayInArray2 ***/ 
        if( tTransparentUnmarshaler_sSimple_onewayInArray2() != E_OK )
            goto error_reset;
        break;
    case 10:       /*** onewayNulable ***/ 
        if( tTransparentUnmarshaler_sSimple_onewayNulable() != E_OK )
            goto error_reset;
        break;
    case 11:       /*** exit ***/ 
        if( tTransparentUnmarshaler_sSimple_exit() != E_OK )
            goto error_reset;
        break;
    default:
        syslog(LOG_INFO, "unmarshaler task: ERROR: unknown func_id: %d", func_id_ );
    };
    /* PPAllocator のすべてを解放 */
    cPPAllocator_dealloc_all();
    return;

error_reset:
    if( ercd_ != ERCD( E_RPC, E_RESET ) )
        (void)cTDR_reset();
    /* PPAllocator のすべてを解放 */
    cPPAllocator_dealloc_all();
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/

/*** アンマーシャラ関数 ***/

/*
 * name:    onewayPtr
 * func_id: 1 
 */
static ER
tTransparentUnmarshaler_sSimple_onewayPtr()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    uint32_t*    in;
    ER           retval_;

        /* 入力引数受取 */
	if((ercd_=cPPAllocator_alloc(sizeof(const uint32_t),(void **)&in))!=E_OK)	/* GenParamCopy 10 */
		 goto error_reset;
	if( ( ercd_ = cTDR_getUInt32( &((*in)) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    retval_ = cServerCall_onewayPtr( in );
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    onewayArray
 * func_id: 2 
 */
static ER
tTransparentUnmarshaler_sSimple_onewayArray()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    uint32_t*    in;
    int32_t      len;
    ER           retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )
        goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		if((ercd_=cPPAllocator_alloc(sizeof(const uint32_t)*(len),(void **)&in))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_getUInt32( &(in[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    retval_ = cServerCall_onewayArray( in, len );
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    onewayDoubleArray
 * func_id: 3 
 */
static ER
tTransparentUnmarshaler_sSimple_onewayDoubleArray()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    int32_t*     in;
    int32_t      len;
    int32_t*     in2;
    int32_t      len2;
    ER           retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )
        goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		if((ercd_=cPPAllocator_alloc(sizeof(const int32_t)*(len),(void **)&in))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_getInt32( &(in[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		if((ercd_=cPPAllocator_alloc(sizeof(const int32_t)*(len),(void **)&in2))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_getInt32( &(in2[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
    if( ( ercd_ = cTDR_getInt32( &(len2) ) ) != E_OK )
        goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    retval_ = cServerCall_onewayDoubleArray( in, len, in2, len2 );
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    onewayStringArray
 * func_id: 4 
 */
static ER
tTransparentUnmarshaler_sSimple_onewayStringArray()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    char_t**     in;
    int32_t      len;
    ER           retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )
        goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		if((ercd_=cPPAllocator_alloc(sizeof(const char_t*)*(len),(void **)&in))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				if( ( ercd_ = cTDR_getInt32( &(length__3) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if((ercd_=cPPAllocator_alloc(sizeof(const char_t)*(length__3),(void **)&in[i__1]))!=E_OK)	/* GenParamCopy 8 */
					goto error_reset;
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_getChar( &(in[i__1][i__3]) ) ) != E_OK )	/* GenParamCopy 2 */
						goto error_reset;
				}
			}
		}
	}
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    retval_ = cServerCall_onewayStringArray( in, len );
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    onewayString
 * func_id: 5 
 */
static ER
tTransparentUnmarshaler_sSimple_onewayString()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    char_t*      in;
    int32_t      len;
    ER           retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )
        goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		if( ( ercd_ = cTDR_getInt32( &(length__1) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
		if((ercd_=cPPAllocator_alloc(sizeof(const char_t)*(length__1),(void **)&in))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_getChar( &(in[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    retval_ = cServerCall_onewayString( in, len );
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    onewayStruct
 * func_id: 6 
 */
static ER
tTransparentUnmarshaler_sSimple_onewayStruct()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    struct stA*  a;
    ER           retval_;

        /* 入力引数受取 */
	if((ercd_=cPPAllocator_alloc(sizeof(const struct stA),(void **)&a))!=E_OK)	/* GenParamCopy 10 */
		 goto error_reset;
	if( ( ercd_ = cTDR_getInt32( &((*a).len) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( ( ercd_ = cTDR_getInt32( &((*a).a) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( ( ercd_ = cTDR_getInt32( &((*a).b) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		if( ( ercd_ = cTDR_getInt32( &(length__1) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
		if((ercd_=cPPAllocator_alloc(sizeof(char_t)*(length__1),(void **)&(*a).msg))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_getChar( &((*a).msg[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    retval_ = cServerCall_onewayStruct( a );
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    onewayStruct2
 * func_id: 7 
 */
static ER
tTransparentUnmarshaler_sSimple_onewayStruct2()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    struct stA*  a;
    int32_t      len;
    ER           retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )
        goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		if((ercd_=cPPAllocator_alloc(sizeof(const struct stA)*(len),(void **)&a))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_getInt32( &(a[i__1].len) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt32( &(a[i__1].a) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt32( &(a[i__1].b) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				if( ( ercd_ = cTDR_getInt32( &(length__3) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if((ercd_=cPPAllocator_alloc(sizeof(char_t)*(length__3),(void **)&a[i__1].msg))!=E_OK)	/* GenParamCopy 8 */
					goto error_reset;
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_getChar( &(a[i__1].msg[i__3]) ) ) != E_OK )	/* GenParamCopy 2 */
						goto error_reset;
				}
			}
		}
	}
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    retval_ = cServerCall_onewayStruct2( a, len );
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    onewayInArray
 * func_id: 8 
 */
static ER
tTransparentUnmarshaler_sSimple_onewayInArray()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    int8_t       (*array0);
    ER           retval_;

        /* 入力引数受取 */
	if((ercd_=cPPAllocator_alloc(sizeof(int8_t)*(ArraySize),(void **)&array0))!=E_OK)	/* GenParamCopy 1 */
		goto error_reset;
	{	/* GenParamCopy 11 */
		int32_t  i__1, length__1 = ArraySize;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			if( ( ercd_ = cTDR_getInt8( &(array0[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    retval_ = cServerCall_onewayInArray( array0 );
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    onewayInArray2
 * func_id: 9 
 */
static ER
tTransparentUnmarshaler_sSimple_onewayInArray2()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    int8_t(*     array1)[8];
    ER           retval_;

        /* 入力引数受取 */
	if((ercd_=cPPAllocator_alloc(sizeof(const int8_t[8]),(void **)&array1))!=E_OK)	/* GenParamCopy 10 */
		 goto error_reset;
	{	/* GenParamCopy 11 */
		int32_t  i__1, length__1 = ArraySize;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			if( ( ercd_ = cTDR_getInt8( &((*array1)[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    retval_ = cServerCall_onewayInArray2( array1 );
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    onewayNulable
 * func_id: 10 
 */
static ER
tTransparentUnmarshaler_sSimple_onewayNulable()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    int8_t(*     array)[3];
    ER           retval_;

        /* 入力引数受取 */
	{
		int8_t  b_null_;
		if((ercd_=cTDR_getInt8( &b_null_ )) != E_OK )	/* GenParamCopy Null 20 */
			 goto error_reset;
		if( ! b_null_ ){
			if((ercd_=cPPAllocator_alloc(sizeof(const int8_t[3]),(void **)&array))!=E_OK)	/* GenParamCopy 10 */
				 goto error_reset;
			{	/* GenParamCopy 11 */
				int32_t  i__3, length__3 = 3;
				for( i__3 = 0; i__3 < length__3; i__3++ ){
					if( ( ercd_ = cTDR_getInt8( &((*array)[i__3]) ) ) != E_OK )	/* GenParamCopy 2 */
						goto error_reset;
				}
			}

		} else { /* null  GenParamCopy Null 51 */
			array = NULL;
		}  /* ! b_null_ */
	}	/* GenParamCopy Null 54 */
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    retval_ = cServerCall_onewayNulable( array );
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    exit
 * func_id: 11 
 */
static ER
tTransparentUnmarshaler_sSimple_exit()
{
	ER  ercd_;
	CELLCB  *p_cellcb;

        /* 入力引数受取 */
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    cServerCall_exit( );
    return E_OK;
error_reset:
    return ercd_;
}

