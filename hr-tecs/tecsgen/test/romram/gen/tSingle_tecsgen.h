/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSingle_TECSGEN_H
#define tSingle_TECSGEN_H

/*
 * celltype          :  tSingle
 * global name       :  tSingle
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
#include "sSig_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSingle_INIB {
    /* call port #_TCP_# */
    struct tag_sSig_VDES *const*cCall;
    int_t n_cCall;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  tSingle_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tSingle_CB {
    tSingle_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int32_t        b;
}  tSingle_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tSingle_CB  tSingle_SINGLE_CELL_CB;
extern  tSingle_INIB  tSingle_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tSingle_CB *tSingle_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
int32_t      tSingle_eSig_func( int32_t in, int32_t* out);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cCall  (tSingle_SINGLE_CELL_INIB.n_cCall)
#define NCP_cCall   (tSingle_SINGLE_CELL_INIB.n_cCall)

/* セルCBを得るマクロ #_GCB_# */
#define tSingle_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tSingle_ATTR_a      	(tSingle_SINGLE_CELL_INIB.a)

#define tSingle_GET_a()     	(tSingle_SINGLE_CELL_INIB.a)


/* var アクセスマクロ #_VAM_# */
#define tSingle_VAR_b       	(tSingle_SINGLE_CELL_CB.b)

#define tSingle_GET_b()     	(tSingle_SINGLE_CELL_CB.b)
#define tSingle_SET_b(val)  	(tSingle_SINGLE_CELL_CB.b=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tSingle_cCall_func( subscript, in, out ) \
	  tSingle_SINGLE_CELL_INIB.cCall[subscript]->VMT->func__T( \
	  tSingle_SINGLE_CELL_INIB.cCall[subscript], (in), (out) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eSig */
int32_t        tSingle_eSig_func_skel( const struct tag_sSig_VDES *epd, int32_t in, int32_t* out);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSingle_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSingle_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSingle_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tSingle_ATTR_a


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_b                tSingle_VAR_b

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func( subscript, in, out ) \
          tSingle_cCall_func( subscript, in, out )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSig_func        tSingle_eSig_func

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()\
	tSingle_SINGLE_CELL_CB.b = 44;
#define SET_CB_INIB_POINTER(i,p_that)\
	tSingle_SINGLE_CELL_CB._inib = &tSingle_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSingle_TECSGENH */
