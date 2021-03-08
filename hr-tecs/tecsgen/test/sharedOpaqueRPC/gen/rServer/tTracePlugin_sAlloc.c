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
 * call port: cCall signature: sAlloc context:task
 *   ER             cCall_alloc( int32_t size, void** ptr );
 *   ER             cCall_dealloc( const void* ptr );
 *   ER             cCall_printStatistics( );
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
#include "tTracePlugin_sAlloc_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eThroughEntry
 * entry port: eThroughEntry
 * signature:  sAlloc
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eThroughEntry_alloc
 * name:         eThroughEntry_alloc
 * global_name:  tTracePlugin_sAlloc_eThroughEntry_alloc
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_alloc(CELLIDX idx, int32_t size, void** ptr)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sAlloc_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sAlloc_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: CAlloc.eAlloc.alloc calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(size) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t size = %ld;", (long)size );
    else
    	syslog( LOG_INFO, "    [IN]int32_t size = %d;", size );
	retval = cCall_alloc( size, ptr );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: CAlloc.eAlloc.alloc", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_dealloc
 * name:         eThroughEntry_dealloc
 * global_name:  tTracePlugin_sAlloc_eThroughEntry_dealloc
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_dealloc(CELLIDX idx, const void* ptr)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sAlloc_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sAlloc_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: CAlloc.eAlloc.dealloc calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_dealloc( ptr );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: CAlloc.eAlloc.dealloc", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_printStatistics
 * name:         eThroughEntry_printStatistics
 * global_name:  tTracePlugin_sAlloc_eThroughEntry_printStatistics
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_printStatistics(CELLIDX idx)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sAlloc_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sAlloc_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: CAlloc.eAlloc.printStatistics calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_printStatistics( );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: CAlloc.eAlloc.printStatistics", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
