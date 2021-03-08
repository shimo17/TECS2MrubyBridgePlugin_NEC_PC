/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tIntTypeInfo_tecsgen.h"
#include "nTECSInfo_tIntTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tIntTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tIntTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tIntTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tIntTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tIntTypeInfo_eTypeInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tIntTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t* size)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tIntTypeInfo_eTypeInfo_getSize( lepd->idx, size );
}
void           nTECSInfo_tIntTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int8_t* kind)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tIntTypeInfo_eTypeInfo_getKind( lepd->idx, kind );
}
void           nTECSInfo_tIntTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t* num)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tIntTypeInfo_eTypeInfo_getNType( lepd->idx, num );
}
void           nTECSInfo_tIntTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tIntTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tIntTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tIntTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getTypeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */



























/* 呼び口配列 #_CPA_# */



























/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tIntTypeInfo_INIB nTECSInfo_tIntTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[0]:  unsigned__intTypeInfo id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "unsigned int",                          /* name */
        2,                                       /* typeKind */
        -3,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[1]:  unsigned__longTypeInfo id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "unsigned long",                         /* name */
        2,                                       /* typeKind */
        -4,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[2]:  longTypeInfo id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "long",                                  /* name */
        2,                                       /* typeKind */
        -4,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[3]:  signed__intTypeInfo id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "signed int",                            /* name */
        2,                                       /* typeKind */
        -3,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[4]:  const__int8_tTypeInfo id=5 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const int8_t",                          /* name */
        2,                                       /* typeKind */
        8,                                       /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[5]:  int16_tTypeInfo id=6 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int16_t",                               /* name */
        2,                                       /* typeKind */
        16,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[6]:  int8_tTypeInfo id=7 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int8_t",                                /* name */
        2,                                       /* typeKind */
        8,                                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[7]:  int32_tTypeInfo id=8 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int32_t",                               /* name */
        2,                                       /* typeKind */
        32,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[8]:  int64_tTypeInfo id=9 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int64_t",                               /* name */
        2,                                       /* typeKind */
        64,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[9]:  int128_tTypeInfo id=10 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int128_t",                              /* name */
        2,                                       /* typeKind */
        128,                                     /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[10]:  uint8_tTypeInfo id=11 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint8_t",                               /* name */
        2,                                       /* typeKind */
        8,                                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[11]:  uint16_tTypeInfo id=12 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint16_t",                              /* name */
        2,                                       /* typeKind */
        16,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[12]:  uint32_tTypeInfo id=13 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint32_t",                              /* name */
        2,                                       /* typeKind */
        32,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[13]:  uint64_tTypeInfo id=14 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint64_t",                              /* name */
        2,                                       /* typeKind */
        64,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[14]:  uint128_tTypeInfo id=15 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint128_t",                             /* name */
        2,                                       /* typeKind */
        128,                                     /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[15]:  char_tTypeInfo id=16 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char_t",                                /* name */
        2,                                       /* typeKind */
        -1,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[16]:  schar_tTypeInfo id=17 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "schar_t",                               /* name */
        2,                                       /* typeKind */
        -1,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[17]:  shortTypeInfo id=18 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "short",                                 /* name */
        2,                                       /* typeKind */
        -2,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[18]:  signed__longTypeInfo id=19 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "signed long",                           /* name */
        2,                                       /* typeKind */
        -4,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[19]:  uchar_tTypeInfo id=20 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uchar_t",                               /* name */
        2,                                       /* typeKind */
        -1,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[20]:  unsigned__shortTypeInfo id=21 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "unsigned short",                        /* name */
        2,                                       /* typeKind */
        -2,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[21]:  unsigned__charTypeInfo id=22 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "unsigned char",                         /* name */
        2,                                       /* typeKind */
        -11,                                     /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[22]:  const__longTypeInfo id=23 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const long",                            /* name */
        2,                                       /* typeKind */
        -4,                                      /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[23]:  const__char_tTypeInfo id=24 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const char_t",                          /* name */
        2,                                       /* typeKind */
        -1,                                      /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[24]:  const__int32_tTypeInfo id=25 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const int32_t",                         /* name */
        2,                                       /* typeKind */
        32,                                      /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[25]:  charTypeInfo id=26 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char",                                  /* name */
        2,                                       /* typeKind */
        -11,                                     /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[26]:  intTypeInfo id=27 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int",                                   /* name */
        2,                                       /* typeKind */
        -3,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_longTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_longTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_signed__intTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_signed__intTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__int8_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__int8_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_int16_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_int8_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_int32_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_int64_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_int64_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_int128_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_int128_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[9],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[10],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_uint16_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_uint16_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[11],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[12],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_uint64_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_uint64_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[13],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_uint128_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_uint128_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[14],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_char_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_char_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[15],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_schar_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_schar_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[16],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_shortTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_shortTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[17],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_signed__longTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_signed__longTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[18],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_uchar_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_uchar_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[19],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_unsigned__shortTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_unsigned__shortTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[20],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_unsigned__charTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_unsigned__charTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[21],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__longTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__longTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[22],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__char_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__char_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[23],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__int32_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__int32_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[24],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_charTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_charTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[25],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_intTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rClient_rTECSInfo_intTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[26],   /* INIB */
};
