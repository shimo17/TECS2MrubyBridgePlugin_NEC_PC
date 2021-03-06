/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tDev_template.c => src/tDev.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cCB signature: sSigCB context:task
 *   ER             cCB_Send( int8_t* buf, int32_t len );
 *   ER             cCB_Receive( int8_t** buf, int32_t* len );
 * require port: signature:sSysLog context:task
 *   ER             write( uint_t prio, const SYSLOG* p_syslog );
 *   ER_UINT        read( SYSLOG* p_syslog );
 *   ER             mask( uint_t logmask, uint_t lowmask );
 *   ER             refer( T_SYSLOG_RLOG* pk_rlog );
 * allocator port for call port:eDev func:Send param: buf
 *   ER             eDev_Send_buf_alloc( int32_t size, void** p );
 *   ER             eDev_Send_buf_dealloc( const void* p );
 * allocator port for call port:eDev func:Receive param: buf
 *   ER             eDev_Receive_buf_alloc( int32_t size, void** p );
 *   ER             eDev_Receive_buf_dealloc( const void* p );
 * allocator port for call port:cCB func:Send param: buf
 *   ER             cCB_Send_buf_alloc( int32_t size, void** p );
 *   ER             cCB_Send_buf_dealloc( const void* p );
 * allocator port for call port:cCB func:Receive param: buf
 *   ER             cCB_Receive_buf_alloc( int32_t size, void** p );
 *   ER             cCB_Receive_buf_dealloc( const void* p );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tDev_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eDev
 * entry port: eDev
 * signature:  sSigDev
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eDev_Send
 * name:         eDev_Send
 * global_name:  tDev_eDev_Send
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eDev_Send(CELLIDX idx, int8_t* buf, int32_t len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDev_Receive
 * name:         eDev_Receive
 * global_name:  tDev_eDev_Receive
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eDev_Receive(CELLIDX idx, int8_t** buf, int32_t* len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
