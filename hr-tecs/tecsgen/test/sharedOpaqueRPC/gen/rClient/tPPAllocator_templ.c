/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tPPAllocator_template.c => src/tPPAllocator.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * heapSize         uint32_t         ATTR_heapSize   
 * buf              int8_t*          VAR_buf         
 * allocatedSize    uint32_t         VAR_allocatedSize
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tPPAllocator_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# ePPAllocator
 * entry port: ePPAllocator
 * signature:  sPPAllocator
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# ePPAllocator_alloc
 * name:         ePPAllocator_alloc
 * global_name:  tPPAllocator_ePPAllocator_alloc
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
ePPAllocator_alloc(CELLIDX idx, uint32_t size, void** ptr)
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

/* #[<ENTRY_FUNC>]# ePPAllocator_dealloc
 * name:         ePPAllocator_dealloc
 * global_name:  tPPAllocator_ePPAllocator_dealloc
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
ePPAllocator_dealloc(CELLIDX idx, const void* ptr)
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

/* #[<ENTRY_FUNC>]# ePPAllocator_dealloc_all
 * name:         ePPAllocator_dealloc_all
 * global_name:  tPPAllocator_ePPAllocator_dealloc_all
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
ePPAllocator_dealloc_all(CELLIDX idx)
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
