typedef struct {
    void *field0; // +0x0
    void *field4; // +0x4
    s32 field8;   // +0x8
} S_func_0039EEC0_arg0;

typedef char sp_buffer[0x60];
extern s32 func_003AA230(s32);
extern void func_0039EE60(void *, s32);
extern void func_0039EEC0(void *, s32, void *);
extern void func_003A9EE8(void *, s32);
extern s32 func_003AA1C0(s32);
extern s32 func_0039E8B0(s32, s32, s32);
extern s32 func_003AA1F8(s32);

void *func_0039EF58(void *arg0, s32 arg1) {
    s32 temp_18;
    s32 temp_18_2;
    sp_buffer sp;

    temp_18 = func_003AA230(arg1);
    func_0039EE60(sp, arg1);
    func_0039EEC0(arg0, temp_18, sp);
    func_003A9EE8(sp, 2);
    temp_18_2 = func_003AA1C0(arg1);
    ((S_func_0039EEC0_arg0 *)arg0)->field4 = func_0039E8B0(temp_18_2, func_003AA1F8(arg1), ((S_func_0039EEC0_arg0 *)arg0)->field8);
    return arg0;
}
