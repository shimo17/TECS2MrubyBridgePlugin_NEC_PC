/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMainSingletonForComp_TECSGEN_H
#define tMainSingletonForComp_TECSGEN_H

/*
 * celltype          :  tMainSingletonForComp
 * global name       :  tMainSingletonForComp
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
#include "sTaskBody_tecsgen.h"
#include "sHello_tecsgen.h"
#include "sTalkerSelector_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tMainSingletonForComp_INIB {
    /* call port #_TCP_# */
    struct tag_sHello_VDES const*cDefaultTalker;
    struct tag_sHello_VDES *cTalker_init_;
    /* call port #_NEP_# */ 
}  tMainSingletonForComp_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tMainSingletonForComp_CB {
    tMainSingletonForComp_INIB  *_inib;
    /* call port #_TCP_# */
    struct tag_sHello_VDES *cTalker;
    /* call port #_NEP_# */ 
}  tMainSingletonForComp_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tMainSingletonForComp_CB  tMainSingletonForComp_SINGLE_CELL_CB;
extern  tMainSingletonForComp_INIB  tMainSingletonForComp_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tMainSingletonForComp_CB *tMainSingletonForComp_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tMainSingletonForComp_eMain_main();
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tMainSingletonForComp_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTalkerSelector_tecsgen.h"
#ifdef  tMainSingletonForComp_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tMainSingletonForComp_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tMainSingletonForComp_is_cTalker_joined() \
	  (tMainSingletonForComp_SINGLE_CELL_CB.cTalker!=0)

/* セルCBを得るマクロ #_GCB_# */
#define tMainSingletonForComp_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tMainSingletonForComp_cDefaultTalker_hello( ) \
	  tMainSingletonForComp_SINGLE_CELL_INIB.cDefaultTalker->VMT->hello__T( \
	  tMainSingletonForComp_SINGLE_CELL_INIB.cDefaultTalker )
#define tMainSingletonForComp_cTalker_hello( ) \
	  tMainSingletonForComp_SINGLE_CELL_CB.cTalker->VMT->hello__T( \
	  tMainSingletonForComp_SINGLE_CELL_CB.cTalker )
#define tMainSingletonForComp_cTalkerSelector_getTalker( talker, i ) \
	  tTalkerSelector_eTalkerSelector_getTalker( \
	   &tTalkerSelector_CB_tab[1], (talker), (i) )
#define tMainSingletonForComp_cTalkerSelector_getNTalker( n ) \
	  tTalkerSelector_eTalkerSelector_getNTalker( \
	   &tTalkerSelector_CB_tab[1], (n) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eMain */
void           tMainSingletonForComp_eMain_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cDefaultTalker */
Inline Descriptor( sHello )
tMainSingletonForComp_cDefaultTalker_refer_to_descriptor(  )
{
    Descriptor( sHello )  des;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_sHello_VDES *)tMainSingletonForComp_SINGLE_CELL_INIB.cDefaultTalker;
    return des;
}

/* ディスクリプタ設定関数 #_SDF_# */
/* [dynamic] cTalker */
Inline void
tMainSingletonForComp_cTalker_set_descriptor( Descriptor( sHello ) des )
{
    assert( des.vdes != NULL );
    tMainSingletonForComp_SINGLE_CELL_CB.cTalker = des.vdes;
}

/* [dynamic,optional] cTalker */
Inline void
tMainSingletonForComp_cTalker_unjoin(  )
{
    tMainSingletonForComp_SINGLE_CELL_CB.cTalker = NULL;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tMainSingletonForComp_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tMainSingletonForComp_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tMainSingletonForComp_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cDefaultTalker_hello( ) \
          tMainSingletonForComp_cDefaultTalker_hello( )
#define cTalker_hello( ) \
          tMainSingletonForComp_cTalker_hello( )
#define cTalkerSelector_getTalker( talker, i ) \
          tMainSingletonForComp_cTalkerSelector_getTalker( talker, i )
#define cTalkerSelector_getNTalker( n ) \
          tMainSingletonForComp_cTalkerSelector_getNTalker( n )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cDefaultTalker_refer_to_descriptor()\
          tMainSingletonForComp_cDefaultTalker_refer_to_descriptor(  )
#define cDefaultTalker_ref_desc()\
          cDefaultTalker_refer_to_descriptor()


/* ディスクリプタ設定マクロ（短縮形） #_SDMA_# */
#define cTalker_set_descriptor( desc )\
          tMainSingletonForComp_cTalker_set_descriptor( desc )
#define cTalker_unjoin(  )\
          tMainSingletonForComp_cTalker_unjoin(  )

/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cTalker_joined()\
		tMainSingletonForComp_is_cTalker_joined()

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tMainSingletonForComp_eMain_main

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()\
	tMainSingletonForComp_SINGLE_CELL_CB.cTalker = tMainSingletonForComp_SINGLE_CELL_CB._inib->cTalker_init_;

#define SET_CB_INIB_POINTER(i,p_that)\
	tMainSingletonForComp_SINGLE_CELL_CB._inib = &tMainSingletonForComp_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMainSingletonForComp_TECSGENH */
