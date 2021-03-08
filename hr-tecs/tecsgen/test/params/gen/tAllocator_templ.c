/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tAllocator_template.c => src/tAllocator.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tAllocator_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eAlloc
 * entry port: eAlloc
 * signature:  sAllocator
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eAlloc_alloc
 * name:         eAlloc_alloc
 * global_name:  tAllocator_eAlloc_alloc
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eAlloc_alloc(int32_t size, void** m)
{
}

/* #[<ENTRY_FUNC>]# eAlloc_dealloc
 * name:         eAlloc_dealloc
 * global_name:  tAllocator_eAlloc_dealloc
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eAlloc_dealloc(const void* m)
{
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
