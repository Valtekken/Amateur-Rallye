extern u32 D_0040E618[];
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void *func_00152D28(s32);
extern void func_003F931C(void *, void *, s32);

void *func_003EE0D0(void *arg0) {
    s32 *p = arg0;
    s32 n = p[0];
    u32 cap = 0x10;
    u32 newcap;
    void *buf;
    s32 count;

    if (n + 1 > 0x10) {
        cap = 0x10 * 2;
        while (cap < (u32)(n + 1)) {
            cap *= 2;
        }
        newcap = cap + 0x10;
    } else {
        newcap = cap + 0x10;
    }
    if (newcap != 0) {
        buf = func_002B1FC0(newcap);
        if (buf == NULL) {
            buf = func_003D2910(newcap);
        }
    } else if (D_0040E618[-1] != 0) {
        buf = (void *)D_0040E618[-1];
        D_0040E618[-1] = *(u32 *)buf;
    } else {
        buf = func_00152D28(0);
    }
    ((u32 *)buf)[1] = cap;
    ((s32 *)buf)[2] = 1;
    ((s32 *)buf)[3] = 0;
    count = p[0];
    if (count != 0) {
        func_003F931C((char *)buf + 0x10, (char *)arg0 + 0x10, count);
    }
    *(s32 *)buf = p[0];
    return (char *)buf + 0x10;
}
