/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMainForComp_TECSGEN_H
#define tMainForComp_TECSGEN_H

/*
 * celltype          :  tMainForComp
 * global name       :  tMainForComp
 * idx_is_id(actual) :  yes(yes)
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
#include "sHello_tecsgen.h"
#include "sTalkerSelector_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPO_# */
typedef struct tag_tMainForComp_CB {
    /* call port #_TCP_# */
    struct tag_sHello_VDES const*cDefaultTalker;
    struct tag_sHello_VDES *cTalker;
    /* call port #_NEP_# */ 
}  tMainForComp_CB;
extern tMainForComp_CB  *tMainForComp_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID tMainForComp_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tMainForComp_eMain_main(tMainForComp_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tMainForComp_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTalkerSelector_tecsgen.h"
#ifdef  tMainForComp_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tMainForComp_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tMainForComp_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tMainForComp_N_CELL         (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tMainForComp_VALID_IDX(IDX) (tMainForComp_ID_BASE <= (IDX) && (IDX) < tMainForComp_ID_BASE+tMainForComp_N_CELL)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tMainForComp_is_cTalker_joined(p_that) \
	  ((p_that)->cTalker!=0)

/* セルCBを得るマクロ #_GCB_# */
#define tMainForComp_GET_CELLCB(idx) (tMainForComp_CB_tab[(idx) - tMainForComp_ID_BASE])
 /* 呼び口関数マクロ #_CPM_# */
#define tMainForComp_cDefaultTalker_hello( p_that ) \
	  (p_that)->cDefaultTalker->VMT->hello__T( \
	   (p_that)->cDefaultTalker )
#define tMainForComp_cTalker_hello( p_that ) \
	  (p_that)->cTalker->VMT->hello__T( \
	   (p_that)->cTalker )
#define tMainForComp_cTalkerSelector_getTalker( p_that, talker, i ) \
	  tTalkerSelector_eTalkerSelector_getTalker( \
	   &tTalkerSelector_CB_tab[1], (talker), (i) )
#define tMainForComp_cTalkerSelector_getNTalker( p_that, n ) \
	  tTalkerSelector_eTalkerSelector_getNTalker( \
	   &tTalkerSelector_CB_tab[1], (n) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eMain */
void           tMainForComp_eMain_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cDefaultTalker */
Inline Descriptor( sHello )
tMainForComp_cDefaultTalker_refer_to_descriptor( tMainForComp_CB  *p_that )
{
    Descriptor( sHello )  des;
    tMainForComp_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_sHello_VDES *)p_that->cDefaultTalker;
    return des;
}

/* ディスクリプタ設定関数 #_SDF_# */
/* [dynamic] cTalker */
Inline void
tMainForComp_cTalker_set_descriptor( tMainForComp_CB  *p_that, Descriptor( sHello ) des )
{
    tMainForComp_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cTalker = des.vdes;
}

/* [dynamic,optional] cTalker */
Inline void
tMainForComp_cTalker_unjoin( tMainForComp_CB  *p_that  )
{
    tMainForComp_CB *p_cellcb = p_that;
    (p_cellcb)->cTalker = NULL;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tMainForComp_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tMainForComp_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tMainForComp_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tMainForComp_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cDefaultTalker_hello( ) \
          tMainForComp_cDefaultTalker_hello( p_cellcb )
#define cTalker_hello( ) \
          tMainForComp_cTalker_hello( p_cellcb )
#define cTalkerSelector_getTalker( talker, i ) \
          ((void)p_cellcb, tMainForComp_cTalkerSelector_getTalker( p_cellcb, talker, i ))
#define cTalkerSelector_getNTalker( n ) \
          ((void)p_cellcb, tMainForComp_cTalkerSelector_getNTalker( p_cellcb, n ))


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cDefaultTalker_refer_to_descriptor()\
          tMainForComp_cDefaultTalker_refer_to_descriptor( p_cellcb )
#define cDefaultTalker_ref_desc()\
          cDefaultTalker_refer_to_descriptor()


/* ディスクリプタ設定マクロ（短縮形） #_SDMA_# */
#define cTalker_set_descriptor( desc )\
          tMainForComp_cTalker_set_descriptor( p_cellcb, desc )
#define cTalker_unjoin(  )\
          tMainForComp_cTalker_unjoin( p_cellcb )

/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cTalker_joined()\
		tMainForComp_is_cTalker_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tMainForComp_eMain_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tMainForComp_N_CELL; (i)++ ){ \
       (p_cb) = tMainForComp_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMainForComp_TECSGENH */
