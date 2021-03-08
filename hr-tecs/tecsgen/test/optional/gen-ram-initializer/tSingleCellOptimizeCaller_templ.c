/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tSingleCellOptimizeCaller_template.c => src/tSingleCellOptimizeCaller.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cCall signature: sSig context:task optional:true
 *   bool_t     is_cCall_joined()                     check if joined
 *   void           cCall_func( );
 *   int32_t        cCall_func2( int32_t arg );
 *   struct tagST   cCall_func3( struct tagST a );
 * call port: cWhite signature: sSig context:task optional:true
 *   bool_t     is_cWhite_joined(int subscript)        check if joined
 *   void           cWhite_func( subscript );
 *   int32_t        cWhite_func2( subscript, int32_t arg );
 *   struct tagST   cWhite_func3( subscript, struct tagST a );
 *       subscript:  0...(NCP_cWhite-1)
 * call port: cBlack signature: sSig context:task optional:true
 *   bool_t     is_cBlack_joined(int subscript)        check if joined
 *   void           cBlack_func( subscript );
 *   int32_t        cBlack_func2( subscript, int32_t arg );
 *   struct tagST   cBlack_func3( subscript, struct tagST a );
 *       subscript:  0...(NCP_cBlack-1)
 * call port: cBrown signature: sSig context:task optional:true
 *   bool_t     is_cBrown_joined(int subscript)        check if joined
 *   void           cBrown_func( subscript );
 *   int32_t        cBrown_func2( subscript, int32_t arg );
 *   struct tagST   cBrown_func3( subscript, struct tagST a );
 *       subscript:  0...(NCP_cBrown-1)
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tSingleCellOptimizeCaller_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eEnt
 * entry port: eEnt
 * signature:  sSig
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEnt_func
 * name:         eEnt_func
 * global_name:  tSingleCellOptimizeCaller_eEnt_func
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEnt_func(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eEnt_func2
 * name:         eEnt_func2
 * global_name:  tSingleCellOptimizeCaller_eEnt_func2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int32_t
eEnt_func2(CELLIDX idx, int32_t arg)
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

/* #[<ENTRY_FUNC>]# eEnt_func3
 * name:         eEnt_func3
 * global_name:  tSingleCellOptimizeCaller_eEnt_func3
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
struct tagST
eEnt_func3(CELLIDX idx, struct tagST a)
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
