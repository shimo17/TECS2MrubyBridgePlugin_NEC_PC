/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tMainSingleton_tecsgen.h"
#include "tMainSingleton_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain */
struct tag_tMainSingleton_eMain_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tMainSingleton_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain */
void           tMainSingleton_eMain_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    tMainSingleton_eMain_main( );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain */
const struct tag_sTaskBody_VMT tMainSingleton_eMain_MT_ = {
    tMainSingleton_eMain_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sHello_VDES Talker0_eHello_des;
extern struct tag_sHello_VDES Talker0_eHello_des;

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tMainSingleton_INIB tMainSingleton_SINGLE_CELL_INIB = 
{
    /* call port (INIB) #_CP_# */ 
    &Talker0_eHello_des,                     /* cDefaultTalker #_CCP1_# */
    /* entry port #_EP_# */ 
};

/* セル CB #_CB_# */
struct tag_tMainSingleton_CB tMainSingleton_SINGLE_CELL_CB = 
{
    &tMainSingleton_SINGLE_CELL_INIB,        /* _inib */
    /* call port (CB_DYNAMIC) #_CP_# */ 
    &Talker0_eHello_des,                     /* cTalker #_CCP1_# */
    /* entry port #_EP_# */ 
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tMainSingleton_eMain_DES Main_eMain_des;
const struct tag_tMainSingleton_eMain_DES Main_eMain_des = {
    &tMainSingleton_eMain_MT_,
    &tMainSingleton_SINGLE_CELL_CB,       /* CB */
};
