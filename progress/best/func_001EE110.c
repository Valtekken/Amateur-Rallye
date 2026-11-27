extern u32 D_0040E618[];
extern s32 D_002AD390(s32);
extern void func_002B2028(void *);
extern s32 func_001DF180(void *, s32);

void func_001EE110(void *arg0, s32 arg1) {
    u32 *vec = (u32 *)((u8 *)arg0 + 0x14);
    u32 begin = vec[0];
    u32 end = vec[1];
    while (begin < end) {
        D_002AD390(*(u32 *)(begin + 4));
        begin += 8;
    }
    u32 orig = vec[0];
    u32 cap = vec[2];
    s32 n = (s32)(cap - orig) >> 3;
    if (n != 0) {
        if (n * 8 != 0) {
            func_002B2028(arg0);
        } else {
            u32 old = D_0040E618[-1];
            *(u32 *)orig = old;
            D_0040E618[-1] = orig;
        }
    }
    func_001DF180(arg0, arg1);
}
