/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tCt2_template.c => src/tCt2.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cCall signature: sSig context:task
 *   ER             cCall_func( subscript, int32_t* a );
 *   ER             cCall_func2( subscript, int8_t* buf, int32_t sz );
 *       subscript:  0...(NCP_cCall-1)
 * allocator port for call port:cCall func:func param: a
 *   ER             cCall_func_a_alloc( subscript, int32_t sz, void** p );
 *   ER             cCall_func_a_dealloc( subscript, const void* p );
 *       subscript:  0...(NCP_cCall_func_a-1)
 * allocator port for call port:cCall func:func2 param: buf
 *   ER             cCall_func2_buf_alloc( subscript, int32_t sz, void** p );
 *   ER             cCall_func2_buf_dealloc( subscript, const void* p );
 *       subscript:  0...(NCP_cCall_func2_buf-1)
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tCt2_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
