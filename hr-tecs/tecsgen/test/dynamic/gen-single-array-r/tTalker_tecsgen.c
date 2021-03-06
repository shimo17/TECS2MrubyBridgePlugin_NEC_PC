/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTalker_tecsgen.h"
#include "tTalker_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eHello */
struct tag_tTalker_eHello_DES {
    const struct tag_sHello_VMT *vmt;
    tTalker_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eHello */
void           tTalker_eHello_hello_skel( const struct tag_sHello_VDES *epd)
{
    struct tag_tTalker_eHello_DES *lepd
        = (struct tag_tTalker_eHello_DES *)epd;
    tTalker_eHello_hello( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eHello */
const struct tag_sHello_VMT tTalker_eHello_MT_ = {
    tTalker_eHello_hello_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */








/* 呼び口配列 #_CPA_# */








/* 属性・変数の配列 #_AVAI_# */
/* セル CB #_CB_# */
struct tag_tTalker_CB tTalker_CB_tab[] = {
    /* cell: tTalker_CB_tab[0]:  Talker0 id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute */ 
        "Talker0",                               /* name */
        "hello",                                 /* message */
    },
    /* cell: tTalker_CB_tab[1]:  Talker1 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute */ 
        "Talker1",                               /* name */
        "hello",                                 /* message */
    },
    /* cell: tTalker_CB_tab[2]:  Talker2 id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute */ 
        "Talker2",                               /* name */
        "hello",                                 /* message */
    },
    /* cell: tTalker_CB_tab[3]:  Talker4 id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute */ 
        "Talker4",                               /* name */
        "hello",                                 /* message */
    },
    /* cell: tTalker_CB_tab[4]:  Talker0 id=5 */
    {
        /* entry port #_EP_# */ 
        /* attribute */ 
        "Talker0",                               /* name */
        "hello",                                 /* message */
    },
    /* cell: tTalker_CB_tab[5]:  Talker1 id=6 */
    {
        /* entry port #_EP_# */ 
        /* attribute */ 
        "Talker1",                               /* name */
        "hello",                                 /* message */
    },
    /* cell: tTalker_CB_tab[6]:  Talker2 id=7 */
    {
        /* entry port #_EP_# */ 
        /* attribute */ 
        "Talker2",                               /* name */
        "hello",                                 /* message */
    },
    /* cell: tTalker_CB_tab[7]:  Talker4 id=8 */
    {
        /* entry port #_EP_# */ 
        /* attribute */ 
        "Talker4",                               /* name */
        "hello",                                 /* message */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTalker_eHello_DES Talker0_eHello_des;
const struct tag_tTalker_eHello_DES Talker0_eHello_des = {
    &tTalker_eHello_MT_,
    &tTalker_CB_tab[0],     /* CB */
};
extern const struct tag_tTalker_eHello_DES Talker1_eHello_des;
const struct tag_tTalker_eHello_DES Talker1_eHello_des = {
    &tTalker_eHello_MT_,
    &tTalker_CB_tab[1],     /* CB */
};
extern const struct tag_tTalker_eHello_DES Talker2_eHello_des;
const struct tag_tTalker_eHello_DES Talker2_eHello_des = {
    &tTalker_eHello_MT_,
    &tTalker_CB_tab[2],     /* CB */
};
extern const struct tag_tTalker_eHello_DES Talker4_eHello_des;
const struct tag_tTalker_eHello_DES Talker4_eHello_des = {
    &tTalker_eHello_MT_,
    &tTalker_CB_tab[3],     /* CB */
};
extern const struct tag_tTalker_eHello_DES rComposite_Talker0_eHello_des;
const struct tag_tTalker_eHello_DES rComposite_Talker0_eHello_des = {
    &tTalker_eHello_MT_,
    &tTalker_CB_tab[4],     /* CB */
};
extern const struct tag_tTalker_eHello_DES rComposite_Talker1_eHello_des;
const struct tag_tTalker_eHello_DES rComposite_Talker1_eHello_des = {
    &tTalker_eHello_MT_,
    &tTalker_CB_tab[5],     /* CB */
};
extern const struct tag_tTalker_eHello_DES rComposite_Talker2_eHello_des;
const struct tag_tTalker_eHello_DES rComposite_Talker2_eHello_des = {
    &tTalker_eHello_MT_,
    &tTalker_CB_tab[6],     /* CB */
};
extern const struct tag_tTalker_eHello_DES rComposite_Talker4_eHello_des;
const struct tag_tTalker_eHello_DES rComposite_Talker4_eHello_des = {
    &tTalker_eHello_MT_,
    &tTalker_CB_tab[7],     /* CB */
};
