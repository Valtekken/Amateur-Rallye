extern s32 func_00153F40(s32, void *, s32, s32);
extern void func_003A34D0(void *, s32);
extern void func_003B0FB0(void *, s32);
extern s32 func_003B1228(void *);
extern s32 func_003B1260(void *, s32);
extern s32 func_003B12C8(void *, s32);

s32 func_003ABB20(void *arg0, s32 arg1) {
    u8 buf[16];
    volatile s32 sp10;
    volatile s32 sp14;
    volatile s32 sp18;
    volatile s32 sp1C;

    func_003B0FB0(buf, arg1);
    sp10 = -1;
    sp14 = func_003B1228(arg0);
    sp18 = 0;
    while (sp18 < sp14) {
        sp1C = func_003B1260(arg0, sp18);
        if (func_00153F40(sp1C, buf, 0, -1) == 0) {
            sp10 = func_003B12C8(arg0, sp18);
            break;
        }
        sp18 += 1;
    }
    func_003A34D0(buf, 2);
    return sp10;
}
