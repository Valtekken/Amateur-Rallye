typedef struct { s32 f0; s32 f4; s32 f8; s32 fC; f32 f10; f32 f14; f32 f18; s32 f1C; void *f20; void *f24; } S;

extern s32 func_0011E528(void*);
extern s32 func_001E4280(void);
extern void func_001D4040(void*, const char*);
extern s32 func_001E3598(void*, void*);
extern s32 func_0011E650(s32, s32, s32);
extern void func_0011F878(void*);
extern void *func_00297500(void);
extern void *func_002971B0(void*);
extern s32 func_0011FAD0(void*, s32, s32);
extern void *func_00194C40(void);
extern void func_00194940(void*);
extern void func_00194910(void*);
extern void func_00194768(void*, f32);
extern void func_001947A0(void*, f32);
extern void func_001947D8(void*, f32);
extern s32 func_0011E2B8(s32, s32);
extern void func_0011E278(s32, s32);
extern void func_0011DFB8(s32);
extern void *func_002A1700(void);
extern void func_002A1290(void*, void*, s32);

extern u32 D_004267B0;
extern char D_004477F0[];
extern char D_00447808[];

void func_0011F538(S *p) {
    if (func_0011E528((void*)p->fC)) { return; }
    if (p->f1C) { return; }
    void *a = (void*)func_001E4280();
    char buf[0x30];
    func_001D4040(buf, D_004477F0);
    if (func_001E3598(a, buf)) {
        func_0011E650(p->fC, 5, 0);
    } else {
        func_0011E650(p->fC, 3, 0);
    }
    func_0011F878(p);
    void *v = func_00297500();
    s32 cnt = (s32)func_002971B0(v);
    s32 i = 1;
    do {
        if (i == cnt) {
            func_0011FAD0(p, cnt, 1);
        } else {
            func_0011FAD0(p, i, 0);
        }
        i++;
    } while (i < 4);
    if (cnt != 3) {
        void *q = func_00194C40();
        func_00194940(q);
        void *r = p->f20;
        *(s32*)((char*)r + 4) = 1;
        *(f32*)((char*)r + 0x10) = 0.0f; // placeholder
    } else {
        void *r = p->f20;
        *(s32*)((char*)r + 4) = 1;
        f32 f = *(f32*)((char*)r + 0x10);
        f32 d = 1.0f/1.1f; // 0x3F99999A
        f = f / d;
        *(f32*)((char*)r + 0x10) = f;
    }
    if (cnt != 2) {
        void *q = func_00194C40();
        f32 fval = 0.0f; // func_00194910
        func_00194910(q);
        // complex
    } else {
        // complex
    }
    // trailing
    func_0011DFB8(p->fC);
}
