extern s32 D_002AD408(s32);
extern s32 func_001891D0(s32);
extern s32 func_0018B798(s32, s32);
extern void func_0018FC48(void **, s32, s32);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, void *);
extern void func_001E3F80(s32, void *, s32);
extern void func_002B2028(void *, void *);
extern s32 D_0040E618[];
extern char D_0044E838[8];

void func_00190278(s32 arg0, s32 arg1, s32 arg2) {
    char sp10[16];
    void *sp0;
    void *var5;
    s32 field;
    s32 temp_16;
    s32 temp_2;
    s32 temp_3;
    void *temp_4;
    s32 field2;
    s32 field3;

    func_0018FC48(&sp0, arg0, arg1);
    temp_16 = func_001891D0(D_002AD408(0x344));
    temp_2 = func_0018B798(temp_16, arg2);
    temp_3 = func_001E4280();
    field = *(s32 *)((u8 *)sp0 - 0x10);
    if (field == 0) {
        var5 = D_0044E838;
    } else {
        *(u8 *)((u8 *)sp0 + field) = 0;
        var5 = sp0;
    }
    func_001D4040(sp10, var5);
    func_001E3F80(temp_3, sp10, temp_2);
    temp_4 = (void *)((u8 *)sp0 - 0x10);
    field2 = *(s32 *)((u8 *)temp_4 + 8);
    if (field2 == 1) {
        *(s32 *)((u8 *)temp_4 + 8) = 0;
        field3 = *(s32 *)((u8 *)temp_4 + 4);
        if (field3 + 0x10 == 0) {
            sp0 = (void *)D_0040E618[-1];
            D_0040E618[-1] = temp_4;
        } else {
            func_002B2028(&D_0040E618, sp0);
        }
    }
}
