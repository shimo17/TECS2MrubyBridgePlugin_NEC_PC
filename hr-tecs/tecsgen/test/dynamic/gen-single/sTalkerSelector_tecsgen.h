/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sTalkerSelector_TECSGEN_H
#define sTalkerSelector_TECSGEN_H

/*
 * signature   :  sTalkerSelector
 * global name :  sTalkerSelector
 * context     :  task
 */

/* シグニチャディスクリプタ参照ヘッダ #_SDI_# */
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_sHello_Defined
#define  Descriptor_of_sHello_Defined
typedef struct { struct tag_sHello_VDES *vdes; } Descriptor( sHello );
#endif

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sTalkerSelector_VDES {
    struct tag_sTalkerSelector_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sTalkerSelector_VMT {
    void           (*getTalker__T)( const struct tag_sTalkerSelector_VDES *edp, Descriptor( sHello )* talker, int_t i );
    void           (*getNTalker__T)( const struct tag_sTalkerSelector_VDES *edp, int_t* n );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sTalkerSelector_Defined
#define  Descriptor_of_sTalkerSelector_Defined
typedef struct { struct tag_sTalkerSelector_VDES *vdes; } Descriptor( sTalkerSelector );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STALKERSELECTOR_GETTALKER       (1)
#define	FUNCID_STALKERSELECTOR_GETNTALKER      (2)

#endif /* sTalkerSelector_TECSGEN_H */
