/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tPtrCt_TECSGEN_H
#define tPtrCt_TECSGEN_H

/*
 * celltype          :  tPtrCt
 * global name       :  tPtrCt
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  true
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tPtrCt_INIB {
    /* attribute(RO) #_ATO_# */ 
    int32_t(*      a_fp)();
    int32_t(*      v_fp)();
    int32_t(**     v_fp1)();
    int32_t(**     v_fp2)();
}  tPtrCt_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tPtrCt_CB {
    tPtrCt_INIB  *_inib;
    /* var #_VA_# */ 
    int32_t(*      fp)();
}  tPtrCt_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tPtrCt_CB  tPtrCt_SINGLE_CELL_CB;
extern  tPtrCt_INIB  tPtrCt_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tPtrCt_CB *tPtrCt_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tPtrCt_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tPtrCt_ATTR_a_fp    	(tPtrCt_SINGLE_CELL_INIB.a_fp)
#define tPtrCt_ATTR_v_fp    	(tPtrCt_SINGLE_CELL_INIB.v_fp)
#define tPtrCt_ATTR_v_fp1   	(tPtrCt_SINGLE_CELL_INIB.v_fp1)
#define tPtrCt_ATTR_v_fp2   	(tPtrCt_SINGLE_CELL_INIB.v_fp2)

#define tPtrCt_GET_a_fp()   	(tPtrCt_SINGLE_CELL_INIB.a_fp)
#define tPtrCt_GET_v_fp()   	(tPtrCt_SINGLE_CELL_INIB.v_fp)
#define tPtrCt_GET_v_fp1()  	(tPtrCt_SINGLE_CELL_INIB.v_fp1)
#define tPtrCt_GET_v_fp2()  	(tPtrCt_SINGLE_CELL_INIB.v_fp2)


/* var アクセスマクロ #_VAM_# */
#define tPtrCt_VAR_fp       	(tPtrCt_SINGLE_CELL_CB.fp)

#define tPtrCt_GET_fp()     	(tPtrCt_SINGLE_CELL_CB.fp)
#define tPtrCt_SET_fp(val)  	(tPtrCt_SINGLE_CELL_CB.fp=(val))

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
#define GET_CELLCB(idx)  tPtrCt_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tPtrCt_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tPtrCt_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a_fp            tPtrCt_ATTR_a_fp
#define ATTR_v_fp            tPtrCt_ATTR_v_fp
#define ATTR_v_fp1           tPtrCt_ATTR_v_fp1
#define ATTR_v_fp2           tPtrCt_ATTR_v_fp2


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_fp               tPtrCt_VAR_fp



/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	tPtrCt_SINGLE_CELL_CB._inib = &tPtrCt_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tPtrCt_TECSGENH */
