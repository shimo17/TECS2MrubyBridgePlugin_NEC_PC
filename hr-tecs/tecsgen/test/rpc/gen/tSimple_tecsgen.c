/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSimple_tecsgen.h"
#include "tSimple_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody */
struct tag_tSimple_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    int           idx;
};

/* eSimple : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eBody */
void           tSimple_eBody_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    tSimple_eBody_main( );
}
/* eSimple : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody */
const struct tag_sTaskBody_VMT tSimple_eBody_MT_ = {
    tSimple_eBody_main_skel,
};
/* eSimple : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tSimple_eBody_DES rTransparent_Simple_eBody_des;
const struct tag_tSimple_eBody_DES rTransparent_Simple_eBody_des = {
    &tSimple_eBody_MT_,
    0,
};
/* eSimple : omitted by entry port optimize */
