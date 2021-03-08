/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTECSMain_TECSGEN_H
#define tTECSMain_TECSGEN_H

/*
 * celltype          :  tTECSMain
 * global name       :  tTECSMain
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sPrint_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTECSMain_INIB {
    /* call port #_TCP_# */
    /* attribute(RO) #_ATO_# */ 
    char_t*        msg;
}  tTECSMain_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTECSMain_CB_tab           tTECSMain_INIB_tab
#define tTECSMain_SINGLE_CELL_CB   tTECSMain_SINGLE_CELL_INIB
#define tTECSMain_CB               tTECSMain_INIB
#define tag_tTECSMain_CB           tag_tTECSMain_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tTECSMain_INIB  tTECSMain_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTECSMain_INIB *tTECSMain_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTECSMain_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTracePlugin_sPrint_tecsgen.h"
#ifdef  tTECSMain_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTECSMain_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tTECSMain_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tTECSMain_ATTR_msg  	(tTECSMain_SINGLE_CELL_INIB.msg)

#define tTECSMain_GET_msg() 	(tTECSMain_SINGLE_CELL_INIB.msg)



 /* 呼び口関数マクロ #_CPM_# */
#define tTECSMain_cPrint_print( str ) \
	  tTracePlugin_sPrint_eThroughEntry_print( \
	   &tTracePlugin_sPrint_CB_tab[0], (str) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTECSMain_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTECSMain_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTECSMain_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_msg             tTECSMain_ATTR_msg


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cPrint_print( str ) \
          tTECSMain_cPrint_print( str )



/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTECSMain_TECSGENH */
