/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sLinkedResource_TECSGEN_H
#define sLinkedResource_TECSGEN_H

/*
 * signature   :  sLinkedResource
 * global name :  sLinkedResource
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sLinkedResource_VDES {
    struct tag_sLinkedResource_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sLinkedResource_VMT {
    void           (*main__T)( const struct tag_sLinkedResource_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sLinkedResource_Defined
#define  Descriptor_of_sLinkedResource_Defined
typedef struct { struct tag_sLinkedResource_VDES *vdes; } Descriptor( sLinkedResource );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SLINKEDRESOURCE_MAIN            (1)

#endif /* sLinkedResource_TECSGEN_H */
