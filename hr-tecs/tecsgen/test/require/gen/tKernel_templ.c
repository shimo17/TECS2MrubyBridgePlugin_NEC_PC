/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tKernel_template.c => src/tKernel.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tKernel_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eSc
 * entry port: eSc
 * signature:  sSyscall
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSc_func
 * name:         eSc_func
 * global_name:  tKernel_eSc_func
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSc_func()
{
}

/* #[<ENTRY_PORT>]# eSc2
 * entry port: eSc2
 * signature:  sSyscall2
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSc2_func2
 * name:         eSc2_func2
 * global_name:  tKernel_eSc2_func2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSc2_func2()
{
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
