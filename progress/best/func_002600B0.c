extern s32 func_00233CA8(void *);
extern s32 func_00244788(void *);
extern s32 func_0024F6E0(void **, s32);

s32 func_002600B0(void *arg0, void *arg1, void *arg2) {
    f32 f0, f1, f2, f3, f4, f5, f6, f7;
    void *sp10;
    void *temp_ptr;
    s32 temp_int;
    s32 (*func_ptr)(void *, s32, void *);
    s32 result;

    func_00233CA8(arg1);
    func_00244788(arg2);
    func_0024F6E0(&sp10, *(s32 *)arg1);
    temp_ptr = *(void **)((char *)sp10 + 0x14);
    f0 = *(f32 *)temp_ptr;
    f1 = *(f32 *)((char *)temp_ptr + 4);
    f2 = *(f32 *)((char *)temp_ptr + 8);
    if (sp10 != NULL) {
        temp_int = *(s32 *)sp10 - 1;
        *(s32 *)sp10 = temp_int;
        if (temp_int == 0) {
            temp_ptr = *(void **)((char *)sp10 + 4);
            func_ptr = *(s32 (**)(void *, s32, void *))((char *)temp_ptr + 0xC);
            func_ptr((char *)temp_ptr + *(s16 *)((char *)temp_ptr + 8), 3, sp10);
        }
    }
    f3 = f0 - *(f32 *)((char *)arg2 + 0x1C);
    f4 = f1 - *(f32 *)((char *)arg2 + 0x20);
    f5 = f2 - *(f32 *)((char *)arg2 + 0x24);
    f6 = *(f32 *)((char *)arg1 + 4) + *(f32 *)((char *)arg2 + 0x14) + (*(f32 *)((char *)arg2 + 0x18) * 0.5f);
    f3 = f3 * f3;
    f4 = f4 * f4;
    f5 = f5 * f5;
    f6 = f6 * f6;
    f3 = f3 + f4;
    f3 = f3 + f5;
    result = 1;
    if (!(f3 < f6)) {
        result = 0;
    }
    return result;
}
