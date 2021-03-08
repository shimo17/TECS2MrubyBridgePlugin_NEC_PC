/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sPrint_TECSGEN_H
#define sPrint_TECSGEN_H

/*
 * signature   :  sPrint
 * global name :  sPrint
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sPrint_VDES {
    struct tag_sPrint_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sPrint_VMT {
    void           (*print__T)( const struct tag_sPrint_VDES *edp, const char_t* str );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sPrint_Defined
#define  Descriptor_of_sPrint_Defined
typedef struct { struct tag_sPrint_VDES *vdes; } Descriptor( sPrint );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SPRINT_PRINT                    (1)

#endif /* sPrint_TECSGEN_H */
