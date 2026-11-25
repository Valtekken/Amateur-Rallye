extern void func_00122FA0(void *);
extern void **func_0017E620(void);
extern void func_001D4040(void *, const char *);
extern void func_001E3EC0(s32, void *, s32);
extern void func_001E3FB0(s32, void *, void *);
extern const char D_00447DF8[], D_00447E70[], D_00447E90[], D_00447EB8[], D_00447EE0[], D_00447F00[];

typedef struct { char pad[0x28]; s16 off; s16 pad2; char *(*fn)(void *, s32, s32, void *); } Obj;

void func_00122DD8(char *p) {
    char key[16], key2[16];
    s32 cfg, val, res, a, b;
    void **pp;
    Obj *o;
    char *text;
    cfg = func_001E4280();
    func_001D4040(key, D_00447DF8);
    func_001E3EC0(cfg, key, *(s32 *)(p + 0x10) + 1);
    val = *(s32 *)(p + 0x10);
    res = val + 2;
    if (val == 0) res = 0x1C;
    else if (val == 3) res = 0x1B;
    else if ((val ^ 4) == 0) res = 0x1D;
    cfg = func_001E4280();
    func_001D4040(key, D_00447E70);
    pp = func_0017E620();
    o = (Obj *)*pp;
    text = o->fn((char *)o + o->off, 9, res, o);
    func_001D4040(key2, text);
    func_001E3FB0(cfg, key, key2);
    func_00122FA0(p);
    cfg = func_001E4280();
    func_001D4040(key, D_00447E90);
    func_001E3EC0(cfg, key, *(s32 *)(p + 0x14) > 0);
    cfg = func_001E4280();
    func_001D4040(key, D_00447EB8);
    a = *(s32 *)(p + 0x14);
    b = 0;
    if (a < 2) b = a < *(s32 *)(p + 0x38) - 1;
    func_001E3EC0(cfg, key, b);
    cfg = func_001E4280();
    func_001D4040(key, D_00447EE0);
    func_001E3EC0(cfg, key, *(s32 *)(p + 0x10) > 0);
    cfg = func_001E4280();
    func_001D4040(key, D_00447F00);
    func_001E3EC0(cfg, key, *(s32 *)(p + 0x10) < 4);
}
