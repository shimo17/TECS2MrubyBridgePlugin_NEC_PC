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

typedef int32_t*       INT32P;
struct finfo {
                char**         name;
                size_t         size;
                int64_t        date;
};
struct complex_number {
                double64_t     real;
                double64_t     imaginal;
};

#define INITIALIZE_TECS() 
#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */

#define MAX_SZ         ((const int32_t)32)

#endif /* GLOBAL_TECSGEN_H */
