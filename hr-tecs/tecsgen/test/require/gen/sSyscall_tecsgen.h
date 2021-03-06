/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSyscall_TECSGEN_H
#define sSyscall_TECSGEN_H

/*
 * signature   :  sSyscall
 * global name :  sSyscall
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSyscall_VDES {
    struct tag_sSyscall_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSyscall_VMT {
    ER             (*func__T)( const struct tag_sSyscall_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSyscall_Defined
#define  Descriptor_of_sSyscall_Defined
typedef struct { struct tag_sSyscall_VDES *vdes; } Descriptor( sSyscall );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSYSCALL_FUNC                   (1)

#endif /* sSyscall_TECSGEN_H */
