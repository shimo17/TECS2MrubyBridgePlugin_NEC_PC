/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSingle_tecsgen.h"
#include "tSingle_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSig */
struct tag_tSingle_eSig_DES {
    const struct tag_sSig_VMT *vmt;
    tSingle_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eSig */
int32_t        tSingle_eSig_func_skel( const struct tag_sSig_VDES *epd, int32_t in, int32_t* out)
{
    return tSingle_eSig_func( in, out );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSig */
const struct tag_sSig_VMT tSingle_eSig_MT_ = {
    tSingle_eSig_func_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig_VDES Cell1_eEnt_des;
extern struct tag_sSig_VDES Cell2_eEnt_des;

/* 呼び口配列 #_CPA_# */
struct tag_sSig_VDES * const Single_cCall[] = {
    &Cell1_eEnt_des,
    &Cell2_eEnt_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル CB #_CB_# */
struct tag_tSingle_CB tSingle_SINGLE_CELL_CB = 
{
    /* call port (CB_ALL) #_CP_# */ 
    Single_cCall,                            /* #_CCP3B_# */
    2,                                       /* length of cCall (n_cCall) #_CCP4_# */
    /* entry port #_EP_# */ 
    /* attribute */ 
    33,                                      /* a */
    /* var */ 
    44,                                      /* b */
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tSingle_eSig_DES Single_eSig_des;
const struct tag_tSingle_eSig_DES Single_eSig_des = {
    &tSingle_eSig_MT_,
    &tSingle_SINGLE_CELL_CB,       /* CB */
};
