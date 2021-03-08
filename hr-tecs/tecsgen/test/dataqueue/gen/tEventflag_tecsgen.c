/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tEventflag_tecsgen.h"
#include "tEventflag_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEventflag : omitted by entry port optimize */

/* eiEventflag : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eEventflag : omitted by entry port optimize */
/* eiEventflag : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEventflag : omitted by entry port optimize */
/* eiEventflag : omitted by entry port optimize */

/* 変数(構造体、配列)初期値 #_AVI_# */
const pthread_once_t	tEventflag_once_VAR_INIT = { PTHREAD_MUTEX_INITIALIZER, 0, };

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tEventflag_INIB tEventflag_INIB_tab[] = {
    /* cell: tEventflag_CB_tab[0]:  QueueChannel_Eventflag id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        0,                                       /* id */
    },
};

/* セル CB #_CB_# */
struct tag_tEventflag_CB tEventflag_CB_tab[] = {
    /* cell: tEventflag_CB_tab[0]:  QueueChannel_Eventflag id=1 */
    {
        &tEventflag_INIB_tab[0],                 /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        PTHREAD_MUTEX_INITIALIZER,               /* mutex */
        PTHREAD_COND_INITIALIZER,                /* cond */
        {                                        /* once */
            PTHREAD_MUTEX_INITIALIZER,               /* mutex */
            0,                                       /* state */
        },
        0,                                       /* pattern */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eEventflag : omitted by entry port optimize */
/* eiEventflag : omitted by entry port optimize */
