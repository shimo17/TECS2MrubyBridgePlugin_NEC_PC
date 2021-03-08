/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sKernel_TECSGEN_H
#define sKernel_TECSGEN_H

/*
 * signature   :  sKernel
 * global name :  sKernel
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sKernel_VDES {
    struct tag_sKernel_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sKernel_VMT {
    uint8_t        (*schedule__T)( const struct tag_sKernel_VDES *edp );
    void           (*enableAllInterrupts__T)( const struct tag_sKernel_VDES *edp );
    void           (*disableAllInterrupts__T)( const struct tag_sKernel_VDES *edp );
    void           (*resumeAllInterrupts__T)( const struct tag_sKernel_VDES *edp );
    void           (*suspendAllInterrupts__T)( const struct tag_sKernel_VDES *edp );
    void           (*resumeOsInterrupts__T)( const struct tag_sKernel_VDES *edp );
    void           (*suspendOsinterrupts__T)( const struct tag_sKernel_VDES *edp );
    uint8_t        (*getActiveApplicationMode__T)( const struct tag_sKernel_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sKernel_Defined
#define  Descriptor_of_sKernel_Defined
typedef struct { struct tag_sKernel_VDES *vdes; } Descriptor( sKernel );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SKERNEL_SCHEDULE                (1)
#define	FUNCID_SKERNEL_ENABLEALLINTERRUPTS     (2)
#define	FUNCID_SKERNEL_DISABLEALLINTERRUPTS    (3)
#define	FUNCID_SKERNEL_RESUMEALLINTERRUPTS     (4)
#define	FUNCID_SKERNEL_SUSPENDALLINTERRUPTS    (5)
#define	FUNCID_SKERNEL_RESUMEOSINTERRUPTS      (6)
#define	FUNCID_SKERNEL_SUSPENDOSINTERRUPTS     (7)
#define	FUNCID_SKERNEL_GETACTIVEAPPLICATIONMODE (8)

#endif /* sKernel_TECSGEN_H */
