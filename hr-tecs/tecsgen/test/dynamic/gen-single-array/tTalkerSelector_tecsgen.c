/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTalkerSelector_tecsgen.h"
#include "tTalkerSelector_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTalkerSelector : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eTalkerSelector : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTalkerSelector : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sHello_VDES Talker0_eHello_des;
extern struct tag_sHello_VDES Talker1_eHello_des;
extern struct tag_sHello_VDES Talker2_eHello_des;
extern struct tag_sHello_VDES Talker4_eHello_des;

extern struct tag_sHello_VDES rComposite_Talker0_eHello_des;
extern struct tag_sHello_VDES rComposite_Talker1_eHello_des;
extern struct tag_sHello_VDES rComposite_Talker2_eHello_des;
extern struct tag_sHello_VDES rComposite_Talker4_eHello_des;

/* 呼び口配列 #_CPA_# */
struct tag_sHello_VDES * const Selector_cHello[] = {
    &Talker0_eHello_des,
    &Talker1_eHello_des,
    &Talker2_eHello_des,
    0,
    &Talker4_eHello_des,
};

struct tag_sHello_VDES * const rComposite_Selector_cHello[] = {
    &rComposite_Talker0_eHello_des,
    &rComposite_Talker1_eHello_des,
    &rComposite_Talker2_eHello_des,
    0,
    &rComposite_Talker4_eHello_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTalkerSelector_INIB tTalkerSelector_INIB_tab[] = {
    /* cell: tTalkerSelector_CB_tab[0]:  Selector id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        Selector_cHello,                         /* #_CCP3B_# */
        5,                                       /* length of cHello (n_cHello) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTalkerSelector_Selector",              /* name */
    },
    /* cell: tTalkerSelector_CB_tab[1]:  Selector id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        rComposite_Selector_cHello,              /* #_CCP3B_# */
        5,                                       /* length of cHello (n_cHello) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTalkerSelector_Selector",              /* name */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eTalkerSelector : omitted by entry port optimize */
/* eTalkerSelector : omitted by entry port optimize */
