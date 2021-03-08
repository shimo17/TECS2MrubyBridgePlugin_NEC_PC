/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tPtrTypeInfo_tecsgen.h"
#include "nTECSInfo_tPtrTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tPtrTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tPtrTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tPtrTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tPtrTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tPtrTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t* size)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getSize( lepd->idx, size );
}
void           nTECSInfo_tPtrTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int8_t* kind)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getKind( lepd->idx, kind );
}
void           nTECSInfo_tPtrTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t* num)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getNType( lepd->idx, num );
}
void           nTECSInfo_tPtrTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getTypeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_const__SYSLOGTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_SYSLOGTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_T_SYSLOG_RLOGTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_SYSTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_SYSUTMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_T_RSEMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_T_RFLGTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_T_RDTQTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_const__int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int64_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int128_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_uint16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_uint64_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_uint128_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_char_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_float32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_double64_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_schar_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_short_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_long_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_unsigned__charTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_ushort_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_voidTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_const__voidTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_const__char_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__STA_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_const__STATypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_STBTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STB_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int8_t_Array64_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_STATypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STA_Ptr_TypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_char_t_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STA_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int8_t_Array64__Ptr_TypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STA_Ptr__Array2__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_STA_Ptr__Array2_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_uchar_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_const__int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_struct____pthread_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_struct____pthread_cond_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_struct____pthread_mutex_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfoTypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */




































































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tPtrTypeInfo_INIB nTECSInfo_tPtrTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[0]:  const__SYSLOG_Ptr_TypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_const__SYSLOGTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const SYSLOG*",                         /* name */
        4,                                       /* typeKind */
        sizeof(const SYSLOG*),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[1]:  SYSLOG_Ptr_TypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_SYSLOGTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SYSLOG*",                               /* name */
        4,                                       /* typeKind */
        sizeof(SYSLOG*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[2]:  T_SYSLOG_RLOG_Ptr_TypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_T_SYSLOG_RLOGTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_SYSLOG_RLOG*",                        /* name */
        4,                                       /* typeKind */
        sizeof(T_SYSLOG_RLOG*),                  /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[3]:  SYSTIM_Ptr_TypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_SYSTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SYSTIM*",                               /* name */
        4,                                       /* typeKind */
        sizeof(SYSTIM*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[4]:  SYSUTM_Ptr_TypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_SYSUTMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SYSUTM*",                               /* name */
        4,                                       /* typeKind */
        sizeof(SYSUTM*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[5]:  T_RSEM_Ptr_TypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_T_RSEMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RSEM*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RSEM*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[6]:  FLGPTN_Ptr_TypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "FLGPTN*",                               /* name */
        4,                                       /* typeKind */
        sizeof(FLGPTN*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[7]:  T_RFLG_Ptr_TypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_T_RFLGTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RFLG*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RFLG*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[8]:  intptr_t_Ptr_TypeInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "intptr_t*",                             /* name */
        4,                                       /* typeKind */
        sizeof(intptr_t*),                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[9]:  T_RDTQ_Ptr_TypeInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_T_RDTQTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RDTQ*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RDTQ*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[10]:  const__int8_t_Ptr_TypeInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_const__int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const int8_t*",                         /* name */
        4,                                       /* typeKind */
        sizeof(const int8_t*),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[11]:  int8_t_Ptr_TypeInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int8_t*",                               /* name */
        4,                                       /* typeKind */
        sizeof(int8_t*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[12]:  int16_t_Ptr_TypeInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int16_t*",                              /* name */
        4,                                       /* typeKind */
        sizeof(int16_t*),                        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[13]:  int32_t_Ptr_TypeInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int32_t*",                              /* name */
        4,                                       /* typeKind */
        sizeof(int32_t*),                        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[14]:  int64_t_Ptr_TypeInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int64_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int64_t*",                              /* name */
        4,                                       /* typeKind */
        sizeof(int64_t*),                        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[15]:  int128_t_Ptr_TypeInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int128_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int128_t*",                             /* name */
        4,                                       /* typeKind */
        sizeof(int128_t*),                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[16]:  uint8_t_Ptr_TypeInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint8_t*",                              /* name */
        4,                                       /* typeKind */
        sizeof(uint8_t*),                        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[17]:  uint16_t_Ptr_TypeInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_uint16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint16_t*",                             /* name */
        4,                                       /* typeKind */
        sizeof(uint16_t*),                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[18]:  uint32_t_Ptr_TypeInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint32_t*",                             /* name */
        4,                                       /* typeKind */
        sizeof(uint32_t*),                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[19]:  uint64_t_Ptr_TypeInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_uint64_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint64_t*",                             /* name */
        4,                                       /* typeKind */
        sizeof(uint64_t*),                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[20]:  uint128_t_Ptr_TypeInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_uint128_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint128_t*",                            /* name */
        4,                                       /* typeKind */
        sizeof(uint128_t*),                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[21]:  char_t_Ptr_TypeInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_char_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char_t*",                               /* name */
        4,                                       /* typeKind */
        sizeof(char_t*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[22]:  bool_t_Ptr_TypeInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_bool_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bool_t*",                               /* name */
        4,                                       /* typeKind */
        sizeof(bool_t*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[23]:  float32_t_Ptr_TypeInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_float32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "float32_t*",                            /* name */
        4,                                       /* typeKind */
        sizeof(float32_t*),                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[24]:  double64_t_Ptr_TypeInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_double64_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "double64_t*",                           /* name */
        4,                                       /* typeKind */
        sizeof(double64_t*),                     /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[25]:  schar_t_Ptr_TypeInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_schar_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "schar_t*",                              /* name */
        4,                                       /* typeKind */
        sizeof(schar_t*),                        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[26]:  short_t_Ptr_TypeInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_short_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "short_t*",                              /* name */
        4,                                       /* typeKind */
        sizeof(short_t*),                        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[27]:  int_t_Ptr_TypeInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int_t*",                                /* name */
        4,                                       /* typeKind */
        sizeof(int_t*),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[28]:  long_t_Ptr_TypeInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_long_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "long_t*",                               /* name */
        4,                                       /* typeKind */
        sizeof(long_t*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[29]:  unsigned__char_Ptr_TypeInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_unsigned__charTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "unsigned char*",                        /* name */
        4,                                       /* typeKind */
        sizeof(unsigned char*),                  /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[30]:  ushort_t_Ptr_TypeInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_ushort_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ushort_t*",                             /* name */
        4,                                       /* typeKind */
        sizeof(ushort_t*),                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[31]:  uint_t_Ptr_TypeInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint_t*",                               /* name */
        4,                                       /* typeKind */
        sizeof(uint_t*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[32]:  ulong_t_Ptr_TypeInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_ulong_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ulong_t*",                              /* name */
        4,                                       /* typeKind */
        sizeof(ulong_t*),                        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[33]:  void_Ptr__Ptr_TypeInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "void**",                                /* name */
        4,                                       /* typeKind */
        sizeof(void**),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[34]:  void_Ptr_TypeInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_voidTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "void*",                                 /* name */
        4,                                       /* typeKind */
        sizeof(void*),                           /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[35]:  const__void_Ptr_TypeInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_const__voidTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const void*",                           /* name */
        4,                                       /* typeKind */
        sizeof(const void*),                     /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[36]:  const__char_t_Ptr_TypeInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_const__char_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const char_t*",                         /* name */
        4,                                       /* typeKind */
        sizeof(const char_t*),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[37]:  const__char_t_Ptr__Ptr_TypeInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const char_t**",                        /* name */
        4,                                       /* typeKind */
        sizeof(const char_t**),                  /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[38]:  const__STA_Ptr__Ptr_TypeInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_const__STA_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const STA**",                           /* name */
        4,                                       /* typeKind */
        sizeof(const STA**),                     /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[39]:  const__STA_Ptr_TypeInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_const__STATypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const STA*",                            /* name */
        4,                                       /* typeKind */
        sizeof(const STA*),                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[40]:  char_t_Ptr__Ptr_TypeInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char_t**",                              /* name */
        4,                                       /* typeKind */
        sizeof(char_t**),                        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[41]:  STB_Ptr_TypeInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_STBTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "STB*",                                  /* name */
        4,                                       /* typeKind */
        sizeof(STB*),                            /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[42]:  STB_Ptr__Ptr_TypeInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_STB_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "STB**",                                 /* name */
        4,                                       /* typeKind */
        sizeof(STB**),                           /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[43]:  int8_t_Array64__Ptr_TypeInfo id=44 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int8_t_Array64_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int8_t(*)[64]",                         /* name */
        4,                                       /* typeKind */
        sizeof(int8_t(*)[64]),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[44]:  STA_Ptr_TypeInfo id=45 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_STATypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "STA*",                                  /* name */
        4,                                       /* typeKind */
        sizeof(STA*),                            /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[45]:  STA_Ptr__Ptr_TypeInfo id=46 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_STA_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "STA**",                                 /* name */
        4,                                       /* typeKind */
        sizeof(STA**),                           /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[46]:  int32_t_Ptr__Ptr_TypeInfo id=47 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int32_t**",                             /* name */
        4,                                       /* typeKind */
        sizeof(int32_t**),                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[47]:  char_t_Ptr__Ptr__Ptr_TypeInfo id=48 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_char_t_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char_t***",                             /* name */
        4,                                       /* typeKind */
        sizeof(char_t***),                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[48]:  STA_Ptr__Ptr__Ptr_TypeInfo id=49 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_STA_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "STA***",                                /* name */
        4,                                       /* typeKind */
        sizeof(STA***),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[49]:  int8_t_Array64__Ptr__Ptr_TypeInfo id=50 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_int8_t_Array64__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int8_t(**)[64]",                        /* name */
        4,                                       /* typeKind */
        sizeof(int8_t(**)[64]),                  /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[50]:  STA_Ptr__Array2__Ptr__Ptr_TypeInfo id=51 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rServer_rTECSInfo_STA_Ptr__Array2__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "STA*(**)[2]",                           /* name */
        4,                                       /* typeKind */
        sizeof(STA*(**)[2]),                     /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[51]:  STA_Ptr__Array2__Ptr_TypeInfo id=52 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_STA_Ptr__Array2_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "STA*(*)[2]",                            /* name */
        4,                                       /* typeKind */
        sizeof(STA*(*)[2]),                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[52]:  uchar_t_Ptr_TypeInfo id=53 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_uchar_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uchar_t*",                              /* name */
        4,                                       /* typeKind */
        sizeof(uchar_t*),                        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[53]:  const__int32_t_Ptr_TypeInfo id=54 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_const__int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const int32_t*",                        /* name */
        4,                                       /* typeKind */
        sizeof(const int32_t*),                  /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[54]:  struct____pthread_t_Ptr_TypeInfo id=55 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_struct____pthread_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct __pthread_t*",                   /* name */
        4,                                       /* typeKind */
        sizeof(struct __pthread_t*),             /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[55]:  struct____pthread_cond_t_Ptr_TypeInfo id=56 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_struct____pthread_cond_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct __pthread_cond_t*",              /* name */
        4,                                       /* typeKind */
        sizeof(struct __pthread_cond_t*),        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[56]:  struct____pthread_mutex_t_Ptr_TypeInfo id=57 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_struct____pthread_mutex_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct __pthread_mutex_t*",             /* name */
        4,                                       /* typeKind */
        sizeof(struct __pthread_mutex_t*),       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[57]:  Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo id=58 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sTypeInfo )*",    /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sTypeInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[58]:  Descriptor_of_nTECSInfo_sParamInfo_Ptr_TypeInfo id=59 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sParamInfo )*",   /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sParamInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[59]:  Descriptor_of_nTECSInfo_sFunctionInfo_Ptr_TypeInfo id=60 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sFunctionInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sFunctionInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[60]:  Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo id=61 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sSignatureInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sSignatureInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[61]:  Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo id=62 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sVarDeclInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sVarDeclInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[62]:  Descriptor_of_nTECSInfo_sCallInfo_Ptr_TypeInfo id=63 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sCallInfo )*",    /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sCallInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[63]:  Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo id=64 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sEntryInfo )*",   /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sEntryInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[64]:  Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo id=65 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sCelltypeInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sCelltypeInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[65]:  Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo id=66 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sNamespaceInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sNamespaceInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[66]:  Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo id=67 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sCellInfo )*",    /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sCellInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[67]:  Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo id=68 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sRegionInfo )*",  /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sRegionInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__SYSLOG_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__SYSLOG_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_SYSLOG_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_SYSLOG_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_SYSLOG_RLOG_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_SYSLOG_RLOG_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_SYSTIM_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_SYSTIM_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_RSEM_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_RSEM_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_RFLG_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_RFLG_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_RDTQ_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_T_RDTQ_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[9],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__int8_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__int8_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[10],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[11],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int16_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int16_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[12],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[13],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int64_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int64_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[14],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int128_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int128_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[15],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[16],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[17],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[18],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint64_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint64_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[19],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint128_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint128_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[20],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[21],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[22],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_float32_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_float32_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[23],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_double64_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_double64_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[24],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_schar_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_schar_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[25],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_short_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_short_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[26],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[27],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_long_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_long_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[28],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_unsigned__char_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_unsigned__char_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[29],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ushort_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ushort_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[30],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uint_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[31],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ulong_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_ulong_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[32],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[33],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[34],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[35],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[36],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__char_t_Ptr__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__char_t_Ptr__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[37],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__STA_Ptr__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__STA_Ptr__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[38],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__STA_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__STA_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[39],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_char_t_Ptr__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_char_t_Ptr__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[40],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STB_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STB_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[41],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STB_Ptr__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STB_Ptr__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[42],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int8_t_Array64__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int8_t_Array64__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[43],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STA_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STA_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[44],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STA_Ptr__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STA_Ptr__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[45],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int32_t_Ptr__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int32_t_Ptr__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[46],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_char_t_Ptr__Ptr__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_char_t_Ptr__Ptr__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[47],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STA_Ptr__Ptr__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STA_Ptr__Ptr__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[48],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int8_t_Array64__Ptr__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_int8_t_Array64__Ptr__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[49],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STA_Ptr__Array2__Ptr__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STA_Ptr__Array2__Ptr__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[50],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STA_Ptr__Array2__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_STA_Ptr__Array2__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[51],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uchar_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_uchar_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[52],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__int32_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_const__int32_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[53],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_struct____pthread_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_struct____pthread_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[54],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_struct____pthread_cond_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_struct____pthread_cond_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[55],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_struct____pthread_mutex_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_struct____pthread_mutex_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[56],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[57],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[58],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[59],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[60],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[61],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[62],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[63],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[64],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[65],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[66],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rServer_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[67],   /* INIB */
};
