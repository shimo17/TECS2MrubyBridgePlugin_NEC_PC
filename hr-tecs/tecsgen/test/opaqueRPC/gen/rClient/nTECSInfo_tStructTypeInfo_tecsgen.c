/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tStructTypeInfo_tecsgen.h"
#include "nTECSInfo_tStructTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tStructTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tStructTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tStructTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t* size)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tStructTypeInfo_eTypeInfo_getSize( lepd->idx, size );
}
void           nTECSInfo_tStructTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int8_t* kind)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tStructTypeInfo_eTypeInfo_getKind( lepd->idx, kind );
}
void           nTECSInfo_tStructTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t* num)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tStructTypeInfo_eTypeInfo_getNType( lepd->idx, num );
}
void           nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tStructTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tStructTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_SYSTIMTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_intptr_t_Array6_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_IDTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_IDTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_IDTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_IDTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_charTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_charTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_charTypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */
struct tag_nTECSInfo_sTypeInfo_VDES * const rClient_rTECSInfo_struct__TAG_11_TECS_internal__TypeInfo_cTypeInfo[] = {
    &rClient_rTECSInfo_uint_tTypeInfo_eTypeInfo_des,
    &rClient_rTECSInfo_SYSTIMTypeInfo_eTypeInfo_des,
    &rClient_rTECSInfo_intptr_t_Array6_TypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rClient_rTECSInfo_struct__t_syslog_rlogTypeInfo_cTypeInfo[] = {
    &rClient_rTECSInfo_uint_tTypeInfo_eTypeInfo_des,
    &rClient_rTECSInfo_uint_tTypeInfo_eTypeInfo_des,
    &rClient_rTECSInfo_uint_tTypeInfo_eTypeInfo_des,
    &rClient_rTECSInfo_uint_tTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rClient_rTECSInfo_struct__t_rsemTypeInfo_cTypeInfo[] = {
    &rClient_rTECSInfo_IDTypeInfo_eTypeInfo_des,
    &rClient_rTECSInfo_uint_tTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rClient_rTECSInfo_struct__t_rflgTypeInfo_cTypeInfo[] = {
    &rClient_rTECSInfo_IDTypeInfo_eTypeInfo_des,
    &rClient_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rClient_rTECSInfo_struct__t_rdtqTypeInfo_cTypeInfo[] = {
    &rClient_rTECSInfo_IDTypeInfo_eTypeInfo_des,
    &rClient_rTECSInfo_IDTypeInfo_eTypeInfo_des,
    &rClient_rTECSInfo_uint_tTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rClient_rTECSInfo_struct__stATypeInfo_cTypeInfo[] = {
    &rClient_rTECSInfo_int8_tTypeInfo_eTypeInfo_des,
    &rClient_rTECSInfo_int32_tTypeInfo_eTypeInfo_des,
    &rClient_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des,
    &rClient_rTECSInfo_int32_tTypeInfo_eTypeInfo_des,
    &rClient_rTECSInfo_int32_tTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rClient_rTECSInfo_struct__stBTypeInfo_cTypeInfo[] = {
    &rClient_rTECSInfo_int8_tTypeInfo_eTypeInfo_des,
    &rClient_rTECSInfo_int32_tTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rClient_rTECSInfo_struct____pthread_tTypeInfo_cTypeInfo[] = {
    &rClient_rTECSInfo_charTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rClient_rTECSInfo_struct____pthread_cond_tTypeInfo_cTypeInfo[] = {
    &rClient_rTECSInfo_charTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rClient_rTECSInfo_struct____pthread_mutex_tTypeInfo_cTypeInfo[] = {
    &rClient_rTECSInfo_charTypeInfo_eTypeInfo_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tStructTypeInfo_INIB nTECSInfo_tStructTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[0]:  struct__TAG_11_TECS_internal__TypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        rClient_rTECSInfo_struct__TAG_11_TECS_internal__TypeInfo_cTypeInfo, /* #_CCP3B_# */
        3,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const struct {uint_t logtype;SYSTIM logtim;intptr_t loginfo[6];} ", /* name */
        7,                                       /* typeKind */
        sizeof(const struct {uint_t logtype;SYSTIM logtim;intptr_t loginfo[6];} ), /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[1]:  struct__t_syslog_rlogTypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        rClient_rTECSInfo_struct__t_syslog_rlogTypeInfo_cTypeInfo, /* #_CCP3B_# */
        4,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_syslog_rlog",                  /* name */
        7,                                       /* typeKind */
        sizeof(struct t_syslog_rlog),            /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[2]:  struct__t_rsemTypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        rClient_rTECSInfo_struct__t_rsemTypeInfo_cTypeInfo, /* #_CCP3B_# */
        2,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rsem",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rsem),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[3]:  struct__t_rflgTypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        rClient_rTECSInfo_struct__t_rflgTypeInfo_cTypeInfo, /* #_CCP3B_# */
        2,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rflg",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rflg),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[4]:  struct__t_rdtqTypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        rClient_rTECSInfo_struct__t_rdtqTypeInfo_cTypeInfo, /* #_CCP3B_# */
        3,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rdtq",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rdtq),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[5]:  struct__stATypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        rClient_rTECSInfo_struct__stATypeInfo_cTypeInfo, /* #_CCP3B_# */
        5,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const struct stA",                      /* name */
        7,                                       /* typeKind */
        sizeof(const struct stA),                /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[6]:  struct__stBTypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        rClient_rTECSInfo_struct__stBTypeInfo_cTypeInfo, /* #_CCP3B_# */
        2,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct stB",                            /* name */
        7,                                       /* typeKind */
        sizeof(struct stB),                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[7]:  struct____pthread_tTypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        rClient_rTECSInfo_struct____pthread_tTypeInfo_cTypeInfo, /* #_CCP3B_# */
        1,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct __pthread_t",                    /* name */
        7,                                       /* typeKind */
        sizeof(struct __pthread_t),              /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[8]:  struct____pthread_cond_tTypeInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        rClient_rTECSInfo_struct____pthread_cond_tTypeInfo_cTypeInfo, /* #_CCP3B_# */
        1,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct __pthread_cond_t",               /* name */
        7,                                       /* typeKind */
        sizeof(struct __pthread_cond_t),         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[9]:  struct____pthread_mutex_tTypeInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        rClient_rTECSInfo_struct____pthread_mutex_tTypeInfo_cTypeInfo, /* #_CCP3B_# */
        1,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct __pthread_mutex_t",              /* name */
        7,                                       /* typeKind */
        sizeof(struct __pthread_mutex_t),        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct__TAG_11_TECS_internal__TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct__TAG_11_TECS_internal__TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct__t_syslog_rlogTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct__t_syslog_rlogTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct__t_rsemTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct__t_rsemTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct__t_rflgTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct__t_rflgTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct__t_rdtqTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct__t_rdtqTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct__stATypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct__stATypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct__stBTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct__stBTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct____pthread_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct____pthread_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct____pthread_cond_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct____pthread_cond_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct____pthread_mutex_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rClient_rTECSInfo_struct____pthread_mutex_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[9],   /* INIB */
};
