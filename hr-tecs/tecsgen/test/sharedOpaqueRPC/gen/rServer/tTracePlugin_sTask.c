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
 * call port: cCall signature: sTask context:task
 *   ER             cCall_activate( );
 *   ER             cCall_suspend( );
 *   ER             cCall_resume( );
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
#include "tTracePlugin_sTask_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eThroughEntry
 * entry port: eThroughEntry
 * signature:  sTask
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eThroughEntry_activate
 * name:         eThroughEntry_activate
 * global_name:  tTracePlugin_sTask_eThroughEntry_activate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_activate(CELLIDX idx)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sTask_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sTask_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Task1.eTask.activate calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_activate( );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Task1.eTask.activate", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_suspend
 * name:         eThroughEntry_suspend
 * global_name:  tTracePlugin_sTask_eThroughEntry_suspend
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_suspend(CELLIDX idx)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sTask_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sTask_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Task1.eTask.suspend calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_suspend( );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Task1.eTask.suspend", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_resume
 * name:         eThroughEntry_resume
 * global_name:  tTracePlugin_sTask_eThroughEntry_resume
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_resume(CELLIDX idx)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sTask_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sTask_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Task1.eTask.resume calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_resume( );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Task1.eTask.resume", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
