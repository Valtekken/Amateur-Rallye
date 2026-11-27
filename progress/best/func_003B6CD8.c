typedef struct S_func_003B6CD8_arg0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} S_func_003B6CD8_arg0;

extern s32 D_002AD408(s32);
extern s32 func_003B7EA0(s32);
extern void func_003B7438(void *, s32 *, s32);
extern void func_003B8078(s32, s32, s32);
extern void func_003B8250(s32, s32, s32);
extern void func_003B8428(s32, s32, s32);
extern void func_003B8600(s32, s32, s32);
extern s32 func_003B8A18(s32, s32);
extern void func_003B6EF8(void *, s32, s32, s32);
extern void func_003B6E10(void *, s32, s32, s32);
extern s32 D_00426610;

s32 func_003B6CD8(void *arg0, s32 arg1) {
    S_func_003B6CD8_arg0 *p = arg0;
    s32 sp0, sp4, sp8, spC, sp10, sp14;
    s32 temp;

    temp = func_003B7EA0(D_002AD408(0x50));
    func_003B7438(arg0, &sp0, arg1);
    func_003B8078(temp, sp0, 0x1FFF);
    func_003B7438(arg0, &sp4, arg1);
    func_003B8250(temp, sp4, 0x7FFC);
    func_003B7438(arg0, &sp8, arg1);
    func_003B8428(temp, sp8, 0x7FFC);
    func_003B7438(arg0, &spC, arg1);
    func_003B8600(temp, spC, 0xFFF);
    func_003B7438(arg0, &sp10, arg1);
    func_003B7438(arg0, &sp14, arg1);
    D_00426610 = func_003B8A18(temp, sp14);
    p->unk4 = (p->unk0 = (p->unk8 = 0));
    func_003B6EF8(p, temp, temp, arg1);
    func_003B6E10(p, temp, sp14, arg1);
    return temp;
}
