/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tMainArray_template.c => src/tMainArray.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cDefaultTalker signature: sHello context:task
 *   void           cDefaultTalker_hello( );
 *   [ref_desc]
 *      Descriptor( sHello ) cDefaultTalker_refer_to_descriptor();
 *      Descriptor( sHello ) cDefaultTalker_ref_desc()      (same as above; abbreviated version);
 * call port: cTalker signature: sHello context:task
 *   void           cTalker_hello( subscript );
 *       subscript:  0...(NCP_cTalker-1)
 *   [dynamic]
 *      void           cTalker_set_descriptor( int_t subscript, Descriptor( sHello ) desc );
 * call port: cTalker2 signature: sHello context:task optional:true
 *   bool_t     is_cTalker2_joined(int subscript)        check if joined
 *   void           cTalker2_hello( subscript );
 *       subscript:  0...(NCP_cTalker2-1)
 *   [dynamic, optional]
 *      void           cTalker2_set_descriptor( int_t subscript, Descriptor( sHello ) desc );
 *      void           cTalker2_unjoin(  int_t subscript );
 * call port: cTalkerSelector signature: sTalkerSelector context:task
 *   void           cTalkerSelector_getTalker( Descriptor( sHello )* talker, int_t i );
 *   void           cTalkerSelector_getNTalker( int_t* n );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tMainArray_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eMain
 * entry port: eMain
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eMain_main
 * name:         eMain_main
 * global_name:  tMainArray_eMain_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eMain_main(CELLIDX idx)
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
