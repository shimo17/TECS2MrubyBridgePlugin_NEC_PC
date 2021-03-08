/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tMainForComp_tecsgen.h"
#include "tMainForComp_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain */
struct tag_tMainForComp_eMain_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tMainForComp_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain */
void           tMainForComp_eMain_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tMainForComp_eMain_DES *lepd
        = (struct tag_tMainForComp_eMain_DES *)epd;
    tMainForComp_eMain_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain */
const struct tag_sTaskBody_VMT tMainForComp_eMain_MT_ = {
    tMainForComp_eMain_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sHello_VDES rComposite_Talker0_eHello_des;
extern struct tag_sHello_VDES rComposite_Talker0_eHello_des;

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル CB #_CB_# */
/* cell: rComposite_CompMain_Main_CB:  CompMain_Main id=1 */
tMainForComp_CB rComposite_CompMain_Main_CB = {
    /* call port (CB_ALL) #_CP_# */ 
    &rComposite_Talker0_eHello_des,          /* cDefaultTalker #_CCP1_# */
    &rComposite_Talker0_eHello_des,          /* cTalker #_CCP1_# */
    /* entry port #_EP_# */ 
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tMainForComp_eMain_DES rComposite_CompMain_Main_eMain_des;
const struct tag_tMainForComp_eMain_DES rComposite_CompMain_Main_eMain_des = {
    &tMainForComp_eMain_MT_,
    1,     /* ID */
};
/* ID to CB table #_CBTAB_# */
tMainForComp_CB *tMainForComp_CB_tab[] ={
    &rComposite_CompMain_Main_CB,
};
