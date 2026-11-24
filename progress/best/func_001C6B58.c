extern s32 *func_00152D28(s32);
extern s32 *func_002B1FC0(s32);
extern void func_002B2028(void *);
extern s32 *func_003D2910(s32);
extern void func_003F93CC(void *, void *, s32);
extern s32 *D_0040E618[];

typedef struct { u8 *b; u8 *e; u8 *c; } Vec;

void func_001C6B58(Vec *arg0, u8 *arg1, s32 *arg2) {
    u8 *p, *nb, *np, *dst, *old;
    s32 n, bytes, n2;

    p = arg0->e;
    if (p != arg0->c) {
        if (p) *(s32*)p = *(s32*)(p - 4);
        p = arg0->e;
        arg0->e = p + 4;
        n = (((s32)((p - 4) - arg1)) >> 2) * 4;
        func_003F93CC(p - n, arg1, n);
        *(s32*)arg1 = *arg2;
        return;
    }
    n2 = ((s32)(p - arg0->b)) >> 2;
    n2 = n2 ? n2 * 2 : 1;
    bytes = n2 * 4;
    if (n2 == 0) {
        nb = 0;
        bytes = 0;
    } else if (bytes != 0) {
        nb = (u8 *)func_002B1FC0(bytes);
        if (!nb) nb = (u8 *)func_003D2910(bytes);
    } else if (D_0040E618[-1]) {
        nb = (u8 *)D_0040E618[-1];
        D_0040E618[-1] = *(s32 **)nb;
    } else {
        nb = (u8 *)func_00152D28(0);
    }
    n = (s32)(arg1 - arg0->b);
    np = nb + n;
    func_003F93CC(nb, arg0->b, (n >> 2) * 4);
    if (np) *(s32*)np = *arg2;
    dst = np + 4;
    n = (s32)(arg0->e - arg1);
    func_003F93CC(dst, arg1, (n >> 2) * 4);
    dst = dst + n;
    old = arg0->b;
    n2 = ((s32)(arg0->c - old)) >> 2;
    if (n2) {
        bytes = n2 * 4;
        if (bytes) func_002B2028(old);
        else { *(s32 **)old = D_0040E618[-1]; D_0040E618[-1] = (s32 *)old; }
    }
    arg0->e = dst;
    arg0->c = nb + bytes;
    arg0->b = nb;
}
