/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tAppl_template.c => src/tAppl.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * a                int32_t          ATTR_a          
 * b                int16_t          VAR_b           
 *
 * 呼び口関数 #_TCPF_#
 * call port: ka signature: TOPPERS_sSyscall context:task
 *   ER_ID          ka_cre_sem( );
 *   ER             ka_wai_sem( ID id );
 *   ER             ka_rel_sem( ID id );
 *   ER             ka_del_sem( ID id );
 *   ER             ka_sendData( int8_t* data, int32_t sz );
 * allocator port for call port:ka func:sendData param: data
 *   ER             ka_sendData_data_alloc( int32_t len, void** buf );
 *   ER             ka_sendData_data_dealloc( const void* buf );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "TOPPERS_tAppl_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
