extern void func_00173848(void *);
extern void func_00173CC8(void *, f32);
extern void func_00173D98(void *, f32);
extern void func_00173DF0(void *, f32);
extern void func_00174048(void *);
extern void func_00174178(void *, f32);
extern void func_001743C8(void *);
extern void func_00174450(void *);
extern void func_001744F8(void *);
extern f32 D_00479C98;
#define FIELD(type, ptr, off) (*(type *)((char *)(ptr) + (off)))

s32 func_00173A70(void *arg0, s32 arg1) {
    f32 step;
    s32 i, cnt;
    void *p;
    i = 0;
    if (arg1 <= 0) {
        func_001744F8(arg0);
        return 0;
    }
    step = D_00479C98 / (f32)arg1;
    do {
        func_00173848(arg0);
        func_00173CC8(arg0, step);
        func_00173D98(arg0, step);
        if (arg1 == 1) {
            p = FIELD(void **, arg0, 0x2C);
            cnt = (FIELD(s32, p, 8) - FIELD(s32, p, 4)) >> 2;
            if (cnt > 0) return 1;
        }
        func_00173DF0(arg0, step);
        i++;
        func_001743C8(arg0);
        func_00174048(arg0);
        func_00174178(arg0, step);
        func_00174450(arg0);
    } while (i < arg1);
    func_001744F8(arg0);
    return 0;
}
