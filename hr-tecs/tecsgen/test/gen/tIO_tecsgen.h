/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tIO_TECSGEN_H
#define tIO_TECSGEN_H

/*
 * celltype          :  tIO
 * global name       :  tIO
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

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tIO_INIB {
    /* attribute(RO) #_ATO_# */ 
    volatile int8_t* ioreg;
    int32_t        aI_val4;
    bool_t         boo;
    bool_t         aI_val5;
    uint32_t       aI_val6;
    uint32_t       aI_val7;
    uint32_t       aI_val8;
    uchar_t        aU_val9;
    char_t         aC_val10;
}  tIO_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tIO_CB_tab           tIO_INIB_tab
#define tIO_SINGLE_CELL_CB   tIO_SINGLE_CELL_INIB
#define tIO_CB               tIO_INIB
#define tag_tIO_CB           tag_tIO_INIB

extern tIO_CB  tIO_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tIO_INIB *tIO_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tIO_ID_BASE                 (1)  /* ID のベース  #_NIDB_# */
#define tIO_N_CELL                  (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tIO_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tIO_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tIO_ATTR_ioreg( p_that )	((p_that)->ioreg)
#define tIO_ATTR_aI_val4( p_that )	((p_that)->aI_val4)
#define tIO_ATTR_boo( p_that )	((p_that)->boo)
#define tIO_ATTR_aI_val5( p_that )	((p_that)->aI_val5)
#define tIO_ATTR_aI_val6( p_that )	((p_that)->aI_val6)
#define tIO_ATTR_aI_val7( p_that )	((p_that)->aI_val7)
#define tIO_ATTR_aI_val8( p_that )	((p_that)->aI_val8)
#define tIO_ATTR_aU_val9( p_that )	((p_that)->aU_val9)
#define tIO_ATTR_aC_val10( p_that )	((p_that)->aC_val10)

#define tIO_GET_ioreg(p_that)	((p_that)->ioreg)
#define tIO_GET_aI_val4(p_that)	((p_that)->aI_val4)
#define tIO_GET_boo(p_that) 	((p_that)->boo)
#define tIO_GET_aI_val5(p_that)	((p_that)->aI_val5)
#define tIO_GET_aI_val6(p_that)	((p_that)->aI_val6)
#define tIO_GET_aI_val7(p_that)	((p_that)->aI_val7)
#define tIO_GET_aI_val8(p_that)	((p_that)->aI_val8)
#define tIO_GET_aU_val9(p_that)	((p_that)->aU_val9)
#define tIO_GET_aC_val10(p_that)	((p_that)->aC_val10)



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
#define VALID_IDX(IDX)  tIO_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tIO_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tIO_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tIO_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_ioreg           tIO_ATTR_ioreg( p_cellcb )
#define ATTR_aI_val4         tIO_ATTR_aI_val4( p_cellcb )
#define ATTR_boo             tIO_ATTR_boo( p_cellcb )
#define ATTR_aI_val5         tIO_ATTR_aI_val5( p_cellcb )
#define ATTR_aI_val6         tIO_ATTR_aI_val6( p_cellcb )
#define ATTR_aI_val7         tIO_ATTR_aI_val7( p_cellcb )
#define ATTR_aI_val8         tIO_ATTR_aI_val8( p_cellcb )
#define ATTR_aU_val9         tIO_ATTR_aU_val9( p_cellcb )
#define ATTR_aC_val10        tIO_ATTR_aC_val10( p_cellcb )




/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tIO_N_CELL; (i)++ ){ \
       //(p_cb) = &tIO_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tIO_TECSGENH */
