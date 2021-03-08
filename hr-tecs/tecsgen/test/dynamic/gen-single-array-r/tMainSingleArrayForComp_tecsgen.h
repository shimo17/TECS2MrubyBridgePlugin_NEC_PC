/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMainSingleArrayForComp_TECSGEN_H
#define tMainSingleArrayForComp_TECSGEN_H

/*
 * celltype          :  tMainSingleArrayForComp
 * global name       :  tMainSingleArrayForComp
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
typedef struct tag_tMainSingleArrayForComp_CB {
    /* call port #_TCP_# */
    struct tag_sHello_VDES const*cDefaultTalker;
    struct tag_sHello_VDES **cTalker;
    int_t n_cTalker;
    struct tag_sHello_VDES **cTalker2;
    /* call port #_NEP_# */ 
}  tMainSingleArrayForComp_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tMainSingleArrayForComp_CB  tMainSingleArrayForComp_SINGLE_CELL_CB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tMainSingleArrayForComp_CB *tMainSingleArrayForComp_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tMainSingleArrayForComp_eMain_main();
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tMainSingleArrayForComp_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTalkerSelector_tecsgen.h"
#ifdef  tMainSingleArrayForComp_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tMainSingleArrayForComp_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cTalker  (tMainSingleArrayForComp_SINGLE_CELL_CB.n_cTalker)
#define NCP_cTalker   (tMainSingleArrayForComp_SINGLE_CELL_CB.n_cTalker)
#define N_CP_cTalker2    (2)
#define NCP_cTalker2     (2)
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tMainSingleArrayForComp_is_cTalker2_joined(subscript) \
	  ((tMainSingleArrayForComp_SINGLE_CELL_CB.cTalker2!=0) \
	  &&(tMainSingleArrayForComp_SINGLE_CELL_CB.cTalker2[subscript]!=0))

/* セルCBを得るマクロ #_GCB_# */
#define tMainSingleArrayForComp_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tMainSingleArrayForComp_cDefaultTalker_hello( ) \
	  tMainSingleArrayForComp_SINGLE_CELL_CB.cDefaultTalker->VMT->hello__T( \
	  tMainSingleArrayForComp_SINGLE_CELL_CB.cDefaultTalker )
#define tMainSingleArrayForComp_cTalker_hello( subscript ) \
	  tMainSingleArrayForComp_SINGLE_CELL_CB.cTalker[subscript]->VMT->hello__T( \
	  tMainSingleArrayForComp_SINGLE_CELL_CB.cTalker[subscript] )
#define tMainSingleArrayForComp_cTalker2_hello( subscript ) \
	  tMainSingleArrayForComp_SINGLE_CELL_CB.cTalker2[subscript]->VMT->hello__T( \
	  tMainSingleArrayForComp_SINGLE_CELL_CB.cTalker2[subscript] )
#define tMainSingleArrayForComp_cTalkerSelector_getTalker( talker, i ) \
	  tTalkerSelector_eTalkerSelector_getTalker( \
	   &tTalkerSelector_CB_tab[1], (talker), (i) )
#define tMainSingleArrayForComp_cTalkerSelector_getNTalker( n ) \
	  tTalkerSelector_eTalkerSelector_getNTalker( \
	   &tTalkerSelector_CB_tab[1], (n) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eMain */
void           tMainSingleArrayForComp_eMain_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cDefaultTalker */
Inline Descriptor( sHello )
tMainSingleArrayForComp_cDefaultTalker_refer_to_descriptor(  )
{
    Descriptor( sHello )  des;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_sHello_VDES *)tMainSingleArrayForComp_SINGLE_CELL_CB.cDefaultTalker;
    return des;
}

/* ディスクリプタ設定関数 #_SDF_# */
/* [dynamic] cTalker */
Inline void
tMainSingleArrayForComp_cTalker_set_descriptor( int_t  i, Descriptor( sHello ) des )
{
    assert( des.vdes != NULL );
    assert( 0 <= i && i < NCP_cTalker );
    tMainSingleArrayForComp_SINGLE_CELL_CB.cTalker[ i ] = des.vdes;
}

/* [dynamic] cTalker2 */
Inline void
tMainSingleArrayForComp_cTalker2_set_descriptor( int_t  i, Descriptor( sHello ) des )
{
    assert( des.vdes != NULL );
    assert( 0 <= i && i < NCP_cTalker2 );
    tMainSingleArrayForComp_SINGLE_CELL_CB.cTalker2[ i ] = des.vdes;
}

/* [dynamic,optional] cTalker2 */
Inline void
tMainSingleArrayForComp_cTalker2_unjoin(  int_t  i  )
{
    tMainSingleArrayForComp_SINGLE_CELL_CB.cTalker2[ i ] = NULL;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tMainSingleArrayForComp_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tMainSingleArrayForComp_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tMainSingleArrayForComp_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cDefaultTalker_hello( ) \
          tMainSingleArrayForComp_cDefaultTalker_hello( )
#define cTalker_hello( subscript ) \
          tMainSingleArrayForComp_cTalker_hello( subscript )
#define cTalker2_hello( subscript ) \
          tMainSingleArrayForComp_cTalker2_hello( subscript )
#define cTalkerSelector_getTalker( talker, i ) \
          tMainSingleArrayForComp_cTalkerSelector_getTalker( talker, i )
#define cTalkerSelector_getNTalker( n ) \
          tMainSingleArrayForComp_cTalkerSelector_getNTalker( n )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cDefaultTalker_refer_to_descriptor()\
          tMainSingleArrayForComp_cDefaultTalker_refer_to_descriptor(  )
#define cDefaultTalker_ref_desc()\
          cDefaultTalker_refer_to_descriptor()


/* ディスクリプタ設定マクロ（短縮形） #_SDMA_# */
#define cTalker_set_descriptor( i, desc )\
          tMainSingleArrayForComp_cTalker_set_descriptor( i, desc )
#define cTalker_unjoin( i )\
          tMainSingleArrayForComp_cTalker_unjoin( i )
#define cTalker2_set_descriptor( i, desc )\
          tMainSingleArrayForComp_cTalker2_set_descriptor( i, desc )
#define cTalker2_unjoin( i )\
          tMainSingleArrayForComp_cTalker2_unjoin( i )

/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cTalker2_joined(subscript)\
		tMainSingleArrayForComp_is_cTalker2_joined(subscript)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tMainSingleArrayForComp_eMain_main

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMainSingleArrayForComp_TECSGENH */
