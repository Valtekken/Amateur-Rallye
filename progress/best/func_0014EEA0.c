extern f32 D_0040E608;
extern f32 D_0040E60C;
extern f32 D_0040E610;
extern char D_0044C5B0[];
extern char D_0044C5B8[];
extern char D_0044C5C8[];
extern char D_0048DCD0[];
extern char D_0048DCE0[];
extern char D_0048DCF0[];

extern s32 func_001E4280(void);
extern s32 func_001E3598(s32, s32);
extern void func_002060F8(void *arg0);
extern void func_002062A8(void *arg0, void *arg1);
extern void func_002063A0(void *arg0, f32 *arg1);
extern void func_00206338(void *arg0, char *arg1);
extern void func_00205CE0(void *arg0, s32 arg1);
extern s32 func_00193B60(void);
extern s32 func_00192398(s32, s32);
extern s32 func_001189C0(void);
extern s32 func_003FA310(char *buf, char *fmt, ...);
extern f32 fabsf(f32);

void func_0014EEA0(void *arg0, s32 arg1, s32 arg2, f32 fparg0) {
    f32 sp[3];
    char sp10[32];
    u8 *a0 = (u8 *)arg0;
    void *temp_17;

    *(s32 *)(a0 + arg1 * 4 + 0x74) = arg2;
    temp_17 = *(void **)(*(u8 **)(a0 + arg1 * 4 + 0xC) + 0x4C);
    func_002060F8(temp_17);
    if (arg2 < 0) {
        return;
    }

    func_002062A8(temp_17, a0 + 0x18);
    sp[0] = D_0040E610;
    *(s32 *)&sp[1] = 0;
    *(s32 *)&sp[2] = 0;
    func_002063A0(temp_17, sp);

    switch (arg1) {
    case 1:
        break;
    case 0:
        if (func_001E3598(func_001E4280(), *(s32 *)(a0 + 0x68) + arg2 * 4) != 0) {
            func_003FA310(sp10, D_0044C5B0);
        } else {
            f32 a = fabsf(fparg0);
            func_003FA310(sp10, D_0044C5B8, (s32)a % 60, (s32)(a * 100.0f) % 100);
            func_00206338(temp_17, D_0048DCE0);
        }
        {
            u8 *obj = (u8 *)temp_17;
            u8 *vt = *(u8 **)obj;
            s32 (*fn)(void *, char *) = *(s32 (**)(void *, char *))(vt + 0x14);
            fn((void *)(obj + *(s16 *)(vt + 0x10)), sp10);
        }
        break;
    case 2:
        if (func_001E3598(func_001E4280(), *(s32 *)(a0 + 0x68) + arg2 * 4) != 0) {
            func_003FA310((char *)sp, D_0044C5B0);
        } else {
            f32 a = fabsf(fparg0);
            func_003FA310((char *)sp, D_0044C5C8, (s32)a % 60, (s32)(a * 100.0f) % 100);
            func_00206338(temp_17, D_0048DCF0);
        }
        {
            u8 *obj = (u8 *)temp_17;
            u8 *vt = *(u8 **)obj;
            s32 (*fn)(void *, char *) = *(s32 (**)(void *, char *))(vt + 0x14);
            fn((void *)(obj + *(s16 *)(vt + 0x10)), (char *)sp);
        }
        break;
    default:
        break;
    }

    func_00206338(temp_17, D_0048DCD0);
    sp[1] = D_0040E60C;
    sp[0] = D_0040E608;
    *(s32 *)&sp[2] = 0;
    func_002063A0(temp_17, sp);
    func_002062A8(temp_17, a0 + 0x1C);
    {
        s32 t16 = func_00192398(func_00193B60(), arg2);
        func_00205CE0(temp_17, *(s32 *)((u8 *)(t16 * 0x34 + func_001189C0()) + 0x18));
    }
}
