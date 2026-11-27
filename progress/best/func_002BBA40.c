extern s32 func_002BB070(void *arg0, u32 arg1);
extern s32 func_002BB0A0(void *arg0, char *arg1);
extern void *func_002BFBD8(s32 arg0, s32 arg1);
extern void func_003F94D0(void *arg0, s32 arg1, s32 arg2);
extern void func_003F9698(const char *fmt, ...);
extern u8 D_00428978[];
extern char D_00480140[];
extern char D_00480198[];
extern char D_004801A8[];
extern char D_004801F0[];

s32 func_002BBA40(void *arg0, s32 arg1, s32 *arg2, s32 *arg4, s32 arg6, void *arg7)
{
    s32 result = 0;
    s32 vres;
    void *handle;
    s32 index;
    u8 *entry = NULL;

    if (arg7 != NULL) {
        func_003F94D0(arg7, 0, 8);
    }

    if (!arg6) {
        func_003F9698(D_00480140, arg1);
    }

    {
        void *vtable = *(void **)((char *)arg0 + 8);
        vres = (*(s32 (**)(void *, s32))((char *)vtable + 0x7C))(
            (char *)arg0 + *(s16 *)((char *)vtable + 0x78), arg1);
    }

    handle = func_002BFBD8(*(s32 *)((char *)arg0 + 0x10), vres);

    *arg4 = 0;

    if (handle != NULL) {
        *arg4 = *(s32 *)((char *)handle + 8);

        index = func_002BB0A0(D_00428978, D_00480198);
        *arg2 = index;

        if (func_002BB070(D_00428978, (u32)index) != 0) {
            entry = D_00428978 + index * 12;
        } else {
            entry = NULL;
        }

        if (entry != NULL) {
            result = 1;
            *(s32 *)((char *)entry + 8) = 0;
            *(s32 *)((char *)entry + 4) = 0;
            *(void **)entry = handle;

            if (arg7 != NULL) {
                s64 f = (((s64)*(u8 *)((char *)handle + 0x15) << 8) | (s64)*(u8 *)((char *)handle + 0x14)) & 0xFFFF;
                if (f == 3) {
                    *(u8 *)((char *)arg7 + 4) = 1;
                }
            }
        } else {
            func_003F9698(D_004801A8, arg1);
        }
    } else {
        func_003F9698(D_004801F0, arg1, vres);
    }

    return result;
}
