/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tRPCSharedTaskMain_TECSGEN_H
#define tRPCSharedTaskMain_TECSGEN_H

/*
 * celltype          :  tRPCSharedTaskMain
 * global name       :  tRPCSharedTaskMain
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  true
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTaskBody_tecsgen.h"
#include "sUnmarshalerMain_tecsgen.h"
#include "sTDR_tecsgen.h"
#include "sSysLog_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tRPCSharedTaskMain_INIB {
    /* call port #_TCP_# */
    struct tag_sUnmarshalerMain_VDES *const*cUnmarshalAndCallFunction;
    int_t n_cUnmarshalAndCallFunction;
    /* call port #_NEP_# */ 
}  tRPCSharedTaskMain_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tRPCSharedTaskMain_CB {
    tRPCSharedTaskMain_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int16_t        channelNo;
}  tRPCSharedTaskMain_CB;
extern tRPCSharedTaskMain_CB  tRPCSharedTaskMain_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tRPCSharedTaskMain_CB *tRPCSharedTaskMain_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tRPCSharedTaskMain_eMain_main(tRPCSharedTaskMain_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tRPCSharedTaskMain_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTDR_tecsgen.h"
#include "tSysLog_tecsgen.h"
#ifdef  tRPCSharedTaskMain_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tRPCSharedTaskMain_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tRPCSharedTaskMain_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tRPCSharedTaskMain_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tRPCSharedTaskMain_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cUnmarshalAndCallFunction(p_that)  ((p_that)->_inib->n_cUnmarshalAndCallFunction)
#define NCP_cUnmarshalAndCallFunction           (N_CP_cUnmarshalAndCallFunction(p_cellcb))

/* セルCBを得るマクロ #_GCB_# */
#define tRPCSharedTaskMain_GET_CELLCB(idx) (idx)



/* var アクセスマクロ #_VAM_# */
#define tRPCSharedTaskMain_VAR_channelNo(p_that)	((p_that)->channelNo)

#define tRPCSharedTaskMain_GET_channelNo(p_that)	((p_that)->channelNo)
#define tRPCSharedTaskMain_SET_channelNo(p_that,val)	((p_that)->channelNo=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tRPCSharedTaskMain_cUnmarshalAndCallFunction_main( p_that, subscript ) \
	  (p_that)->_inib->cUnmarshalAndCallFunction[subscript]->VMT->main__T( \
	   (p_that)->_inib->cUnmarshalAndCallFunction[subscript] )
#define tRPCSharedTaskMain_cServerSideTDR_reset( p_that ) \
	  tTDR_eTDR_reset( \
	   &tTDR_CB_tab[0] )
#define tRPCSharedTaskMain_cServerSideTDR_sendSOP( p_that, b_client ) \
	  tTDR_eTDR_sendSOP( \
	   &tTDR_CB_tab[0], (b_client) )
#define tRPCSharedTaskMain_cServerSideTDR_receiveSOP( p_that, b_client ) \
	  tTDR_eTDR_receiveSOP( \
	   &tTDR_CB_tab[0], (b_client) )
#define tRPCSharedTaskMain_cServerSideTDR_sendEOP( p_that, b_continue ) \
	  tTDR_eTDR_sendEOP( \
	   &tTDR_CB_tab[0], (b_continue) )
#define tRPCSharedTaskMain_cServerSideTDR_receiveEOP( p_that, b_continue ) \
	  tTDR_eTDR_receiveEOP( \
	   &tTDR_CB_tab[0], (b_continue) )
#define tRPCSharedTaskMain_cServerSideTDR_putInt8( p_that, in ) \
	  tTDR_eTDR_putInt8( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_putInt16( p_that, in ) \
	  tTDR_eTDR_putInt16( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_putInt32( p_that, in ) \
	  tTDR_eTDR_putInt32( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_putInt64( p_that, in ) \
	  tTDR_eTDR_putInt64( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_putInt128( p_that, in ) \
	  tTDR_eTDR_putInt128( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_getInt8( p_that, out ) \
	  tTDR_eTDR_getInt8( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_getInt16( p_that, out ) \
	  tTDR_eTDR_getInt16( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_getInt32( p_that, out ) \
	  tTDR_eTDR_getInt32( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_getInt64( p_that, out ) \
	  tTDR_eTDR_getInt64( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_getInt128( p_that, out ) \
	  tTDR_eTDR_getInt128( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_putUInt8( p_that, in ) \
	  tTDR_eTDR_putUInt8( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_putUInt16( p_that, in ) \
	  tTDR_eTDR_putUInt16( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_putUInt32( p_that, in ) \
	  tTDR_eTDR_putUInt32( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_putUInt64( p_that, in ) \
	  tTDR_eTDR_putUInt64( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_putUInt128( p_that, in ) \
	  tTDR_eTDR_putUInt128( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_getUInt8( p_that, out ) \
	  tTDR_eTDR_getUInt8( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_getUInt16( p_that, out ) \
	  tTDR_eTDR_getUInt16( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_getUInt32( p_that, out ) \
	  tTDR_eTDR_getUInt32( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_getUInt64( p_that, out ) \
	  tTDR_eTDR_getUInt64( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_getUInt128( p_that, out ) \
	  tTDR_eTDR_getUInt128( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_putChar( p_that, in ) \
	  tTDR_eTDR_putChar( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_getChar( p_that, out ) \
	  tTDR_eTDR_getChar( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_putBool( p_that, in ) \
	  tTDR_eTDR_putBool( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_getBool( p_that, out ) \
	  tTDR_eTDR_getBool( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_putFloat32( p_that, in ) \
	  tTDR_eTDR_putFloat32( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_putDouble64( p_that, in ) \
	  tTDR_eTDR_putDouble64( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_getFloat32( p_that, out ) \
	  tTDR_eTDR_getFloat32( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_getDouble64( p_that, out ) \
	  tTDR_eTDR_getDouble64( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_putSChar( p_that, in ) \
	  tTDR_eTDR_putSChar( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_putShort( p_that, in ) \
	  tTDR_eTDR_putShort( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_putInt( p_that, in ) \
	  tTDR_eTDR_putInt( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_putLong( p_that, in ) \
	  tTDR_eTDR_putLong( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_getSChar( p_that, out ) \
	  tTDR_eTDR_getSChar( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_getShort( p_that, out ) \
	  tTDR_eTDR_getShort( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_getInt( p_that, out ) \
	  tTDR_eTDR_getInt( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_getLong( p_that, out ) \
	  tTDR_eTDR_getLong( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_putUChar( p_that, in ) \
	  tTDR_eTDR_putUChar( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_putUShort( p_that, in ) \
	  tTDR_eTDR_putUShort( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_putUInt( p_that, in ) \
	  tTDR_eTDR_putUInt( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_putULong( p_that, in ) \
	  tTDR_eTDR_putULong( \
	   &tTDR_CB_tab[0], (in) )
#define tRPCSharedTaskMain_cServerSideTDR_getUChar( p_that, out ) \
	  tTDR_eTDR_getUChar( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_getUShort( p_that, out ) \
	  tTDR_eTDR_getUShort( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_getUInt( p_that, out ) \
	  tTDR_eTDR_getUInt( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_getULong( p_that, out ) \
	  tTDR_eTDR_getULong( \
	   &tTDR_CB_tab[0], (out) )
#define tRPCSharedTaskMain_cServerSideTDR_putIntptr( p_that, ptr ) \
	  tTDR_eTDR_putIntptr( \
	   &tTDR_CB_tab[0], (ptr) )
#define tRPCSharedTaskMain_cServerSideTDR_getIntptr( p_that, ptr ) \
	  tTDR_eTDR_getIntptr( \
	   &tTDR_CB_tab[0], (ptr) )
#define tRPCSharedTaskMain__require_call_port_tSysLog_eSysLog_write( p_that, prio, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (prio), (p_syslog) )
#define tRPCSharedTaskMain__require_call_port_tSysLog_eSysLog_read( p_that, p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tRPCSharedTaskMain__require_call_port_tSysLog_eSysLog_mask( p_that, logmask, lowmask ) \
	  tSysLog_eSysLog_mask( \
	    (logmask), (lowmask) )
#define tRPCSharedTaskMain__require_call_port_tSysLog_eSysLog_refer( p_that, pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eMain */
void           tRPCSharedTaskMain_eMain_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tRPCSharedTaskMain_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tRPCSharedTaskMain_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tRPCSharedTaskMain_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tRPCSharedTaskMain_IDX



/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_channelNo        tRPCSharedTaskMain_VAR_channelNo( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cUnmarshalAndCallFunction_main( subscript ) \
          tRPCSharedTaskMain_cUnmarshalAndCallFunction_main( p_cellcb, subscript )
#define cServerSideTDR_reset( ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_reset( p_cellcb ))
#define cServerSideTDR_sendSOP( b_client ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_sendSOP( p_cellcb, b_client ))
#define cServerSideTDR_receiveSOP( b_client ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_receiveSOP( p_cellcb, b_client ))
#define cServerSideTDR_sendEOP( b_continue ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_sendEOP( p_cellcb, b_continue ))
#define cServerSideTDR_receiveEOP( b_continue ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_receiveEOP( p_cellcb, b_continue ))
#define cServerSideTDR_putInt8( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putInt8( p_cellcb, in ))
#define cServerSideTDR_putInt16( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putInt16( p_cellcb, in ))
#define cServerSideTDR_putInt32( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putInt32( p_cellcb, in ))
#define cServerSideTDR_putInt64( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putInt64( p_cellcb, in ))
#define cServerSideTDR_putInt128( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putInt128( p_cellcb, in ))
#define cServerSideTDR_getInt8( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getInt8( p_cellcb, out ))
#define cServerSideTDR_getInt16( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getInt16( p_cellcb, out ))
#define cServerSideTDR_getInt32( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getInt32( p_cellcb, out ))
#define cServerSideTDR_getInt64( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getInt64( p_cellcb, out ))
#define cServerSideTDR_getInt128( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getInt128( p_cellcb, out ))
#define cServerSideTDR_putUInt8( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putUInt8( p_cellcb, in ))
#define cServerSideTDR_putUInt16( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putUInt16( p_cellcb, in ))
#define cServerSideTDR_putUInt32( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putUInt32( p_cellcb, in ))
#define cServerSideTDR_putUInt64( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putUInt64( p_cellcb, in ))
#define cServerSideTDR_putUInt128( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putUInt128( p_cellcb, in ))
#define cServerSideTDR_getUInt8( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getUInt8( p_cellcb, out ))
#define cServerSideTDR_getUInt16( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getUInt16( p_cellcb, out ))
#define cServerSideTDR_getUInt32( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getUInt32( p_cellcb, out ))
#define cServerSideTDR_getUInt64( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getUInt64( p_cellcb, out ))
#define cServerSideTDR_getUInt128( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getUInt128( p_cellcb, out ))
#define cServerSideTDR_putChar( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putChar( p_cellcb, in ))
#define cServerSideTDR_getChar( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getChar( p_cellcb, out ))
#define cServerSideTDR_putBool( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putBool( p_cellcb, in ))
#define cServerSideTDR_getBool( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getBool( p_cellcb, out ))
#define cServerSideTDR_putFloat32( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putFloat32( p_cellcb, in ))
#define cServerSideTDR_putDouble64( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putDouble64( p_cellcb, in ))
#define cServerSideTDR_getFloat32( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getFloat32( p_cellcb, out ))
#define cServerSideTDR_getDouble64( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getDouble64( p_cellcb, out ))
#define cServerSideTDR_putSChar( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putSChar( p_cellcb, in ))
#define cServerSideTDR_putShort( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putShort( p_cellcb, in ))
#define cServerSideTDR_putInt( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putInt( p_cellcb, in ))
#define cServerSideTDR_putLong( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putLong( p_cellcb, in ))
#define cServerSideTDR_getSChar( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getSChar( p_cellcb, out ))
#define cServerSideTDR_getShort( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getShort( p_cellcb, out ))
#define cServerSideTDR_getInt( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getInt( p_cellcb, out ))
#define cServerSideTDR_getLong( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getLong( p_cellcb, out ))
#define cServerSideTDR_putUChar( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putUChar( p_cellcb, in ))
#define cServerSideTDR_putUShort( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putUShort( p_cellcb, in ))
#define cServerSideTDR_putUInt( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putUInt( p_cellcb, in ))
#define cServerSideTDR_putULong( in ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putULong( p_cellcb, in ))
#define cServerSideTDR_getUChar( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getUChar( p_cellcb, out ))
#define cServerSideTDR_getUShort( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getUShort( p_cellcb, out ))
#define cServerSideTDR_getUInt( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getUInt( p_cellcb, out ))
#define cServerSideTDR_getULong( out ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getULong( p_cellcb, out ))
#define cServerSideTDR_putIntptr( ptr ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_putIntptr( p_cellcb, ptr ))
#define cServerSideTDR_getIntptr( ptr ) \
          ((void)p_cellcb, tRPCSharedTaskMain_cServerSideTDR_getIntptr( p_cellcb, ptr ))
#define write( prio, p_syslog ) \
          ((void)p_cellcb, tRPCSharedTaskMain__require_call_port_tSysLog_eSysLog_write( p_cellcb, prio, p_syslog ))
#define read( p_syslog ) \
          ((void)p_cellcb, tRPCSharedTaskMain__require_call_port_tSysLog_eSysLog_read( p_cellcb, p_syslog ))
#define mask( logmask, lowmask ) \
          ((void)p_cellcb, tRPCSharedTaskMain__require_call_port_tSysLog_eSysLog_mask( p_cellcb, logmask, lowmask ))
#define refer( pk_rlog ) \
          ((void)p_cellcb, tRPCSharedTaskMain__require_call_port_tSysLog_eSysLog_refer( p_cellcb, pk_rlog ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tRPCSharedTaskMain_eMain_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tRPCSharedTaskMain_N_CELL; (i)++ ){ \
       (p_cb) = &tRPCSharedTaskMain_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tRPCSharedTaskMain_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tRPCSharedTaskMain_TECSGENH */
