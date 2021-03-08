/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cTECS signature: sTest context:task
 *   void           cTECS_test( int_t input );
 *   int32_t        cTECS_test2( int_t input, int32_t* ret );
 *   int32_t        cTECS_test3( const char_t* input, int32_t* ret );
 *   int32_t        cTECS_test4( const char_t* input, int32_t len );
 *   int32_t        cTECS_test5( const ST* input );
 *   int32_t        cTECS_test6( SYSTIM* systim );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "nMruby_tsTest_tecsgen.h"
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

/* RData MBP001 */
static void 
tsTest_free( mrb_state *mrb, void *p )
{
	if( p )
		(void)mrb_free( mrb, p );
}

/* RData MBP002 */
struct mrb_data_type data_type_tsTest =
{
	"tsTest",
	tsTest_free
};

/* RData MBP003 */
struct tecs_tsTest {
    CELLCB  *cbp;
};

/* name_to_cbp MBP010 */
const struct name_to_cbp_tsTest {
    char   *name;    /* Cell Name */
    CELLCB *cbp;
} Name_to_cbp_tsTest[] = {
	{ "Mruby", NULL },
	{ 0, 0 },
};


/* MBP100 */
mrb_value
MrubyBridge_tsTest_initialize( mrb_state *mrb, mrb_value self)
{
	mrb_value	name;
	struct tecs_tsTest *tecs_cb;
	const struct name_to_cbp_tsTest *ntc;

	/* set DATA_TYPE earlier to avoid SEGV */
	DATA_TYPE( self ) = &data_type_tsTest;

	mrb_get_args(mrb, "o", &name );
	if( mrb_type( name ) != MRB_TT_STRING ){
		mrb_raise(mrb, E_NAME_ERROR, "cell name not string");
	}
	for( ntc = &Name_to_cbp_tsTest[0]; ntc->name != NULL; ntc++ ){
		if( strcmp( ntc->name, RSTRING_PTR( name ) ) == 0 )
			break;
	}
	if( ntc->name == 0 ){
		mrb_raise(mrb, E_ARGUMENT_ERROR, "cell not found");
	}
	tecs_cb = (struct tecs_tsTest *)mrb_malloc(mrb, sizeof(struct tecs_tsTest) );
	tecs_cb->cbp = ntc->cbp;
	DATA_PTR( self ) = (void *)tecs_cb;

	return self;
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsTest_test( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsTest *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	mrb_int	mrb_input;
	int_t	input;
	/* retrieve arguments (MBP111) */
	mrb_get_args(mrb, "i", &mrb_input );
	/* convert mrb to C (MBP112) */
	VALCHECK_Int( mrb, mrb_input );
	input = (int_t)mrb_input;
	/* calling target (MBP120) */
	cTECS_test( input );
	/* return (MBP130) */
	return  mrb_nil_value();
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsTest_test2( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsTest *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	int32_t	ret_val;
	mrb_int	mrb_input;
	int_t	input;
	mrb_value	mrb_ret;
	int32_t*	ret;
	/* retrieve arguments (MBP111) */
	mrb_get_args(mrb, "io", &mrb_input, &mrb_ret );
	/* convert mrb to C (MBP112) */
	VALCHECK_Int( mrb, mrb_input );
	input = (int_t)mrb_input;
	/* convert mrb to C for pointer types (MBP113) */
	ret = CheckAndGetInt32Pointer( mrb, mrb_ret, 1 );
	/* calling target (MBP120) */
	ret_val = cTECS_test2( input, ret );
	/* return (MBP130) */
	return mrb_fixnum_value( ret_val );
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsTest_test3( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsTest *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	int32_t	ret_val;
	mrb_value	mrb_input;
	const char_t*	input;
	mrb_value	mrb_ret;
	int32_t*	ret;
	/* retrieve arguments (MBP111) */
	mrb_get_args(mrb, "oo", &mrb_input, &mrb_ret );
	/* convert mrb to C for pointer types (MBP113) */
	input = CheckAndGetCharPointer( mrb, mrb_input, 1 );
	ret = CheckAndGetInt32Pointer( mrb, mrb_ret, 1 );
	/* calling target (MBP120) */
	ret_val = cTECS_test3( input, ret );
	/* return (MBP130) */
	return mrb_fixnum_value( ret_val );
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsTest_test4( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsTest *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	int32_t	ret_val;
	mrb_value	mrb_input;
	const char_t*	input;
	mrb_int	mrb_len;
	int32_t	len;
	/* retrieve arguments (MBP111) */
	mrb_get_args(mrb, "oi", &mrb_input, &mrb_len );
	/* convert mrb to C (MBP112) */
	VALCHECK_Int32( mrb, mrb_len );
	len = (int32_t)mrb_len;
	/* convert mrb to C for pointer types (MBP113) */
	input = CheckAndGetCharPointer( mrb, mrb_input, len );
	/* calling target (MBP120) */
	ret_val = cTECS_test4( input, len );
	/* return (MBP130) */
	return mrb_fixnum_value( ret_val );
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsTest_test5( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsTest *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	int32_t	ret_val;
	mrb_value	mrb_input;
	const ST*	input;
	/* retrieve arguments (MBP111) */
	mrb_get_args(mrb, "o", &mrb_input );
	CHECK_STRUCT( tagSt, mrb_input );
	input = (struct tagSt*)DATA_PTR(mrb_input);
	/* convert mrb to C for pointer types (MBP113) */
	/* calling target (MBP120) */
	ret_val = cTECS_test5( input );
	/* return (MBP130) */
	return mrb_fixnum_value( ret_val );
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsTest_test6( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsTest *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	int32_t	ret_val;
	mrb_value	mrb_systim;
	SYSTIM*	systim;
	/* retrieve arguments (MBP111) */
	mrb_get_args(mrb, "o", &mrb_systim );
	/* convert mrb to C for pointer types (MBP113) */
	systim = CheckAndGetULongPointer( mrb, mrb_systim, 1 );
	/* calling target (MBP120) */
	ret_val = cTECS_test6( systim );
	/* return (MBP130) */
	return mrb_fixnum_value( ret_val );
}
/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
