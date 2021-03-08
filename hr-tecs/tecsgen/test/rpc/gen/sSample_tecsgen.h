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
    ER             (*transferStruct__T)( const struct tag_sSample_VDES *edp, const struct stA* a, int32_t len );
    ER             (*transferStruct2__T)( const struct tag_sSample_VDES *edp, struct stA a );
    ER             (*transferInArray__T)( const struct tag_sSample_VDES *edp, int8_t array0[8] );
    ER             (*transferInArray2__T)( const struct tag_sSample_VDES *edp, const int8_t(* array1)[8] );
    ER             (*transferOutArray__T)( const struct tag_sSample_VDES *edp, int8_t(* array2)[8] );
    unsigned char  (*UnsignedTypes__T)( const struct tag_sSample_VDES *edp, uint8_t in, unsigned short s, uint_t ui, ulong_t ul );
    char           (*SignedTypes__T)( const struct tag_sSample_VDES *edp, int8_t in, short s, int_t ui, long_t ul );
    ER             (*onewayFunc__T)( const struct tag_sSample_VDES *edp, char_t* buf, int32_t len );
    void           (*exit__T)( const struct tag_sSample_VDES *edp );
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
#define	FUNCID_SSAMPLE_TRANSFERSTRUCT          (5)
#define	FUNCID_SSAMPLE_TRANSFERSTRUCT2         (6)
#define	FUNCID_SSAMPLE_TRANSFERINARRAY         (7)
#define	FUNCID_SSAMPLE_TRANSFERINARRAY2        (8)
#define	FUNCID_SSAMPLE_TRANSFEROUTARRAY        (9)
#define	FUNCID_SSAMPLE_UNSIGNEDTYPES           (10)
#define	FUNCID_SSAMPLE_SIGNEDTYPES             (11)
#define	FUNCID_SSAMPLE_ONEWAYFUNC              (12)
#define	FUNCID_SSAMPLE_EXIT                    (13)

#endif /* sSample_TECSGEN_H */
