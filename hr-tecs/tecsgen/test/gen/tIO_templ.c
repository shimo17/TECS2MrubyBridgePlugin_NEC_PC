/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tIO_template.c => src/tIO.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * ioreg            volatile int8_t*  ATTR_ioreg      
 * aI_val4          int32_t          ATTR_aI_val4    
 * boo              bool_t           ATTR_boo        
 * aI_val5          bool_t           ATTR_aI_val5    
 * aI_val6          uint32_t         ATTR_aI_val6    
 * aI_val7          uint32_t         ATTR_aI_val7    
 * aI_val8          uint32_t         ATTR_aI_val8    
 * aU_val9          uchar_t          ATTR_aU_val9    
 * aC_val10         char_t           ATTR_aC_val10   
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tIO_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
