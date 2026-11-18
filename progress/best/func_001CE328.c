extern s32 D_002AD390(s32);
extern void func_001DF180(void *, s32);
extern void func_002B2028(u32);
extern u32 D_0040E618[];

void func_001CE328(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 var_4;
    u32 temp_17;
    u32 temp_4;
    u32 var_16;
    void *temp_18;

    temp_18 = arg0 + 0x14;
    var_16 = *(u32 *)((char *)arg0 + 0x14);
    temp_17 = *(u32 *)((char *)temp_18 + 4);
    if (var_16 < temp_17) {
        var_4 = *(s32 *)((char *)var_16 + 4);
loop_2:
        var_16 += 8;
        D_002AD390(var_4);
        if (var_16 < temp_17) {
            var_4 = *(s32 *)((char *)var_16 + 4);
            goto loop_2;
        }
    }
    temp_4 = *(u32 *)((char *)arg0 + 0x14);
    temp_2 = (s32) (*(s32 *)((char *)temp_18 + 8) - temp_4) >> 3;
    if (temp_2 != 0) {
        if ((temp_2 * 8) != 0) {
            func_002B2028(temp_4);
        } else {
            *(u32 *)temp_4 = D_0040E618[-1];
            D_0040E618[-1] = temp_4;
        }
    }
    func_001DF180(arg0, arg1);
}
