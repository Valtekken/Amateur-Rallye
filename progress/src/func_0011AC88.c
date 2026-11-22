extern s32 func_0011A588(s32, s32);
extern s32 func_00196E10(void);
extern s32 func_001965A8(s32);
extern s32 func_001D5F70(void);
extern s32 func_001D5EB0(s32, s32, s32);
extern s32 func_00194C40(void);
extern s32 func_00194B18(s32);
extern s32 func_00193B60(void);
extern void func_00191FD0(s32, s32);

void func_0011AC88(s32 arg) {
    s32 lvl = 1;
    s32 r = func_0011A588(arg, 1);
    s32 t = func_001965A8(func_00196E10());
    s32 n;

    if (t == 1)
        goto set2;
    if (t < 2)
        goto cont;
    if (t != 2)
        goto cont;
set2:
    lvl = 2;
cont:
    n = func_001D5EB0(func_001D5F70(), 1, 0xA);
    if (func_00194B18(func_00194C40()) == 5) {
        lvl = 3;
        if (n <= 6)
            lvl = 4;
    } else {
        t = n + func_001D5EB0(func_001D5F70(), 0, r);
        if (t >= 10) {
            lvl++;
        } else if (t >= 7) {
            lvl--;
            if (lvl <= 0)
                lvl = 1;
        }
    }
    func_00191FD0(func_00193B60(), lvl);
}
