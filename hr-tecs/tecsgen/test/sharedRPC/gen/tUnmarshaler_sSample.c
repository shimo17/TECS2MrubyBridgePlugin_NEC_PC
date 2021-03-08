/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cServerCall signature: sSample context:task
 *   ER             cServerCall_sayHello( int32_t times );
 *   ER             cServerCall_howAreYou( char_t* buf, int32_t len );
 *   ER             cServerCall_giftToYou( char_t* buf, int32_t len );
 *   ER             cServerCall_returnGiftFromYou( int16_t** buf, int32_t* len );
 *   ER             cServerCall_oneway( const int8_t* buf, int16_t len );
 *   void           cServerCall_shutdown( );
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
 * allocator port for call port:cServerCall func:giftToYou param: buf
 *   ER             cServerCall_giftToYou_buf_alloc( int32_t size, void** p );
 *   ER             cServerCall_giftToYou_buf_dealloc( const void* ptr );
 * allocator port for call port:cServerCall func:returnGiftFromYou param: buf
 *   ER             cServerCall_returnGiftFromYou_buf_alloc( int32_t size, void** p );
 *   ER             cServerCall_returnGiftFromYou_buf_dealloc( const void* ptr );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tUnmarshaler_sSample_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* アンマーシャラ関数のプロトタイプ宣言 */
static ER  tTransparentUnmarshaler_sSample_sayHello();	/* func_id: 1 */
static ER  tTransparentUnmarshaler_sSample_howAreYou();	/* func_id: 2 */
static ER  tTransparentUnmarshaler_sSample_giftToYou();	/* func_id: 3 */
static ER  tTransparentUnmarshaler_sSample_returnGiftFromYou();	/* func_id: 4 */
static ER  tTransparentUnmarshaler_sSample_oneway();	/* func_id: 5 */
static ER  tTransparentUnmarshaler_sSample_shutdown();	/* func_id: 6 */

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eUnmarshalAndCallFunction
 * entry port: eUnmarshalAndCallFunction
 * signature:  sUnmarshalerMain
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eUnmarshalAndCallFunction_main
 * name:         eUnmarshalAndCallFunction_main
 * global_name:  tUnmarshaler_sSample_eUnmarshalAndCallFunction_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eUnmarshalAndCallFunction_main(CELLIDX idx)
{

    int16_t   func_id_;
    ER        ercd_;

    tUnmarshaler_sSample_CB *p_cellcb;

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
    case 1:       /*** sayHello ***/ 
        if( tTransparentUnmarshaler_sSample_sayHello() != E_OK )
            goto error_reset;
        break;
    case 2:       /*** howAreYou ***/ 
        if( tTransparentUnmarshaler_sSample_howAreYou() != E_OK )
            goto error_reset;
        break;
    case 3:       /*** giftToYou ***/ 
        if( tTransparentUnmarshaler_sSample_giftToYou() != E_OK )
            goto error_reset;
        break;
    case 4:       /*** returnGiftFromYou ***/ 
        if( tTransparentUnmarshaler_sSample_returnGiftFromYou() != E_OK )
            goto error_reset;
        break;
    case 5:       /*** oneway ***/ 
        if( tTransparentUnmarshaler_sSample_oneway() != E_OK )
            goto error_reset;
        break;
    case 6:       /*** shutdown ***/ 
        if( tTransparentUnmarshaler_sSample_shutdown() != E_OK )
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
 * name:    sayHello
 * func_id: 1 
 */
static ER
tTransparentUnmarshaler_sSample_sayHello()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    int32_t      times;
    ER           *retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt32( &(times) ) ) != E_OK )
        goto error_reset;
        if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(retval_) ) ) != E_OK )
            goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    *retval_ = cServerCall_sayHello( times );
    /* 関数処理の終了を通知 */
    if( ( ercd_ = cEventflag_set( 0x01 ) ) != E_OK ){
      goto error_reset;
    }
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    howAreYou
 * func_id: 2 
 */
static ER
tTransparentUnmarshaler_sSample_howAreYou()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    char_t*      buf;
    int32_t      len;
    ER           *retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(buf) ) ) != E_OK )
        goto error_reset;
        if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(retval_) ) ) != E_OK )
            goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    *retval_ = cServerCall_howAreYou( buf, len );
    /* 関数処理の終了を通知 */
    if( ( ercd_ = cEventflag_set( 0x01 ) ) != E_OK ){
      goto error_reset;
    }
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    giftToYou
 * func_id: 3 
 */
static ER
tTransparentUnmarshaler_sSample_giftToYou()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    char_t*      buf;
    int32_t      len;
    ER           *retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(buf) ) ) != E_OK )
        goto error_reset;
        if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(retval_) ) ) != E_OK )
            goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    *retval_ = cServerCall_giftToYou( buf, len );
    /* 関数処理の終了を通知 */
    if( ( ercd_ = cEventflag_set( 0x01 ) ) != E_OK ){
      goto error_reset;
    }
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    returnGiftFromYou
 * func_id: 4 
 */
static ER
tTransparentUnmarshaler_sSample_returnGiftFromYou()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    int16_t**    buf;
    int32_t*     len;
    ER           *retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(len) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(buf) ) ) != E_OK )
        goto error_reset;
        if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(retval_) ) ) != E_OK )
            goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    *retval_ = cServerCall_returnGiftFromYou( buf, len );
    /* 関数処理の終了を通知 */
    if( ( ercd_ = cEventflag_set( 0x01 ) ) != E_OK ){
      goto error_reset;
    }
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    oneway
 * func_id: 5 
 */
static ER
tTransparentUnmarshaler_sSample_oneway()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    int8_t*      buf;
    int16_t      len;
    ER           retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt16( &(len) ) ) != E_OK )
        goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		if((ercd_=cPPAllocator_alloc(sizeof(const int8_t)*(len),(void **)&buf))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_getInt8( &(buf[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    retval_ = cServerCall_oneway( buf, len );
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    shutdown
 * func_id: 6 
 */
static ER
tTransparentUnmarshaler_sSample_shutdown()
{
	ER  ercd_;
	CELLCB  *p_cellcb;

        /* 入力引数受取 */
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    cServerCall_shutdown( );
    return E_OK;
error_reset:
    return ercd_;
}

