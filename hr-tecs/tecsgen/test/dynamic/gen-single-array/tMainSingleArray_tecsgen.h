/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMainSingleArray_TECSGEN_H
#define tMainSingleArray_TECSGEN_H

/*
 * celltype          :  tMainSingleArray
 * global name       :  tMainSingleArray
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
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
typedef const struct tag_tMainSingleArray_INIB {
    /* call port #_TCP_# */
    struct tag_sHello_VDES const*cDefaultTalker;
    struct tag_sHello_VDES **cTalker;
    int_t n_cTalker;
    struct tag_sHello_VDES **cTalker2;
    /* call port #_NEP_# */ 
}  tMainSingleArray_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tMainSingleArray_CB_tab           tMainSingleArray_INIB_tab
#define tMainSingleArray_SINGLE_CELL_CB   tMainSingleArray_SINGLE_CELL_INIB
#define tMainSingleArray_CB               tMainSingleArray_INIB
#define tag_tMainSingleArray_CB           tag_tMainSingleArray_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tMainSingleArray_INIB  tMainSingleArray_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tMainSingleArray_INIB *tMainSingleArray_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tMainSingleArray_eMain_main();
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tMainSingleArray_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTalkerSelector_tecsgen.h"
#ifdef  tMainSingleArray_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tMainSingleArray_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cTalker  (tMainSingleArray_SINGLE_CELL_INIB.n_cTalker)
#define NCP_cTalker   (tMainSingleArray_SINGLE_CELL_INIB.n_cTalker)
#define N_CP_cTalker2    (2)
#define NCP_cTalker2     (2)
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tMainSingleArray_is_cTalker2_joined(subscript) \
	  ((tMainSingleArray_SINGLE_CELL_CB.cTalker2!=0) \
	  &&(tMainSingleArray_SINGLE_CELL_CB.cTalker2[subscript]!=0))

/* セルCBを得るマクロ #_GCB_# */
#define tMainSingleArray_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tMainSingleArray_cDefaultTalker_hello( ) \
	  tMainSingleArray_SINGLE_CELL_INIB.cDefaultTalker->VMT->hello__T( \
	  tMainSingleArray_SINGLE_CELL_INIB.cDefaultTalker )
#define tMainSingleArray_cTalker_hello( subscript ) \
	  tMainSingleArray_SINGLE_CELL_INIB.cTalker[subscript]->VMT->hello__T( \
	  tMainSingleArray_SINGLE_CELL_INIB.cTalker[subscript] )
#define tMainSingleArray_cTalker2_hello( subscript ) \
	  tMainSingleArray_SINGLE_CELL_INIB.cTalker2[subscript]->VMT->hello__T( \
	  tMainSingleArray_SINGLE_CELL_INIB.cTalker2[subscript] )
#define tMainSingleArray_cTalkerSelector_getTalker( talker, i ) \
	  tTalkerSelector_eTalkerSelector_getTalker( \
	   &tTalkerSelector_CB_tab[0], (talker), (i) )
#define tMainSingleArray_cTalkerSelector_getNTalker( n ) \
	  tTalkerSelector_eTalkerSelector_getNTalker( \
	   &tTalkerSelector_CB_tab[0], (n) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eMain */
void           tMainSingleArray_eMain_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cDefaultTalker */
Inline Descriptor( sHello )
tMainSingleArray_cDefaultTalker_refer_to_descriptor(  )
{
    Descriptor( sHello )  des;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_sHello_VDES *)tMainSingleArray_SINGLE_CELL_INIB.cDefaultTalker;
    return des;
}

/* ディスクリプタ設定関数 #_SDF_# */
/* [dynamic] cTalker */
Inline void
tMainSingleArray_cTalker_set_descriptor( int_t  i, Descriptor( sHello ) des )
{
    assert( des.vdes != NULL );
    assert( 0 <= i && i < NCP_cTalker );
    tMainSingleArray_SINGLE_CELL_INIB.cTalker[ i ] = des.vdes;
}

/* [dynamic] cTalker2 */
Inline void
tMainSingleArray_cTalker2_set_descriptor( int_t  i, Descriptor( sHello ) des )
{
    assert( des.vdes != NULL );
    assert( 0 <= i && i < NCP_cTalker2 );
    tMainSingleArray_SINGLE_CELL_INIB.cTalker2[ i ] = des.vdes;
}

/* [dynamic,optional] cTalker2 */
Inline void
tMainSingleArray_cTalker2_unjoin(  int_t  i  )
{
    tMainSingleArray_SINGLE_CELL_INIB.cTalker2[ i ] = NULL;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tMainSingleArray_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tMainSingleArray_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tMainSingleArray_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cDefaultTalker_hello( ) \
          tMainSingleArray_cDefaultTalker_hello( )
#define cTalker_hello( subscript ) \
          tMainSingleArray_cTalker_hello( subscript )
#define cTalker2_hello( subscript ) \
          tMainSingleArray_cTalker2_hello( subscript )
#define cTalkerSelector_getTalker( talker, i ) \
          tMainSingleArray_cTalkerSelector_getTalker( talker, i )
#define cTalkerSelector_getNTalker( n ) \
          tMainSingleArray_cTalkerSelector_getNTalker( n )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cDefaultTalker_refer_to_descriptor()\
          tMainSingleArray_cDefaultTalker_refer_to_descriptor(  )
#define cDefaultTalker_ref_desc()\
          cDefaultTalker_refer_to_descriptor()


/* ディスクリプタ設定マクロ（短縮形） #_SDMA_# */
#define cTalker_set_descriptor( i, desc )\
          tMainSingleArray_cTalker_set_descriptor( i, desc )
#define cTalker_unjoin( i )\
          tMainSingleArray_cTalker_unjoin( i )
#define cTalker2_set_descriptor( i, desc )\
          tMainSingleArray_cTalker2_set_descriptor( i, desc )
#define cTalker2_unjoin( i )\
          tMainSingleArray_cTalker2_unjoin( i )

/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cTalker2_joined(subscript)\
		tMainSingleArray_is_cTalker2_joined(subscript)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tMainSingleArray_eMain_main

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMainSingleArray_TECSGENH */
