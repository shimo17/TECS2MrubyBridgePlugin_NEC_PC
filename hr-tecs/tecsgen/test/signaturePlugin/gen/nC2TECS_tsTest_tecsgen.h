/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nC2TECS_tsTest_TECSGEN_H
#define nC2TECS_tsTest_TECSGEN_H

/*
 * celltype          :  tsTest
 * global name       :  nC2TECS_tsTest
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTest_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_nC2TECS_tsTest_CB {
    int  dummy;
} nC2TECS_tsTest_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */


/* セルタイプのIDX型 #_CTIX_# */
typedef int   nC2TECS_tsTest_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nC2TECS_tsTest_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTECSTest_tecsgen.h"
#ifdef  nC2TECS_tsTest_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nC2TECS_tsTest_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define nC2TECS_tsTest_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define nC2TECS_tsTest_cCall_test( input ) \
	  tTECSTest_eTest_test( \
	   (tTECSTest_IDX)0, (input) )
#define nC2TECS_tsTest_cCall_test2( input, ret ) \
	  tTECSTest_eTest_test2( \
	   (tTECSTest_IDX)0, (input), (ret) )
#define nC2TECS_tsTest_cCall_test3( input, ret ) \
	  tTECSTest_eTest_test3( \
	   (tTECSTest_IDX)0, (input), (ret) )
#define nC2TECS_tsTest_cCall_test4( input, len ) \
	  tTECSTest_eTest_test4( \
	   (tTECSTest_IDX)0, (input), (len) )
#define nC2TECS_tsTest_cCall_test5( input ) \
	  tTECSTest_eTest_test5( \
	   (tTECSTest_IDX)0, (input) )
#define nC2TECS_tsTest_cCall_test6( systim ) \
	  tTECSTest_eTest_test6( \
	   (tTECSTest_IDX)0, (systim) )

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
#define GET_CELLCB(idx)  nC2TECS_tsTest_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nC2TECS_tsTest_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nC2TECS_tsTest_IDX

#define tsTest_IDX  nC2TECS_tsTest_IDX
/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_test( input ) \
          nC2TECS_tsTest_cCall_test( input )
#define cCall_test2( input, ret ) \
          nC2TECS_tsTest_cCall_test2( input, ret )
#define cCall_test3( input, ret ) \
          nC2TECS_tsTest_cCall_test3( input, ret )
#define cCall_test4( input, len ) \
          nC2TECS_tsTest_cCall_test4( input, len )
#define cCall_test5( input ) \
          nC2TECS_tsTest_cCall_test5( input )
#define cCall_test6( systim ) \
          nC2TECS_tsTest_cCall_test6( systim )



/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nC2TECS_tsTest_TECSGENH */
