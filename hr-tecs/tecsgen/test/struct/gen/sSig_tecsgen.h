/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSig_TECSGEN_H
#define sSig_TECSGEN_H

/*
 * signature   :  sSig
 * global name :  sSig
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSig_VDES {
    struct tag_sSig_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSig_VMT {
    struct tagStruct (*func1__T)( const struct tag_sSig_VDES *edp, struct tagStruct in, const struct tagStruct* in_p, struct tagStruct* inout_p, struct tagStruct* out_p );
    struct tagStruct (*func2__T)( const struct tag_sSig_VDES *edp, struct tagStruct in, const struct tagStruct* in_p, struct tagStruct* inout_p, struct tagStruct* out_p, int32_t len );
    struct tagStruct (*func3__T)( const struct tag_sSig_VDES *edp, struct tagStruct2 in, const struct tagStruct2* in_p, struct tagStruct2* inout_p, struct tagStruct2* out_p );
    struct tagStruct (*func4__T)( const struct tag_sSig_VDES *edp, struct tagStruct2 in, const struct tagStruct2* in_p, struct tagStruct2* inout_p, struct tagStruct2* out_p, int32_t len );
    struct tagStruct (*func5__T)( const struct tag_sSig_VDES *edp, struct tagStruct* inp, struct tagStruct** outp );
    struct tagStruct (*func6__T)( const struct tag_sSig_VDES *edp, struct tagStruct2* sendp, struct tagStruct2** receivep, char_t** strs, char_t*** strr, int32_t* len );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSig_Defined
#define  Descriptor_of_sSig_Defined
typedef struct { struct tag_sSig_VDES *vdes; } Descriptor( sSig );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIG_FUNC1                      (1)
#define	FUNCID_SSIG_FUNC2                      (2)
#define	FUNCID_SSIG_FUNC3                      (3)
#define	FUNCID_SSIG_FUNC4                      (4)
#define	FUNCID_SSIG_FUNC5                      (5)
#define	FUNCID_SSIG_FUNC6                      (6)

#endif /* sSig_TECSGEN_H */
