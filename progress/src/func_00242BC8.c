extern void func_002373D0(void *, s32);
extern void func_002B2028(void *);
extern void *D_0047A5C0[];
extern u32 D_0040E618[];

void func_00242BC8(void *arg0, s32 arg1) {
    void *b;
    s32 n;

    *(void **)arg0 = D_0047A5C0;
    b = *(void **)((char *)arg0 + 0x20);
    n = (s32)((u32)*(void **)((char *)arg0 + 0x28) - (u32)b) >> 2;
    if (n != 0) {
        if ((n << 2) != 0) {
            func_002B2028(b);
        } else {
            *(u32 *)b = D_0040E618[-1];
            D_0040E618[-1] = (u32)b;
        }
    }
    func_002373D0(arg0, arg1);
}
