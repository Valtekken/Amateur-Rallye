extern void *func_001189C0(void);
extern void func_001D4040(void *, const char *);
extern void func_001E3EC0(s32, void *, s32);
extern char D_004470D8[], D_004470F0[], D_00447108[], D_00447120[], D_00447138[], D_00447150[];

void func_0011A7C8(s32 arg0, s32 sel, s32 type) {
    char buf[16];
    s32 handle;
    s32 t = *(s32 *)((u8 *)func_001189C0() + type * 0x34 + 4);
    switch (t) {
    case 0:
        if (!sel) {
            handle = func_001E4280();
            func_001D4040(buf, D_004470D8);
            func_001E3EC0(handle, buf, type);
        } else {
            handle = func_001E4280();
            func_001D4040(buf, D_004470F0);
            func_001E3EC0(handle, buf, type);
        }
        break;
    case 1:
        if (!sel) {
            handle = func_001E4280();
            func_001D4040(buf, D_00447108);
            func_001E3EC0(handle, buf, type);
        } else {
            handle = func_001E4280();
            func_001D4040(buf, D_00447120);
            func_001E3EC0(handle, buf, type);
        }
        break;
    case 2:
        if (!sel) {
            handle = func_001E4280();
            func_001D4040(buf, D_00447138);
            func_001E3EC0(handle, buf, type);
        } else {
            handle = func_001E4280();
            func_001D4040(buf, D_00447150);
            func_001E3EC0(handle, buf, type);
        }
        break;
    }
}
