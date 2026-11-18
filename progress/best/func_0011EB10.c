extern char D_00444B30[], D_00447708[], D_00447728[], D_00447748[];
extern u32 D_0044DBA0[], D_0040E618[];
extern s32 func_001E4280(void);
extern void func_001D4040(void *, char *);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E3EC0(s32, void *, s32);
extern void func_00152688(void *);
extern void func_00152720(void *, u32 *, u32 *);
extern void func_00152918(void *, u32 *);
extern s32 func_00193B60(void);
extern void func_00191C50(s32, s32);
extern void func_00191FD0(s32, s32);
extern void func_00192998(s32, s32, s32);
extern void *func_001189C0(void);
extern void func_00192AF0(s32, s32, s32);
extern void func_00192BE0(s32, s32, s32);
extern void func_00191E60(s32, s32);
extern void func_00191EB8(s32, s32);
extern void func_00191B08(s32, s32);
extern void func_0011E278(s32, s32);
extern void func_002B2028(void *);

typedef struct { u32 *b0, *e0, *c0, *b1, *e1, *c1; u32 pad[2]; u32 *db; } Pair;
typedef struct { u32 pad[3], unkC; } Arg;

void func_0011EB10(Arg *arg0) {
    char buf[0x10];
    Pair s;
    u32 sp60, sp64;
    u32 i, n, t;

    t = func_001E4280();
    func_001D4040(buf, D_00444B30);
    func_001E3D10(t, buf, 1);
    s.db = &D_0044DBA0;
    s.b0 = 0; s.e0 = 0; s.c0 = 0; s.b1 = 1; s.e1 = 0; s.c1 = 0;
    func_00152688(&s);

    i = 0;
    do {
        sp60 = i;
        if (s.e0 == s.c0) {
            func_00152720(&s, s.e0, &sp60);
        } else {
            if (s.e0) *s.e0 = i;
            s.e0 += 1;
        }
        i++;
    } while (i < 10);
    func_00152918(&s, &sp64);

    func_00191C50(func_00193B60(), 0x18);
    func_00191FD0(func_00193B60(), 1);
    func_00192998(func_00193B60(), 0, 9);
    n = func_00193B60();
    func_00192AF0(n, 0, *(u32 *)((char *)func_001189C0() + 0x1D8));
    func_00192998(func_00193B60(), 1, 6);
    n = func_00193B60();
    func_00192AF0(n, 1, *(u32 *)((char *)func_001189C0() + 0x13C));
    func_00192BE0(func_00193B60(), 1, sp64);
    func_00191E60(func_00193B60(), 2);
    func_00191EB8(func_00193B60(), 1);
    func_00191B08(func_00193B60(), 2);

    t = func_001E4280();
    func_001D4040(buf, D_00447708);
    func_001E3EC0(t, buf, 9);
    t = func_001E4280();
    func_001D4040(buf, D_00447728);
    func_001E3EC0(t, buf, 6);
    t = func_001E4280();
    func_001D4040(buf, D_00447748);
    func_001E3D10(t, buf, 1);

    func_0011E278(arg0->unkC, 0x37);
    s.db = &D_0044DBA0;

    n = (s32)(s.c1 - s.b1);
    if (n != 0) {
        if ((n << 2) != 0) func_002B2028((void *)s.b1);
        else { *s.b1 = D_0040E618[-1]; D_0040E618[-1] = (u32)s.b1; }
    }
    n = (s32)(s.c0 - s.b0);
    if (n != 0) {
        if ((n << 2) != 0) func_002B2028((void *)s.b0);
        else { *s.b0 = D_0040E618[-1]; D_0040E618[-1] = (u32)s.b0; }
    }
}
