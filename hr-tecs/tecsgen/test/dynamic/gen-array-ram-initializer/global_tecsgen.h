/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef GLOBAL_TECSGEN_H
#define GLOBAL_TECSGEN_H


/* import_C により import されるヘッダ #_IMP_# */
#include "cygwin_tecs.h"
#include "../../../test/cygwin/cygwin_tecs.h"
/**/

#ifndef TOPPERS_MACRO_ONLY

 extern void tTask_CB_initialize();
 extern void tSerialTaskBody_CB_initialize();
 extern void tMainArray_CB_initialize();
 extern void tTalkerSelector_CB_initialize();
 extern void tTalker_CB_initialize();

#define INITIALIZE_TECS() \
 	tTask_CB_initialize();\
 	tSerialTaskBody_CB_initialize();\
 	tMainArray_CB_initialize();\
 	tTalkerSelector_CB_initialize();\
 	tTalker_CB_initialize();\
/* INITIALIZE_TECS terminator */

#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */

#define TASK_STATE_0   ((const int)0)
#define TASK_STATE_1   ((const int)1)

#endif /* GLOBAL_TECSGEN_H */
