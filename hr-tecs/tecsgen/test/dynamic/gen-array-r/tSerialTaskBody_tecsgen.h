/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSerialTaskBody_TECSGEN_H
#define tSerialTaskBody_TECSGEN_H

/*
 * celltype          :  tSerialTaskBody
 * global name       :  tSerialTaskBody
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  true
 * has_INIB          :  false
 * rom               :  no
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTaskBody_tecsgen.h"
#include "sTaskExceptionBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPO_# */
typedef struct tag_tSerialTaskBody_CB {
    /* call port #_TCP_# */
    struct tag_sTaskBody_VDES *const*cBodyArray;
    int_t n_cBodyArray;
    struct tag_sTaskExceptionBody_VDES *const*cTaskExceptionBodyArray;
    int_t n_cTaskExceptionBodyArray;
    /* call port #_NEP_# */ 
    /* attribute #_AT_# */ 
    char_t*        name;
}  tSerialTaskBody_CB;
extern tSerialTaskBody_CB  tSerialTaskBody_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tSerialTaskBody_CB *tSerialTaskBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tSerialTaskBody_eTaskBody_main(tSerialTaskBody_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tSerialTaskBody_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSerialTaskBody_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSerialTaskBody_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cBodyArray(p_that)  ((p_that)->n_cBodyArray)
#define NCP_cBodyArray           (N_CP_cBodyArray(p_cellcb))
#define N_CP_cTaskExceptionBodyArray(p_that)  ((p_that)->n_cTaskExceptionBodyArray)
#define NCP_cTaskExceptionBodyArray           (N_CP_cTaskExceptionBodyArray(p_cellcb))
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tSerialTaskBody_is_cTaskExceptionBodyArray_joined(p_that,subscript) \
	  (((p_that)->cTaskExceptionBodyArray!=0)\
	  &&((p_that)->cTaskExceptionBodyArray[subscript]!=0))

/* セルCBを得るマクロ #_GCB_# */
#define tSerialTaskBody_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tSerialTaskBody_ATTR_name( p_that )	((p_that)->name)

#define tSerialTaskBody_GET_name(p_that)	((p_that)->name)



 /* 呼び口関数マクロ #_CPM_# */
#define tSerialTaskBody_cBodyArray_main( p_that, subscript ) \
	  (p_that)->cBodyArray[subscript]->VMT->main__T( \
	   (p_that)->cBodyArray[subscript] )
#define tSerialTaskBody_cTaskExceptionBodyArray_main( p_that, subscript, pattern ) \
	  (p_that)->cTaskExceptionBodyArray[subscript]->VMT->main__T( \
	   (p_that)->cTaskExceptionBodyArray[subscript], (pattern) )

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
#define VALID_IDX(IDX)  tSerialTaskBody_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSerialTaskBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSerialTaskBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSerialTaskBody_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            tSerialTaskBody_ATTR_name( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cBodyArray_main( subscript ) \
          tSerialTaskBody_cBodyArray_main( p_cellcb, subscript )
#define cTaskExceptionBodyArray_main( subscript, pattern ) \
          tSerialTaskBody_cTaskExceptionBodyArray_main( p_cellcb, subscript, pattern )



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cTaskExceptionBodyArray_joined(subscript)\
		tSerialTaskBody_is_cTaskExceptionBodyArray_joined(p_cellcb,subscript)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTaskBody_main   tSerialTaskBody_eTaskBody_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSerialTaskBody_N_CELL; (i)++ ){ \
       (p_cb) = &tSerialTaskBody_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSerialTaskBody_TECSGENH */
