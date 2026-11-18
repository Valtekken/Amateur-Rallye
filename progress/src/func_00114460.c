typedef struct { int *begin, *end, *cap; } V;
extern char D_00446648[], D_00446660[];
extern V *func_001E37E8(s32, s32);
extern s32 func_001E3650(s32, s32);
extern void func_001E3EC0(s32, void *, s32);
extern void func_001D4040(void *, const char *);
extern void func_002623F0(s32, void *);
extern void func_00114568(void *);
extern s32 func_00262838(void);
static inline int *keyinit(s32 *p, const char *s) { func_001D4040(p, s); return p; }

void func_00114460(char *p) {
    int k[4];
    s32 n, ui;
    V *v = func_001E37E8(func_001E4280(), (s32)(p + 0x3C));
    if (v != 0) {
        n = func_001E3650(func_001E4280(), (s32)(p + 0x40));
        if ((u32)n < (u32)((((int)v->end - (int)v->begin) >> 2) - 1)) {
            n = n + 1;
            func_001E3EC0(func_001E4280(), p + 0x40, n);
            ui = func_00262838();
            func_002623F0(ui, keyinit(k, D_00446660));
            func_00114568(p);
        } else {
            ui = func_00262838();
            func_002623F0(ui, keyinit(k, D_00446648));
        }
    }
}
