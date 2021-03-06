/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTestClient_tecsgen.h"
#include "tTestClient_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSendRecv_VDES RelayCell_eA_des0;
extern struct tag_sSendRecv_VDES RelayCell_eA_des1;

/* 呼び口配列 #_CPA_# */
struct tag_sSendRecv_VDES * const Client_cA[] = {
    &RelayCell_eA_des0,
    &RelayCell_eA_des1,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル CB #_CB_# */
struct tag_tTestClient_CB tTestClient_SINGLE_CELL_CB = 
{
    /* call port (CB_ALL) #_CP_# */ 
    Client_cA,                               /* #_CCP3B_# */
};

/* 受け口ディスクリプタ #_EPD_# */
