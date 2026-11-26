extern s32 func_003E5438(void *, s32);
#define G(type, p, off) (*(type *)((u8 *)(p) + (off)))
void func_003E5D88(void *arg0) {
    s32 n;
    s32 i;
    s32 off;
    s32 *a;
    s32 *b;
    if (G(s32, arg0, 0x13C) == 0) {
        if (G(s32, arg0, 0x174) == 3) {
            n = G(s32, arg0, 0x184) != 0 ? 3 : 2;
        } else n = 1;
    } else {
        if (G(s32, arg0, 0x184) != 0) n = G(s32, arg0, 0x178) != 0 ? 3 : 2;
        else n = 1;
    }
    i = 0;
    a = (s32 *)((u8 *)arg0 + 0x18C);
    b = (s32 *)((u8 *)arg0 + 0x198);
    while (i < n) {
        off = i * 4;
        a[off / 4] = func_003E5438(arg0, 0x10);
        func_003E5438(arg0, 1);
        i++;
        b[off / 4] = func_003E5438(arg0, 0x10);
        func_003E5438(arg0, 1);
    }
}
