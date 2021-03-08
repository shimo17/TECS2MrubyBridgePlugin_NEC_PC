/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSimpleServer_TECSGEN_H
#define tSimpleServer_TECSGEN_H

/*
 * celltype          :  tSimpleServer
 * global name       :  tSimpleServer
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSysLog_tecsgen.h"
#include "sSimple_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tSimpleServer_CB {
    int  dummy;
} tSimpleServer_CB;
extern tSimpleServer_CB  tSimpleServer_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tSimpleServer_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSimple */
void         tSimpleServer_eEnt_shutdown(tSimpleServer_IDX idx);
ER           tSimpleServer_eEnt_func1(tSimpleServer_IDX idx, int32_t inval);
ER           tSimpleServer_eEnt_func2(tSimpleServer_IDX idx, const char_t* str);
ER           tSimpleServer_eEnt_func3(tSimpleServer_IDX idx, const char_t* msg, int32_t len);
ER           tSimpleServer_eEnt_func4(tSimpleServer_IDX idx, const char_t** msg, int32_t len);
ER           tSimpleServer_eEnt_func5(tSimpleServer_IDX idx, const STA** sta, int32_t len);
ER           tSimpleServer_eEnt_func6(tSimpleServer_IDX idx, const int8_t array[64]);
ER           tSimpleServer_eEnt_func7(tSimpleServer_IDX idx, const int8_t array2[64][4]);
ER           tSimpleServer_eEnt_func8(tSimpleServer_IDX idx, const STA arraySt[2]);
ER           tSimpleServer_eEnt_func9(tSimpleServer_IDX idx, const STA* arraySt[2]);
ER           tSimpleServer_eEnt_func10(tSimpleServer_IDX idx, int32_t* val);
ER           tSimpleServer_eEnt_func11(tSimpleServer_IDX idx, char_t* msg, int32_t len);
ER           tSimpleServer_eEnt_func12(tSimpleServer_IDX idx, char_t** msg);
ER           tSimpleServer_eEnt_func13(tSimpleServer_IDX idx, STB* sta, int32_t len);
ER           tSimpleServer_eEnt_func14(tSimpleServer_IDX idx, STB** sta, int32_t len);
ER           tSimpleServer_eEnt_func15(tSimpleServer_IDX idx, int8_t(* array1)[64]);
ER           tSimpleServer_eEnt_func16(tSimpleServer_IDX idx, int8_t* array, int16_t* sz);
ER           tSimpleServer_eEnt_func40(tSimpleServer_IDX idx, int32_t* val);
ER           tSimpleServer_eEnt_func41(tSimpleServer_IDX idx, char_t* msg, int32_t len);
ER           tSimpleServer_eEnt_func42(tSimpleServer_IDX idx, char_t** msg);
ER           tSimpleServer_eEnt_func43(tSimpleServer_IDX idx, STA* sta, int32_t len);
ER           tSimpleServer_eEnt_func44(tSimpleServer_IDX idx, int8_t* array, int32_t* len);
ER           tSimpleServer_eEnt_func21(tSimpleServer_IDX idx, int32_t* a);
ER           tSimpleServer_eEnt_func22(tSimpleServer_IDX idx, STA* sta);
ER           tSimpleServer_eEnt_func23(tSimpleServer_IDX idx, char_t* str);
ER           tSimpleServer_eEnt_func24(tSimpleServer_IDX idx, char_t* msg, int32_t len);
ER           tSimpleServer_eEnt_func25(tSimpleServer_IDX idx, char_t** msg, int32_t len);
ER           tSimpleServer_eEnt_func26(tSimpleServer_IDX idx, STA** sta, int32_t len);
ER           tSimpleServer_eEnt_func27(tSimpleServer_IDX idx, int8_t(* array2)[64]);
ER           tSimpleServer_eEnt_func31(tSimpleServer_IDX idx, int32_t** a);
ER           tSimpleServer_eEnt_func32(tSimpleServer_IDX idx, STA** sta);
ER           tSimpleServer_eEnt_func33(tSimpleServer_IDX idx, char_t** str);
ER           tSimpleServer_eEnt_func34(tSimpleServer_IDX idx, char_t** msg, int32_t* len);
ER           tSimpleServer_eEnt_func35(tSimpleServer_IDX idx, char_t*** msg, int32_t* len, int32_t* msglen);
ER           tSimpleServer_eEnt_func36(tSimpleServer_IDX idx, STA** sta, int32_t* len);
ER           tSimpleServer_eEnt_func37(tSimpleServer_IDX idx, STA*** sta, int32_t* len);
ER           tSimpleServer_eEnt_func38(tSimpleServer_IDX idx, int8_t(** array2)[64]);
ER           tSimpleServer_eEnt_func39(tSimpleServer_IDX idx, STA*(** arraySt)[2]);
ER           tSimpleServer_eEnt_func50(tSimpleServer_IDX idx, int_t i, short_t s, long_t l);
ER           tSimpleServer_eEnt_func51(tSimpleServer_IDX idx, uint_t i, ushort_t s, ulong_t l);
ER           tSimpleServer_eEnt_func52(tSimpleServer_IDX idx, int_t* i, short_t* s, long_t* l);
ER           tSimpleServer_eEnt_func53(tSimpleServer_IDX idx, uint_t* i, ushort_t* s, ulong_t* l);
ER           tSimpleServer_eEnt_func54(tSimpleServer_IDX idx, char_t c, schar_t sc, uchar_t uc);
ER           tSimpleServer_eEnt_func55(tSimpleServer_IDX idx, char_t* c, schar_t* sc, uchar_t* uc);
ER           tSimpleServer_eEnt_func56(tSimpleServer_IDX idx, intptr_t ip, intptr_t* op);
ER           tSimpleServer_eEnt_func60(tSimpleServer_IDX idx, intptr_t ip, intptr_t* op);
ER           tSimpleServer_eEnt_func61(tSimpleServer_IDX idx, const int32_t* ip, intptr_t* op);
ER           tSimpleServer_eEnt_func62(tSimpleServer_IDX idx, int32_t* iop);
ER           tSimpleServer_eEnt_func63(tSimpleServer_IDX idx, int32_t* sp);
ER           tSimpleServer_eEnt_func64(tSimpleServer_IDX idx, int32_t** rp, bool_t b_zero);
ER           tSimpleServer_eEnt_func70(tSimpleServer_IDX idx, STA* sta);
ER           tSimpleServer_eEnt_func71(tSimpleServer_IDX idx, char_t* str);
ER           tSimpleServer_eEnt_func72(tSimpleServer_IDX idx, STA** sta, bool_t b_zero);
ER           tSimpleServer_eEnt_func73(tSimpleServer_IDX idx, char_t** str, bool_t b_zero);
ER           tSimpleServer_eEnt_func80(tSimpleServer_IDX idx, float32_t val);
ER           tSimpleServer_eEnt_func81(tSimpleServer_IDX idx, float32_t* val);
ER           tSimpleServer_eEnt_func82(tSimpleServer_IDX idx, double64_t val);
ER           tSimpleServer_eEnt_func83(tSimpleServer_IDX idx, double64_t* val);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSimpleServer_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSysLog_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tSimpleServer_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSimpleServer_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSimpleServer_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSimpleServer_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSimpleServer_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSimpleServer_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tSimpleServer__require_call_port_tSysLog_eSysLog_write( p_that, prio, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (prio), (p_syslog) )
#define tSimpleServer__require_call_port_tSysLog_eSysLog_read( p_that, p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tSimpleServer__require_call_port_tSysLog_eSysLog_mask( p_that, logmask, lowmask ) \
	  tSysLog_eSysLog_mask( \
	    (logmask), (lowmask) )
#define tSimpleServer__require_call_port_tSysLog_eSysLog_refer( p_that, pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )
#define tSimpleServer_eEnt_func21_a_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func21_a_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func21_a_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func22_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func22_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func22_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func23_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func23_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func23_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func24_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func24_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func24_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func25_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func25_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func25_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func26_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func26_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func26_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func27_array2_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func27_array2_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func27_array2_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func31_a_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func31_a_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func31_a_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func32_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func32_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func32_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func33_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func33_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func33_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func34_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func34_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func34_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func35_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func35_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func35_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func36_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func36_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func36_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func37_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func37_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func37_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func38_array2_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func38_array2_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func38_array2_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func39_arraySt_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func39_arraySt_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func39_arraySt_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func63_sp_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func63_sp_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func63_sp_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func64_rp_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func64_rp_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func64_rp_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func70_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func70_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func70_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func71_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func71_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func71_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func72_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func72_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func72_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleServer_eEnt_func73_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleServer_eEnt_func73_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleServer_eEnt_func73_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tSimpleServer_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSimpleServer_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSimpleServer_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSimpleServer_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define write( prio, p_syslog ) \
          ((void)p_cellcb, tSimpleServer__require_call_port_tSysLog_eSysLog_write( p_cellcb, prio, p_syslog ))
#define read( p_syslog ) \
          ((void)p_cellcb, tSimpleServer__require_call_port_tSysLog_eSysLog_read( p_cellcb, p_syslog ))
#define mask( logmask, lowmask ) \
          ((void)p_cellcb, tSimpleServer__require_call_port_tSysLog_eSysLog_mask( p_cellcb, logmask, lowmask ))
#define refer( pk_rlog ) \
          ((void)p_cellcb, tSimpleServer__require_call_port_tSysLog_eSysLog_refer( p_cellcb, pk_rlog ))
#define eEnt_func21_a_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func21_a_alloc( p_cellcb, size, ptr ))
#define eEnt_func21_a_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func21_a_dealloc( p_cellcb, ptr ))
#define eEnt_func21_a_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func21_a_printStatistics( p_cellcb ))
#define eEnt_func22_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func22_sta_alloc( p_cellcb, size, ptr ))
#define eEnt_func22_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func22_sta_dealloc( p_cellcb, ptr ))
#define eEnt_func22_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func22_sta_printStatistics( p_cellcb ))
#define eEnt_func23_str_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func23_str_alloc( p_cellcb, size, ptr ))
#define eEnt_func23_str_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func23_str_dealloc( p_cellcb, ptr ))
#define eEnt_func23_str_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func23_str_printStatistics( p_cellcb ))
#define eEnt_func24_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func24_msg_alloc( p_cellcb, size, ptr ))
#define eEnt_func24_msg_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func24_msg_dealloc( p_cellcb, ptr ))
#define eEnt_func24_msg_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func24_msg_printStatistics( p_cellcb ))
#define eEnt_func25_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func25_msg_alloc( p_cellcb, size, ptr ))
#define eEnt_func25_msg_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func25_msg_dealloc( p_cellcb, ptr ))
#define eEnt_func25_msg_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func25_msg_printStatistics( p_cellcb ))
#define eEnt_func26_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func26_sta_alloc( p_cellcb, size, ptr ))
#define eEnt_func26_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func26_sta_dealloc( p_cellcb, ptr ))
#define eEnt_func26_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func26_sta_printStatistics( p_cellcb ))
#define eEnt_func27_array2_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func27_array2_alloc( p_cellcb, size, ptr ))
#define eEnt_func27_array2_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func27_array2_dealloc( p_cellcb, ptr ))
#define eEnt_func27_array2_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func27_array2_printStatistics( p_cellcb ))
#define eEnt_func31_a_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func31_a_alloc( p_cellcb, size, ptr ))
#define eEnt_func31_a_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func31_a_dealloc( p_cellcb, ptr ))
#define eEnt_func31_a_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func31_a_printStatistics( p_cellcb ))
#define eEnt_func32_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func32_sta_alloc( p_cellcb, size, ptr ))
#define eEnt_func32_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func32_sta_dealloc( p_cellcb, ptr ))
#define eEnt_func32_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func32_sta_printStatistics( p_cellcb ))
#define eEnt_func33_str_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func33_str_alloc( p_cellcb, size, ptr ))
#define eEnt_func33_str_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func33_str_dealloc( p_cellcb, ptr ))
#define eEnt_func33_str_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func33_str_printStatistics( p_cellcb ))
#define eEnt_func34_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func34_msg_alloc( p_cellcb, size, ptr ))
#define eEnt_func34_msg_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func34_msg_dealloc( p_cellcb, ptr ))
#define eEnt_func34_msg_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func34_msg_printStatistics( p_cellcb ))
#define eEnt_func35_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func35_msg_alloc( p_cellcb, size, ptr ))
#define eEnt_func35_msg_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func35_msg_dealloc( p_cellcb, ptr ))
#define eEnt_func35_msg_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func35_msg_printStatistics( p_cellcb ))
#define eEnt_func36_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func36_sta_alloc( p_cellcb, size, ptr ))
#define eEnt_func36_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func36_sta_dealloc( p_cellcb, ptr ))
#define eEnt_func36_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func36_sta_printStatistics( p_cellcb ))
#define eEnt_func37_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func37_sta_alloc( p_cellcb, size, ptr ))
#define eEnt_func37_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func37_sta_dealloc( p_cellcb, ptr ))
#define eEnt_func37_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func37_sta_printStatistics( p_cellcb ))
#define eEnt_func38_array2_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func38_array2_alloc( p_cellcb, size, ptr ))
#define eEnt_func38_array2_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func38_array2_dealloc( p_cellcb, ptr ))
#define eEnt_func38_array2_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func38_array2_printStatistics( p_cellcb ))
#define eEnt_func39_arraySt_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func39_arraySt_alloc( p_cellcb, size, ptr ))
#define eEnt_func39_arraySt_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func39_arraySt_dealloc( p_cellcb, ptr ))
#define eEnt_func39_arraySt_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func39_arraySt_printStatistics( p_cellcb ))
#define eEnt_func63_sp_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func63_sp_alloc( p_cellcb, size, ptr ))
#define eEnt_func63_sp_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func63_sp_dealloc( p_cellcb, ptr ))
#define eEnt_func63_sp_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func63_sp_printStatistics( p_cellcb ))
#define eEnt_func64_rp_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func64_rp_alloc( p_cellcb, size, ptr ))
#define eEnt_func64_rp_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func64_rp_dealloc( p_cellcb, ptr ))
#define eEnt_func64_rp_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func64_rp_printStatistics( p_cellcb ))
#define eEnt_func70_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func70_sta_alloc( p_cellcb, size, ptr ))
#define eEnt_func70_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func70_sta_dealloc( p_cellcb, ptr ))
#define eEnt_func70_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func70_sta_printStatistics( p_cellcb ))
#define eEnt_func71_str_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func71_str_alloc( p_cellcb, size, ptr ))
#define eEnt_func71_str_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func71_str_dealloc( p_cellcb, ptr ))
#define eEnt_func71_str_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func71_str_printStatistics( p_cellcb ))
#define eEnt_func72_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func72_sta_alloc( p_cellcb, size, ptr ))
#define eEnt_func72_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func72_sta_dealloc( p_cellcb, ptr ))
#define eEnt_func72_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func72_sta_printStatistics( p_cellcb ))
#define eEnt_func73_str_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func73_str_alloc( p_cellcb, size, ptr ))
#define eEnt_func73_str_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func73_str_dealloc( p_cellcb, ptr ))
#define eEnt_func73_str_printStatistics( ) \
          ((void)p_cellcb, tSimpleServer_eEnt_func73_str_printStatistics( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_shutdown    tSimpleServer_eEnt_shutdown
#define eEnt_func1       tSimpleServer_eEnt_func1
#define eEnt_func2       tSimpleServer_eEnt_func2
#define eEnt_func3       tSimpleServer_eEnt_func3
#define eEnt_func4       tSimpleServer_eEnt_func4
#define eEnt_func5       tSimpleServer_eEnt_func5
#define eEnt_func6       tSimpleServer_eEnt_func6
#define eEnt_func7       tSimpleServer_eEnt_func7
#define eEnt_func8       tSimpleServer_eEnt_func8
#define eEnt_func9       tSimpleServer_eEnt_func9
#define eEnt_func10      tSimpleServer_eEnt_func10
#define eEnt_func11      tSimpleServer_eEnt_func11
#define eEnt_func12      tSimpleServer_eEnt_func12
#define eEnt_func13      tSimpleServer_eEnt_func13
#define eEnt_func14      tSimpleServer_eEnt_func14
#define eEnt_func15      tSimpleServer_eEnt_func15
#define eEnt_func16      tSimpleServer_eEnt_func16
#define eEnt_func40      tSimpleServer_eEnt_func40
#define eEnt_func41      tSimpleServer_eEnt_func41
#define eEnt_func42      tSimpleServer_eEnt_func42
#define eEnt_func43      tSimpleServer_eEnt_func43
#define eEnt_func44      tSimpleServer_eEnt_func44
#define eEnt_func21      tSimpleServer_eEnt_func21
#define eEnt_func22      tSimpleServer_eEnt_func22
#define eEnt_func23      tSimpleServer_eEnt_func23
#define eEnt_func24      tSimpleServer_eEnt_func24
#define eEnt_func25      tSimpleServer_eEnt_func25
#define eEnt_func26      tSimpleServer_eEnt_func26
#define eEnt_func27      tSimpleServer_eEnt_func27
#define eEnt_func31      tSimpleServer_eEnt_func31
#define eEnt_func32      tSimpleServer_eEnt_func32
#define eEnt_func33      tSimpleServer_eEnt_func33
#define eEnt_func34      tSimpleServer_eEnt_func34
#define eEnt_func35      tSimpleServer_eEnt_func35
#define eEnt_func36      tSimpleServer_eEnt_func36
#define eEnt_func37      tSimpleServer_eEnt_func37
#define eEnt_func38      tSimpleServer_eEnt_func38
#define eEnt_func39      tSimpleServer_eEnt_func39
#define eEnt_func50      tSimpleServer_eEnt_func50
#define eEnt_func51      tSimpleServer_eEnt_func51
#define eEnt_func52      tSimpleServer_eEnt_func52
#define eEnt_func53      tSimpleServer_eEnt_func53
#define eEnt_func54      tSimpleServer_eEnt_func54
#define eEnt_func55      tSimpleServer_eEnt_func55
#define eEnt_func56      tSimpleServer_eEnt_func56
#define eEnt_func60      tSimpleServer_eEnt_func60
#define eEnt_func61      tSimpleServer_eEnt_func61
#define eEnt_func62      tSimpleServer_eEnt_func62
#define eEnt_func63      tSimpleServer_eEnt_func63
#define eEnt_func64      tSimpleServer_eEnt_func64
#define eEnt_func70      tSimpleServer_eEnt_func70
#define eEnt_func71      tSimpleServer_eEnt_func71
#define eEnt_func72      tSimpleServer_eEnt_func72
#define eEnt_func73      tSimpleServer_eEnt_func73
#define eEnt_func80      tSimpleServer_eEnt_func80
#define eEnt_func81      tSimpleServer_eEnt_func81
#define eEnt_func82      tSimpleServer_eEnt_func82
#define eEnt_func83      tSimpleServer_eEnt_func83

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define EENT_FUNC21_A_DEALLOC(a) \
	  eEnt_func21_a_dealloc( (a) ); 
#define EENT_FUNC22_STA_DEALLOC(sta) \
	  eEnt_func22_sta_dealloc( (*(sta)).msg );  \
	  eEnt_func22_sta_dealloc( (sta) ); 
#define EENT_FUNC23_STR_DEALLOC(str) \
	  eEnt_func23_str_dealloc( (str) ); 
#define EENT_FUNC24_MSG_DEALLOC(msg) \
	  eEnt_func24_msg_dealloc( (msg) ); 
#define EENT_FUNC25_MSG_DEALLOC(msg, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eEnt_func25_msg_dealloc( (msg)[i0__] );  \
	    } \
	  } \
	  eEnt_func25_msg_dealloc( (msg) ); 
#define EENT_FUNC26_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eEnt_func26_sta_dealloc( (*(sta)[i0__]).msg );  \
	      eEnt_func26_sta_dealloc( (sta)[i0__] );  \
	    } \
	  } \
	  eEnt_func26_sta_dealloc( (sta) ); 
#define EENT_FUNC27_ARRAY2_DEALLOC(array2) \
	  eEnt_func27_array2_dealloc( (array2) ); 
#define EENT_FUNC31_A_DEALLOC(a) \
	  eEnt_func31_a_dealloc( (a) ); 
#define EENT_FUNC32_STA_DEALLOC(sta) \
	  eEnt_func32_sta_dealloc( (*(sta)).msg );  \
	  eEnt_func32_sta_dealloc( (sta) ); 
#define EENT_FUNC33_STR_DEALLOC(str) \
	  eEnt_func33_str_dealloc( (str) ); 
#define EENT_FUNC34_MSG_DEALLOC(msg) \
	  eEnt_func34_msg_dealloc( (msg) ); 
#define EENT_FUNC35_MSG_DEALLOC(msg, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eEnt_func35_msg_dealloc( (msg)[i0__] );  \
	    } \
	  } \
	  eEnt_func35_msg_dealloc( (msg) ); 
#define EENT_FUNC36_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eEnt_func36_sta_dealloc( (sta)[i0__].msg );  \
	    } \
	  } \
	  eEnt_func36_sta_dealloc( (sta) ); 
#define EENT_FUNC37_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eEnt_func37_sta_dealloc( (*(sta)[i0__]).msg );  \
	      eEnt_func37_sta_dealloc( (sta)[i0__] );  \
	    } \
	  } \
	  eEnt_func37_sta_dealloc( (sta) ); 
#define EENT_FUNC38_ARRAY2_DEALLOC(array2) \
	  eEnt_func38_array2_dealloc( (array2) ); 
#define EENT_FUNC39_ARRAYST_DEALLOC(arraySt) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < 2; i0__++ ){  \
	      eEnt_func39_arraySt_dealloc( (*(*(arraySt))[i0__]).msg );  \
	      eEnt_func39_arraySt_dealloc( (*(arraySt))[i0__] );  \
	    } \
	  } \
	  eEnt_func39_arraySt_dealloc( (arraySt) ); 
#define EENT_FUNC63_SP_DEALLOC(sp) \
	  if( (sp) ){	/* nullable */ \
	    eEnt_func63_sp_dealloc( (sp) );  \
	  }
#define EENT_FUNC64_RP_DEALLOC(rp) \
	  if( (rp) ){	/* nullable */ \
	    eEnt_func64_rp_dealloc( (rp) );  \
	  }
#define EENT_FUNC70_STA_DEALLOC(sta) \
	  if( (sta) ){	/* nullable */ \
	    eEnt_func70_sta_dealloc( (*(sta)).msg );  \
	    eEnt_func70_sta_dealloc( (sta) );  \
	  }
#define EENT_FUNC71_STR_DEALLOC(str) \
	  if( (str) ){	/* nullable */ \
	    eEnt_func71_str_dealloc( (str) );  \
	  }
#define EENT_FUNC72_STA_DEALLOC(sta) \
	  if( (sta) ){	/* nullable */ \
	    eEnt_func72_sta_dealloc( (*(sta)).msg );  \
	    eEnt_func72_sta_dealloc( (sta) );  \
	  }
#define EENT_FUNC73_STR_DEALLOC(str) \
	  if( (str) ){	/* nullable */ \
	    eEnt_func73_str_dealloc( (str) );  \
	  }

/* deallocate マクロ #_DAL_#  _RESET */
#define EENT_FUNC21_A_DEALLOC_RESET(a) \
	  if( (a) ){ \
	    eEnt_func21_a_dealloc( (a) );  \
	  }
#define EENT_FUNC22_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      eEnt_func22_sta_dealloc( (*(sta)).msg );  \
	    } \
	    eEnt_func22_sta_dealloc( (sta) );  \
	  }
#define EENT_FUNC23_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    eEnt_func23_str_dealloc( (str) );  \
	  }
#define EENT_FUNC24_MSG_DEALLOC_RESET(msg) \
	  if( (msg) ){ \
	    eEnt_func24_msg_dealloc( (msg) );  \
	  }
#define EENT_FUNC25_MSG_DEALLOC_RESET(msg, count__) \
	  if( (msg) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (msg)[i0__] ){ \
	          eEnt_func25_msg_dealloc( (msg)[i0__] );  \
	        } \
	      } \
	    } \
	    eEnt_func25_msg_dealloc( (msg) );  \
	  }
#define EENT_FUNC26_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__] ){ \
	          if( (*(sta)[i0__]).msg ){ \
	            eEnt_func26_sta_dealloc( (*(sta)[i0__]).msg );  \
	          } \
	          eEnt_func26_sta_dealloc( (sta)[i0__] );  \
	        } \
	      } \
	    } \
	    eEnt_func26_sta_dealloc( (sta) );  \
	  }
#define EENT_FUNC27_ARRAY2_DEALLOC_RESET(array2) \
	  if( (array2) ){ \
	    eEnt_func27_array2_dealloc( (array2) );  \
	  }
#define EENT_FUNC31_A_DEALLOC_RESET(a) \
	  if( (a) ){ \
	    eEnt_func31_a_dealloc( (a) );  \
	  }
#define EENT_FUNC32_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      eEnt_func32_sta_dealloc( (*(sta)).msg );  \
	    } \
	    eEnt_func32_sta_dealloc( (sta) );  \
	  }
#define EENT_FUNC33_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    eEnt_func33_str_dealloc( (str) );  \
	  }
#define EENT_FUNC34_MSG_DEALLOC_RESET(msg) \
	  if( (msg) ){ \
	    eEnt_func34_msg_dealloc( (msg) );  \
	  }
#define EENT_FUNC35_MSG_DEALLOC_RESET(msg, count__) \
	  if( (msg) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (msg)[i0__] ){ \
	          eEnt_func35_msg_dealloc( (msg)[i0__] );  \
	        } \
	      } \
	    } \
	    eEnt_func35_msg_dealloc( (msg) );  \
	  }
#define EENT_FUNC36_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__].msg ){ \
	          eEnt_func36_sta_dealloc( (sta)[i0__].msg );  \
	        } \
	      } \
	    } \
	    eEnt_func36_sta_dealloc( (sta) );  \
	  }
#define EENT_FUNC37_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__] ){ \
	          if( (*(sta)[i0__]).msg ){ \
	            eEnt_func37_sta_dealloc( (*(sta)[i0__]).msg );  \
	          } \
	          eEnt_func37_sta_dealloc( (sta)[i0__] );  \
	        } \
	      } \
	    } \
	    eEnt_func37_sta_dealloc( (sta) );  \
	  }
#define EENT_FUNC38_ARRAY2_DEALLOC_RESET(array2) \
	  if( (array2) ){ \
	    eEnt_func38_array2_dealloc( (array2) );  \
	  }
#define EENT_FUNC39_ARRAYST_DEALLOC_RESET(arraySt) \
	  if( (arraySt) ){ \
	    { int_t  i1__; \
	      for( i1__ = 0; i1__ < 2; i1__++ ){  \
	        if( (*(arraySt))[i1__] ){ \
	          if( (*(*(arraySt))[i1__]).msg ){ \
	            eEnt_func39_arraySt_dealloc( (*(*(arraySt))[i1__]).msg );  \
	          } \
	          eEnt_func39_arraySt_dealloc( (*(arraySt))[i1__] );  \
	        } \
	      } \
	    } \
	    eEnt_func39_arraySt_dealloc( (arraySt) );  \
	  }
#define EENT_FUNC63_SP_DEALLOC_RESET(sp) \
	  if( (sp) ){ \
	    eEnt_func63_sp_dealloc( (sp) );  \
	  }
#define EENT_FUNC64_RP_DEALLOC_RESET(rp) \
	  if( (rp) ){ \
	    eEnt_func64_rp_dealloc( (rp) );  \
	  }
#define EENT_FUNC70_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      eEnt_func70_sta_dealloc( (*(sta)).msg );  \
	    } \
	    eEnt_func70_sta_dealloc( (sta) );  \
	  }
#define EENT_FUNC71_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    eEnt_func71_str_dealloc( (str) );  \
	  }
#define EENT_FUNC72_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      eEnt_func72_sta_dealloc( (*(sta)).msg );  \
	    } \
	    eEnt_func72_sta_dealloc( (sta) );  \
	  }
#define EENT_FUNC73_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    eEnt_func73_str_dealloc( (str) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSimpleServer_TECSGENH */
