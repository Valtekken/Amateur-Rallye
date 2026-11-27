extern s32 func_002B74A8(void *, s32);
extern void func_003F94D0(s32, s32, s32);
extern void func_003F9698();
extern s32 func_00406EA8(s32, s32);
extern s32 D_00428894;
extern char D_0047F2E8[], D_0047F320[], D_0047F370[];

typedef struct { u8 b[0x80]; } VT;

s32 func_002B7340(void *arg0, s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 mode = arg6;
    s32 ok = 0;
    s32 fd;
    s32 r;
    if (arg7 != 0) func_003F94D0(arg7, 0, 8);
    if (mode != 0) {
        s32 h = func_002B74A8(arg0, arg1);
        mode = 1;
        *arg4 = h;
        D_00428894 = h;
    } else {
        mode = 3;
    }
    if (arg5 != 0) mode |= 0x600;
    mode |= 0x8000;
    {
        VT *vt = *(VT **)((u8 *)arg0 + 8);
        s16 off = *(s16 *)((u8 *)vt + 0x78);
        s32 (*fn)(void *, s32) = *(s32 (**)(void *, s32))((u8 *)vt + 0x7C);
        fd = fn((u8 *)arg0 + off, arg1);
    }
    r = func_00406EA8(fd, mode);
    if (r >= 0) {
        ok = 1;
        func_003F9698(D_0047F2E8, r, arg1, fd);
        *arg2 = r;
        if (*arg3 != 1) {
            VT *vt = *(VT **)((u8 *)arg0 + 8);
            s16 off = *(s16 *)((u8 *)vt + 0x60);
            s32 (*fn)(void *, s32) = *(s32 (**)(void *, s32))((u8 *)vt + 0x64);
            if (fn((u8 *)arg0 + off, r) == 0) {
                func_003F9698(D_0047F320, arg1, fd);
                ok = 0;
            }
        }
    }
    if (ok == 0) {
        func_003F9698(D_0047F370, arg1, fd);
    }
    return ok;
}
