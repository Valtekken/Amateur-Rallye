extern s32 func_001D6278(void *, void *, s32);
extern void func_001D2CD8(s32 *, void *);
extern s32 func_001F0248(void *, void *);
extern void func_001F1EF0(void *, void *);

typedef struct {
    s32 a, b, c, d, str;
} Rec;
typedef struct {
    Rec rec[3];
    s32 flag[3];
    s32 x48;
    s32 x4C;
    f32 x50;
    char str[1];
} Cfg;

s32 func_001F1B60(s32 *arg0, Cfg *cfg) {
    s32 i;
    struct {
        char str[0xC8];
        char pad[8];
        s8 b0, b1, b2, b3;
    } sp;

    if (!func_001D6278((void *)*arg0, sp.str, 0xC8)) return 0;
    func_001D2CD8((s32 *)cfg->str, sp.str);
    func_001F1EF0(arg0, cfg);
    if (!func_001F0248((void *)*arg0, &sp.b0)) return 0;

    for (i = 0; i < sp.b0; i++) {
        if (!func_001F0248((void *)*arg0, &sp.b1)) return 0;
        if (!func_001F0248((void *)*arg0, &sp.b2)) return 0;
        if (!func_001F0248((void *)*arg0, &sp.b3)) return 0;
        if (!func_001D6278((void *)*arg0, sp.str, 0xC8)) return 0;
        if (i < 3) {
            cfg->rec[i].a = (sp.b2 != 0);
            cfg->rec[i].b = (sp.b3 != 0);
            func_001D2CD8(&cfg->rec[i].str, sp.str);
            cfg->flag[i] = (sp.b1 != 0);
        }
    }
    i = (s8)(u8)sp.b0;
    if (i < 3) {
        do {
            cfg->flag[i] = 0;
            i++;
        } while (i < 3);
    }
    return 1;
}
