/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef GLOBAL_TECSGEN_H
#define GLOBAL_TECSGEN_H


/* import_C により import されるヘッダ #_IMP_# */
#include "cygwin_tecs.h"
/**/

#ifndef TOPPERS_MACRO_ONLY

struct tTag {
                int            a;
                int            b;
};
struct tTag2 {
                int            a;
                int            b;
};

#define INITIALIZE_TECS() 
#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */


#endif /* GLOBAL_TECSGEN_H */
