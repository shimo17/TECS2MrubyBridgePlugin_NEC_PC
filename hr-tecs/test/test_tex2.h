/*
 *  TOPPERS Software
 *      Toyohashi Open Platform for Embedded Real-Time Systems
 * 
 *  Copyright (C) 2007 by Embedded and Real-Time Systems Laboratory
 *              Graduate School of Information Science, Nagoya Univ., JAPAN
 * 
 *  上記著作権者は，以下の(1)〜(4)の条件を満たす場合に限り，本ソフトウェ
 *  ア（本ソフトウェアを改変したものを含む．以下同じ）を使用・複製・改
 *  変・再配布（以下，利用と呼ぶ）することを無償で許諾する．
 *  (1) 本ソフトウェアをソースコードの形で利用する場合には，上記の著作
 *      権表示，この利用条件および下記の無保証規定が，そのままの形でソー
 *      スコード中に含まれていること．
 *  (2) 本ソフトウェアを，ライブラリ形式など，他のソフトウェア開発に使
 *      用できる形で再配布する場合には，再配布に伴うドキュメント（利用
 *      者マニュアルなど）に，上記の著作権表示，この利用条件および下記
 *      の無保証規定を掲載すること．
 *  (3) 本ソフトウェアを，機器に組み込むなど，他のソフトウェア開発に使
 *      用できない形で再配布する場合には，次のいずれかの条件を満たすこ
 *      と．
 *    (a) 再配布に伴うドキュメント（利用者マニュアルなど）に，上記の著
 *        作権表示，この利用条件および下記の無保証規定を掲載すること．
 *    (b) 再配布の形態を，別に定める方法によって，TOPPERSプロジェクトに
 *        報告すること．
 *  (4) 本ソフトウェアの利用により直接的または間接的に生じるいかなる損
 *      害からも，上記著作権者およびTOPPERSプロジェクトを免責すること．
 *      また，本ソフトウェアのユーザまたはエンドユーザからのいかなる理
 *      由に基づく請求からも，上記著作権者およびTOPPERSプロジェクトを
 *      免責すること．
 * 
 *  本ソフトウェアは，無保証で提供されているものである．上記著作権者お
 *  よびTOPPERSプロジェクトは，本ソフトウェアに関して，特定の使用目的
 *  に対する適合性も含めて，いかなる保証も行わない．また，本ソフトウェ
 *  アの利用により直接的または間接的に生じたいかなる損害に関しても，そ
 *  の責任を負わない．
 * 
 *  @(#) $Id: test_tex2.h 3 2009-01-12 18:26:19Z ertl-hiro $
 */

/* 
 *		タスク例外処理に関するテスト(2)
 */

/*
 *  ターゲット依存の定義
 */
#include "target_test.h"

/*
 *  各タスクの優先度の定義
 */
#define TASK1_PRIORITY	10		/* タスク1の優先度 */
#define TASK2_PRIORITY	10		/* タスク2の優先度 */
#define TASK3_PRIORITY	10		/* タスク3の優先度 */
#define TASK4_PRIORITY	10		/* タスク4の優先度 */

/*
 *  ターゲットに依存する可能性のある定数の定義
 */
#ifndef STACK_SIZE
#define	STACK_SIZE		4096		/* タスクのスタックサイズ */
#endif /* STACK_SIZE */

/*
 *  関数のプロトタイプ宣言
 */
#ifndef TOPPERS_MACRO_ONLY

extern void	tex_task1(TEXPTN texptn, intptr_t exinf);
extern void	task1(intptr_t exinf);

extern void	tex_task2(TEXPTN texptn, intptr_t exinf);
extern void	task2(intptr_t exinf);

extern void	task3(intptr_t exinf);

extern void	tex_task4(TEXPTN texptn, intptr_t exinf);
extern void	task4(intptr_t exinf);

extern void	alarm1_handler(intptr_t exinf);
extern void	alarm2_handler(intptr_t exinf);
extern void	alarm3_handler(intptr_t exinf);
extern void	cpuexc_handler(void *p_excinf);

#endif /* TOPPERS_MACRO_ONLY */