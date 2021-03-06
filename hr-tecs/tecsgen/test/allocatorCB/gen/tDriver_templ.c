/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tDriver_template.c => src/tDriver.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cDev signature: sSigDev context:task
 *   ER             cDev_Send( int8_t* buf, int32_t len );
 *   ER             cDev_Receive( int8_t** buf, int32_t* len );
 * require port: signature:sSysLog context:task
 *   ER             write( uint_t prio, const SYSLOG* p_syslog );
 *   ER_UINT        read( SYSLOG* p_syslog );
 *   ER             mask( uint_t logmask, uint_t lowmask );
 *   ER             refer( T_SYSLOG_RLOG* pk_rlog );
 * allocator port for call port:eCB func:Send param: buf
 *   ER             eCB_Send_buf_alloc( int32_t size, void** p );
 *   ER             eCB_Send_buf_dealloc( const void* p );
 * allocator port for call port:eCB func:Receive param: buf
 *   ER             eCB_Receive_buf_alloc( int32_t size, void** p );
 *   ER             eCB_Receive_buf_dealloc( const void* p );
 * allocator port for call port:cDev func:Send param: buf
 *   ER             cDev_Send_buf_alloc( int32_t size, void** p );
 *   ER             cDev_Send_buf_dealloc( const void* p );
 * allocator port for call port:cDev func:Receive param: buf
 *   ER             cDev_Receive_buf_alloc( int32_t size, void** p );
 *   ER             cDev_Receive_buf_dealloc( const void* p );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tDriver_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eCB
 * entry port: eCB
 * signature:  sSigCB
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eCB_Send
 * name:         eCB_Send
 * global_name:  tDriver_eCB_Send
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eCB_Send(CELLIDX idx, int8_t* buf, int32_t len)
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

/* #[<ENTRY_FUNC>]# eCB_Receive
 * name:         eCB_Receive
 * global_name:  tDriver_eCB_Receive
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eCB_Receive(CELLIDX idx, int8_t** buf, int32_t* len)
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

/* #[<ENTRY_PORT>]# eTaskBody
 * entry port: eTaskBody
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTaskBody_main
 * name:         eTaskBody_main
 * global_name:  tDriver_eTaskBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTaskBody_main(CELLIDX idx)
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
