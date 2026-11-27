extern s32 AddDmacHandler_4(s32, void *, s32, s32 *, s32);
extern void RemoveDmacHandler_2(s32, s32);
extern s32 func_003E0EA0(s32, void *, s32, s32);
extern void func_003E1708(void *, void *);
extern void func_00403A80(s32);
extern void func_00403AE8(s32);
extern void func_0040AF58(void);
extern void func_0040AFA0(s32);
extern char D_00489E98[];
extern void func_003E6D98(void);

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unk70;
    u64 unk78;
    s32 unk80;
    u64 unk88;
    s32 unk90;
    s32 unk858;
} S_func_003E6F10_arg0;

void func_003E6F10(S_func_003E6F10_arg0 *arg0, s32 arg1, s32 arg2) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 temp_18;

    sp28 = arg2;
    sp2C = (arg1 + 0xFFC00) & 0x0FFFFFFF;
    sp24 = 0;
    sp20 = 0;
    sp30 = (arg2 / 1023) + 1;

    while (*(volatile s32 *)0x10002010 < 0) {}

    temp_18 = AddDmacHandler_4(3, func_003E6D98, 0, &sp20, sp30);

    *(volatile s32 *)0x1000E010 = 8;
    func_00403AE8(3);
    func_0040AF58();

    *(volatile s32 *)0x1000B010 = arg1 & 0x0FFFFFFF;
    *(volatile s32 *)0x1000B020 = 0xFFC0;
    *(volatile s32 *)0x1000B000 = 0x100;
    func_0040AFA0(0x1000B020);

    *(volatile s32 *)0x10002000 = 0x700003FF;

    func_003E0EA0(arg0->unk858, &sp20, 4, 4);

    while (sp20 < sp30) {}

    if (sp24 != 0) {
        func_003E1708(arg0, &D_00489E98);
    }

    while (*(volatile s32 *)0x10002010 < 0) {}

    func_00403A80(3);
    RemoveDmacHandler_2(3, temp_18);
}
