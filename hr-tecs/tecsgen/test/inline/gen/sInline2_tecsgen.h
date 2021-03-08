/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sInline2_TECSGEN_H
#define sInline2_TECSGEN_H

/*
 * signature   :  sInline2
 * global name :  sInline2
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sInline2_VDES {
    struct tag_sInline2_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sInline2_VMT {
    void           (*inline2__T)( const struct tag_sInline2_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sInline2_Defined
#define  Descriptor_of_sInline2_Defined
typedef struct { struct tag_sInline2_VDES *vdes; } Descriptor( sInline2 );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SINLINE2_INLINE2                (1)

#endif /* sInline2_TECSGEN_H */
