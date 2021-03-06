#ifndef tKernel__INLINE_H
#define tKernel__INLINE_H

/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tKernel_inline_template.h => src/tKernel_inline.h
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cPreTaskHookBody signature: sHookBody context:task optional:true
 *   bool_t     is_cPreTaskHookBody_joined()                     check if joined
 *   void           cPreTaskHookBody_main( );
 * call port: cPostTaskHookBody signature: sHookBody context:task optional:true
 *   bool_t     is_cPostTaskHookBody_joined()                     check if joined
 *   void           cPostTaskHookBody_main( );
 * call port: cStartupHookBody signature: sHookBody context:task optional:true
 *   bool_t     is_cStartupHookBody_joined()                     check if joined
 *   void           cStartupHookBody_main( );
 * call port: cErrorHookBody signature: sStatusTypeHookBody context:task optional:true
 *   bool_t     is_cErrorHookBody_joined()                     check if joined
 *   void           cErrorHookBody_main( uint8_t ercd );
 * call port: cShutdownHookBody signature: sStatusTypeHookBody context:task optional:true
 *   bool_t     is_cShutdownHookBody_joined()                     check if joined
 *   void           cShutdownHookBody_main( uint8_t ercd );
 *
 * #[</PREAMBLE>]# */

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eKernel
 * entry port: eKernel
 * signature:  sKernel
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eKernel_schedule
 * name:         eKernel_schedule
 * global_name:  tKernel_eKernel_schedule
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline uint8_t
eKernel_schedule()
{
}

/* #[<ENTRY_FUNC>]# eKernel_enableAllInterrupts
 * name:         eKernel_enableAllInterrupts
 * global_name:  tKernel_eKernel_enableAllInterrupts
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline void
eKernel_enableAllInterrupts()
{
}

/* #[<ENTRY_FUNC>]# eKernel_disableAllInterrupts
 * name:         eKernel_disableAllInterrupts
 * global_name:  tKernel_eKernel_disableAllInterrupts
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline void
eKernel_disableAllInterrupts()
{
}

/* #[<ENTRY_FUNC>]# eKernel_resumeAllInterrupts
 * name:         eKernel_resumeAllInterrupts
 * global_name:  tKernel_eKernel_resumeAllInterrupts
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline void
eKernel_resumeAllInterrupts()
{
}

/* #[<ENTRY_FUNC>]# eKernel_suspendAllInterrupts
 * name:         eKernel_suspendAllInterrupts
 * global_name:  tKernel_eKernel_suspendAllInterrupts
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline void
eKernel_suspendAllInterrupts()
{
}

/* #[<ENTRY_FUNC>]# eKernel_resumeOsInterrupts
 * name:         eKernel_resumeOsInterrupts
 * global_name:  tKernel_eKernel_resumeOsInterrupts
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline void
eKernel_resumeOsInterrupts()
{
}

/* #[<ENTRY_FUNC>]# eKernel_suspendOsinterrupts
 * name:         eKernel_suspendOsinterrupts
 * global_name:  tKernel_eKernel_suspendOsinterrupts
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline void
eKernel_suspendOsinterrupts()
{
}

/* #[<ENTRY_FUNC>]# eKernel_getActiveApplicationMode
 * name:         eKernel_getActiveApplicationMode
 * global_name:  tKernel_eKernel_getActiveApplicationMode
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline uint8_t
eKernel_getActiveApplicationMode()
{
}

/* #[<ENTRY_PORT>]# ePreKernel
 * entry port: ePreKernel
 * signature:  sPreKernel
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# ePreKernel_startOs
 * name:         ePreKernel_startOs
 * global_name:  tKernel_ePreKernel_startOs
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline void
ePreKernel_startOs(uint8_t mode)
{
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/

#endif /* tKernel_INLINEH */
