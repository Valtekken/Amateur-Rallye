extern void func_001381E0(void *);
extern void func_001382D8(void *);
extern void func_00138A08(void *);
extern void func_001D4040(s32 *, const char *);
extern void func_001E3D10(s32, s32 *, s32);
extern void func_001E3EC0(s32, s32 *, s32);
extern s32 func_001E4280(void);
extern char D_0044ABA0[];
extern char D_0044ABE0[];

typedef struct {
    s32 pad[3];
    s32 unk0C;
    s32 unk10;
    s32 fields[8];
} Context;

void func_00138B00(void *arg0) {
    Context *ctx = (Context *)arg0;
    s32 tmp[4];
    s32 id;

    switch (ctx->unk10) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 7:
        func_001381E0(arg0);
        break;
    case 5:
        func_001382D8(arg0);
        break;
    case 6:
        func_00138A08(arg0);
        break;
    }

    id = func_001E4280();
    func_001D4040(tmp, D_0044ABA0);
    func_001E3EC0(id, tmp, ctx->fields[ctx->unk10]);

    id = func_001E4280();
    func_001D4040(tmp, D_0044ABE0);
    func_001E3D10(id, tmp, 1);
}
