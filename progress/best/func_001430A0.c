extern const char D_0044BD80[];
extern s32 func_00193B60(void);
extern s32 func_00193138(s32, s32);
extern s32 func_00194C40(void);
extern s32 func_00193BE0(s32);
extern s32 func_00191630(s32);
extern s32 func_001930D8(s32, s32);
extern void func_0021E4F0(void *);
extern void func_0029EA38(s32);
extern void func_003FA310(void *, const char *, s32);
extern void func_001D4040(void *, void *);

void func_001430A0(void *arg0, void *arg1) {
    s32 v0;

    if (func_00193138(func_00193B60(), *(s32 *)((u8 *)arg0 + 0xC)) == 0) {
        func_0021E4F0(arg1);
    }

    if (func_00193BE0(func_00194C40()) != 0) {
        v0 = func_00191630(func_00193B60());
        if (v0 != 3) {
            func_0021E4F0(arg1);
        }
    }

    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 1;
    *(s32 *)((u8 *)arg0 + 0x28) = -1;

    const char *fmt = D_0044BD80;

    v0 = func_00193B60();
    *(s32 *)((u8 *)arg0 + 0x28) = v0;

    u32 stack[64];
    func_003FA310(stack, fmt, func_001930D8(v0, *(s32 *)((u8 *)arg0 + 0xC)));
    func_001D4040((u8 *)arg0 + 0x24, stack);

    s32 temp = *(s32 *)((u8 *)arg1 + 0x4);
    if (temp != 0) {
        func_0029EA38(temp);
    }
}
