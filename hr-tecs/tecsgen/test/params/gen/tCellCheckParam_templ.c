/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tCellCheckParam_template.c => src/tCellCheckParam.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * allocator port for call port:eParamsSEND func:func10 param: str_array
 *   ER             eParamsSEND_func10_str_array_alloc( int32_t size, void** m );
 *   ER             eParamsSEND_func10_str_array_dealloc( const void* m );
 * allocator port for call port:eParamsSEND func:func20 param: finfo
 *   ER             eParamsSEND_func20_finfo_alloc( int32_t size, void** m );
 *   ER             eParamsSEND_func20_finfo_dealloc( const void* m );
 * allocator port for call port:eParamsSEND func:func21 param: finfo
 *   ER             eParamsSEND_func21_finfo_alloc( int32_t size, void** m );
 *   ER             eParamsSEND_func21_finfo_dealloc( const void* m );
 * allocator port for call port:eParamsSEND func:funcA0 param: buf
 *   ER             eParamsSEND_funcA0_buf_alloc( int32_t size, void** m );
 *   ER             eParamsSEND_funcA0_buf_dealloc( const void* m );
 * allocator port for call port:eParamsRECEIVE func:func00 param: dat
 *   ER             eParamsRECEIVE_func00_dat_alloc( int32_t size, void** m );
 *   ER             eParamsRECEIVE_func00_dat_dealloc( const void* m );
 * allocator port for call port:eParamsRECEIVE func:func11 param: dat
 *   ER             eParamsRECEIVE_func11_dat_alloc( int32_t size, void** m );
 *   ER             eParamsRECEIVE_func11_dat_dealloc( const void* m );
 * allocator port for call port:eParamsRECEIVE func:func20 param: array
 *   ER             eParamsRECEIVE_func20_array_alloc( int32_t size, void** m );
 *   ER             eParamsRECEIVE_func20_array_dealloc( const void* m );
 * allocator port for call port:eParamsRECEIVE func:func30 param: str
 *   ER             eParamsRECEIVE_func30_str_alloc( int32_t size, void** m );
 *   ER             eParamsRECEIVE_func30_str_dealloc( const void* m );
 * allocator port for call port:eParamsRECEIVE func:func40 param: str
 *   ER             eParamsRECEIVE_func40_str_alloc( int32_t size, void** m );
 *   ER             eParamsRECEIVE_func40_str_dealloc( const void* m );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tCellCheckParam_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eParamsIN
 * entry port: eParamsIN
 * signature:  sParamsIN
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eParamsIN_func10
 * name:         eParamsIN_func10
 * global_name:  tCellCheckParam_eParamsIN_func10
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsIN_func10(CELLIDX idx, const int16_t* wstr)
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

/* #[<ENTRY_FUNC>]# eParamsIN_func21
 * name:         eParamsIN_func21
 * global_name:  tCellCheckParam_eParamsIN_func21
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsIN_func21(CELLIDX idx, const int32_t* array)
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

/* #[<ENTRY_FUNC>]# eParamsIN_func22
 * name:         eParamsIN_func22
 * global_name:  tCellCheckParam_eParamsIN_func22
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsIN_func22(CELLIDX idx, const int32_t array[4])
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

/* #[<ENTRY_FUNC>]# eParamsIN_func23
 * name:         eParamsIN_func23
 * global_name:  tCellCheckParam_eParamsIN_func23
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsIN_func23(CELLIDX idx, const int32_t(* array)[4])
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

/* #[<ENTRY_FUNC>]# eParamsIN_func24
 * name:         eParamsIN_func24
 * global_name:  tCellCheckParam_eParamsIN_func24
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsIN_func24(CELLIDX idx, const int32_t* array[4])
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

/* #[<ENTRY_FUNC>]# eParamsIN_func30
 * name:         eParamsIN_func30
 * global_name:  tCellCheckParam_eParamsIN_func30
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsIN_func30(CELLIDX idx, const int16_t** str, int32_t sz)
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

/* #[<ENTRY_FUNC>]# eParamsIN_func31
 * name:         eParamsIN_func31
 * global_name:  tCellCheckParam_eParamsIN_func31
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsIN_func31(CELLIDX idx, const int8_t*** str, int32_t sz)
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

/* #[<ENTRY_FUNC>]# eParamsIN_func41
 * name:         eParamsIN_func41
 * global_name:  tCellCheckParam_eParamsIN_func41
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsIN_func41(CELLIDX idx, const int64_t(* array2D)[4])
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

/* #[<ENTRY_FUNC>]# eParamsIN_func42
 * name:         eParamsIN_func42
 * global_name:  tCellCheckParam_eParamsIN_func42
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsIN_func42(CELLIDX idx, const int64_t(* array2D)[4][4])
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

/* #[<ENTRY_PORT>]# eParamsSEND
 * entry port: eParamsSEND
 * signature:  sParamsSEND
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eParamsSEND_func10
 * name:         eParamsSEND_func10
 * global_name:  tCellCheckParam_eParamsSEND_func10
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsSEND_func10(CELLIDX idx, char_t** str_array, int32_t len)
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

/* #[<ENTRY_FUNC>]# eParamsSEND_func20
 * name:         eParamsSEND_func20
 * global_name:  tCellCheckParam_eParamsSEND_func20
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsSEND_func20(CELLIDX idx, struct finfo* finfo, int32_t len)
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

/* #[<ENTRY_FUNC>]# eParamsSEND_func21
 * name:         eParamsSEND_func21
 * global_name:  tCellCheckParam_eParamsSEND_func21
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsSEND_func21(CELLIDX idx, struct finfo* finfo)
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

/* #[<ENTRY_FUNC>]# eParamsSEND_funcA0
 * name:         eParamsSEND_funcA0
 * global_name:  tCellCheckParam_eParamsSEND_funcA0
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsSEND_funcA0(CELLIDX idx, int8_t* buf, int32_t len)
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

/* #[<ENTRY_PORT>]# eParamsOUT
 * entry port: eParamsOUT
 * signature:  sParamsOUT
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eParamsOUT_func00
 * name:         eParamsOUT_func00
 * global_name:  tCellCheckParam_eParamsOUT_func00
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsOUT_func00(CELLIDX idx, int16_t* wstr)
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

/* #[<ENTRY_FUNC>]# eParamsOUT_func10
 * name:         eParamsOUT_func10
 * global_name:  tCellCheckParam_eParamsOUT_func10
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsOUT_func10(CELLIDX idx, int16_t* wstr)
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

/* #[<ENTRY_FUNC>]# eParamsOUT_func21
 * name:         eParamsOUT_func21
 * global_name:  tCellCheckParam_eParamsOUT_func21
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsOUT_func21(CELLIDX idx, int32_t* array)
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

/* #[<ENTRY_FUNC>]# eParamsOUT_func23
 * name:         eParamsOUT_func23
 * global_name:  tCellCheckParam_eParamsOUT_func23
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsOUT_func23(CELLIDX idx, int32_t(* array)[4])
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

/* #[<ENTRY_FUNC>]# eParamsOUT_func30
 * name:         eParamsOUT_func30
 * global_name:  tCellCheckParam_eParamsOUT_func30
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsOUT_func30(CELLIDX idx, int16_t** str, int32_t sz)
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

/* #[<ENTRY_FUNC>]# eParamsOUT_func31
 * name:         eParamsOUT_func31
 * global_name:  tCellCheckParam_eParamsOUT_func31
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsOUT_func31(CELLIDX idx, int8_t*** str, int32_t sz)
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

/* #[<ENTRY_FUNC>]# eParamsOUT_func41
 * name:         eParamsOUT_func41
 * global_name:  tCellCheckParam_eParamsOUT_func41
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsOUT_func41(CELLIDX idx, int64_t(* array2D)[4])
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

/* #[<ENTRY_FUNC>]# eParamsOUT_func42
 * name:         eParamsOUT_func42
 * global_name:  tCellCheckParam_eParamsOUT_func42
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsOUT_func42(CELLIDX idx, int64_t(* array2D)[4][4])
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

/* #[<ENTRY_PORT>]# eParamsRECEIVE
 * entry port: eParamsRECEIVE
 * signature:  sParamsRECEIVE
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eParamsRECEIVE_func00
 * name:         eParamsRECEIVE_func00
 * global_name:  tCellCheckParam_eParamsRECEIVE_func00
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsRECEIVE_func00(CELLIDX idx, struct complex_number** dat)
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

/* #[<ENTRY_FUNC>]# eParamsRECEIVE_func11
 * name:         eParamsRECEIVE_func11
 * global_name:  tCellCheckParam_eParamsRECEIVE_func11
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsRECEIVE_func11(CELLIDX idx, struct complex_number** dat)
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

/* #[<ENTRY_FUNC>]# eParamsRECEIVE_func20
 * name:         eParamsRECEIVE_func20
 * global_name:  tCellCheckParam_eParamsRECEIVE_func20
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsRECEIVE_func20(CELLIDX idx, int32_t** array, int32_t* sz)
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

/* #[<ENTRY_FUNC>]# eParamsRECEIVE_func30
 * name:         eParamsRECEIVE_func30
 * global_name:  tCellCheckParam_eParamsRECEIVE_func30
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsRECEIVE_func30(CELLIDX idx, char_t** str)
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

/* #[<ENTRY_FUNC>]# eParamsRECEIVE_func40
 * name:         eParamsRECEIVE_func40
 * global_name:  tCellCheckParam_eParamsRECEIVE_func40
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eParamsRECEIVE_func40(CELLIDX idx, char_t*** str)
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
