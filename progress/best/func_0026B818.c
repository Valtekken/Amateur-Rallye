extern void func_0026B6B8(void *a, void *b, void *c);
extern void func_003FA310(char *dst, char *fmt, s32 arg);
extern void *D_002AD408(s32 size);
extern void func_001D4040(void *dst, char *src);
extern s32 func_001E4280(void);
extern void func_001E3F80(s32 a, void *b, void *c);

extern u8 D_0047A0C0[];
extern f32 D_00426030[];
extern char D_00479FD8[];
extern char D_00479FB8[];
extern u8 D_0047A088[];

typedef struct Obj {
    u8 pad0[0x18];
    void *unk18;
    s32 unk1C, unk20, unk24, unk28, unk2C, unk30, unk34, unk38, unk3C, unk40, unk44, unk48;
    s32 unk4C;
    f32 unk50[4];
    f32 unk60[4];
    f32 unk70[4];
    f32 unk80[4];
    s32 unk90, unk94, unk98, unk9C, unkA0, unkA4, unkA8;
    u8 unkAC[0x34];
} Obj;

void *func_0026B818(Obj *arg0, s32 arg1, void *arg2) {
    char sp[0x100];
    s32 sp100;
    void *obj;
    s32 tmp;
    f32 *src = D_00426030;
    f32 *d0 = arg0->unk50;
    f32 *s1 = src + 4;
    f32 *d1 = arg0->unk60;
    f32 *s2 = src + 8;
    f32 *d2 = arg0->unk70;
    f32 *s3 = src + 12;
    f32 *d3 = arg0->unk80;

    func_0026B6B8(arg0, (void *)arg1, 0);
    arg0->unk4C = 1;
    arg0->unk18 = D_0047A0C0;
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    arg0->unk24 = 0;
    arg0->unk28 = 0;
    arg0->unk2C = 0;
    arg0->unk30 = 0;
    arg0->unk34 = 0;
    arg0->unk38 = 0;
    arg0->unk3C = 0;
    arg0->unk40 = 0;
    arg0->unk44 = 0;
    arg0->unk48 = 0;

    d0[0]=src[0]; d0[1]=src[1]; d0[2]=src[2]; d0[3]=src[3];
    d1[0]=s1[0]; d1[1]=s1[1]; d1[2]=s1[2]; d1[3]=s1[3];
    d2[0]=s2[0]; d2[1]=s2[1]; d2[2]=s2[2]; d2[3]=s2[3];
    d3[0]=s3[0]; d3[1]=s3[1]; d3[2]=s3[2]; d3[3]=s3[3];

    arg0->unk90=0; arg0->unk94=0; arg0->unk98=0; arg0->unk9C=0; arg0->unkA0=0; arg0->unkA4=0; arg0->unkA8=0;

    __builtin_memcpy((u8*)arg0 + 0xAC, arg2, 0x30);
    *(s32*)((u8*)arg0 + 0xDC) = *(s32*)((u8*)arg2 + 0x30);

    func_003FA310(sp, D_00479FD8, arg1);
    obj = D_002AD408(0xC);
    func_001D4040(&sp100, D_00479FB8);
    ((s32*)obj)[2] = (s32)arg0;
    ((s32*)obj)[0] = sp100;
    ((s32*)obj)[1] = (s32)D_0047A088;
    tmp = func_001E4280();
    func_001D4040(&sp100, sp);
    func_001E3F80(tmp, &sp100, obj);
    return arg0;
}
