/* identical to func_0011A7C8 (matched), with its names changed by decompdecomp */
extern void *func_001189C0(void);
extern void func_001D4040(void *, const char *);
extern void func_001E3EC0(s32, void *, s32);
extern char D_00446420[], D_00446440[], D_00446460[], D_00446480[], D_004464A0[], D_004464C0[];

void func_0010F8A0(s32 arg0, s32 sel, s32 type) {
    char buf[16];
    s32 handle;
    s32 t = *(s32 *)((u8 *)func_001189C0() + type * 0x34 + 4);
    switch (t) {
    case 0:
        if (!sel) {
            handle = func_001E4280();
            func_001D4040(buf, D_00446420);
            func_001E3EC0(handle, buf, type);
        } else {
            handle = func_001E4280();
            func_001D4040(buf, D_00446440);
            func_001E3EC0(handle, buf, type);
        }
        break;
    case 1:
        if (!sel) {
            handle = func_001E4280();
            func_001D4040(buf, D_00446460);
            func_001E3EC0(handle, buf, type);
        } else {
            handle = func_001E4280();
            func_001D4040(buf, D_00446480);
            func_001E3EC0(handle, buf, type);
        }
        break;
    case 2:
        if (!sel) {
            handle = func_001E4280();
            func_001D4040(buf, D_004464A0);
            func_001E3EC0(handle, buf, type);
        } else {
            handle = func_001E4280();
            func_001D4040(buf, D_004464C0);
            func_001E3EC0(handle, buf, type);
        }
        break;
    }
}
