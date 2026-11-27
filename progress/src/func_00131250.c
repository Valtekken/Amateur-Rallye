extern void func_0011DFB8(s32);
extern void func_0011E278(s32,s32);
extern s32 func_0011E2B8(s32,s32);
extern s32 func_0011E528(s32);
extern void func_0011E650(s32,s32,s32);
extern void func_00131438(void *);
extern void func_00131D40(void *);
extern void func_00131EA8(void *);
extern void func_00191B08(s32,s32);
extern s32 func_00193B60();
extern s32 func_00194738(s32);
extern s32 func_00194C40();
extern void func_001D4040(char *, const char *);
extern s32 func_001E3598(s32, void *);
extern void func_0021EDA0(s32,s32);
extern s32 func_0021F4B0();
extern char D_00446670[];
typedef struct { s32 pad[3]; s32 unkC; s32 unk10; s32 unk14; } Obj;

void func_00131250(Obj *arg0) {
    s32 sp[4];
    s32 mgr, chosen;
    func_0011E650(arg0->unkC, 3, 0);
    func_0011DFB8(arg0->unkC);
    if (func_0011E528(arg0->unkC) != 0) return;
    mgr = func_001E4280();
    func_001D4040((char *)sp, D_00446670);
    if (func_001E3598(mgr, sp) != 0)
        func_0011E650(arg0->unkC, 5, 0);
    else
        func_0011E650(arg0->unkC, 3, 0);
    func_00131EA8(arg0);
    func_00131438(arg0);
    arg0->unk14 = 0;
    chosen = func_0011E2B8(arg0->unkC, 1);
    if (chosen == -3) goto blockA;
    if (chosen < -3) return;
    if (chosen >= 9) return;
    if (chosen <= 0) return;
    goto blockB;
blockA:
    func_00191B08(func_00193B60(), 0);
    func_0021EDA0(func_0021F4B0(), 2);
    func_0021EDA0(func_0021F4B0(), 3);
    func_0021EDA0(func_0021F4B0(), 4);
    if (func_00194738(func_00194C40()) == 0)
        func_0011E278(arg0->unkC, 0x1B);
    else
        func_0011E278(arg0->unkC, 0x17);
    return;
blockB:
    func_00131D40(arg0);
    func_0021EDA0(func_0021F4B0(), 2);
    func_0021EDA0(func_0021F4B0(), 3);
    func_0021EDA0(func_0021F4B0(), 4);
    if (func_00194738(func_00194C40()) != 0)
        func_0011E278(arg0->unkC, 0x17);
    else
        func_0011E278(arg0->unkC, 0x1B);
}
