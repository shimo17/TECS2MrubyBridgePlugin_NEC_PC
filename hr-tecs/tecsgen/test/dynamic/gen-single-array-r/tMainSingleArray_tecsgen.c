/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tMainSingleArray_tecsgen.h"
#include "tMainSingleArray_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain */
struct tag_tMainSingleArray_eMain_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tMainSingleArray_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain */
void           tMainSingleArray_eMain_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    tMainSingleArray_eMain_main( );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain */
const struct tag_sTaskBody_VMT tMainSingleArray_eMain_MT_ = {
    tMainSingleArray_eMain_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sHello_VDES Talker0_eHello_des;
extern struct tag_sHello_VDES Talker0_eHello_des;
extern struct tag_sHello_VDES Talker1_eHello_des;
extern struct tag_sHello_VDES Talker2_eHello_des;

/* 呼び口配列 #_CPA_# */
struct tag_sHello_VDES * Main_cTalker[] = {
    &Talker0_eHello_des,
    &Talker1_eHello_des,
    &Talker2_eHello_des,
};
struct tag_sHello_VDES * Main_cTalker2[] = {
    0,
    0,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル CB #_CB_# */
struct tag_tMainSingleArray_CB tMainSingleArray_SINGLE_CELL_CB = 
{
    /* call port (CB_ALL) #_CP_# */ 
    &Talker0_eHello_des,                     /* cDefaultTalker #_CCP1_# */
    Main_cTalker,                            /* #_CCP3B_# */
    3,                                       /* length of cTalker (n_cTalker) #_CCP4_# */
    Main_cTalker2,                           /* #_CCP8_# */
    /* entry port #_EP_# */ 
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tMainSingleArray_eMain_DES Main_eMain_des;
const struct tag_tMainSingleArray_eMain_DES Main_eMain_des = {
    &tMainSingleArray_eMain_MT_,
    &tMainSingleArray_SINGLE_CELL_CB,       /* CB */
};
