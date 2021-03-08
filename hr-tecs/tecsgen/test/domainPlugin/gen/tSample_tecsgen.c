/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSample_tecsgen.h"
#include "tSample_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSample */
struct tag_tSample_eSample_DES {
    const struct tag_sSimple_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eSample */
void           tSample_eSample_helloWorld_skel( const struct tag_sSimple_VDES *epd)
{
    struct tag_tSample_eSample_DES *lepd
        = (struct tag_tSample_eSample_DES *)epd;
    tSample_eSample_helloWorld( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSample */
const struct tag_sSimple_VMT tSample_eSample_MT_ = {
    tSample_eSample_helloWorld_skel,
};

