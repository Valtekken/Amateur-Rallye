extern char D_00447780[];
extern char D_004477A8[];
extern char D_004477C8[];
extern char D_00447810[];
extern char D_00447818[];
extern char D_00447840[];
extern char D_00447868[];
extern void func_001D4040(void*, const char*);
extern f32 func_001E3610(s32, void*);
extern void func_001D22C0(s32, void*, s32);
extern void func_003FA310(void*, const char*, void*);
extern void func_001E3FB0(s32, void*, void*);
extern void *func_00194C40(void);
extern void func_00194768(void*, f32);
extern void func_001947A0(void*, f32);
extern void func_001947D8(void*, f32);
extern void *func_002003C0(void);

static inline __attribute__((always_inline)) void *key(void *p, const char *s) {
    func_001D4040(p, s);
    return p;
}

void func_0011F878(void) {
    s32 numbuf[4];
    s32 textbuf[4];
    s32 k[4];
    s32 k1[4];
    s32 k2[4];
    s32 k3[4];
    f32 music, sfx, engine;

    music = func_001E3610(func_001E4280(), key(k, D_00447780));
    func_001D22C0((s32)(music * 100.0f), numbuf, 10);
    func_003FA310(textbuf, D_00447810, numbuf);
    func_001E3FB0(func_001E4280(), key(k, D_00447818), key(k1, (const char*)textbuf));

    sfx = func_001E3610(func_001E4280(), key(k, D_004477A8));
    func_001D22C0((s32)(sfx * 100.0f), numbuf, 10);
    func_003FA310(textbuf, D_00447810, numbuf);
    func_001E3FB0(func_001E4280(), key(k, D_00447840), key(k2, (const char*)textbuf));

    engine = func_001E3610(func_001E4280(), key(k, D_004477C8));
    func_001D22C0((s32)(engine * 100.0f), numbuf, 10);
    func_003FA310(textbuf, D_00447810, numbuf);
    func_001E3FB0(func_001E4280(), key(k, D_00447868), key(k3, (const char*)textbuf));

    func_00194768(func_00194C40(), music);
    func_001947A0(func_00194C40(), sfx);
    func_001947D8(func_00194C40(), engine);
    *(f32*)((char*)func_002003C0() + 0x24) = music;
}
