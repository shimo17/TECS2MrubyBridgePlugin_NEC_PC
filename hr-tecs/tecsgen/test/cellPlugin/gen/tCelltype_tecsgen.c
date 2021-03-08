/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCelltype_tecsgen.h"
#include "tCelltype_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig_VDES CellA0_000_eEnt_des;
extern struct tag_sSig_VDES CellA0_001_eEnt_des;
extern struct tag_sSig_VDES CellA0_002_eEnt_des;
extern struct tag_sSig_VDES CellA0_003_eEnt_des;
extern struct tag_sSig_VDES CellX_eEnt_des0;
extern struct tag_sSig_VDES CellX_eEnt_des1;
extern struct tag_sSig_VDES CellX_eEnt_des2;
extern struct tag_sSig_VDES CellX_eEnt_des3;

/* 呼び口配列 #_CPA_# */
struct tag_sSig_VDES * const Cell_cCall[] = {
    &CellA0_000_eEnt_des,
    &CellA0_001_eEnt_des,
    &CellA0_002_eEnt_des,
    &CellA0_003_eEnt_des,
};
struct tag_sSig_VDES * const Cell_cCallX[] = {
    &CellX_eEnt_des0,
    &CellX_eEnt_des1,
    &CellX_eEnt_des2,
    &CellX_eEnt_des3,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCelltype_INIB tCelltype_SINGLE_CELL_INIB = 
{
    /* call port (INIB) #_CP_# */ 
    Cell_cCall,                              /* #_CCP3B_# */
    4,                                       /* length of cCall (n_cCall) #_CCP4_# */
    Cell_cCallX,                             /* #_CCP3B_# */
    4,                                       /* length of cCallX (n_cCallX) #_CCP4_# */
};

/* 受け口ディスクリプタ #_EPD_# */
