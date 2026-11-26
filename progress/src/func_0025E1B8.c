extern void func_001551C0(void *, s32, s32, void *);
extern void func_00202F20(void *, void *, void *, void *);
extern void func_002B2028(void *);
extern u32 D_0040E618[];

void func_0025E1B8(void *arg0) {
    s32 buf[9];
    s32 n = (*(s32 *)((char *)arg0 + 0x9C) - *(s32 *)((char *)arg0 + 0x98)) >> 2;
    buf[0] = 0;
    buf[1] = 0;
    buf[2] = 0;
    buf[8] = 0;
    func_001551C0(buf, 0, n, &buf[8]);
    func_00202F20((char *)arg0 + 0xC, arg0, (char *)arg0 + 0x18, buf);
    if (n > 0) {
        s32 i = n;
        do {
            i--;
        } while (i != 0);
    }
    {
        s32 m = (buf[2] - buf[0]) >> 2;
        if (m != 0) {
            if (m * 4 != 0) {
                func_002B2028((void *)(s32)buf[0]);
            } else {
                void *p0 = (void *)(s32)buf[0];
                *(s32 *)p0 = (s32)D_0040E618[-1];
                D_0040E618[-1] = (u32)p0;
            }
        }
    }
}
