/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSyscall2_TECSGEN_H
#define sSyscall2_TECSGEN_H

/*
 * signature   :  sSyscall2
 * global name :  sSyscall2
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSyscall2_VDES {
    struct tag_sSyscall2_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSyscall2_VMT {
    ER             (*func2__T)( const struct tag_sSyscall2_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSyscall2_Defined
#define  Descriptor_of_sSyscall2_Defined
typedef struct { struct tag_sSyscall2_VDES *vdes; } Descriptor( sSyscall2 );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSYSCALL2_FUNC2                 (1)

#endif /* sSyscall2_TECSGEN_H */
