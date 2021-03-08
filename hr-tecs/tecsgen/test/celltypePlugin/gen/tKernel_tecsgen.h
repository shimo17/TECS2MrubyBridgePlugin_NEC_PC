/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tKernel_TECSGEN_H
#define tKernel_TECSGEN_H

/*
 * celltype          :  tKernel
 * global name       :  tKernel
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sKernel_tecsgen.h"
#include "sPreKernel_tecsgen.h"
#include "sHookBody_tecsgen.h"
#include "sStatusTypeHookBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tKernel_CB {
    int  dummy;
} tKernel_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */


/* セルタイプのIDX型 #_CTIX_# */
typedef int   tKernel_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sKernel */
Inline uint8_t      tKernel_eKernel_schedule();
Inline void         tKernel_eKernel_enableAllInterrupts();
Inline void         tKernel_eKernel_disableAllInterrupts();
Inline void         tKernel_eKernel_resumeAllInterrupts();
Inline void         tKernel_eKernel_suspendAllInterrupts();
Inline void         tKernel_eKernel_resumeOsInterrupts();
Inline void         tKernel_eKernel_suspendOsinterrupts();
Inline uint8_t      tKernel_eKernel_getActiveApplicationMode();
/* sPreKernel */
Inline void         tKernel_ePreKernel_startOs( uint8_t mode);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tKernel_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernelBody_tecsgen.h"
#ifdef  tKernel_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tKernel_CB_TYPE_ONLY */
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tKernel_is_cPreTaskHookBody_joined() \
	  (0)    /* not joined */
#define tKernel_is_cPostTaskHookBody_joined() \
	  (0)    /* not joined */
#define tKernel_is_cStartupHookBody_joined() \
	  (1)
#define tKernel_is_cErrorHookBody_joined() \
	  (0)    /* not joined */
#define tKernel_is_cShutdownHookBody_joined() \
	  (0)    /* not joined */

/* セルCBを得るマクロ #_GCB_# */
#define tKernel_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tKernel_cPreTaskHookBody_main( ) \
	  ((void (*)())0)()
	  /* optional no entry port joined */
#define tKernel_cPostTaskHookBody_main( ) \
	  ((void (*)())0)()
	  /* optional no entry port joined */
#define tKernel_cStartupHookBody_main( ) \
	  tKernelBody_eBody_main( \
	   &tKernelBody_CB_tab[0] )
#define tKernel_cErrorHookBody_main( ercd ) \
	  ((void (*)())0)()
	  /* optional no entry port joined */
#define tKernel_cShutdownHookBody_main( ercd ) \
	  ((void (*)())0)()
	  /* optional no entry port joined */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tKernel_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tKernel_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tKernel_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cPreTaskHookBody_main( ) \
          tKernel_cPreTaskHookBody_main( )
#define cPostTaskHookBody_main( ) \
          tKernel_cPostTaskHookBody_main( )
#define cStartupHookBody_main( ) \
          tKernel_cStartupHookBody_main( )
#define cErrorHookBody_main( ercd ) \
          tKernel_cErrorHookBody_main( ercd )
#define cShutdownHookBody_main( ercd ) \
          tKernel_cShutdownHookBody_main( ercd )



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cPreTaskHookBody_joined()\
		tKernel_is_cPreTaskHookBody_joined()
#define is_cPostTaskHookBody_joined()\
		tKernel_is_cPostTaskHookBody_joined()
#define is_cStartupHookBody_joined()\
		tKernel_is_cStartupHookBody_joined()
#define is_cErrorHookBody_joined()\
		tKernel_is_cErrorHookBody_joined()
#define is_cShutdownHookBody_joined()\
		tKernel_is_cShutdownHookBody_joined()

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eKernel_schedule tKernel_eKernel_schedule
#define eKernel_enableAllInterrupts tKernel_eKernel_enableAllInterrupts
#define eKernel_disableAllInterrupts tKernel_eKernel_disableAllInterrupts
#define eKernel_resumeAllInterrupts tKernel_eKernel_resumeAllInterrupts
#define eKernel_suspendAllInterrupts tKernel_eKernel_suspendAllInterrupts
#define eKernel_resumeOsInterrupts tKernel_eKernel_resumeOsInterrupts
#define eKernel_suspendOsinterrupts tKernel_eKernel_suspendOsinterrupts
#define eKernel_getActiveApplicationMode tKernel_eKernel_getActiveApplicationMode
#define ePreKernel_startOs tKernel_ePreKernel_startOs

/* CB 初期化マクロ #_CIM_# */
#ifndef TOPPERS_MACRO_ONLY

/* inline ヘッダの include #_INL_# */
#include "tKernel_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline のための undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tKernel_IDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef ATTR_name
#undef tKernel_ATTR_name
#undef tKernel_GET_name
#undef ATTR_status
#undef tKernel_ATTR_status
#undef tKernel_GET_status
#undef ATTR_useStartupHook
#undef tKernel_ATTR_useStartupHook
#undef tKernel_GET_useStartupHook
#undef ATTR_useErrorHook
#undef tKernel_ATTR_useErrorHook
#undef tKernel_GET_useErrorHook
#undef ATTR_useShutdownHook
#undef tKernel_ATTR_useShutdownHook
#undef tKernel_GET_useShutdownHook
#undef ATTR_usePreTaskHook
#undef tKernel_ATTR_usePreTaskHook
#undef tKernel_GET_usePreTaskHook
#undef ATTR_usePostTaskHook
#undef tKernel_ATTR_usePostTaskHook
#undef tKernel_GET_usePostTaskHook
#undef ATTR_useGetServiceId
#undef tKernel_ATTR_useGetServiceId
#undef tKernel_GET_useGetServiceId
#undef ATTR_useParameterAccess
#undef tKernel_ATTR_useParameterAccess
#undef tKernel_GET_useParameterAccess
#undef ATTR_useResourceScheduler
#undef tKernel_ATTR_useResourceScheduler
#undef tKernel_GET_useResourceScheduler
#undef is_cPreTaskHookBody_joined
#undef tKernel_cPreTaskHookBody_main
#undef cPreTaskHookBody_main
#undef is_cPostTaskHookBody_joined
#undef tKernel_cPostTaskHookBody_main
#undef cPostTaskHookBody_main
#undef is_cStartupHookBody_joined
#undef tKernel_cStartupHookBody_main
#undef cStartupHookBody_main
#undef is_cErrorHookBody_joined
#undef tKernel_cErrorHookBody_main
#undef cErrorHookBody_main
#undef is_cShutdownHookBody_joined
#undef tKernel_cShutdownHookBody_main
#undef cShutdownHookBody_main
#undef eKernel_schedule
#undef eKernel_enableAllInterrupts
#undef eKernel_disableAllInterrupts
#undef eKernel_resumeAllInterrupts
#undef eKernel_suspendAllInterrupts
#undef eKernel_resumeOsInterrupts
#undef eKernel_suspendOsinterrupts
#undef eKernel_getActiveApplicationMode
#undef ePreKernel_startOs
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tKernel_TECSGENH */
