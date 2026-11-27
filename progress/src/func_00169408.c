extern void func_001D4040(void *, const char *);
extern const char D_0044F6C0[];
extern void *D_004740D0[];

typedef struct {
    int unk00;          /* 0x00 */
    void **vptr;        /* 0x04 */
    float unk08;        /* 0x08 */
    float unk0C;        /* 0x0C */
    float unk10;        /* 0x10 */
    float unk14;        /* 0x14 */
    float unk18;        /* 0x18 */
    int unk1C;          /* 0x1C */
    float unk20;        /* 0x20 */
    float unk24;        /* 0x24 */
    float unk28;        /* 0x28 */
    float unk2C;        /* 0x2C */
    int unk30;          /* 0x30 */
    float unk34;        /* 0x34 */
    float unk38;        /* 0x38 */
    int unk3C;          /* 0x3C */
    float unk40;        /* 0x40 */
    int unk44;          /* 0x44 */
    float unk48;        /* 0x48 */
    float unk4C;        /* 0x4C */
    float unk50;        /* 0x50 */
    float unk54;        /* 0x54 */
    int unk58;          /* 0x58 */
    float unk5C;        /* 0x5C */
    float unk60;        /* 0x60 */
    float unk64;        /* 0x64 */
} Struct_00169408;

Struct_00169408 *func_00169408(Struct_00169408 *arg0) {
    int sp[4];

    func_001D4040(sp, D_0044F6C0);
    arg0->unk00 = sp[0];
    arg0->vptr = D_004740D0;
    arg0->unk08 = 5.4f;
    arg0->unk0C = 50.0f;
    arg0->unk10 = 20.0f;
    arg0->unk14 = 1.1f;
    arg0->unk18 = 2.4f;
    arg0->unk1C = 0;
    arg0->unk20 = 5.0f;
    arg0->unk24 = 45.0f;
    arg0->unk28 = 60.0f;
    arg0->unk2C = 70.0f;
    arg0->unk30 = 0;
    arg0->unk34 = 0.05f;
    arg0->unk38 = 0.4f;
    arg0->unk3C = 0;
    arg0->unk40 = 3.0f;
    arg0->unk44 = 4;
    arg0->unk48 = -0.05f;
    arg0->unk4C = -0.025f;
    arg0->unk50 = 0.2f;
    arg0->unk54 = -0.1f;
    arg0->unk5C = 1.0f;
    arg0->unk60 = 1.0f;
    arg0->unk64 = 1.0f;
    return arg0;
}
