/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCelltype_TECSGEN_H
#define tCelltype_TECSGEN_H

/*
 * celltype          :  tCelltype
 * global name       :  tCelltype
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

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCelltype_INIB {
    /* attribute(RO) #_ATO_# */ 
    struct tTag    sta;
    struct tTag2   sta2;
    int            sz;
    int*           sz_array1;
    int*           sz_array2;
}  tCelltype_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tCelltype_CB {
    tCelltype_INIB  *_inib;
    /* var #_VA_# */ 
    struct tTag    stv;
}  tCelltype_CB;
extern tCelltype_CB  tCelltype_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tCelltype_CB *tCelltype_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCelltype_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tCelltype_N_CELL            (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCelltype_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCelltype_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCelltype_ATTR_sta( p_that )	((p_that)->_inib->sta)
#define tCelltype_ATTR_sta2( p_that )	((p_that)->_inib->sta2)
#define tCelltype_ATTR_sz( p_that )	((p_that)->_inib->sz)

#define tCelltype_GET_sta(p_that)	((p_that)->_inib->sta)
#define tCelltype_GET_sta2(p_that)	((p_that)->_inib->sta2)
#define tCelltype_GET_sz(p_that)	((p_that)->_inib->sz)


/* var アクセスマクロ #_VAM_# */
#define tCelltype_VAR_stv(p_that)	((p_that)->stv)
#define tCelltype_VAR_sz_array1(p_that)	((p_that)->_inib->sz_array1)
#define tCelltype_VAR_sz_array2(p_that)	((p_that)->_inib->sz_array2)

#define tCelltype_GET_stv(p_that)	((p_that)->stv)
#define tCelltype_SET_stv(p_that,val)	((p_that)->stv=(val))
#define tCelltype_GET_sz_array1(p_that)	((p_that)->sz_array1)
#define tCelltype_SET_sz_array1(p_that,val)	((p_that)->sz_array1=(val))
#define tCelltype_GET_sz_array2(p_that)	((p_that)->sz_array2)
#define tCelltype_SET_sz_array2(p_that,val)	((p_that)->sz_array2=(val))

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCelltype_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCelltype_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCelltype_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCelltype_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_sta             tCelltype_ATTR_sta( p_cellcb )
#define ATTR_sta2            tCelltype_ATTR_sta2( p_cellcb )
#define ATTR_sz              tCelltype_ATTR_sz( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_stv              tCelltype_VAR_stv( p_cellcb )
#define VAR_sz_array1        tCelltype_VAR_sz_array1( p_cellcb )
#define VAR_sz_array2        tCelltype_VAR_sz_array2( p_cellcb )



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCelltype_N_CELL; (i)++ ){ \
       (p_cb) = &tCelltype_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
extern const struct tTag tCelltype_stv_VAR_INIT;
extern const int tCelltype_sz_array2_VAR_INIT[2];
#define INITIALIZE_CB(p_that)\
	memcpy((void*)&tCelltype_VAR_stv(p_that), (void*)&tCelltype_stv_VAR_INIT, sizeof(tCelltype_stv_VAR_INIT));\
	memcpy((void*)&tCelltype_VAR_sz_array2(p_that)[0], (void*)&tCelltype_sz_array2_VAR_INIT[0], sizeof(tCelltype_sz_array2_VAR_INIT));
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tCelltype_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCelltype_TECSGENH */
