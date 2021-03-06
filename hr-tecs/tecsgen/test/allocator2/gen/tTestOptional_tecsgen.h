/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTestOptional_TECSGEN_H
#define tTestOptional_TECSGEN_H

/*
 * celltype          :  tTestOptional
 * global name       :  tTestOptional
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  no
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSendRecv_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPO_# */
typedef struct tag_tTestOptional_CB {
    /* call port #_TCP_# */
}  tTestOptional_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */


/* セルタイプのIDX型 #_CTIX_# */
typedef int   tTestOptional_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTestOptional_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#ifdef  tTestOptional_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTestOptional_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tTestOptional_is_cS_joined() \
	  (0)    /* not joined */
#define tTestOptional_is_cS_snd_buf_joined() \
	  (0)    /* not joined */
#define tTestOptional_is_cS_rcv_buf_joined() \
	  (0)    /* not joined */

/* セルCBを得るマクロ #_GCB_# */
#define tTestOptional_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tTestOptional_cS_snd( buf, sz ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */
#define tTestOptional_cS_rcv( buf, sz ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */
#define tTestOptional_cS_snd_buf_alloc( size, p ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */
#define tTestOptional_cS_snd_buf_dealloc( p ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */
#define tTestOptional_cS_rcv_buf_alloc( size, p ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */
#define tTestOptional_cS_rcv_buf_dealloc( p ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTestOptional_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTestOptional_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTestOptional_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cS_snd( buf, sz ) \
          tTestOptional_cS_snd( buf, sz )
#define cS_rcv( buf, sz ) \
          tTestOptional_cS_rcv( buf, sz )
#define cS_snd_buf_alloc( size, p ) \
          tTestOptional_cS_snd_buf_alloc( size, p )
#define cS_snd_buf_dealloc( p ) \
          tTestOptional_cS_snd_buf_dealloc( p )
#define cS_rcv_buf_alloc( size, p ) \
          tTestOptional_cS_rcv_buf_alloc( size, p )
#define cS_rcv_buf_dealloc( p ) \
          tTestOptional_cS_rcv_buf_dealloc( p )



/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cS_joined()\
		tTestOptional_is_cS_joined()
#define is_cS_snd_buf_joined()\
		tTestOptional_is_cS_snd_buf_joined()
#define is_cS_rcv_buf_joined()\
		tTestOptional_is_cS_rcv_buf_joined()
/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define CS_SND_BUF_DEALLOC(buf) \
	  cS_snd_buf_dealloc( (buf) ); 
#define CS_RCV_BUF_DEALLOC(buf) \
	  cS_rcv_buf_dealloc( (buf) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define CS_SND_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cS_snd_buf_dealloc( (buf) );  \
	  }
#define CS_RCV_BUF_DEALLOC_RESET(buf) \
	  if( (buf) ){ \
	    cS_rcv_buf_dealloc( (buf) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTestOptional_TECSGENH */
