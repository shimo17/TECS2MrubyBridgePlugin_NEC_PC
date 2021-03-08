/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tMainSingleArrayForComp_tecsgen.h"
#include "tMainSingleArrayForComp_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain */
struct tag_tMainSingleArrayForComp_eMain_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tMainSingleArrayForComp_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain */
void           tMainSingleArrayForComp_eMain_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    tMainSingleArrayForComp_eMain_main( );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain */
const struct tag_sTaskBody_VMT tMainSingleArrayForComp_eMain_MT_ = {
    tMainSingleArrayForComp_eMain_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sHello_VDES rComposite_Talker0_eHello_des;
extern struct tag_sHello_VDES rComposite_Talker0_eHello_des;
extern struct tag_sHello_VDES rComposite_Talker1_eHello_des;
extern struct tag_sHello_VDES rComposite_Talker2_eHello_des;

/* 呼び口配列 #_CPA_# */
struct tag_sHello_VDES * rComposite_CompMain_Main_cTalker[] = {
    &rComposite_Talker0_eHello_des,
    &rComposite_Talker1_eHello_des,
    &rComposite_Talker2_eHello_des,
};
struct tag_sHello_VDES * rComposite_CompMain_Main_cTalker2[] = {
    0,
    0,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tMainSingleArrayForComp_INIB tMainSingleArrayForComp_SINGLE_CELL_INIB = 
{
    /* call port (INIB) #_CP_# */ 
    &rComposite_Talker0_eHello_des,          /* cDefaultTalker #_CCP1_# */
    rComposite_CompMain_Main_cTalker,        /* #_CCP3B_# */
    3,                                       /* length of cTalker (n_cTalker) #_CCP4_# */
    rComposite_CompMain_Main_cTalker2,       /* #_CCP7B_# */
    /* entry port #_EP_# */ 
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tMainSingleArrayForComp_eMain_DES rComposite_CompMain_Main_eMain_des;
const struct tag_tMainSingleArrayForComp_eMain_DES rComposite_CompMain_Main_eMain_des = {
    &tMainSingleArrayForComp_eMain_MT_,
    &tMainSingleArrayForComp_SINGLE_CELL_INIB,     /* INIB */
};
