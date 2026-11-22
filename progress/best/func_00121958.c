extern void func_0011E650(s32, s32, s32);
extern s32 func_0011E528(s32);
extern void func_00121A58(void *);
extern void func_00121C48(void *, s32);
extern s32 func_0011E2B8(s32, s32);
extern void func_003F9698(char *, char *, s32);
extern void func_00110238(s32, s32);
extern s32 func_00110430(void);
extern void func_0011E278(s32, s32);
extern void func_0011DFB8(s32);
extern char D_00447C80[];
extern char D_00447CD0[];

void func_00121958(void *arg0) {
    s32 temp4, temp2, var5;
    void *base, *sub, *sub2;
    void **elem;

    func_0011E650(*(s32 *)((char *)arg0 + 0xC), 2, 0);
    if (func_0011E528(*(s32 *)((char *)arg0 + 0xC)) != 0) return;

    func_00121A58(arg0);
    temp4 = *(s32 *)((char *)arg0 + 0x28);
    var5 = 0;
    if (temp4 == -1) {
        var5 = 1;
    } else {
        base = *(void **)((char *)arg0 + 0x10);
        elem = (void **)((char *)base + temp4 * 8);
        sub = *elem;
        sub2 = *(void **)((char *)sub + 0x4C);
        if (15.0f < *(f32 *)((char *)sub2 + 0x54)) {
            var5 = 1;
        }
    }
    if (var5 != 0) {
        func_00121C48(arg0, var5);
    }
    temp2 = func_0011E2B8(*(s32 *)((char *)arg0 + 0xC), 1);
    if (temp2 < -1) {
        if (temp2 >= -3) {
            func_003F9698(D_00447CD0, D_00447C80, 0xAB);
            func_00110238(func_00110430(), 0x27);
            func_0011E278(*(s32 *)((char *)arg0 + 0xC), 0xC);
        }
    }
    func_0011DFB8(*(s32 *)((char *)arg0 + 0xC));
}
