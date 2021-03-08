/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSignature_TECSGEN_H
#define sSignature_TECSGEN_H

/*
 * signature   :  sSignature
 * global name :  sSignature
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSignature_VDES {
    struct tag_sSignature_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSignature_VMT {
    ER             (*func1__T)( const struct tag_sSignature_VDES *edp, int32_t inval );
    ER             (*func2__T)( const struct tag_sSignature_VDES *edp, int32_t* outval );
    ER             (*func3__T)( const struct tag_sSignature_VDES *edp, struct tag stval );
    ER             (*func4__T)( const struct tag_sSignature_VDES *edp, stTag stval, INT inval );
    ER             (*func5__T)( const struct tag_sSignature_VDES *edp, stTag* stval, INT inval );
    ER             (*func6__T)( const struct tag_sSignature_VDES *edp, int8_t* buf, int32_t sz );
    ER             (*func7__T)( const struct tag_sSignature_VDES *edp, int8_t** buf, int32_t* sz );
    ER             (*func10__T)( const struct tag_sSignature_VDES *edp, const stTag* stval, int32_t a );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSignature_Defined
#define  Descriptor_of_sSignature_Defined
typedef struct { struct tag_sSignature_VDES *vdes; } Descriptor( sSignature );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIGNATURE_FUNC1                (1)
#define	FUNCID_SSIGNATURE_FUNC2                (2)
#define	FUNCID_SSIGNATURE_FUNC3                (3)
#define	FUNCID_SSIGNATURE_FUNC4                (4)
#define	FUNCID_SSIGNATURE_FUNC5                (5)
#define	FUNCID_SSIGNATURE_FUNC6                (6)
#define	FUNCID_SSIGNATURE_FUNC7                (7)
#define	FUNCID_SSIGNATURE_FUNC10               (8)

#endif /* sSignature_TECSGEN_H */
