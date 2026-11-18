extern s32 D_0040DCCC;
extern s32 D_0048D700;
extern const char D_00445D80[];
extern void func_001D4040(void *, const char *);
extern void func_0011BBF8(void *, s32);
extern void func_0011CB28(void *);
extern void func_0011C070(void *, s32);
extern void func_0011BD58(void *, s32);

void func_0011BC90(void *arg0, s32 arg1) {
    if (D_0040DCCC == 0) {
        func_001D4040(&D_0048D700, D_00445D80);
        D_0040DCCC = 1;
    }
    func_0011BBF8(arg0, arg1);
    func_0011CB28(arg0);
    if (func_001E3650(func_001E4280(), (s32)&D_0048D700) <= 0) {
        if (*(s32 *)((u8 *)arg0 + 0x30) != 0) {
            func_0011C070(arg0, arg1);
        }
        if (*(s32 *)((u8 *)arg0 + 0x38) != 0 || *(s32 *)((u8 *)arg0 + 0x30) != 0) {
            func_0011BD58(arg0, arg1);
        }
    }
}
