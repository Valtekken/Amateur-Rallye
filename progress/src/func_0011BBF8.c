extern void *func_001E3700(s32, void *);
extern s32 func_001D4010(void *);
extern s32 func_003FA760(s32, s32);
extern void func_0011C718(void *, s32);

void func_0011BBF8(void *arg0) {
    s32 sp[4];
    void *p44;
    s32 t;
    s32 *p;
    s32 val;
    s32 v30;
    s32 cond;

    p44 = (u8 *)arg0 + 0x44;
    if (*(s32 *)p44 == 0)
        return;

    t = func_001E4280();
    p = func_001E3700(t, p44);
    sp[0] = *p;
    val = func_001D4010(sp);
    v30 = *(s32 *)((u8 *)arg0 + 0x34);
    cond = 0;
    if (v30 != 0 && val != 0) {
        cond = func_003FA760(val, v30) == 0;
    }
    if (cond == 0) {
        func_0011C718(arg0, func_001D4010(sp));
    }
}
