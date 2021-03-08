/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nMruby_tTECSInitializer_tecsgen.h"
#include "nMruby_tTECSInitializer_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eInitialize : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eInitialize : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eInitialize : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsTest_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtInt32Pointer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtCharPointer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtULongPointer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtagSt_eInitialize_des;

/* 呼び口配列 #_CPA_# */
struct tag_nMruby_sInitializeTECSBridge_VDES * const VM_TECSInitializer_cInitialize[] = {
    &VM_tsTest_Initializer_eInitialize_des,
    &CtInt32Pointer_eInitialize_des,
    &CtCharPointer_eInitialize_des,
    &CtULongPointer_eInitialize_des,
    &CtagSt_eInitialize_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nMruby_tTECSInitializer_INIB nMruby_tTECSInitializer_INIB_tab[] = {
    /* cell: nMruby_tTECSInitializer_CB_tab[0]:  VM_TECSInitializer id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        VM_TECSInitializer_cInitialize,          /* #_CCP3B_# */
        5,                                       /* length of cInitialize (n_cInitialize) #_CCP4_# */
        /* entry port #_EP_# */ 
    },
};

/* セル CB #_CB_# */
struct tag_nMruby_tTECSInitializer_CB nMruby_tTECSInitializer_CB_tab[] = {
    /* cell: nMruby_tTECSInitializer_CB_tab[0]:  VM_TECSInitializer id=1 */
    {
        &nMruby_tTECSInitializer_INIB_tab[0],    /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* TECS */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eInitialize : omitted by entry port optimize */
