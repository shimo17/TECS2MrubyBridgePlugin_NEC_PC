/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef OSEK_tKernel_TECSGEN_H
#define OSEK_tKernel_TECSGEN_H

/*
 * celltype          :  tKernel
 * global name       :  OSEK_tKernel
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
#include "OSEK_sSyscall_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_OSEK_tKernel_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  OSEK_tKernel_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_OSEK_tKernel_CB {
    OSEK_tKernel_INIB  *_inib;
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int16_t        b;
}  OSEK_tKernel_CB;
extern OSEK_tKernel_CB  OSEK_tKernel_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_OSEK_tKernel_CB *OSEK_tKernel_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* OSEK_sSyscall */
ER_ID        OSEK_tKernel_ka_cre_sem(OSEK_tKernel_IDX idx);
ER           OSEK_tKernel_ka_wai_sem(OSEK_tKernel_IDX idx, ID id);
ER           OSEK_tKernel_ka_rel_sem(OSEK_tKernel_IDX idx, ID id);
ER           OSEK_tKernel_ka_del_sem(OSEK_tKernel_IDX idx, ID id);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define OSEK_tKernel_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define OSEK_tKernel_N_CELL         (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define OSEK_tKernel_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define OSEK_tKernel_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define OSEK_tKernel_ATTR_a( p_that )	((p_that)->_inib->a)

#define OSEK_tKernel_GET_a(p_that)	((p_that)->_inib->a)


/* var アクセスマクロ #_VAM_# */
#define OSEK_tKernel_VAR_b(p_that)	((p_that)->b)

#define OSEK_tKernel_GET_b(p_that)	((p_that)->b)
#define OSEK_tKernel_SET_b(p_that,val)	((p_that)->b=(val))

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
#define VALID_IDX(IDX)  OSEK_tKernel_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  OSEK_tKernel_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	OSEK_tKernel_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	OSEK_tKernel_IDX

#define tKernel_IDX  OSEK_tKernel_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               OSEK_tKernel_ATTR_a( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_b                OSEK_tKernel_VAR_b( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define ka_cre_sem       OSEK_tKernel_ka_cre_sem
#define ka_wai_sem       OSEK_tKernel_ka_wai_sem
#define ka_rel_sem       OSEK_tKernel_ka_rel_sem
#define ka_del_sem       OSEK_tKernel_ka_del_sem

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < OSEK_tKernel_N_CELL; (i)++ ){ \
       (p_cb) = &OSEK_tKernel_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &OSEK_tKernel_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* OSEK_tKernel_TECSGENH */
