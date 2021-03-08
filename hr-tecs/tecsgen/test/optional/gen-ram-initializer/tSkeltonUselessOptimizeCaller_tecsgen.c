/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSkeltonUselessOptimizeCaller_tecsgen.h"
#include "tSkeltonUselessOptimizeCaller_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig_VDES SkeltonUselessOptimizeCallee_eEnt_des;

extern struct tag_sSig_VDES SkeltonUselessOptimizeCallee2_eEnt_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tSkeltonUselessOptimizeCaller_INIB tSkeltonUselessOptimizeCaller_INIB_tab[] = {
    /* cell: tSkeltonUselessOptimizeCaller_CB_tab[0]:  SkeltonUselessOptimizeCaller id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tSkeltonUselessOptimizeCallee_CB_tab[0], /* cCall #_CCP2_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tSkeltonUselessOptimizeCaller_CB_tab[1]:  SkeltonUselessOptimizeCaller2 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tSkeltonUselessOptimizeCallee_CB_tab[1], /* cCall #_CCP2_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eEnt : omitted by entry port optimize */
/* eEnt : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tSkeltonUselessOptimizeCaller_CB_initialize()
{
    tSkeltonUselessOptimizeCaller_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
