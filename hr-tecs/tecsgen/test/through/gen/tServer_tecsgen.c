/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tServer_tecsgen.h"
#include "tServer_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEntry */
struct tag_tServer_eEntry_DES {
    const struct tag_sSignature_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEntry */
ER             tServer_eEntry_func1_skel( const struct tag_sSignature_VDES *epd, int32_t inval)
{
    struct tag_tServer_eEntry_DES *lepd
        = (struct tag_tServer_eEntry_DES *)epd;
    return tServer_eEntry_func1( lepd->idx, inval );
}
ER             tServer_eEntry_func2_skel( const struct tag_sSignature_VDES *epd, int32_t* outval)
{
    struct tag_tServer_eEntry_DES *lepd
        = (struct tag_tServer_eEntry_DES *)epd;
    return tServer_eEntry_func2( lepd->idx, outval );
}
ER             tServer_eEntry_func3_skel( const struct tag_sSignature_VDES *epd, struct tag stval)
{
    struct tag_tServer_eEntry_DES *lepd
        = (struct tag_tServer_eEntry_DES *)epd;
    return tServer_eEntry_func3( lepd->idx, stval );
}
ER             tServer_eEntry_func4_skel( const struct tag_sSignature_VDES *epd, stTag stval, INT inval)
{
    struct tag_tServer_eEntry_DES *lepd
        = (struct tag_tServer_eEntry_DES *)epd;
    return tServer_eEntry_func4( lepd->idx, stval, inval );
}
ER             tServer_eEntry_func5_skel( const struct tag_sSignature_VDES *epd, stTag* stval, INT inval)
{
    struct tag_tServer_eEntry_DES *lepd
        = (struct tag_tServer_eEntry_DES *)epd;
    return tServer_eEntry_func5( lepd->idx, stval, inval );
}
ER             tServer_eEntry_func6_skel( const struct tag_sSignature_VDES *epd, int8_t* buf, int32_t sz)
{
    struct tag_tServer_eEntry_DES *lepd
        = (struct tag_tServer_eEntry_DES *)epd;
    return tServer_eEntry_func6( lepd->idx, buf, sz );
}
ER             tServer_eEntry_func7_skel( const struct tag_sSignature_VDES *epd, int8_t** buf, int32_t* sz)
{
    struct tag_tServer_eEntry_DES *lepd
        = (struct tag_tServer_eEntry_DES *)epd;
    return tServer_eEntry_func7( lepd->idx, buf, sz );
}
ER             tServer_eEntry_func10_skel( const struct tag_sSignature_VDES *epd, const stTag* stval, int32_t a)
{
    struct tag_tServer_eEntry_DES *lepd
        = (struct tag_tServer_eEntry_DES *)epd;
    return tServer_eEntry_func10( lepd->idx, stval, a );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEntry */
const struct tag_sSignature_VMT tServer_eEntry_MT_ = {
    tServer_eEntry_func1_skel,
    tServer_eEntry_func2_skel,
    tServer_eEntry_func3_skel,
    tServer_eEntry_func4_skel,
    tServer_eEntry_func5_skel,
    tServer_eEntry_func6_skel,
    tServer_eEntry_func7_skel,
    tServer_eEntry_func10_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tServer_eEntry_DES server_eEntry_des;
const struct tag_tServer_eEntry_DES server_eEntry_des = {
    &tServer_eEntry_MT_,
    0,
};
