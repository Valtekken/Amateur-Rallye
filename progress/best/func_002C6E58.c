extern s32 func_002C7190(void);
extern s32 func_001D3960(s32);
extern void func_001D3568(s32);
extern void func_001D2458(void *, s32);
extern s32 func_001D4010(s32);
extern void func_001D2900(void *, s32);
extern void func_001D2ED8(void *, s32, s32);
extern void func_002B8438(void *);
extern s32 func_002B85A8(void *, s32, s32, s32, s32);
extern void func_001D35B0(s32);
extern s32 func_002B8A40(void *);
extern s32 func_002B1FC0(s32);
extern s32 func_002B8938(void *, s32, s32);
extern void func_002B2028(s32, s32);
extern void func_001D35F8(s32);
extern void func_002B84E0(void *, s32);
extern void D_002AD390(s32);
extern void func_001D3640(s32, s32, s32, s32);
extern s32 D_0040E678;

void func_002C6E58(void *arg0) {
    char sp[0x50];
    s32 var_16;

    var_16 = func_001D3960(func_002C7190());
    while (var_16 != 0) {
        func_001D3568(var_16);
        func_001D2458(sp, D_0040E678);
        func_001D2900(sp, func_001D4010(var_16 + 0x10));
        func_001D2ED8(sp, 0x2F, 0x5C);
        func_002B8438(sp + 0x10);
        if (func_002B85A8(sp + 0x10, *(s32 *)sp, 0, 1, 0) == 0) {
            func_001D35B0(var_16);
            func_002B84E0(sp + 0x10, 2);
            D_002AD390(*(s32 *)sp);
            return;
        }
        *(s32 *)((char *)arg0 + 0x38) = func_002B8A40(sp + 0x10);
        *(s32 *)((char *)arg0 + 0x34) = func_002B1FC0(*(s32 *)((char *)arg0 + 0x38));
        if (func_002B8938(sp + 0x10, *(s32 *)((char *)arg0 + 0x34), *(s32 *)((char *)arg0 + 0x38)) == 0) {
            func_002B2028(*(s32 *)((char *)arg0 + 0x34), 2);
            *(s32 *)((char *)arg0 + 0x34) = 0;
            func_001D35F8(var_16);
            func_002B84E0(sp + 0x10, 2);
            D_002AD390(*(s32 *)sp);
            return;
        }
        func_002B84E0(sp + 0x10, 2);
        D_002AD390(*(s32 *)sp);
        func_001D3640(var_16, *(s32 *)((char *)arg0 + 0x34), *(s32 *)((char *)arg0 + 0x38), 1);
        var_16 = func_001D3960(func_002C7190());
    }
}
