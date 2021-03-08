/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSendRecvServ_tecsgen.h"
#include "tSendRecvServ_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */


/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tSendRecvServ_INIB tSendRecvServ_INIB_tab[] = {
    /* cell: tSendRecvServ_CB_tab[0]:  SendRecvServ id=1 */
    {
        /* entry port #_EP_# */ 
    },
    /* cell: tSendRecvServ_CB_tab[1]:  SendRecvServ2 id=2 */
    {
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eEnt : omitted by entry port optimize */
/* eEnt : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tSendRecvServ_CB_initialize()
{
    tSendRecvServ_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
