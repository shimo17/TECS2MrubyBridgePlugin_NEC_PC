/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTracePlugin_sSignature_tecsgen.h"
#include "tTracePlugin_sSignature_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eThroughEntry */
struct tag_tTracePlugin_sSignature_eThroughEntry_DES {
    const struct tag_sSignature_VMT *vmt;
    tTracePlugin_sSignature_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eThroughEntry */
ER             tTracePlugin_sSignature_eThroughEntry_func1_skel( const struct tag_sSignature_VDES *epd, int32_t inval)
{
    struct tag_tTracePlugin_sSignature_eThroughEntry_DES *lepd
        = (struct tag_tTracePlugin_sSignature_eThroughEntry_DES *)epd;
    return tTracePlugin_sSignature_eThroughEntry_func1( lepd->idx, inval );
}
ER             tTracePlugin_sSignature_eThroughEntry_func2_skel( const struct tag_sSignature_VDES *epd, int32_t* outval)
{
    struct tag_tTracePlugin_sSignature_eThroughEntry_DES *lepd
        = (struct tag_tTracePlugin_sSignature_eThroughEntry_DES *)epd;
    return tTracePlugin_sSignature_eThroughEntry_func2( lepd->idx, outval );
}
ER             tTracePlugin_sSignature_eThroughEntry_func3_skel( const struct tag_sSignature_VDES *epd, struct tag stval)
{
    struct tag_tTracePlugin_sSignature_eThroughEntry_DES *lepd
        = (struct tag_tTracePlugin_sSignature_eThroughEntry_DES *)epd;
    return tTracePlugin_sSignature_eThroughEntry_func3( lepd->idx, stval );
}
ER             tTracePlugin_sSignature_eThroughEntry_func4_skel( const struct tag_sSignature_VDES *epd, stTag stval, INT inval)
{
    struct tag_tTracePlugin_sSignature_eThroughEntry_DES *lepd
        = (struct tag_tTracePlugin_sSignature_eThroughEntry_DES *)epd;
    return tTracePlugin_sSignature_eThroughEntry_func4( lepd->idx, stval, inval );
}
ER             tTracePlugin_sSignature_eThroughEntry_func5_skel( const struct tag_sSignature_VDES *epd, stTag* stval, INT inval)
{
    struct tag_tTracePlugin_sSignature_eThroughEntry_DES *lepd
        = (struct tag_tTracePlugin_sSignature_eThroughEntry_DES *)epd;
    return tTracePlugin_sSignature_eThroughEntry_func5( lepd->idx, stval, inval );
}
ER             tTracePlugin_sSignature_eThroughEntry_func6_skel( const struct tag_sSignature_VDES *epd, int8_t* buf, int32_t sz)
{
    struct tag_tTracePlugin_sSignature_eThroughEntry_DES *lepd
        = (struct tag_tTracePlugin_sSignature_eThroughEntry_DES *)epd;
    return tTracePlugin_sSignature_eThroughEntry_func6( lepd->idx, buf, sz );
}
ER             tTracePlugin_sSignature_eThroughEntry_func7_skel( const struct tag_sSignature_VDES *epd, int8_t** buf, int32_t* sz)
{
    struct tag_tTracePlugin_sSignature_eThroughEntry_DES *lepd
        = (struct tag_tTracePlugin_sSignature_eThroughEntry_DES *)epd;
    return tTracePlugin_sSignature_eThroughEntry_func7( lepd->idx, buf, sz );
}
ER             tTracePlugin_sSignature_eThroughEntry_func10_skel( const struct tag_sSignature_VDES *epd, const stTag* stval, int32_t a)
{
    struct tag_tTracePlugin_sSignature_eThroughEntry_DES *lepd
        = (struct tag_tTracePlugin_sSignature_eThroughEntry_DES *)epd;
    return tTracePlugin_sSignature_eThroughEntry_func10( lepd->idx, stval, a );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eThroughEntry */
const struct tag_sSignature_VMT tTracePlugin_sSignature_eThroughEntry_MT_ = {
    tTracePlugin_sSignature_eThroughEntry_func1_skel,
    tTracePlugin_sSignature_eThroughEntry_func2_skel,
    tTracePlugin_sSignature_eThroughEntry_func3_skel,
    tTracePlugin_sSignature_eThroughEntry_func4_skel,
    tTracePlugin_sSignature_eThroughEntry_func5_skel,
    tTracePlugin_sSignature_eThroughEntry_func6_skel,
    tTracePlugin_sSignature_eThroughEntry_func7_skel,
    tTracePlugin_sSignature_eThroughEntry_func10_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSignature_VDES server_eEntry_des;

extern struct tag_sSignature_VDES server_eEntry_des;

extern const struct tag_tTracePlugin_sSignature_eThroughEntry_DES TracePlugin__1_eThroughEntry_des;

/* 呼び口配列 #_CPA_# */



/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTracePlugin_sSignature_INIB tTracePlugin_sSignature_INIB_tab[] = {
    /* cell: tTracePlugin_sSignature_CB_tab[0]:  TracePlugin__0 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &server_eEntry_des,                      /* cCall #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        ": ",                                    /* probeName_str */
        "Client",                                /* from_str */
    },
    /* cell: tTracePlugin_sSignature_CB_tab[1]:  TracePlugin__1 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &server_eEntry_des,                      /* cCall #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        ": ",                                    /* probeName_str */
        "Client",                                /* from_str */
    },
    /* cell: tTracePlugin_sSignature_CB_tab[2]:  TracePlugin__2 id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_sSignature_VDES *)&TracePlugin__1_eThroughEntry_des, /* cCall #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        ": ",                                    /* probeName_str */
        "Client",                                /* from_str */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTracePlugin_sSignature_eThroughEntry_DES TracePlugin__0_eThroughEntry_des;
const struct tag_tTracePlugin_sSignature_eThroughEntry_DES TracePlugin__0_eThroughEntry_des = {
    &tTracePlugin_sSignature_eThroughEntry_MT_,
    &tTracePlugin_sSignature_INIB_tab[0],   /* INIB */
};
extern const struct tag_tTracePlugin_sSignature_eThroughEntry_DES TracePlugin__1_eThroughEntry_des;
const struct tag_tTracePlugin_sSignature_eThroughEntry_DES TracePlugin__1_eThroughEntry_des = {
    &tTracePlugin_sSignature_eThroughEntry_MT_,
    &tTracePlugin_sSignature_INIB_tab[1],   /* INIB */
};
extern const struct tag_tTracePlugin_sSignature_eThroughEntry_DES TracePlugin__2_eThroughEntry_des;
const struct tag_tTracePlugin_sSignature_eThroughEntry_DES TracePlugin__2_eThroughEntry_des = {
    &tTracePlugin_sSignature_eThroughEntry_MT_,
    &tTracePlugin_sSignature_INIB_tab[2],   /* INIB */
};
