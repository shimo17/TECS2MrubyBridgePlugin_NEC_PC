/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMainArray_TECSGEN_H
#define tMainArray_TECSGEN_H

/*
 * celltype          :  tMainArray
 * global name       :  tMainArray
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTaskBody_tecsgen.h"
#include "sHello_tecsgen.h"
#include "sTalkerSelector_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tMainArray_INIB {
    /* call port #_TCP_# */
    struct tag_sHello_VDES const*cDefaultTalker;
    struct tag_sHello_VDES **cTalker;
    int_t n_cTalker;
    struct tag_sHello_VDES **cTalker2;
    const struct tag_tTalkerSelector_INIB * cTalkerSelector;
    /* call port #_NEP_# */ 
}  tMainArray_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tMainArray_CB_tab           tMainArray_INIB_tab
#define tMainArray_SINGLE_CELL_CB   tMainArray_SINGLE_CELL_INIB
#define tMainArray_CB               tMainArray_INIB
#define tag_tMainArray_CB           tag_tMainArray_INIB

extern tMainArray_CB  tMainArray_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tMainArray_INIB *tMainArray_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tMainArray_eMain_main(tMainArray_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tMainArray_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTalkerSelector_tecsgen.h"
#ifdef  tMainArray_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tMainArray_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tMainArray_ID_BASE          (1)  /* ID のベース  #_NIDB_# */
#define tMainArray_N_CELL           (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tMainArray_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cTalker(p_that)  ((p_that)->n_cTalker)
#define NCP_cTalker           (N_CP_cTalker(p_cellcb))
#define N_CP_cTalker2    (2)
#define NCP_cTalker2     (2)
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tMainArray_is_cTalker2_joined(p_that,subscript) \
	  (((p_that)->cTalker2!=0)\
	  &&((p_that)->cTalker2[subscript]!=0))

/* セルCBを得るマクロ #_GCB_# */
#define tMainArray_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tMainArray_cDefaultTalker_hello( p_that ) \
	  (p_that)->cDefaultTalker->VMT->hello__T( \
	   (p_that)->cDefaultTalker )
#define tMainArray_cTalker_hello( p_that, subscript ) \
	  (p_that)->cTalker[subscript]->VMT->hello__T( \
	   (p_that)->cTalker[subscript] )
#define tMainArray_cTalker2_hello( p_that, subscript ) \
	  (p_that)->cTalker2[subscript]->VMT->hello__T( \
	   (p_that)->cTalker2[subscript] )
#define tMainArray_cTalkerSelector_getTalker( p_that, talker, i ) \
	  tTalkerSelector_eTalkerSelector_getTalker( \
	   (p_that)->cTalkerSelector, (talker), (i) )
#define tMainArray_cTalkerSelector_getNTalker( p_that, n ) \
	  tTalkerSelector_eTalkerSelector_getNTalker( \
	   (p_that)->cTalkerSelector, (n) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eMain */
void           tMainArray_eMain_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cDefaultTalker */
Inline Descriptor( sHello )
tMainArray_cDefaultTalker_refer_to_descriptor( tMainArray_CB  *p_that )
{
    Descriptor( sHello )  des;
    tMainArray_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_sHello_VDES *)p_that->cDefaultTalker;
    return des;
}

/* ディスクリプタ設定関数 #_SDF_# */
/* [dynamic] cTalker */
Inline void
tMainArray_cTalker_set_descriptor( tMainArray_CB  *p_that, int_t  i, Descriptor( sHello ) des )
{
    tMainArray_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    assert( 0 <= i && i < NCP_cTalker );
    (p_cellcb)->cTalker[ i ] = des.vdes;
}

/* [dynamic] cTalker2 */
Inline void
tMainArray_cTalker2_set_descriptor( tMainArray_CB  *p_that, int_t  i, Descriptor( sHello ) des )
{
    tMainArray_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    assert( 0 <= i && i < NCP_cTalker2 );
    (p_cellcb)->cTalker2[ i ] = des.vdes;
}

/* [dynamic,optional] cTalker2 */
Inline void
tMainArray_cTalker2_unjoin( tMainArray_CB  *p_that ,  int_t  i  )
{
    tMainArray_CB *p_cellcb = p_that;
    (p_cellcb)->cTalker2[ i ] = NULL;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tMainArray_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tMainArray_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tMainArray_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tMainArray_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cDefaultTalker_hello( ) \
          tMainArray_cDefaultTalker_hello( p_cellcb )
#define cTalker_hello( subscript ) \
          tMainArray_cTalker_hello( p_cellcb, subscript )
#define cTalker2_hello( subscript ) \
          tMainArray_cTalker2_hello( p_cellcb, subscript )
#define cTalkerSelector_getTalker( talker, i ) \
          ((void)p_cellcb, tMainArray_cTalkerSelector_getTalker( p_cellcb, talker, i ))
#define cTalkerSelector_getNTalker( n ) \
          ((void)p_cellcb, tMainArray_cTalkerSelector_getNTalker( p_cellcb, n ))


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cDefaultTalker_refer_to_descriptor()\
          tMainArray_cDefaultTalker_refer_to_descriptor( p_cellcb )
#define cDefaultTalker_ref_desc()\
          cDefaultTalker_refer_to_descriptor()


/* ディスクリプタ設定マクロ（短縮形） #_SDMA_# */
#define cTalker_set_descriptor( i, desc )\
          tMainArray_cTalker_set_descriptor( p_cellcb, i, desc )
#define cTalker_unjoin( i )\
          tMainArray_cTalker_unjoin( p_cellcb, i )
#define cTalker2_set_descriptor( i, desc )\
          tMainArray_cTalker2_set_descriptor( p_cellcb, i, desc )
#define cTalker2_unjoin( i )\
          tMainArray_cTalker2_unjoin( p_cellcb, i )

/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cTalker2_joined(subscript)\
		tMainArray_is_cTalker2_joined(p_cellcb,subscript)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tMainArray_eMain_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tMainArray_N_CELL; (i)++ ){ \
       //(p_cb) = &tMainArray_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMainArray_TECSGENH */
