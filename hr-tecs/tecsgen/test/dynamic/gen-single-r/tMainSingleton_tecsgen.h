/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMainSingleton_TECSGEN_H
#define tMainSingleton_TECSGEN_H

/*
 * celltype          :  tMainSingleton
 * global name       :  tMainSingleton
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
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
typedef struct tag_tMainSingleton_CB {
    /* call port #_TCP_# */
    struct tag_sHello_VDES const*cDefaultTalker;
    struct tag_sHello_VDES *cTalker;
    /* call port #_NEP_# */ 
}  tMainSingleton_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tMainSingleton_CB  tMainSingleton_SINGLE_CELL_CB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tMainSingleton_CB *tMainSingleton_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tMainSingleton_eMain_main();
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tMainSingleton_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTalkerSelector_tecsgen.h"
#ifdef  tMainSingleton_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tMainSingleton_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tMainSingleton_is_cTalker_joined() \
	  (tMainSingleton_SINGLE_CELL_CB.cTalker!=0)

/* セルCBを得るマクロ #_GCB_# */
#define tMainSingleton_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tMainSingleton_cDefaultTalker_hello( ) \
	  tMainSingleton_SINGLE_CELL_CB.cDefaultTalker->VMT->hello__T( \
	  tMainSingleton_SINGLE_CELL_CB.cDefaultTalker )
#define tMainSingleton_cTalker_hello( ) \
	  tMainSingleton_SINGLE_CELL_CB.cTalker->VMT->hello__T( \
	  tMainSingleton_SINGLE_CELL_CB.cTalker )
#define tMainSingleton_cTalkerSelector_getTalker( talker, i ) \
	  tTalkerSelector_eTalkerSelector_getTalker( \
	   &tTalkerSelector_CB_tab[0], (talker), (i) )
#define tMainSingleton_cTalkerSelector_getNTalker( n ) \
	  tTalkerSelector_eTalkerSelector_getNTalker( \
	   &tTalkerSelector_CB_tab[0], (n) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eMain */
void           tMainSingleton_eMain_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cDefaultTalker */
Inline Descriptor( sHello )
tMainSingleton_cDefaultTalker_refer_to_descriptor(  )
{
    Descriptor( sHello )  des;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_sHello_VDES *)tMainSingleton_SINGLE_CELL_CB.cDefaultTalker;
    return des;
}

/* ディスクリプタ設定関数 #_SDF_# */
/* [dynamic] cTalker */
Inline void
tMainSingleton_cTalker_set_descriptor( Descriptor( sHello ) des )
{
    assert( des.vdes != NULL );
    tMainSingleton_SINGLE_CELL_CB.cTalker = des.vdes;
}

/* [dynamic,optional] cTalker */
Inline void
tMainSingleton_cTalker_unjoin(  )
{
    tMainSingleton_SINGLE_CELL_CB.cTalker = NULL;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tMainSingleton_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tMainSingleton_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tMainSingleton_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cDefaultTalker_hello( ) \
          tMainSingleton_cDefaultTalker_hello( )
#define cTalker_hello( ) \
          tMainSingleton_cTalker_hello( )
#define cTalkerSelector_getTalker( talker, i ) \
          tMainSingleton_cTalkerSelector_getTalker( talker, i )
#define cTalkerSelector_getNTalker( n ) \
          tMainSingleton_cTalkerSelector_getNTalker( n )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cDefaultTalker_refer_to_descriptor()\
          tMainSingleton_cDefaultTalker_refer_to_descriptor(  )
#define cDefaultTalker_ref_desc()\
          cDefaultTalker_refer_to_descriptor()


/* ディスクリプタ設定マクロ（短縮形） #_SDMA_# */
#define cTalker_set_descriptor( desc )\
          tMainSingleton_cTalker_set_descriptor( desc )
#define cTalker_unjoin(  )\
          tMainSingleton_cTalker_unjoin(  )

/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cTalker_joined()\
		tMainSingleton_is_cTalker_joined()

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tMainSingleton_eMain_main

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMainSingleton_TECSGENH */
