#ifndef tNBOTDR__INLINE_H
#define tNBOTDR__INLINE_H

/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tNBOTDR_inline_template.h => src/tNBOTDR_inline.h
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * tmo              TMO              VAR_tmo         
 *
 * 呼び口関数 #_TCPF_#
 * call port: cChannel signature: sChannel context:task
 *   ER             cChannel_send( const int8_t* buf, int16_t size, TMO tmo );
 *   ER             cChannel_flush( TMO tmo );
 *   ER_UINT        cChannel_receive( int8_t* buf, int16_t size, TMO tmo );
 *   ER             cChannel_end_receive( );
 *   ER             cChannel_reset( );
 * require port: signature:sSysLog context:task
 *   ER             write( uint_t prio, const SYSLOG* p_syslog );
 *   ER_UINT        read( SYSLOG* p_syslog );
 *   ER             mask( uint_t logmask, uint_t lowmask );
 *   ER             refer( T_SYSLOG_RLOG* pk_rlog );
 *
 * #[</PREAMBLE>]# */

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eTDR
 * entry port: eTDR
 * signature:  sTDR
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTDR_reset
 * name:         eTDR_reset
 * global_name:  tNBOTDR_eTDR_reset
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_reset(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eTDR_sendSOP
 * name:         eTDR_sendSOP
 * global_name:  tNBOTDR_eTDR_sendSOP
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_sendSOP(CELLIDX idx, bool_t b_client)
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

/* #[<ENTRY_FUNC>]# eTDR_receiveSOP
 * name:         eTDR_receiveSOP
 * global_name:  tNBOTDR_eTDR_receiveSOP
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_receiveSOP(CELLIDX idx, bool_t b_client)
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

/* #[<ENTRY_FUNC>]# eTDR_sendEOP
 * name:         eTDR_sendEOP
 * global_name:  tNBOTDR_eTDR_sendEOP
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_sendEOP(CELLIDX idx, bool_t b_continue)
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

/* #[<ENTRY_FUNC>]# eTDR_receiveEOP
 * name:         eTDR_receiveEOP
 * global_name:  tNBOTDR_eTDR_receiveEOP
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_receiveEOP(CELLIDX idx, bool_t b_continue)
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

/* #[<ENTRY_FUNC>]# eTDR_putInt8
 * name:         eTDR_putInt8
 * global_name:  tNBOTDR_eTDR_putInt8
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putInt8(CELLIDX idx, int8_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_putInt16
 * name:         eTDR_putInt16
 * global_name:  tNBOTDR_eTDR_putInt16
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putInt16(CELLIDX idx, int16_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_putInt32
 * name:         eTDR_putInt32
 * global_name:  tNBOTDR_eTDR_putInt32
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putInt32(CELLIDX idx, int32_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_putInt64
 * name:         eTDR_putInt64
 * global_name:  tNBOTDR_eTDR_putInt64
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putInt64(CELLIDX idx, int64_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_putInt128
 * name:         eTDR_putInt128
 * global_name:  tNBOTDR_eTDR_putInt128
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putInt128(CELLIDX idx, int128_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_getInt8
 * name:         eTDR_getInt8
 * global_name:  tNBOTDR_eTDR_getInt8
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getInt8(CELLIDX idx, int8_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_getInt16
 * name:         eTDR_getInt16
 * global_name:  tNBOTDR_eTDR_getInt16
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getInt16(CELLIDX idx, int16_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_getInt32
 * name:         eTDR_getInt32
 * global_name:  tNBOTDR_eTDR_getInt32
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getInt32(CELLIDX idx, int32_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_getInt64
 * name:         eTDR_getInt64
 * global_name:  tNBOTDR_eTDR_getInt64
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getInt64(CELLIDX idx, int64_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_getInt128
 * name:         eTDR_getInt128
 * global_name:  tNBOTDR_eTDR_getInt128
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getInt128(CELLIDX idx, int128_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_putUInt8
 * name:         eTDR_putUInt8
 * global_name:  tNBOTDR_eTDR_putUInt8
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putUInt8(CELLIDX idx, uint8_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_putUInt16
 * name:         eTDR_putUInt16
 * global_name:  tNBOTDR_eTDR_putUInt16
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putUInt16(CELLIDX idx, uint16_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_putUInt32
 * name:         eTDR_putUInt32
 * global_name:  tNBOTDR_eTDR_putUInt32
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putUInt32(CELLIDX idx, uint32_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_putUInt64
 * name:         eTDR_putUInt64
 * global_name:  tNBOTDR_eTDR_putUInt64
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putUInt64(CELLIDX idx, uint64_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_putUInt128
 * name:         eTDR_putUInt128
 * global_name:  tNBOTDR_eTDR_putUInt128
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putUInt128(CELLIDX idx, uint128_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_getUInt8
 * name:         eTDR_getUInt8
 * global_name:  tNBOTDR_eTDR_getUInt8
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getUInt8(CELLIDX idx, uint8_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_getUInt16
 * name:         eTDR_getUInt16
 * global_name:  tNBOTDR_eTDR_getUInt16
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getUInt16(CELLIDX idx, uint16_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_getUInt32
 * name:         eTDR_getUInt32
 * global_name:  tNBOTDR_eTDR_getUInt32
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getUInt32(CELLIDX idx, uint32_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_getUInt64
 * name:         eTDR_getUInt64
 * global_name:  tNBOTDR_eTDR_getUInt64
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getUInt64(CELLIDX idx, uint64_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_getUInt128
 * name:         eTDR_getUInt128
 * global_name:  tNBOTDR_eTDR_getUInt128
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getUInt128(CELLIDX idx, uint128_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_putChar
 * name:         eTDR_putChar
 * global_name:  tNBOTDR_eTDR_putChar
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putChar(CELLIDX idx, char_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_getChar
 * name:         eTDR_getChar
 * global_name:  tNBOTDR_eTDR_getChar
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getChar(CELLIDX idx, char_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_putBool
 * name:         eTDR_putBool
 * global_name:  tNBOTDR_eTDR_putBool
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putBool(CELLIDX idx, bool_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_getBool
 * name:         eTDR_getBool
 * global_name:  tNBOTDR_eTDR_getBool
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getBool(CELLIDX idx, bool_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_putFloat32
 * name:         eTDR_putFloat32
 * global_name:  tNBOTDR_eTDR_putFloat32
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putFloat32(CELLIDX idx, float32_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_putDouble64
 * name:         eTDR_putDouble64
 * global_name:  tNBOTDR_eTDR_putDouble64
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putDouble64(CELLIDX idx, double64_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_getFloat32
 * name:         eTDR_getFloat32
 * global_name:  tNBOTDR_eTDR_getFloat32
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getFloat32(CELLIDX idx, float32_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_getDouble64
 * name:         eTDR_getDouble64
 * global_name:  tNBOTDR_eTDR_getDouble64
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getDouble64(CELLIDX idx, double64_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_putSChar
 * name:         eTDR_putSChar
 * global_name:  tNBOTDR_eTDR_putSChar
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putSChar(CELLIDX idx, schar_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_putShort
 * name:         eTDR_putShort
 * global_name:  tNBOTDR_eTDR_putShort
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putShort(CELLIDX idx, short_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_putInt
 * name:         eTDR_putInt
 * global_name:  tNBOTDR_eTDR_putInt
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putInt(CELLIDX idx, int_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_putLong
 * name:         eTDR_putLong
 * global_name:  tNBOTDR_eTDR_putLong
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putLong(CELLIDX idx, long_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_getSChar
 * name:         eTDR_getSChar
 * global_name:  tNBOTDR_eTDR_getSChar
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getSChar(CELLIDX idx, schar_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_getShort
 * name:         eTDR_getShort
 * global_name:  tNBOTDR_eTDR_getShort
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getShort(CELLIDX idx, short_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_getInt
 * name:         eTDR_getInt
 * global_name:  tNBOTDR_eTDR_getInt
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getInt(CELLIDX idx, int_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_getLong
 * name:         eTDR_getLong
 * global_name:  tNBOTDR_eTDR_getLong
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getLong(CELLIDX idx, long_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_putUChar
 * name:         eTDR_putUChar
 * global_name:  tNBOTDR_eTDR_putUChar
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putUChar(CELLIDX idx, uchar_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_putUShort
 * name:         eTDR_putUShort
 * global_name:  tNBOTDR_eTDR_putUShort
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putUShort(CELLIDX idx, ushort_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_putUInt
 * name:         eTDR_putUInt
 * global_name:  tNBOTDR_eTDR_putUInt
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putUInt(CELLIDX idx, uint_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_putULong
 * name:         eTDR_putULong
 * global_name:  tNBOTDR_eTDR_putULong
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putULong(CELLIDX idx, ulong_t in)
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

/* #[<ENTRY_FUNC>]# eTDR_getUChar
 * name:         eTDR_getUChar
 * global_name:  tNBOTDR_eTDR_getUChar
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getUChar(CELLIDX idx, unsigned char* out)
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

/* #[<ENTRY_FUNC>]# eTDR_getUShort
 * name:         eTDR_getUShort
 * global_name:  tNBOTDR_eTDR_getUShort
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getUShort(CELLIDX idx, ushort_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_getUInt
 * name:         eTDR_getUInt
 * global_name:  tNBOTDR_eTDR_getUInt
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getUInt(CELLIDX idx, uint_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_getULong
 * name:         eTDR_getULong
 * global_name:  tNBOTDR_eTDR_getULong
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getULong(CELLIDX idx, ulong_t* out)
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

/* #[<ENTRY_FUNC>]# eTDR_putIntptr
 * name:         eTDR_putIntptr
 * global_name:  tNBOTDR_eTDR_putIntptr
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_putIntptr(CELLIDX idx, const intptr_t ptr)
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

/* #[<ENTRY_FUNC>]# eTDR_getIntptr
 * name:         eTDR_getIntptr
 * global_name:  tNBOTDR_eTDR_getIntptr
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTDR_getIntptr(CELLIDX idx, intptr_t* ptr)
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

#endif /* tNBOTDR_INLINEH */
