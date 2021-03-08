/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTestComponent2_tecsgen.h"
#include "tTestComponent2_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eS : omitted by entry port optimize */

/* eA : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eS : omitted by entry port optimize */
/* eA : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eS : omitted by entry port optimize */
/* eA : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sAlloc_VDES alloc_eA_des;
extern struct tag_sAlloc_VDES alloc_eA_des;
extern struct tag_sAlloc_VDES alloc_eA_des;
extern struct tag_sAlloc_VDES alloc_eA_des;

/* 呼び口配列 #_CPA_# */
struct tag_sAlloc_VDES * const Comp2_Cell_eA_snd_buf[] = {
    &alloc_eA_des,
    &alloc_eA_des,
};
struct tag_sAlloc_VDES * const Comp2_Cell_eA_rcv_buf[] = {
    &alloc_eA_des,
    &alloc_eA_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTestComponent2_INIB tTestComponent2_INIB_tab[] = {
    /* cell: tTestComponent2_CB_tab[0]:  Comp2_Cell id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        Comp2_Cell_eA_snd_buf,                   /* #_CCP3B_# */
        2,                                       /* length of eA_snd_buf (n_eA_snd_buf) #_CCP4_# */
        Comp2_Cell_eA_rcv_buf,                   /* #_CCP3B_# */
        2,                                       /* length of eA_rcv_buf (n_eA_rcv_buf) #_CCP4_# */
        /* entry port #_EP_# */ 
        2,                                       /*  #_EEP_# */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eS : omitted by entry port optimize */
/* eA : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tTestComponent2_CB_initialize()
{
    tTestComponent2_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
