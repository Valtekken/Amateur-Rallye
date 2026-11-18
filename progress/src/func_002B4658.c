s32 func_002B4240(s32, s32, s32, void *);
void func_003FA310(void *, void *, void *, s32);
void func_003FA634(void *, void *);
void func_003FA8A4(void *, void *);
extern char D_0047E258[];
extern char D_0047E268[];
extern char D_0047E270[];

s32 func_002B4658(register s32 arg0, s32 arg1, s32 arg2) {
    char sp10[32];
    s32 sp30;

    func_003FA8A4(sp10, D_0047E258);
    func_003FA634(sp10, D_0047E268);
    func_003FA310(sp10, D_0047E270, sp10, 0);
    sp30 = 0;
    sp30 = func_002B4240(arg0, arg1, arg2, sp10);
    if (sp30 == 1) {
        return 1;
    } else {
        return 0;
    }
}
