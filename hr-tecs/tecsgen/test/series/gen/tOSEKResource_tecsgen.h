/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tOSEKResource_TECSGEN_H
#define tOSEKResource_TECSGEN_H

/*
 * celltype          :  tOSEKResource
 * global name       :  tOSEKResource
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
#include "sLinkedResource_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tOSEKResource_INIB {
    /* call port #_TCP_# */
    struct tag_sLinkedResource_VDES *const*cLinkedResource;
    int_t n_cLinkedResource;
    struct tag_sLinkedResource_VDES const*cLinkedResource2;
    /* call port #_NEP_# */ 
    int_t n_eLinkedResource;
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    int16_t        nest_max;
}  tOSEKResource_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tOSEKResource_CB {
    tOSEKResource_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    int_t n_eLinkedResource;
    /* var #_VA_# */ 
    int32_t        nest;
}  tOSEKResource_CB;
extern tOSEKResource_CB  tOSEKResource_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tOSEKResource_CB *tOSEKResource_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sLinkedResource */
void         tOSEKResource_eLinkedResource_main(tOSEKResource_IDX idx, int_t subscript);
/* sLinkedResource */
void         tOSEKResource_eLinkedResource_2_main(tOSEKResource_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tOSEKResource_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tOSEKResource_N_CELL        (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tOSEKResource_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cLinkedResource(p_that)  ((p_that)->_inib->n_cLinkedResource)
#define NCP_cLinkedResource           (N_CP_cLinkedResource(p_cellcb))
/* 受け口配列の大きさを得るマクロ #_NEPA_# */
#define NEP_eLinkedResource           ((p_cellcb)->_inib->n_eLinkedResource)
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tOSEKResource_is_cLinkedResource_joined(p_that,subscript) \
	  (((p_that)->_inib->cLinkedResource!=0)\
	  &&((p_that)->_inib->cLinkedResource[subscript]!=0))
#define tOSEKResource_is_cLinkedResource2_joined(p_that) \
	  ((p_that)->_inib->cLinkedResource2!=0)

/* セルCBを得るマクロ #_GCB_# */
#define tOSEKResource_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tOSEKResource_ATTR_name( p_that )	((p_that)->_inib->name)
#define tOSEKResource_ATTR_nest_max( p_that )	((p_that)->_inib->nest_max)

#define tOSEKResource_GET_name(p_that)	((p_that)->_inib->name)
#define tOSEKResource_GET_nest_max(p_that)	((p_that)->_inib->nest_max)


/* var アクセスマクロ #_VAM_# */
#define tOSEKResource_VAR_nest(p_that)	((p_that)->nest)

#define tOSEKResource_GET_nest(p_that)	((p_that)->nest)
#define tOSEKResource_SET_nest(p_that,val)	((p_that)->nest=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tOSEKResource_cLinkedResource_main( p_that, subscript ) \
	  (p_that)->_inib->cLinkedResource[subscript]->VMT->main__T( \
	   (p_that)->_inib->cLinkedResource[subscript] )
#define tOSEKResource_cLinkedResource2_main( p_that ) \
	  (p_that)->_inib->cLinkedResource2->VMT->main__T( \
	   (p_that)->_inib->cLinkedResource2 )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eLinkedResource */
void           tOSEKResource_eLinkedResource_main_skel( const struct tag_sLinkedResource_VDES *epd);
/* eLinkedResource_2 */
void           tOSEKResource_eLinkedResource_2_main_skel( const struct tag_sLinkedResource_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tOSEKResource_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tOSEKResource_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tOSEKResource_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tOSEKResource_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            tOSEKResource_ATTR_name( p_cellcb )
#define ATTR_nest_max        tOSEKResource_ATTR_nest_max( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_nest             tOSEKResource_VAR_nest( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cLinkedResource_main( subscript ) \
          tOSEKResource_cLinkedResource_main( p_cellcb, subscript )
#define cLinkedResource2_main( ) \
          tOSEKResource_cLinkedResource2_main( p_cellcb )



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cLinkedResource_joined(subscript)\
		tOSEKResource_is_cLinkedResource_joined(p_cellcb,subscript)
#define is_cLinkedResource2_joined()\
		tOSEKResource_is_cLinkedResource2_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eLinkedResource_main tOSEKResource_eLinkedResource_main
#define eLinkedResource_2_main tOSEKResource_eLinkedResource_2_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tOSEKResource_N_CELL; (i)++ ){ \
       (p_cb) = &tOSEKResource_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tOSEKResource_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tOSEKResource_TECSGENH */
