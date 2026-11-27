extern s32 D_002AD408(s32);
extern s32 func_0011DA70(s32, s32);
extern s32 func_00297500(void);
extern s32 func_002971B0(s32);
extern void func_00297398(s32, s32);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern s32 func_001E3598(s32, void *);
extern s32 func_00194C40(void);
extern s32 func_00194738(s32);
extern void func_001E3D10(s32, void *, s32);
extern char D_00445DE0[], D_00445E18[], D_00449098[];
static inline void *init12(u32 *p, const char *s) { func_001D4040(p, s); return p; }
typedef struct { s32 pad[3]; s32 c; } A12;

void func_0012A740(A12 *a) {
    u32 sp[4], sp10[4], sp20[4];
    s32 t, ok;
    a->c = func_0011DA70(D_002AD408(0x10), 0x1D);
    if (func_002971B0(func_00297500()) == -1) func_00297398(func_00297500(), 1);
    t = func_001E4280();
    ok = 0;
    if (func_001E3598(t, init12(sp, D_00445DE0)) != 0) {
        t = func_001E4280();
        ok = (func_001E3598(t, init12(sp10, D_00445E18)) == func_00194738(func_00194C40()));
    }
    if (ok != 0) {
        t = func_001E4280();
        func_001E3D10(t, init12(sp20, D_00449098), 1);
        return;
    }
    t = func_001E4280();
    func_001E3D10(t, init12(sp20, D_00449098), 0);
}
