/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tClient_template.c => src/tClient.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cCall signature: sSignature context:task
 *   ER             cCall_func1( int32_t inval );
 *   ER             cCall_func2( int32_t* outval );
 *   ER             cCall_func3( struct tag stval );
 *   ER             cCall_func4( stTag stval, INT inval );
 *   ER             cCall_func5( stTag* stval, INT inval );
 *   ER             cCall_func6( int8_t* buf, int32_t sz );
 *   ER             cCall_func7( int8_t** buf, int32_t* sz );
 *   ER             cCall_func10( const stTag* stval, int32_t a );
 * call port: cCall2 signature: sSignature context:task
 *   ER             cCall2_func1( subscript, int32_t inval );
 *   ER             cCall2_func2( subscript, int32_t* outval );
 *   ER             cCall2_func3( subscript, struct tag stval );
 *   ER             cCall2_func4( subscript, stTag stval, INT inval );
 *   ER             cCall2_func5( subscript, stTag* stval, INT inval );
 *   ER             cCall2_func6( subscript, int8_t* buf, int32_t sz );
 *   ER             cCall2_func7( subscript, int8_t** buf, int32_t* sz );
 *   ER             cCall2_func10( subscript, const stTag* stval, int32_t a );
 *       subscript:  0...(NCP_cCall2-1)
 * allocator port for call port:cCall func:func6 param: buf
 *   ER             cCall_func6_buf_alloc( int32_t sz, void** ptr );
 *   ER             cCall_func6_buf_dealloc( const void* ptr );
 * allocator port for call port:cCall func:func7 param: buf
 *   ER             cCall_func7_buf_alloc( int32_t sz, void** ptr );
 *   ER             cCall_func7_buf_dealloc( const void* ptr );
 * allocator port for call port:cCall2 func:func6 param: buf
 *   ER             cCall2_func6_buf_alloc( subscript, int32_t sz, void** ptr );
 *   ER             cCall2_func6_buf_dealloc( subscript, const void* ptr );
 *       subscript:  0...(NCP_cCall2_func6_buf-1)
 * allocator port for call port:cCall2 func:func7 param: buf
 *   ER             cCall2_func7_buf_alloc( subscript, int32_t sz, void** ptr );
 *   ER             cCall2_func7_buf_dealloc( subscript, const void* ptr );
 *       subscript:  0...(NCP_cCall2_func7_buf-1)
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tClient_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eMain
 * entry port: eMain
 * signature:  sMain
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eMain_main
 * name:         eMain_main
 * global_name:  tClient_eMain_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eMain_main(CELLIDX idx)
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
