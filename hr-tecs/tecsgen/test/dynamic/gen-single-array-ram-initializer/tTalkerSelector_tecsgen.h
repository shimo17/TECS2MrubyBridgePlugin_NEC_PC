/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTalkerSelector_TECSGEN_H
#define tTalkerSelector_TECSGEN_H

/*
 * celltype          :  tTalkerSelector
 * global name       :  tTalkerSelector
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
#include "sTalkerSelector_tecsgen.h"
#include "sHello_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTalkerSelector_INIB {
    /* call port #_TCP_# */
    struct tag_sHello_VDES *const*cHello;
    int_t n_cHello;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
}  tTalkerSelector_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTalkerSelector_CB_tab           tTalkerSelector_INIB_tab
#define tTalkerSelector_SINGLE_CELL_CB   tTalkerSelector_SINGLE_CELL_INIB
#define tTalkerSelector_CB               tTalkerSelector_INIB
#define tag_tTalkerSelector_CB           tag_tTalkerSelector_INIB

extern tTalkerSelector_CB  tTalkerSelector_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTalkerSelector_INIB *tTalkerSelector_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTalkerSelector */
void         tTalkerSelector_eTalkerSelector_getTalker(tTalkerSelector_IDX idx, Descriptor( sHello )* talker, int_t i);
void         tTalkerSelector_eTalkerSelector_getNTalker(tTalkerSelector_IDX idx, int_t* n);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tTalkerSelector_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tTalkerSelector_N_CELL        (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTalkerSelector_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cHello(p_that)  ((p_that)->n_cHello)
#define NCP_cHello           (N_CP_cHello(p_cellcb))
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tTalkerSelector_is_cHello_joined(p_that,subscript) \
	  (((p_that)->cHello!=0)\
	  &&((p_that)->cHello[subscript]!=0))

/* セルCBを得るマクロ #_GCB_# */
#define tTalkerSelector_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTalkerSelector_ATTR_name( p_that )	((p_that)->name)

#define tTalkerSelector_GET_name(p_that)	((p_that)->name)



 /* 呼び口関数マクロ #_CPM_# */
#define tTalkerSelector_cHello_hello( p_that, subscript ) \
	  (p_that)->cHello[subscript]->VMT->hello__T( \
	   (p_that)->cHello[subscript] )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cHello */
Inline Descriptor( sHello )
tTalkerSelector_cHello_refer_to_descriptor( tTalkerSelector_CB  *p_that, int_t  i  )
{
    Descriptor( sHello )  des;
    tTalkerSelector_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cHello );
    des.vdes = (struct tag_sHello_VDES *)p_that->cHello[ i ];
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTalkerSelector_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTalkerSelector_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTalkerSelector_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTalkerSelector_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            tTalkerSelector_ATTR_name( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cHello_hello( subscript ) \
          tTalkerSelector_cHello_hello( p_cellcb, subscript )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cHello_refer_to_descriptor( i )\
          tTalkerSelector_cHello_refer_to_descriptor( p_cellcb, i )
#define cHello_ref_desc( i )\
          cHello_refer_to_descriptor( i )


/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cHello_joined(subscript)\
		tTalkerSelector_is_cHello_joined(p_cellcb,subscript)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTalkerSelector_getTalker tTalkerSelector_eTalkerSelector_getTalker
#define eTalkerSelector_getNTalker tTalkerSelector_eTalkerSelector_getNTalker

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTalkerSelector_N_CELL; (i)++ ){ \
       (p_cb) = &tTalkerSelector_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTalkerSelector_TECSGENH */
