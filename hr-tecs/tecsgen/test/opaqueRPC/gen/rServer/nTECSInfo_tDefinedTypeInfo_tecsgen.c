/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tDefinedTypeInfo_tecsgen.h"
#include "nTECSInfo_tDefinedTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tDefinedTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tDefinedTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDefinedTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tDefinedTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t* size)
{
    struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getSize( lepd->idx, size );
}
void           nTECSInfo_tDefinedTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int8_t* kind)
{
    struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getKind( lepd->idx, kind );
}
void           nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t* num)
{
    struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNType( lepd->idx, num );
}
void           nTECSInfo_tDefinedTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tDefinedTypeInfo_eTypeInfo_getTypeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_struct__TAG_11_TECS_internal__TypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo___intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_longTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_signed__intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_struct__TAG_11_TECS_internal__TypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_struct__t_syslog_rlogTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_struct__t_rsemTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_struct__t_rflgTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_struct__t_rdtqTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_shortTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_signed__longTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_unsigned__shortTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const____intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_const__longTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_struct__stATypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_struct__stBTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_struct__stATypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uintptr_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo___uintptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_struct____pthread_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_struct____pthread_cond_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_struct____pthread_mutex_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int_Array1_TypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */






































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tDefinedTypeInfo_INIB nTECSInfo_tDefinedTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[0]:  uint_tTypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint_t",                                /* name */
        6,                                       /* typeKind */
        sizeof(uint_t),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[1]:  const__SYSLOGTypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_struct__TAG_11_TECS_internal__TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const SYSLOG",                          /* name */
        6,                                       /* typeKind */
        sizeof(const SYSLOG),                    /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[2]:  SYSTIMTypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SYSTIM",                                /* name */
        6,                                       /* typeKind */
        sizeof(SYSTIM),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[3]:  ulong_tTypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ulong_t",                               /* name */
        6,                                       /* typeKind */
        sizeof(ulong_t),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[4]:  intptr_tTypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo___intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "intptr_t",                              /* name */
        6,                                       /* typeKind */
        sizeof(intptr_t),                        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[5]:  __intptr_tTypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_longTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "__intptr_t",                            /* name */
        6,                                       /* typeKind */
        sizeof(__intptr_t),                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[6]:  ERTypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ER",                                    /* name */
        6,                                       /* typeKind */
        sizeof(ER),                              /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[7]:  int_tTypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_signed__intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int_t",                                 /* name */
        6,                                       /* typeKind */
        sizeof(int_t),                           /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[8]:  SYSLOGTypeInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_struct__TAG_11_TECS_internal__TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SYSLOG",                                /* name */
        6,                                       /* typeKind */
        sizeof(SYSLOG),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[9]:  ER_UINTTypeInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ER_UINT",                               /* name */
        6,                                       /* typeKind */
        sizeof(ER_UINT),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[10]:  T_SYSLOG_RLOGTypeInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_struct__t_syslog_rlogTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_SYSLOG_RLOG",                         /* name */
        6,                                       /* typeKind */
        sizeof(T_SYSLOG_RLOG),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[11]:  TEXPTNTypeInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TEXPTN",                                /* name */
        6,                                       /* typeKind */
        sizeof(TEXPTN),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[12]:  RELTIMTypeInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "RELTIM",                                /* name */
        6,                                       /* typeKind */
        sizeof(RELTIM),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[13]:  SYSUTMTypeInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SYSUTM",                                /* name */
        6,                                       /* typeKind */
        sizeof(SYSUTM),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[14]:  TMOTypeInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TMO",                                   /* name */
        6,                                       /* typeKind */
        sizeof(TMO),                             /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[15]:  T_RSEMTypeInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_struct__t_rsemTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RSEM",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RSEM),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[16]:  IDTypeInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ID",                                    /* name */
        6,                                       /* typeKind */
        sizeof(ID),                              /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[17]:  FLGPTNTypeInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "FLGPTN",                                /* name */
        6,                                       /* typeKind */
        sizeof(FLGPTN),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[18]:  MODETypeInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "MODE",                                  /* name */
        6,                                       /* typeKind */
        sizeof(MODE),                            /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[19]:  T_RFLGTypeInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_struct__t_rflgTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RFLG",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RFLG),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[20]:  T_RDTQTypeInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_struct__t_rdtqTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RDTQ",                                /* name */
        6,                                       /* typeKind */
        sizeof(T_RDTQ),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[21]:  short_tTypeInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_shortTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "short_t",                               /* name */
        6,                                       /* typeKind */
        sizeof(short_t),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[22]:  long_tTypeInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_signed__longTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "long_t",                                /* name */
        6,                                       /* typeKind */
        sizeof(long_t),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[23]:  ushort_tTypeInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_unsigned__shortTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ushort_t",                              /* name */
        6,                                       /* typeKind */
        sizeof(ushort_t),                        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[24]:  const__intptr_tTypeInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_const____intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const intptr_t",                        /* name */
        6,                                       /* typeKind */
        sizeof(const intptr_t),                  /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[25]:  const____intptr_tTypeInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_const__longTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const __intptr_t",                      /* name */
        6,                                       /* typeKind */
        sizeof(const __intptr_t),                /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[26]:  const__STATypeInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_struct__stATypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const STA",                             /* name */
        6,                                       /* typeKind */
        sizeof(const STA),                       /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[27]:  STBTypeInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_struct__stBTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "STB",                                   /* name */
        6,                                       /* typeKind */
        sizeof(STB),                             /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[28]:  STATypeInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_struct__stATypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "STA",                                   /* name */
        6,                                       /* typeKind */
        sizeof(STA),                             /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[29]:  ATRTypeInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ATR",                                   /* name */
        6,                                       /* typeKind */
        sizeof(ATR),                             /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[30]:  PRITypeInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "PRI",                                   /* name */
        6,                                       /* typeKind */
        sizeof(PRI),                             /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[31]:  SIZETypeInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_uintptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SIZE",                                  /* name */
        6,                                       /* typeKind */
        sizeof(SIZE),                            /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[32]:  uintptr_tTypeInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo___uintptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uintptr_t",                             /* name */
        6,                                       /* typeKind */
        sizeof(uintptr_t),                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[33]:  __uintptr_tTypeInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "__uintptr_t",                           /* name */
        6,                                       /* typeKind */
        sizeof(__uintptr_t),                     /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[34]:  pthread_tTypeInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_struct____pthread_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pthread_t",                             /* name */
        6,                                       /* typeKind */
        sizeof(pthread_t),                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[35]:  pthread_cond_tTypeInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_struct____pthread_cond_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pthread_cond_t",                        /* name */
        6,                                       /* typeKind */
        sizeof(pthread_cond_t),                  /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[36]:  pthread_mutex_tTypeInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_struct____pthread_mutex_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pthread_mutex_t",                       /* name */
        6,                                       /* typeKind */
        sizeof(pthread_mutex_t),                 /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDefinedTypeInfo_CB_tab[37]:  jmp_bufTypeInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int_Array1_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "jmp_buf",                               /* name */
        6,                                       /* typeKind */
        sizeof(jmp_buf),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__SYSLOGTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__SYSLOGTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_SYSTIMTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_SYSTIMTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo___intptr_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo___intptr_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ERTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ERTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_SYSLOGTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_SYSLOGTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ER_UINTTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ER_UINTTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[9],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_SYSLOG_RLOGTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_SYSLOG_RLOGTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[10],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[11],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[12],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_SYSUTMTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_SYSUTMTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[13],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_TMOTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_TMOTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[14],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_RSEMTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_RSEMTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[15],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_IDTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_IDTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[16],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[17],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_MODETypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_MODETypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[18],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_RFLGTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_RFLGTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[19],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_RDTQTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_RDTQTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[20],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_short_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_short_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[21],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_long_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_long_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[22],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ushort_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ushort_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[23],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__intptr_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__intptr_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[24],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const____intptr_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const____intptr_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[25],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__STATypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__STATypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[26],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STBTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STBTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[27],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STATypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STATypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[28],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ATRTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ATRTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[29],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_PRITypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_PRITypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[30],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_SIZETypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_SIZETypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[31],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uintptr_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uintptr_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[32],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo___uintptr_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo___uintptr_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[33],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_pthread_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_pthread_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[34],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_pthread_cond_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_pthread_cond_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[35],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_pthread_mutex_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_pthread_mutex_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[36],   /* INIB */
};
extern const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_jmp_bufTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDefinedTypeInfo_eTypeInfo_DES rServer_rTECSInfo_jmp_bufTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDefinedTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDefinedTypeInfo_INIB_tab[37],   /* INIB */
};
