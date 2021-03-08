/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sNonInline_TECSGEN_H
#define sNonInline_TECSGEN_H

/*
 * signature   :  sNonInline
 * global name :  sNonInline
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sNonInline_VDES {
    struct tag_sNonInline_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sNonInline_VMT {
    void           (*nonInline__T)( const struct tag_sNonInline_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sNonInline_Defined
#define  Descriptor_of_sNonInline_Defined
typedef struct { struct tag_sNonInline_VDES *vdes; } Descriptor( sNonInline );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SNONINLINE_NONINLINE            (1)

#endif /* sNonInline_TECSGEN_H */
