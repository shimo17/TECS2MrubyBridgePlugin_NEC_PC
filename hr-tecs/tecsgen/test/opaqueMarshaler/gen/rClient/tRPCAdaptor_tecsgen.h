/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tRPCAdaptor_TECSGEN_H
#define tRPCAdaptor_TECSGEN_H

/*
 * celltype          :  tRPCAdaptor
 * global name       :  tRPCAdaptor
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  true
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTaskBody_tecsgen.h"
#include "sRPCErrorHandler_tecsgen.h"
#include "sSocketClientOpener_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tRPCAdaptor_CB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    jmp_buf        jbuf;
}  tRPCAdaptor_CB;
extern tRPCAdaptor_CB  tRPCAdaptor_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tRPCAdaptor_CB *tRPCAdaptor_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tRPCAdaptor_eMain_main(tRPCAdaptor_IDX idx);
/* sRPCErrorHandler */
ER           tRPCAdaptor_eErrorHandler_errorOccured(tRPCAdaptor_IDX idx, int16_t func_id, ER er, int16_t state);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tRPCAdaptor_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tClient_tecsgen.h"
#include "tSocketClient_tecsgen.h"
#ifdef  tRPCAdaptor_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tRPCAdaptor_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tRPCAdaptor_ID_BASE         (1)  /* ID のベース  #_NIDB_# */
#define tRPCAdaptor_N_CELL          (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tRPCAdaptor_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tRPCAdaptor_GET_CELLCB(idx) (idx)



/* var アクセスマクロ #_VAM_# */
#define tRPCAdaptor_VAR_jbuf(p_that)	((p_that)->jbuf)

#define tRPCAdaptor_GET_jbuf(p_that)	((p_that)->jbuf)
#define tRPCAdaptor_SET_jbuf(p_that,val)	((p_that)->jbuf=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tRPCAdaptor_cCall_main( p_that ) \
	  tClient_eMain_main( \
	    )
#define tRPCAdaptor_cOpener_open( p_that, serverAddr, portNo, tmo ) \
	  tSocketClient_eOpener_open( \
	   &tSocketClient_CB_tab[0], (serverAddr), (portNo), (tmo) )
#define tRPCAdaptor_cOpener_simpleOpen( p_that, tmo ) \
	  tSocketClient_eOpener_simpleOpen( \
	   &tSocketClient_CB_tab[0], (tmo) )
#define tRPCAdaptor_cOpener_close( p_that, tmo ) \
	  tSocketClient_eOpener_close( \
	   &tSocketClient_CB_tab[0], (tmo) )

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
#define VALID_IDX(IDX)  tRPCAdaptor_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tRPCAdaptor_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tRPCAdaptor_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tRPCAdaptor_IDX



/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_jbuf             tRPCAdaptor_VAR_jbuf( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_main( ) \
          ((void)p_cellcb, tRPCAdaptor_cCall_main( p_cellcb ))
#define cOpener_open( serverAddr, portNo, tmo ) \
          ((void)p_cellcb, tRPCAdaptor_cOpener_open( p_cellcb, serverAddr, portNo, tmo ))
#define cOpener_simpleOpen( tmo ) \
          ((void)p_cellcb, tRPCAdaptor_cOpener_simpleOpen( p_cellcb, tmo ))
#define cOpener_close( tmo ) \
          ((void)p_cellcb, tRPCAdaptor_cOpener_close( p_cellcb, tmo ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tRPCAdaptor_eMain_main
#define eErrorHandler_errorOccured tRPCAdaptor_eErrorHandler_errorOccured

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tRPCAdaptor_N_CELL; (i)++ ){ \
       (p_cb) = &tRPCAdaptor_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tRPCAdaptor_TECSGENH */
