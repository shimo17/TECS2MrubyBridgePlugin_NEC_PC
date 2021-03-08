/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTalker_TECSGEN_H
#define tTalker_TECSGEN_H

/*
 * celltype          :  tTalker
 * global name       :  tTalker
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sHello_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTalker_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    char_t*        message;
}  tTalker_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTalker_CB_tab           tTalker_INIB_tab
#define tTalker_SINGLE_CELL_CB   tTalker_SINGLE_CELL_INIB
#define tTalker_CB               tTalker_INIB
#define tag_tTalker_CB           tag_tTalker_INIB

extern tTalker_CB  tTalker_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTalker_INIB *tTalker_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sHello */
void         tTalker_eHello_hello(tTalker_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tTalker_ID_BASE             (1)  /* ID のベース  #_NIDB_# */
#define tTalker_N_CELL              (8)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTalker_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTalker_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTalker_ATTR_name( p_that )	((p_that)->name)
#define tTalker_ATTR_message( p_that )	((p_that)->message)

#define tTalker_GET_name(p_that)	((p_that)->name)
#define tTalker_GET_message(p_that)	((p_that)->message)



#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eHello */
void           tTalker_eHello_hello_skel( const struct tag_sHello_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTalker_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTalker_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTalker_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTalker_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            tTalker_ATTR_name( p_cellcb )
#define ATTR_message         tTalker_ATTR_message( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eHello_hello     tTalker_eHello_hello

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTalker_N_CELL; (i)++ ){ \
       (p_cb) = &tTalker_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTalker_TECSGENH */
