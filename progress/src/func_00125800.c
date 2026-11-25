extern void func_0011E650(s32, s32, s32);
extern void func_0011DFB8(s32);
extern s32 func_0011E528(s32);
extern void *func_0021F4B0(void);
extern void func_001D4040(void *, const char *);
extern void *func_0021E9C0(void *, void *);
extern void func_0021E4F0(void *);
extern void func_00125958(void *);
extern const char D_004476D0[], D_004476E0[], D_00448618[], D_00448630[];

typedef struct { s32 pad[3]; s32 a; s32 b; s32 c; } S;

void func_00125800(S *p) {
    char key[16];
    void *ptr, *res;
    func_0011E650(p->a, 0, 1);
    func_0011DFB8(p->a);
    if (func_0011E528(p->a) == 0) {
        ptr = func_0021F4B0();
        func_001D4040(key, D_004476D0);
        res = func_0021E9C0(ptr, key);
        if (res != 0) func_0021E4F0(res);
        ptr = func_0021F4B0();
        func_001D4040(key, D_004476E0);
        res = func_0021E9C0(ptr, key);
        if (res != 0) func_0021E4F0(res);
        ptr = func_0021F4B0();
        func_001D4040(key, D_00448618);
        res = func_0021E9C0(ptr, key);
        if (res != 0) func_0021E4F0(res);
        ptr = func_0021F4B0();
        func_001D4040(key, D_00448630);
        res = func_0021E9C0(ptr, key);
        if (res != 0) func_0021E4F0(res);
        p->b++;
        if (p->b >= 4 && p->c == 0) func_00125958(p);
    }
}
