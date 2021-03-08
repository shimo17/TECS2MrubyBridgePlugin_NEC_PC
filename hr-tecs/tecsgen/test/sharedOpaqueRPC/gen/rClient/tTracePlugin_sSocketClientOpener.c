/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * probeName_str    char_t*          ATTR_probeName_str
 * from_str         char_t*          ATTR_from_str   
 *
 * 呼び口関数 #_TCPF_#
 * call port: cCall signature: sSocketClientOpener context:task
 *   ER             cCall_open( const char_t* serverAddr, uint16_t portNo, TMO tmo );
 *   ER             cCall_simpleOpen( TMO tmo );
 *   ER             cCall_close( TMO tmo );
 * require port: signature:sSysLog context:task
 *   ER             write( uint_t prio, const SYSLOG* p_syslog );
 *   ER_UINT        read( SYSLOG* p_syslog );
 *   ER             mask( uint_t logmask, uint_t lowmask );
 *   ER             refer( T_SYSLOG_RLOG* pk_rlog );
 * require port: signature:sKernel context:task
 *   ER             delay( RELTIM delay_time );
 *   ER             exitTask( );
 *   ER             getTime( SYSTIM* p_system_time );
 *   ER             getMicroTime( SYSUTM* p_system_micro_time );
 *   ER             exitKernel( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tTracePlugin_sSocketClientOpener_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eThroughEntry
 * entry port: eThroughEntry
 * signature:  sSocketClientOpener
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eThroughEntry_open
 * name:         eThroughEntry_open
 * global_name:  tTracePlugin_sSocketClientOpener_eThroughEntry_open
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_open(CELLIDX idx, const char_t* serverAddr, uint16_t portNo, TMO tmo)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSocketClientOpener_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSocketClientOpener_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: ClientChannel.eOpener.open calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(*serverAddr) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]const char_t *serverAddr = %ld;", (long)*serverAddr );
    else
    	syslog( LOG_INFO, "    [IN]const char_t *serverAddr = %d;", *serverAddr );
    if( sizeof(portNo) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]uint16_t portNo = %ld;", (long)portNo );
    else
    	syslog( LOG_INFO, "    [IN]uint16_t portNo = %d;", portNo );
    if( sizeof(tmo) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]TMO tmo = %ld;", (long)tmo );
    else
    	syslog( LOG_INFO, "    [IN]TMO tmo = %d;", tmo );
	retval = cCall_open( serverAddr, portNo, tmo );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: ClientChannel.eOpener.open", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_simpleOpen
 * name:         eThroughEntry_simpleOpen
 * global_name:  tTracePlugin_sSocketClientOpener_eThroughEntry_simpleOpen
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_simpleOpen(CELLIDX idx, TMO tmo)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSocketClientOpener_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSocketClientOpener_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: ClientChannel.eOpener.simpleOpen calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(tmo) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]TMO tmo = %ld;", (long)tmo );
    else
    	syslog( LOG_INFO, "    [IN]TMO tmo = %d;", tmo );
	retval = cCall_simpleOpen( tmo );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: ClientChannel.eOpener.simpleOpen", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_close
 * name:         eThroughEntry_close
 * global_name:  tTracePlugin_sSocketClientOpener_eThroughEntry_close
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_close(CELLIDX idx, TMO tmo)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSocketClientOpener_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSocketClientOpener_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: ClientChannel.eOpener.close calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(tmo) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]TMO tmo = %ld;", (long)tmo );
    else
    	syslog( LOG_INFO, "    [IN]TMO tmo = %d;", tmo );
	retval = cCall_close( tmo );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: ClientChannel.eOpener.close", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
