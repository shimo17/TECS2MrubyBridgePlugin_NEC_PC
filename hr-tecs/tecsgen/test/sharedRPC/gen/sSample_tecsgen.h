/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSample_TECSGEN_H
#define sSample_TECSGEN_H

/*
 * signature   :  sSample
 * global name :  sSample
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSample_VDES {
    struct tag_sSample_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSample_VMT {
    ER             (*sayHello__T)( const struct tag_sSample_VDES *edp, int32_t times );
    ER             (*howAreYou__T)( const struct tag_sSample_VDES *edp, char_t* buf, int32_t len );
    ER             (*giftToYou__T)( const struct tag_sSample_VDES *edp, char_t* buf, int32_t len );
    ER             (*returnGiftFromYou__T)( const struct tag_sSample_VDES *edp, int16_t** buf, int32_t* len );
    ER             (*oneway__T)( const struct tag_sSample_VDES *edp, const int8_t* buf, int16_t len );
    void           (*shutdown__T)( const struct tag_sSample_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSample_Defined
#define  Descriptor_of_sSample_Defined
typedef struct { struct tag_sSample_VDES *vdes; } Descriptor( sSample );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSAMPLE_SAYHELLO                (1)
#define	FUNCID_SSAMPLE_HOWAREYOU               (2)
#define	FUNCID_SSAMPLE_GIFTTOYOU               (3)
#define	FUNCID_SSAMPLE_RETURNGIFTFROMYOU       (4)
#define	FUNCID_SSAMPLE_ONEWAY                  (5)
#define	FUNCID_SSAMPLE_SHUTDOWN                (6)

#endif /* sSample_TECSGEN_H */
