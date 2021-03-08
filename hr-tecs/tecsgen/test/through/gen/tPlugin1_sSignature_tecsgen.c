/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tPlugin1_sSignature_tecsgen.h"
#include "tPlugin1_sSignature_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* throughEntry */
struct tag_tPlugin1_sSignature_throughEntry_DES {
    const struct tag_sSignature_VMT *vmt;
    tPlugin1_sSignature_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* throughEntry */
ER             tPlugin1_sSignature_throughEntry_func1_skel( const struct tag_sSignature_VDES *epd, int32_t inval)
{
    struct tag_tPlugin1_sSignature_throughEntry_DES *lepd
        = (struct tag_tPlugin1_sSignature_throughEntry_DES *)epd;
    return tPlugin1_sSignature_throughEntry_func1( lepd->idx, inval );
}
ER             tPlugin1_sSignature_throughEntry_func2_skel( const struct tag_sSignature_VDES *epd, int32_t* outval)
{
    struct tag_tPlugin1_sSignature_throughEntry_DES *lepd
        = (struct tag_tPlugin1_sSignature_throughEntry_DES *)epd;
    return tPlugin1_sSignature_throughEntry_func2( lepd->idx, outval );
}
ER             tPlugin1_sSignature_throughEntry_func3_skel( const struct tag_sSignature_VDES *epd, struct tag stval)
{
    struct tag_tPlugin1_sSignature_throughEntry_DES *lepd
        = (struct tag_tPlugin1_sSignature_throughEntry_DES *)epd;
    return tPlugin1_sSignature_throughEntry_func3( lepd->idx, stval );
}
ER             tPlugin1_sSignature_throughEntry_func4_skel( const struct tag_sSignature_VDES *epd, stTag stval, INT inval)
{
    struct tag_tPlugin1_sSignature_throughEntry_DES *lepd
        = (struct tag_tPlugin1_sSignature_throughEntry_DES *)epd;
    return tPlugin1_sSignature_throughEntry_func4( lepd->idx, stval, inval );
}
ER             tPlugin1_sSignature_throughEntry_func5_skel( const struct tag_sSignature_VDES *epd, stTag* stval, INT inval)
{
    struct tag_tPlugin1_sSignature_throughEntry_DES *lepd
        = (struct tag_tPlugin1_sSignature_throughEntry_DES *)epd;
    return tPlugin1_sSignature_throughEntry_func5( lepd->idx, stval, inval );
}
ER             tPlugin1_sSignature_throughEntry_func6_skel( const struct tag_sSignature_VDES *epd, int8_t* buf, int32_t sz)
{
    struct tag_tPlugin1_sSignature_throughEntry_DES *lepd
        = (struct tag_tPlugin1_sSignature_throughEntry_DES *)epd;
    return tPlugin1_sSignature_throughEntry_func6( lepd->idx, buf, sz );
}
ER             tPlugin1_sSignature_throughEntry_func7_skel( const struct tag_sSignature_VDES *epd, int8_t** buf, int32_t* sz)
{
    struct tag_tPlugin1_sSignature_throughEntry_DES *lepd
        = (struct tag_tPlugin1_sSignature_throughEntry_DES *)epd;
    return tPlugin1_sSignature_throughEntry_func7( lepd->idx, buf, sz );
}
ER             tPlugin1_sSignature_throughEntry_func10_skel( const struct tag_sSignature_VDES *epd, const stTag* stval, int32_t a)
{
    struct tag_tPlugin1_sSignature_throughEntry_DES *lepd
        = (struct tag_tPlugin1_sSignature_throughEntry_DES *)epd;
    return tPlugin1_sSignature_throughEntry_func10( lepd->idx, stval, a );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* throughEntry */
const struct tag_sSignature_VMT tPlugin1_sSignature_throughEntry_MT_ = {
    tPlugin1_sSignature_throughEntry_func1_skel,
    tPlugin1_sSignature_throughEntry_func2_skel,
    tPlugin1_sSignature_throughEntry_func3_skel,
    tPlugin1_sSignature_throughEntry_func4_skel,
    tPlugin1_sSignature_throughEntry_func5_skel,
    tPlugin1_sSignature_throughEntry_func6_skel,
    tPlugin1_sSignature_throughEntry_func7_skel,
    tPlugin1_sSignature_throughEntry_func10_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSignature_VDES Plugin2__0_eThroughEntry_des;

extern struct tag_sSignature_VDES Plugin2__1_eThroughEntry_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tPlugin1_sSignature_INIB tPlugin1_sSignature_INIB_tab[] = {
    /* cell: tPlugin1_sSignature_CB_tab[0]:  Plugin1__0 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tPlugin2_sSignature_CB_tab[0],          /* cCall #_CCP2_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tPlugin1_sSignature_CB_tab[1]:  Plugin1__1 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tPlugin2_sSignature_CB_tab[1],          /* cCall #_CCP2_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tPlugin1_sSignature_throughEntry_DES Plugin1__0_throughEntry_des;
const struct tag_tPlugin1_sSignature_throughEntry_DES Plugin1__0_throughEntry_des = {
    &tPlugin1_sSignature_throughEntry_MT_,
    &tPlugin1_sSignature_INIB_tab[0],   /* INIB */
};
extern const struct tag_tPlugin1_sSignature_throughEntry_DES Plugin1__1_throughEntry_des;
const struct tag_tPlugin1_sSignature_throughEntry_DES Plugin1__1_throughEntry_des = {
    &tPlugin1_sSignature_throughEntry_MT_,
    &tPlugin1_sSignature_INIB_tab[1],   /* INIB */
};
