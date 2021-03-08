/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sFloat_TECSGEN_H
#define sFloat_TECSGEN_H

/*
 * signature   :  sFloat
 * global name :  sFloat
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sFloat_VDES {
    struct tag_sFloat_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sFloat_VMT {
    float32_t      (*func__T)( const struct tag_sFloat_VDES *edp, double64_t a, double64_t* b );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sFloat_Defined
#define  Descriptor_of_sFloat_Defined
typedef struct { struct tag_sFloat_VDES *vdes; } Descriptor( sFloat );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SFLOAT_FUNC                     (1)

#endif /* sFloat_TECSGEN_H */
