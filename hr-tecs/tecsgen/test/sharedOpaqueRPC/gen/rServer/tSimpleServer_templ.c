/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tSimpleServer_template.c => src/tSimpleServer.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * require port: signature:sSysLog context:task
 *   ER             write( uint_t prio, const SYSLOG* p_syslog );
 *   ER_UINT        read( SYSLOG* p_syslog );
 *   ER             mask( uint_t logmask, uint_t lowmask );
 *   ER             refer( T_SYSLOG_RLOG* pk_rlog );
 * allocator port for call port:eEnt func:func21 param: a
 *   ER             eEnt_func21_a_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func21_a_dealloc( const void* ptr );
 *   ER             eEnt_func21_a_printStatistics( );
 * allocator port for call port:eEnt func:func22 param: sta
 *   ER             eEnt_func22_sta_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func22_sta_dealloc( const void* ptr );
 *   ER             eEnt_func22_sta_printStatistics( );
 * allocator port for call port:eEnt func:func23 param: str
 *   ER             eEnt_func23_str_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func23_str_dealloc( const void* ptr );
 *   ER             eEnt_func23_str_printStatistics( );
 * allocator port for call port:eEnt func:func24 param: msg
 *   ER             eEnt_func24_msg_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func24_msg_dealloc( const void* ptr );
 *   ER             eEnt_func24_msg_printStatistics( );
 * allocator port for call port:eEnt func:func25 param: msg
 *   ER             eEnt_func25_msg_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func25_msg_dealloc( const void* ptr );
 *   ER             eEnt_func25_msg_printStatistics( );
 * allocator port for call port:eEnt func:func26 param: sta
 *   ER             eEnt_func26_sta_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func26_sta_dealloc( const void* ptr );
 *   ER             eEnt_func26_sta_printStatistics( );
 * allocator port for call port:eEnt func:func27 param: array2
 *   ER             eEnt_func27_array2_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func27_array2_dealloc( const void* ptr );
 *   ER             eEnt_func27_array2_printStatistics( );
 * allocator port for call port:eEnt func:func31 param: a
 *   ER             eEnt_func31_a_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func31_a_dealloc( const void* ptr );
 *   ER             eEnt_func31_a_printStatistics( );
 * allocator port for call port:eEnt func:func32 param: sta
 *   ER             eEnt_func32_sta_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func32_sta_dealloc( const void* ptr );
 *   ER             eEnt_func32_sta_printStatistics( );
 * allocator port for call port:eEnt func:func33 param: str
 *   ER             eEnt_func33_str_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func33_str_dealloc( const void* ptr );
 *   ER             eEnt_func33_str_printStatistics( );
 * allocator port for call port:eEnt func:func34 param: msg
 *   ER             eEnt_func34_msg_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func34_msg_dealloc( const void* ptr );
 *   ER             eEnt_func34_msg_printStatistics( );
 * allocator port for call port:eEnt func:func35 param: msg
 *   ER             eEnt_func35_msg_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func35_msg_dealloc( const void* ptr );
 *   ER             eEnt_func35_msg_printStatistics( );
 * allocator port for call port:eEnt func:func36 param: sta
 *   ER             eEnt_func36_sta_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func36_sta_dealloc( const void* ptr );
 *   ER             eEnt_func36_sta_printStatistics( );
 * allocator port for call port:eEnt func:func37 param: sta
 *   ER             eEnt_func37_sta_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func37_sta_dealloc( const void* ptr );
 *   ER             eEnt_func37_sta_printStatistics( );
 * allocator port for call port:eEnt func:func38 param: array2
 *   ER             eEnt_func38_array2_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func38_array2_dealloc( const void* ptr );
 *   ER             eEnt_func38_array2_printStatistics( );
 * allocator port for call port:eEnt func:func39 param: arraySt
 *   ER             eEnt_func39_arraySt_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func39_arraySt_dealloc( const void* ptr );
 *   ER             eEnt_func39_arraySt_printStatistics( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tSimpleServer_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eEnt
 * entry port: eEnt
 * signature:  sSimple
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEnt_shutdown
 * name:         eEnt_shutdown
 * global_name:  tSimpleServer_eEnt_shutdown
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
void
eEnt_shutdown(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eEnt_func1
 * name:         eEnt_func1
 * global_name:  tSimpleServer_eEnt_func1
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func1(CELLIDX idx, int32_t inval)
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

/* #[<ENTRY_FUNC>]# eEnt_func2
 * name:         eEnt_func2
 * global_name:  tSimpleServer_eEnt_func2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func2(CELLIDX idx, const char_t* str)
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

/* #[<ENTRY_FUNC>]# eEnt_func3
 * name:         eEnt_func3
 * global_name:  tSimpleServer_eEnt_func3
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func3(CELLIDX idx, const char_t* msg, int32_t len)
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

/* #[<ENTRY_FUNC>]# eEnt_func4
 * name:         eEnt_func4
 * global_name:  tSimpleServer_eEnt_func4
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func4(CELLIDX idx, const char_t** msg, int32_t len)
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

/* #[<ENTRY_FUNC>]# eEnt_func5
 * name:         eEnt_func5
 * global_name:  tSimpleServer_eEnt_func5
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func5(CELLIDX idx, const STA** sta, int32_t len)
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

/* #[<ENTRY_FUNC>]# eEnt_func6
 * name:         eEnt_func6
 * global_name:  tSimpleServer_eEnt_func6
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func6(CELLIDX idx, const int8_t array[8])
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

/* #[<ENTRY_FUNC>]# eEnt_func7
 * name:         eEnt_func7
 * global_name:  tSimpleServer_eEnt_func7
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func7(CELLIDX idx, const int8_t array2[8][4])
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

/* #[<ENTRY_FUNC>]# eEnt_func8
 * name:         eEnt_func8
 * global_name:  tSimpleServer_eEnt_func8
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func8(CELLIDX idx, const STA arraySt[2])
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

/* #[<ENTRY_FUNC>]# eEnt_func9
 * name:         eEnt_func9
 * global_name:  tSimpleServer_eEnt_func9
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func9(CELLIDX idx, const STA* arraySt[2])
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

/* #[<ENTRY_FUNC>]# eEnt_func10
 * name:         eEnt_func10
 * global_name:  tSimpleServer_eEnt_func10
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func10(CELLIDX idx, int32_t* val)
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

/* #[<ENTRY_FUNC>]# eEnt_func11
 * name:         eEnt_func11
 * global_name:  tSimpleServer_eEnt_func11
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func11(CELLIDX idx, char_t* msg, int32_t len)
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

/* #[<ENTRY_FUNC>]# eEnt_func12
 * name:         eEnt_func12
 * global_name:  tSimpleServer_eEnt_func12
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func12(CELLIDX idx, char_t** msg)
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

/* #[<ENTRY_FUNC>]# eEnt_func13
 * name:         eEnt_func13
 * global_name:  tSimpleServer_eEnt_func13
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func13(CELLIDX idx, STB* sta, int32_t len)
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

/* #[<ENTRY_FUNC>]# eEnt_func14
 * name:         eEnt_func14
 * global_name:  tSimpleServer_eEnt_func14
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func14(CELLIDX idx, STB** sta, int32_t len)
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

/* #[<ENTRY_FUNC>]# eEnt_func15
 * name:         eEnt_func15
 * global_name:  tSimpleServer_eEnt_func15
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func15(CELLIDX idx, int8_t(* array1)[8])
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

/* #[<ENTRY_FUNC>]# eEnt_func40
 * name:         eEnt_func40
 * global_name:  tSimpleServer_eEnt_func40
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func40(CELLIDX idx, int32_t* val)
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

/* #[<ENTRY_FUNC>]# eEnt_func41
 * name:         eEnt_func41
 * global_name:  tSimpleServer_eEnt_func41
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func41(CELLIDX idx, char_t* msg, int32_t len)
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

/* #[<ENTRY_FUNC>]# eEnt_func42
 * name:         eEnt_func42
 * global_name:  tSimpleServer_eEnt_func42
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func42(CELLIDX idx, char_t** msg)
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

/* #[<ENTRY_FUNC>]# eEnt_func43
 * name:         eEnt_func43
 * global_name:  tSimpleServer_eEnt_func43
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func43(CELLIDX idx, STA* sta, int32_t len)
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

/* #[<ENTRY_FUNC>]# eEnt_func21
 * name:         eEnt_func21
 * global_name:  tSimpleServer_eEnt_func21
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func21(CELLIDX idx, int32_t* a)
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

/* #[<ENTRY_FUNC>]# eEnt_func22
 * name:         eEnt_func22
 * global_name:  tSimpleServer_eEnt_func22
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func22(CELLIDX idx, STA* sta)
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

/* #[<ENTRY_FUNC>]# eEnt_func23
 * name:         eEnt_func23
 * global_name:  tSimpleServer_eEnt_func23
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func23(CELLIDX idx, char_t* str)
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

/* #[<ENTRY_FUNC>]# eEnt_func24
 * name:         eEnt_func24
 * global_name:  tSimpleServer_eEnt_func24
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func24(CELLIDX idx, char_t* msg, int32_t len)
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

/* #[<ENTRY_FUNC>]# eEnt_func25
 * name:         eEnt_func25
 * global_name:  tSimpleServer_eEnt_func25
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func25(CELLIDX idx, char_t** msg, int32_t len)
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

/* #[<ENTRY_FUNC>]# eEnt_func26
 * name:         eEnt_func26
 * global_name:  tSimpleServer_eEnt_func26
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func26(CELLIDX idx, STA** sta, int32_t len)
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

/* #[<ENTRY_FUNC>]# eEnt_func27
 * name:         eEnt_func27
 * global_name:  tSimpleServer_eEnt_func27
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func27(CELLIDX idx, int8_t(* array2)[8])
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

/* #[<ENTRY_FUNC>]# eEnt_func31
 * name:         eEnt_func31
 * global_name:  tSimpleServer_eEnt_func31
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func31(CELLIDX idx, int32_t** a)
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

/* #[<ENTRY_FUNC>]# eEnt_func32
 * name:         eEnt_func32
 * global_name:  tSimpleServer_eEnt_func32
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func32(CELLIDX idx, STA** sta)
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

/* #[<ENTRY_FUNC>]# eEnt_func33
 * name:         eEnt_func33
 * global_name:  tSimpleServer_eEnt_func33
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func33(CELLIDX idx, char_t** str)
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

/* #[<ENTRY_FUNC>]# eEnt_func34
 * name:         eEnt_func34
 * global_name:  tSimpleServer_eEnt_func34
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func34(CELLIDX idx, char_t** msg, int32_t* len)
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

/* #[<ENTRY_FUNC>]# eEnt_func35
 * name:         eEnt_func35
 * global_name:  tSimpleServer_eEnt_func35
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func35(CELLIDX idx, char_t*** msg, int32_t* len, int32_t* msglen)
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

/* #[<ENTRY_FUNC>]# eEnt_func36
 * name:         eEnt_func36
 * global_name:  tSimpleServer_eEnt_func36
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func36(CELLIDX idx, STA** sta, int32_t* len)
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

/* #[<ENTRY_FUNC>]# eEnt_func37
 * name:         eEnt_func37
 * global_name:  tSimpleServer_eEnt_func37
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func37(CELLIDX idx, STA*** sta, int32_t* len)
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

/* #[<ENTRY_FUNC>]# eEnt_func38
 * name:         eEnt_func38
 * global_name:  tSimpleServer_eEnt_func38
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func38(CELLIDX idx, int8_t(** array2)[8])
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

/* #[<ENTRY_FUNC>]# eEnt_func39
 * name:         eEnt_func39
 * global_name:  tSimpleServer_eEnt_func39
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func39(CELLIDX idx, STA*(** arraySt)[2])
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
