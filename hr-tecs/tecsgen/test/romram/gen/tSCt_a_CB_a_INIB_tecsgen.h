/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSCt_a_CB_a_INIB_TECSGEN_H
#define tSCt_a_CB_a_INIB_TECSGEN_H

/*
 * celltype          :  tSCt_a_CB_a_INIB
 * global name       :  tSCt_a_CB_a_INIB
 * idx_is_id(actual) :  yes(no)
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
typedef const struct tag_tSCt_a_CB_a_INIB_INIB {
    /* attribute(RO) #_ATO_# */ 
    int32_t        size;
    int8_t*        buf;
}  tSCt_a_CB_a_INIB_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tSCt_a_CB_a_INIB_CB {
    tSCt_a_CB_a_INIB_INIB  *_inib;
    /* var #_VA_# */ 
    int32_t        a;
}  tSCt_a_CB_a_INIB_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tSCt_a_CB_a_INIB_CB  tSCt_a_CB_a_INIB_SINGLE_CELL_CB;
extern  tSCt_a_CB_a_INIB_INIB  tSCt_a_CB_a_INIB_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tSCt_a_CB_a_INIB_CB *tSCt_a_CB_a_INIB_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tSCt_a_CB_a_INIB_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tSCt_a_CB_a_INIB_ATTR_size	(tSCt_a_CB_a_INIB_SINGLE_CELL_INIB.size)

#define tSCt_a_CB_a_INIB_GET_size()	(tSCt_a_CB_a_INIB_SINGLE_CELL_INIB.size)


/* var アクセスマクロ #_VAM_# */
#define tSCt_a_CB_a_INIB_VAR_a	(tSCt_a_CB_a_INIB_SINGLE_CELL_CB.a)
#define tSCt_a_CB_a_INIB_VAR_buf	(tSCt_a_CB_a_INIB_SINGLE_CELL_INIB.buf)

#define tSCt_a_CB_a_INIB_GET_a()	(tSCt_a_CB_a_INIB_SINGLE_CELL_CB.a)
#define tSCt_a_CB_a_INIB_SET_a(val)	(tSCt_a_CB_a_INIB_SINGLE_CELL_CB.a=(val))
#define tSCt_a_CB_a_INIB_GET_buf()	(tSCt_a_CB_a_INIB_SINGLE_CELL_CB.buf)
#define tSCt_a_CB_a_INIB_SET_buf(val)	(tSCt_a_CB_a_INIB_SINGLE_CELL_CB.buf=(val))

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
#define GET_CELLCB(idx)  tSCt_a_CB_a_INIB_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSCt_a_CB_a_INIB_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSCt_a_CB_a_INIB_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_size            tSCt_a_CB_a_INIB_ATTR_size


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_a                tSCt_a_CB_a_INIB_VAR_a
#define VAR_buf              tSCt_a_CB_a_INIB_VAR_buf



/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()\
	tSCt_a_CB_a_INIB_SINGLE_CELL_CB.a = 9;
#define SET_CB_INIB_POINTER(i,p_that)\
	tSCt_a_CB_a_INIB_SINGLE_CELL_CB._inib = &tSCt_a_CB_a_INIB_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSCt_a_CB_a_INIB_TECSGENH */
