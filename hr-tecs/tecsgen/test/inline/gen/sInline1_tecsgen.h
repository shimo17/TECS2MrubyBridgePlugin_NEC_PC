/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sInline1_TECSGEN_H
#define sInline1_TECSGEN_H

/*
 * signature   :  sInline1
 * global name :  sInline1
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sInline1_VDES {
    struct tag_sInline1_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sInline1_VMT {
    void           (*inline1__T)( const struct tag_sInline1_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sInline1_Defined
#define  Descriptor_of_sInline1_Defined
typedef struct { struct tag_sInline1_VDES *vdes; } Descriptor( sInline1 );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SINLINE1_INLINE1                (1)

#endif /* sInline1_TECSGEN_H */
