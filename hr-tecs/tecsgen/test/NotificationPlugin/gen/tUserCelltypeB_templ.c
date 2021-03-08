/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tUserCelltypeB_template.c => src/tUserCelltypeB.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * dummyToMakeSureCBCreated int              ATTR_dummyToMakeSureCBCreated
 * dummyToMakeSureINITBCreated int              VAR_dummyToMakeSureINITBCreated
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tUserCelltypeB_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eiHandlerBody1
 * entry port: eiHandlerBody1
 * signature:  siHandlerBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiHandlerBody1_main
 * name:         eiHandlerBody1_main
 * global_name:  tUserCelltypeB_eiHandlerBody1_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiHandlerBody1_main(CELLIDX idx)
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

/* #[<ENTRY_PORT>]# eiHandlerBody2
 * entry port: eiHandlerBody2
 * signature:  siHandlerBody
 * context:    task
 * entry port array size:  NEP_eiHandlerBody2
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiHandlerBody2_main
 * name:         eiHandlerBody2_main
 * global_name:  tUserCelltypeB_eiHandlerBody2_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiHandlerBody2_main(CELLIDX idx, int_t subscript)
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

/* #[<ENTRY_PORT>]# eiHandlerBody3
 * entry port: eiHandlerBody3
 * signature:  siHandlerBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiHandlerBody3_main
 * name:         eiHandlerBody3_main
 * global_name:  tUserCelltypeB_eiHandlerBody3_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiHandlerBody3_main(CELLIDX idx)
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

/* #[<ENTRY_PORT>]# eiHandlerBody4
 * entry port: eiHandlerBody4
 * signature:  siHandlerBody
 * context:    task
 * entry port array size:  NEP_eiHandlerBody4
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiHandlerBody4_main
 * name:         eiHandlerBody4_main
 * global_name:  tUserCelltypeB_eiHandlerBody4_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiHandlerBody4_main(CELLIDX idx, int_t subscript)
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
