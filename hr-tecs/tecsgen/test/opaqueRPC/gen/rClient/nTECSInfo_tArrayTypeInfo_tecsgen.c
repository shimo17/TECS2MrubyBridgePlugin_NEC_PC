/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tArrayTypeInfo_tecsgen.h"
#include "nTECSInfo_tArrayTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tArrayTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tArrayTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tArrayTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tArrayTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tArrayTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t* size)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getSize( lepd->idx, size );
}
void           nTECSInfo_tArrayTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int8_t* kind)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getKind( lepd->idx, kind );
}
void           nTECSInfo_tArrayTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t* num)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getNType( lepd->idx, num );
}
void           nTECSInfo_tArrayTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getTypeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_const__int8_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__int8_t_Array4_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_const__int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_const__STATypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_const__STA_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_STA_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rClient_rTECSInfo_intTypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */









/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tArrayTypeInfo_INIB nTECSInfo_tArrayTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[0]:  intptr_t_Array6_TypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "intptr_t[6]",                           /* name */
        5,                                       /* typeKind */
        sizeof(intptr_t[6]),                     /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[1]:  const__int8_t_Array64_TypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_const__int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const int8_t[64]",                      /* name */
        5,                                       /* typeKind */
        sizeof(const int8_t[64]),                /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[2]:  const__int8_t_Array4__Array64_TypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rClient_rTECSInfo_const__int8_t_Array4_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const int8_t[64][4]",                   /* name */
        5,                                       /* typeKind */
        sizeof(const int8_t[64][4]),             /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[3]:  const__int8_t_Array4_TypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_const__int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const int8_t[4]",                       /* name */
        5,                                       /* typeKind */
        sizeof(const int8_t[4]),                 /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[4]:  const__STA_Array2_TypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_const__STATypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const STA[2]",                          /* name */
        5,                                       /* typeKind */
        sizeof(const STA[2]),                    /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[5]:  const__STA_Ptr__Array2_TypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_const__STA_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const STA*[2]",                         /* name */
        5,                                       /* typeKind */
        sizeof(const STA*[2]),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[6]:  int8_t_Array64_TypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int8_t[64]",                            /* name */
        5,                                       /* typeKind */
        sizeof(int8_t[64]),                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[7]:  STA_Ptr__Array2_TypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_STA_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "STA*[2]",                               /* name */
        5,                                       /* typeKind */
        sizeof(STA*[2]),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[8]:  int_Array1_TypeInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int[1]",                                /* name */
        5,                                       /* typeKind */
        sizeof(int[1]),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_intptr_t_Array6_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_intptr_t_Array6_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__int8_t_Array64_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__int8_t_Array64_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__int8_t_Array4__Array64_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__int8_t_Array4__Array64_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__int8_t_Array4_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__int8_t_Array4_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__STA_Array2_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__STA_Array2_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__STA_Ptr__Array2_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__STA_Ptr__Array2_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_int8_t_Array64_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_int8_t_Array64_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_STA_Ptr__Array2_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_STA_Ptr__Array2_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_int_Array1_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rClient_rTECSInfo_int_Array1_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[8],   /* INIB */
};
