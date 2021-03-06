/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef GLOBAL_TECSGEN_H
#define GLOBAL_TECSGEN_H


/* import_C により import されるヘッダ #_IMP_# */
#include "tecs.h"
/**/

#ifndef TOPPERS_MACRO_ONLY

 extern void tCt_CB_initialize();
 extern void tCt2_CB_initialize();
 extern void tOmit_CB_initialize();
 extern void tIdx_is_id_CB_initialize();
 extern void tSingle_idx_is_id_CB_initialize();
 extern void tVarInitByAttr_CB_initialize();
 extern void tSingle_CB_initialize();
 extern void tSCt_no_CB_no_INIB_CB_initialize();
 extern void tSCt_a_CB_no_INIB_CB_initialize();
 extern void tSCt_no_CB_a_INIB_CB_initialize();
 extern void tSCt_a_CB_a_INIB_CB_initialize();
 extern void tCt_no_CB_no_INIB_CB_initialize();
 extern void tCt_a_CB_no_INIB_CB_initialize();
 extern void tCt_no_CB_a_INIB_CB_initialize();
 extern void tCt_a_CB_a_INIB_CB_initialize();
 extern void tCt_no_CB_no_INIB_init_CB_initialize();
 extern void tMain_CB_initialize();

#define INITIALIZE_TECS() \
 	tCt_CB_initialize();\
 	tCt2_CB_initialize();\
 	tOmit_CB_initialize();\
 	tIdx_is_id_CB_initialize();\
 	tSingle_idx_is_id_CB_initialize();\
 	tVarInitByAttr_CB_initialize();\
 	tSingle_CB_initialize();\
 	tSCt_no_CB_no_INIB_CB_initialize();\
 	tSCt_a_CB_no_INIB_CB_initialize();\
 	tSCt_no_CB_a_INIB_CB_initialize();\
 	tSCt_a_CB_a_INIB_CB_initialize();\
 	tCt_no_CB_no_INIB_CB_initialize();\
 	tCt_a_CB_no_INIB_CB_initialize();\
 	tCt_no_CB_a_INIB_CB_initialize();\
 	tCt_a_CB_a_INIB_CB_initialize();\
 	tCt_no_CB_no_INIB_init_CB_initialize();\
 	tMain_CB_initialize();\
/* INITIALIZE_TECS terminator */

#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */

#define const_int      ((const int32_t)32)

#endif /* GLOBAL_TECSGEN_H */
