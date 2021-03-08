/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSysLog_TECSGEN_H
#define tSysLog_TECSGEN_H

/*
 * celltype          :  tSysLog
 * global name       :  tSysLog
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSysLog_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSysLog_INIB {
    /* call port #_NEP_# */ 
}  tSysLog_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSysLog_CB_tab           tSysLog_INIB_tab
#define tSysLog_SINGLE_CELL_CB   tSysLog_SINGLE_CELL_INIB
#define tSysLog_CB               tSysLog_INIB
#define tag_tSysLog_CB           tag_tSysLog_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tSysLog_INIB  tSysLog_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tSysLog_INIB *tSysLog_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSysLog */
ER           tSysLog_eSysLog_write( uint_t prio, const SYSLOG* p_syslog);
ER_UINT      tSysLog_eSysLog_read( SYSLOG* p_syslog);
ER           tSysLog_eSysLog_mask( uint_t logmask, uint_t lowmask);
ER           tSysLog_eSysLog_refer( T_SYSLOG_RLOG* pk_rlog);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tSysLog_GET_CELLCB(idx) ((void *)0)
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSysLog_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSysLog_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSysLog_IDX




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSysLog_write    tSysLog_eSysLog_write
#define eSysLog_read     tSysLog_eSysLog_read
#define eSysLog_mask     tSysLog_eSysLog_mask
#define eSysLog_refer    tSysLog_eSysLog_refer

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSysLog_TECSGENH */
