/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tMain_tecsgen.h"
#include "tMain_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain */
struct tag_tMain_eMain_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tMain_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain */
void           tMain_eMain_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tMain_eMain_DES *lepd
        = (struct tag_tMain_eMain_DES *)epd;
    tMain_eMain_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain */
const struct tag_sTaskBody_VMT tMain_eMain_MT_ = {
    tMain_eMain_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sHello_VDES Talker0_eHello_des;
extern struct tag_sHello_VDES Talker0_eHello_des;

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tMain_INIB tMain_INIB_tab[] = {
    /* cell: tMain_CB_tab[0]:  Main id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &Talker0_eHello_des,                     /* cDefaultTalker #_CCP1_# */
        &Talker0_eHello_des,                     /* cTalker_init_ #_CCP1_# */
        /* entry port #_EP_# */ 
    },
};

/* セル CB #_CB_# */
struct tag_tMain_CB tMain_CB_tab[1];
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tMain_eMain_DES Main_eMain_des;
const struct tag_tMain_eMain_DES Main_eMain_des = {
    &tMain_eMain_MT_,
    &tMain_CB_tab[0],     /* CB */
};
/* CB 初期化コード #_CIC_# */
void
tMain_CB_initialize()
{
    tMain_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
