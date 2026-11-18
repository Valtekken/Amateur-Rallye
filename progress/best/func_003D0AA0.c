s32 func_003CD948(s32, s32, u32, s32, s32); /* extern */
s32 func_003FA9B8(s32); /* extern */
s32 func_001E4280(void); /* extern */

void func_003D0AA0(s32 arg0, s32 arg1) {
    s32 t = func_003FA9B8(arg1);
    func_003CD948(arg0, 0, 0xFFFFFFFFu, arg1, t);
    func_001E4280();
}
