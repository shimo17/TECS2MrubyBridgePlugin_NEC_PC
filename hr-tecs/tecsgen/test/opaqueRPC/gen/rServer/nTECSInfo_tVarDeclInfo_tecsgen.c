/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tVarDeclInfo_tecsgen.h"
#include "nTECSInfo_tVarDeclInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eVarDeclInfo */
struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES {
    const struct tag_nTECSInfo_sVarDeclInfo_VMT *vmt;
    tVarDeclInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eVarDeclInfo */
ER             nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    return nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getOffset_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, uint32_t* offset)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getOffset( lepd->idx, offset );
}
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo( lepd->idx, desc );
}
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, uint32_t* expr_str, int32_t max_len)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr( lepd->idx, expr_str, max_len );
}
ER             nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, uint32_t* size, const void* p_cb)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    return nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs( lepd->idx, size, p_cb );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eVarDeclInfo */
const struct tag_nTECSInfo_sVarDeclInfo_VMT nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_ = {
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getOffset_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_ATRTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_ATRTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_SIZETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_pthread_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_pthread_cond_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_pthread_mutex_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_ATRTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_pthread_mutex_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_jmp_bufTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rServer_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */



































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tVarDeclInfo_INIB nTECSInfo_tVarDeclInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[0]:  tTask_taskAttributeVarDeclInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_ATRTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "taskAttribute",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_taskAttribute,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[1]:  tTask_exceptionAttributeVarDeclInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_ATRTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "exceptionAttribute",                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_exceptionAttribute,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[2]:  tTask_priorityVarDeclInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "priority",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_priority,                /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[3]:  tTask_stackSizeVarDeclInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_SIZETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "stackSize",                             /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_stackSize,               /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[4]:  tTask_nameVarDeclInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_name,                    /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[5]:  tTask_my_threadVarDeclInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_pthread_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "my_thread",                             /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_my_thread,               /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[6]:  tTask_my_condVarDeclInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_pthread_cond_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "my_cond",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_my_cond,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[7]:  tTask_my_mutexVarDeclInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_pthread_mutex_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "my_mutex",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_my_mutex,                /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[8]:  tTask_stateVarDeclInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "state",                                 /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_state,                   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[9]:  tSemaphore_idVarDeclInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "id",                                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tSemaphore_id,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[10]:  tSemaphore_attributeVarDeclInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_ATRTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "attribute",                             /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tSemaphore_attribute,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[11]:  tSemaphore_countVarDeclInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "count",                                 /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tSemaphore_count,              /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[12]:  tSemaphore_maxCountVarDeclInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "maxCount",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tSemaphore_maxCount,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[13]:  tSemaphore_mutexVarDeclInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_pthread_mutex_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "mutex",                                 /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tSemaphore_mutex,              /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[14]:  tNBOTDR_tmoVarDeclInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tmo",                                   /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tNBOTDR_tmo,                   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[15]:  tRPCDedicatedTaskMainWithOpener_initialDelayVarDeclInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "initialDelay",                          /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tRPCDedicatedTaskMainWithOpener_initialDelay, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[16]:  tRPCDedicatedTaskMainWithOpener_reopenDelayVarDeclInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "reopenDelay",                           /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tRPCDedicatedTaskMainWithOpener_reopenDelay, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[17]:  tPPAllocator_heapSizeVarDeclInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "heapSize",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tPPAllocator_heapSize,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[18]:  tPPAllocator_bufVarDeclInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "buf",                                   /* name */
        "mikan",                                 /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tPPAllocator_buf,              /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[19]:  tPPAllocator_allocatedSizeVarDeclInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "allocatedSize",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tPPAllocator_allocatedSize,    /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[20]:  tSocketClient_portNoVarDeclInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "portNo",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tSocketClient_portNo,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[21]:  tSocketClient_serverAddrVarDeclInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "serverAddr",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tSocketClient_serverAddr,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[22]:  tSocketClient_sdVarDeclInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "sd",                                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tSocketClient_sd,              /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[23]:  tSocketServer_portNoVarDeclInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "portNo",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tSocketServer_portNo,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[24]:  tSocketServer_sdVarDeclInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "sd",                                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tSocketServer_sd,              /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[25]:  tAlloc_max_n_allocVarDeclInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_n_alloc",                           /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tAlloc_max_n_alloc,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[26]:  tAlloc_n_allocVarDeclInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "n_alloc",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tAlloc_n_alloc,                /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[27]:  tAlloc_n_deallocVarDeclInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "n_dealloc",                             /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tAlloc_n_dealloc,              /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[28]:  tAlloc_byte_allocVarDeclInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "byte_alloc",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tAlloc_byte_alloc,             /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[29]:  tAlloc_byte_deallocVarDeclInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "byte_dealloc",                          /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tAlloc_byte_dealloc,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[30]:  tAlloc_id_nextVarDeclInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "id_next",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tAlloc_id_next,                /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[31]:  tAlloc_id_mapVarDeclInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "id_map",                                /* name */
        "mikan",                                 /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tAlloc_id_map,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[32]:  tSimpleClient_jbufVarDeclInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_jmp_bufTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "jbuf",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tSimpleClient_jbuf,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[33]:  tTracePlugin_sSimple_probeName_strVarDeclInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "probeName_str",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTracePlugin_sSimple_probeName_str, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[34]:  tTracePlugin_sSimple_from_strVarDeclInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "from_str",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTracePlugin_sSimple_from_str, /* offset */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_nameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_nameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_my_threadVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_my_threadVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_my_condVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_my_condVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_my_mutexVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_my_mutexVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_stateVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTask_stateVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSemaphore_idVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSemaphore_idVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[9],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSemaphore_attributeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSemaphore_attributeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[10],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSemaphore_countVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSemaphore_countVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[11],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSemaphore_maxCountVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSemaphore_maxCountVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[12],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSemaphore_mutexVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSemaphore_mutexVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[13],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tNBOTDR_tmoVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tNBOTDR_tmoVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[14],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tRPCDedicatedTaskMainWithOpener_initialDelayVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tRPCDedicatedTaskMainWithOpener_initialDelayVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[15],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tRPCDedicatedTaskMainWithOpener_reopenDelayVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tRPCDedicatedTaskMainWithOpener_reopenDelayVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[16],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tPPAllocator_heapSizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tPPAllocator_heapSizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[17],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tPPAllocator_bufVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tPPAllocator_bufVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[18],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tPPAllocator_allocatedSizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tPPAllocator_allocatedSizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[19],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSocketClient_portNoVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSocketClient_portNoVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[20],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSocketClient_serverAddrVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSocketClient_serverAddrVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[21],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSocketClient_sdVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSocketClient_sdVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[22],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSocketServer_portNoVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSocketServer_portNoVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[23],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSocketServer_sdVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSocketServer_sdVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[24],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tAlloc_max_n_allocVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tAlloc_max_n_allocVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[25],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tAlloc_n_allocVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tAlloc_n_allocVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[26],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tAlloc_n_deallocVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tAlloc_n_deallocVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[27],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tAlloc_byte_allocVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tAlloc_byte_allocVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[28],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tAlloc_byte_deallocVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tAlloc_byte_deallocVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[29],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tAlloc_id_nextVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tAlloc_id_nextVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[30],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tAlloc_id_mapVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tAlloc_id_mapVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[31],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSimpleClient_jbufVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tSimpleClient_jbufVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[32],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_probeName_strVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_probeName_strVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[33],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_from_strVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_from_strVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[34],   /* INIB */
};
