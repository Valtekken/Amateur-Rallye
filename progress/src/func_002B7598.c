/* identical to func_002B6B40 (matched), with its names changed by decompdecomp */
extern void func_003F9698(void *, s32);
extern s32 func_004072B0(s32, s32, s32);
extern char D_0047F3B8[];
extern char D_0047F400[];
extern char D_0047F438[];

typedef s32 (*vt_fn)(void *, s32);

s32 func_002B7598(void *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 var20 = 0;
    if (*arg3 != 1) {
        void *vt = *(void **)((char *)arg0 + 0x8);
        s16 off = *(s16 *)((char *)vt + 0x60);
        vt_fn fn = *(vt_fn *)((char *)vt + 0x64);
        if (fn((char *)arg0 + off, arg1) == 0) {
            func_003F9698(D_0047F3B8, arg1);
        }
    }
    {
        void *vt = *(void **)((char *)arg0 + 0x8);
        s16 off = *(s16 *)((char *)vt + 0x70);
        vt_fn fn = *(vt_fn *)((char *)vt + 0x74);
        if (fn((char *)arg0 + off, arg1) != 0) {
            if (func_004072B0(arg1, arg2, 0) != -1) {
                var20 = 1;
            } else {
                func_003F9698(D_0047F400, arg1);
            }
        } else {
            func_003F9698(D_0047F438, arg1);
        }
    }
    if (*arg3 != 1) {
        void *vt = *(void **)((char *)arg0 + 0x8);
        s16 off = *(s16 *)((char *)vt + 0x60);
        vt_fn fn = *(vt_fn *)((char *)vt + 0x64);
        if (fn((char *)arg0 + off, arg1) == 0) {
            func_003F9698(D_0047F3B8, arg1);
        }
    }
    return var20;
}
