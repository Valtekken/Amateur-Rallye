extern void func_0013BEB8(void);
extern void func_0013C4C0(void *);
extern void func_0013CAC8(void *);
extern void func_001D4040(s32 *, const char *);
extern void func_001E3D10(s32, s32 *, s32);
extern void func_001E3EC0(s32, s32 *, s32);
extern s32 func_001E4280(void);
extern char D_0044B2D8[];
extern char D_0044B320[];

typedef struct {
    s32 pad[4];
    s32 unk10;
    s32 fields[8];
} Context;

void func_0013D868(void *arg0) {
    Context *ctx = (Context *)arg0;
    s32 tmp[4];
    s32 id;

    if (ctx->unk10 == 0) {
        func_0013BEB8();
    } else if (ctx->unk10 == 1) {
        func_0013C4C0(arg0);
    } else if (ctx->unk10 == 2) {
        func_0013CAC8(arg0);
    }

    id = func_001E4280();
    func_001D4040(tmp, D_0044B2D8);
    func_001E3EC0(id, tmp, ctx->fields[ctx->unk10]);

    id = func_001E4280();
    func_001D4040(tmp, D_0044B320);
    func_001E3D10(id, tmp, 1);
}
