/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "nMruby_tsTest_Initializer_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* MBP: MrubyBridgePlugin: MBP000 */
#include "mruby.h"
#include "mruby/class.h"
#include "mruby/data.h"
#include "mruby/string.h"
#include "TECSPointer.h"
#include "TECSStruct.h"

#if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT
#endif

#ifndef NULL
#define NULL 0
#endif
//  Prototype MBP400
mrb_value  MrubyBridge_tsTest_initialize( mrb_state *mrb, mrb_value self);
mrb_value  MrubyBridge_tsTest_test( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsTest_test2( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsTest_test3( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsTest_test4( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsTest_test5( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsTest_test6( mrb_state *mrb, mrb_value self );
/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eInitialize
 * entry port: eInitialize
 * signature:  nMruby_sInitializeTECSBridge
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eInitialize_initializeBridge
 * name:         eInitialize_initializeBridge
 * global_name:  nMruby_tsTest_Initializer_eInitialize_initializeBridge
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eInitialize_initializeBridge(CELLIDX idx, mrb_state* mrb, struct RClass* TECS)
{
    // CELLCB *p_cellcb = GET_CELLCB( idx );  /* no error check */     /* MBP700 */
    struct RClass	*rc;

    rc = mrb_define_class_under( mrb, TECS, "TsTest", mrb->object_class );
    mrb_define_method( mrb, rc, "initialize", MrubyBridge_tsTest_initialize, MRB_ARGS_REQ(1) );
    MRB_SET_INSTANCE_TT(rc, MRB_TT_DATA);
	mrb_define_method( mrb, rc, "test", MrubyBridge_tsTest_test, MRB_ARGS_REQ( 1 ) );
	mrb_define_method( mrb, rc, "test2", MrubyBridge_tsTest_test2, MRB_ARGS_REQ( 2 ) );
	mrb_define_method( mrb, rc, "test3", MrubyBridge_tsTest_test3, MRB_ARGS_REQ( 2 ) );
	mrb_define_method( mrb, rc, "test4", MrubyBridge_tsTest_test4, MRB_ARGS_REQ( 2 ) );
	mrb_define_method( mrb, rc, "test5", MrubyBridge_tsTest_test5, MRB_ARGS_REQ( 1 ) );
	mrb_define_method( mrb, rc, "test6", MrubyBridge_tsTest_test6, MRB_ARGS_REQ( 1 ) );
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
