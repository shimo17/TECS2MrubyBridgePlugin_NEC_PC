/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tAlloc_TECSGEN_H
#define tAlloc_TECSGEN_H

/*
 * celltype          :  tAlloc
 * global name       :  tAlloc
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  true
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tAlloc_CB {
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int32_t        n_alloc;
    int32_t        n_dealloc;
}  tAlloc_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tAlloc_CB  tAlloc_SINGLE_CELL_CB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tAlloc_CB *tAlloc_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sAlloc */
ER           tAlloc_eA_alloc( int32_t sz, void** ptr);
ER           tAlloc_eA_dealloc( const void* ptr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tAlloc_GET_CELLCB(idx) ((void *)0)



/* var アクセスマクロ #_VAM_# */
#define tAlloc_VAR_n_alloc  	(tAlloc_SINGLE_CELL_CB.n_alloc)
#define tAlloc_VAR_n_dealloc	(tAlloc_SINGLE_CELL_CB.n_dealloc)

#define tAlloc_GET_n_alloc()	(tAlloc_SINGLE_CELL_CB.n_alloc)
#define tAlloc_SET_n_alloc(val)	(tAlloc_SINGLE_CELL_CB.n_alloc=(val))
#define tAlloc_GET_n_dealloc()	(tAlloc_SINGLE_CELL_CB.n_dealloc)
#define tAlloc_SET_n_dealloc(val)	(tAlloc_SINGLE_CELL_CB.n_dealloc=(val))

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


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tAlloc_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tAlloc_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tAlloc_IDX



/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_n_alloc          tAlloc_VAR_n_alloc
#define VAR_n_dealloc        tAlloc_VAR_n_dealloc




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eA_alloc         tAlloc_eA_alloc
#define eA_dealloc       tAlloc_eA_dealloc

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tAlloc_TECSGENH */
