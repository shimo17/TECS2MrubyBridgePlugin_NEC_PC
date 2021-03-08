/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tSample_template.c => src/tSample.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cSimple signature: sSimple context:task
 *   ER             cSimple_onewayPtr( const uint32_t* in );
 *   ER             cSimple_onewayArray( const uint32_t* in, int32_t len );
 *   ER             cSimple_onewayDoubleArray( const int32_t* in, int32_t len, const int32_t* in2, int32_t len2 );
 *   ER             cSimple_onewayStringArray( const char_t** in, int32_t len );
 *   ER             cSimple_onewayString( const char_t* in, int32_t len );
 *   ER             cSimple_onewayStruct( const struct stA* a );
 *   ER             cSimple_onewayStruct2( const struct stA* a, int32_t len );
 *   ER             cSimple_onewayInArray( int8_t array0[8] );
 *   ER             cSimple_onewayInArray2( const int8_t(* array1)[8] );
 *   ER             cSimple_onewayNulable( const int8_t(* array)[3] );
 *   void           cSimple_exit( );
 * allocator port for call port:eEnt func:giftToYou param: buf
 *   ER             eEnt_giftToYou_buf_alloc( int32_t size, void** p );
 *   ER             eEnt_giftToYou_buf_dealloc( const void* ptr );
 * allocator port for call port:eEnt func:returnGiftFromYou param: buf
 *   ER             eEnt_returnGiftFromYou_buf_alloc( int32_t size, void** p );
 *   ER             eEnt_returnGiftFromYou_buf_dealloc( const void* ptr );
 * allocator port for call port:eEnt func:onewayFunc param: buf
 *   ER             eEnt_onewayFunc_buf_alloc( int32_t size, void** p );
 *   ER             eEnt_onewayFunc_buf_dealloc( const void* ptr );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tSample_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eEnt
 * entry port: eEnt
 * signature:  sSample
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEnt_sayHello
 * name:         eEnt_sayHello
 * global_name:  tSample_eEnt_sayHello
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_sayHello(CELLIDX idx, int32_t times)
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

/* #[<ENTRY_FUNC>]# eEnt_howAreYou
 * name:         eEnt_howAreYou
 * global_name:  tSample_eEnt_howAreYou
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_howAreYou(CELLIDX idx, char_t* buf, int32_t len)
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

/* #[<ENTRY_FUNC>]# eEnt_giftToYou
 * name:         eEnt_giftToYou
 * global_name:  tSample_eEnt_giftToYou
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_giftToYou(CELLIDX idx, char_t* buf, int32_t len)
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

/* #[<ENTRY_FUNC>]# eEnt_returnGiftFromYou
 * name:         eEnt_returnGiftFromYou
 * global_name:  tSample_eEnt_returnGiftFromYou
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_returnGiftFromYou(CELLIDX idx, int16_t** buf, int32_t* len)
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

/* #[<ENTRY_FUNC>]# eEnt_transferStruct
 * name:         eEnt_transferStruct
 * global_name:  tSample_eEnt_transferStruct
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_transferStruct(CELLIDX idx, const struct stA* a, int32_t len)
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

/* #[<ENTRY_FUNC>]# eEnt_transferStruct2
 * name:         eEnt_transferStruct2
 * global_name:  tSample_eEnt_transferStruct2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_transferStruct2(CELLIDX idx, struct stA a)
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

/* #[<ENTRY_FUNC>]# eEnt_transferInArray
 * name:         eEnt_transferInArray
 * global_name:  tSample_eEnt_transferInArray
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_transferInArray(CELLIDX idx, int8_t array0[8])
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

/* #[<ENTRY_FUNC>]# eEnt_transferInArray2
 * name:         eEnt_transferInArray2
 * global_name:  tSample_eEnt_transferInArray2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_transferInArray2(CELLIDX idx, const int8_t(* array1)[8])
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

/* #[<ENTRY_FUNC>]# eEnt_transferOutArray
 * name:         eEnt_transferOutArray
 * global_name:  tSample_eEnt_transferOutArray
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_transferOutArray(CELLIDX idx, int8_t(* array2)[8])
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

/* #[<ENTRY_FUNC>]# eEnt_UnsignedTypes
 * name:         eEnt_UnsignedTypes
 * global_name:  tSample_eEnt_UnsignedTypes
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
unsigned char
eEnt_UnsignedTypes(CELLIDX idx, uint8_t in, unsigned short s, uint_t ui, ulong_t ul)
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

/* #[<ENTRY_FUNC>]# eEnt_SignedTypes
 * name:         eEnt_SignedTypes
 * global_name:  tSample_eEnt_SignedTypes
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
char
eEnt_SignedTypes(CELLIDX idx, int8_t in, short s, int_t ui, long_t ul)
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

/* #[<ENTRY_FUNC>]# eEnt_onewayFunc
 * name:         eEnt_onewayFunc
 * global_name:  tSample_eEnt_onewayFunc
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eEnt_onewayFunc(CELLIDX idx, char_t* buf, int32_t len)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* oneway の場合 E_OK しか返せません */
		return(E_OK);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	/* oneway の場合 E_OK しか返せません */
	return(E_OK);
}

/* #[<ENTRY_FUNC>]# eEnt_exit
 * name:         eEnt_exit
 * global_name:  tSample_eEnt_exit
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
void
eEnt_exit(CELLIDX idx)
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
