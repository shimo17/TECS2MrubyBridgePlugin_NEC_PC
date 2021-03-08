/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tEntryInfo_tecsgen.h"
#include "nTECSInfo_tEntryInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEntryInfo */
struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES {
    const struct tag_nTECSInfo_sEntryInfo_VMT *vmt;
    tEntryInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEntryInfo */
ER             nTECSInfo_tEntryInfo_eEntryInfo_getName_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *lepd
        = (struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *)epd;
    return nTECSInfo_tEntryInfo_eEntryInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tEntryInfo_eEntryInfo_getNameLength_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *lepd
        = (struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *)epd;
    nTECSInfo_tEntryInfo_eEntryInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, Descriptor( nTECSInfo_sSignatureInfo )* desc)
{
    struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *lepd
        = (struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *)epd;
    nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo( lepd->idx, desc );
}
void           nTECSInfo_tEntryInfo_eEntryInfo_getArraySize_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, uint32_t* array_size)
{
    struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *lepd
        = (struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *)epd;
    nTECSInfo_tEntryInfo_eEntryInfo_getArraySize( lepd->idx, array_size );
}
bool_t         nTECSInfo_tEntryInfo_eEntryInfo_isInline_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd)
{
    struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *lepd
        = (struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *)epd;
    return nTECSInfo_tEntryInfo_eEntryInfo_isInline( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEntryInfo */
const struct tag_nTECSInfo_sEntryInfo_VMT nTECSInfo_tEntryInfo_eEntryInfo_MT_ = {
    nTECSInfo_tEntryInfo_eEntryInfo_getName_skel,
    nTECSInfo_tEntryInfo_eEntryInfo_getNameLength_skel,
    nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo_skel,
    nTECSInfo_tEntryInfo_eEntryInfo_getArraySize_skel,
    nTECSInfo_tEntryInfo_eEntryInfo_isInline_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sSysLogSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_siKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sSemaphoreSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_siSemaphoreSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sTDRSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sPPAllocatorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sChannelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sSocketClientOpenerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sChannelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sServerChannelOpenerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sSimpleSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sRPCErrorHandlerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sRPCErrorHandlerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sRPCErrorHandlerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sSimpleSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sSimpleSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_sUnmarshalerMainSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rClient_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;

/* 呼び口配列 #_CPA_# */























/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tEntryInfo_INIB nTECSInfo_tEntryInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tEntryInfo_CB_tab[0]:  tSysLog_eSysLogEntryInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sSysLogSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eSysLog",                               /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[1]:  tTask_eTaskEntryInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTask",                                 /* name */
        true,                                    /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[2]:  tKernel_eKernelEntryInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eKernel",                               /* name */
        true,                                    /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[3]:  tKernel_eiKernelEntryInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_siKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eiKernel",                              /* name */
        true,                                    /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[4]:  tSemaphore_eSemaphoreEntryInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sSemaphoreSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eSemaphore",                            /* name */
        true,                                    /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[5]:  tSemaphore_eiSemaphoreEntryInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_siSemaphoreSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eiSemaphore",                           /* name */
        true,                                    /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[6]:  tNBOTDR_eTDREntryInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sTDRSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTDR",                                  /* name */
        true,                                    /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[7]:  tRPCDedicatedTaskMainWithOpener_eMainEntryInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eMain",                                 /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[8]:  tPPAllocator_ePPAllocatorEntryInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sPPAllocatorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ePPAllocator",                          /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[9]:  tSocketClient_eC0EntryInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sChannelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eC0",                                   /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[10]:  tSocketClient_eOpenerEntryInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sSocketClientOpenerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eOpener",                               /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[11]:  tSocketServer_eC1EntryInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sChannelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eC1",                                   /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[12]:  tSocketServer_eOpenerEntryInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sServerChannelOpenerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eOpener",                               /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[13]:  tAlloc_eAllocEntryInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eAlloc",                                /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[14]:  tSimpleServer_eEntEntryInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sSimpleSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt",                                  /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[15]:  tSimpleClient_eMainEntryInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eMain",                                 /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[16]:  tSimpleClient_eHandlerEntryInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sRPCErrorHandlerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eHandler",                              /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[17]:  tClientRPCErrorHandler_eHandlerEntryInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sRPCErrorHandlerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eHandler",                              /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[18]:  tServerRPCErrorHandler_eHandlerEntryInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sRPCErrorHandlerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eHandler",                              /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[19]:  tTracePlugin_sSimple_eThroughEntryEntryInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sSimpleSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry",                         /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[20]:  tOpaqueMarshaler_sSimple_eClientEntryEntryInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sSimpleSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry",                          /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[21]:  tOpaqueUnmarshaler_sSimple_eServiceEntryInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_sUnmarshalerMainSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eService",                              /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[22]:  nTECSInfo_tTECSInfo_eTECSInfoEntryInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rClient_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTECSInfo",                             /* name */
        true,                                    /* b_inline */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSysLog_eSysLogEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSysLog_eSysLogEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tTask_eTaskEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tTask_eTaskEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tKernel_eKernelEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tKernel_eKernelEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tKernel_eiKernelEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tKernel_eiKernelEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSemaphore_eSemaphoreEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSemaphore_eSemaphoreEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSemaphore_eiSemaphoreEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSemaphore_eiSemaphoreEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tNBOTDR_eTDREntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tNBOTDR_eTDREntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tRPCDedicatedTaskMainWithOpener_eMainEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tRPCDedicatedTaskMainWithOpener_eMainEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tPPAllocator_ePPAllocatorEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tPPAllocator_ePPAllocatorEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSocketClient_eC0EntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSocketClient_eC0EntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[9],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSocketClient_eOpenerEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSocketClient_eOpenerEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[10],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSocketServer_eC1EntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSocketServer_eC1EntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[11],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSocketServer_eOpenerEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSocketServer_eOpenerEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[12],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tAlloc_eAllocEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tAlloc_eAllocEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[13],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSimpleServer_eEntEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSimpleServer_eEntEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[14],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSimpleClient_eMainEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSimpleClient_eMainEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[15],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSimpleClient_eHandlerEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tSimpleClient_eHandlerEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[16],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tClientRPCErrorHandler_eHandlerEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tClientRPCErrorHandler_eHandlerEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[17],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tServerRPCErrorHandler_eHandlerEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tServerRPCErrorHandler_eHandlerEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[18],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tTracePlugin_sSimple_eThroughEntryEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tTracePlugin_sSimple_eThroughEntryEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[19],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntryEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntryEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[20],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tOpaqueUnmarshaler_sSimple_eServiceEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_tOpaqueUnmarshaler_sSimple_eServiceEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[21],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_nTECSInfo_tTECSInfo_eTECSInfoEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rClient_rTECSInfo_nTECSInfo_tTECSInfo_eTECSInfoEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[22],   /* INIB */
};
