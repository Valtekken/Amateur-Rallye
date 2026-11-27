extern s32 func_002CDD80(s32);
extern s32 func_0030D400(s32);
extern s32 func_003FA310(s32, s8 *, s32);
extern s32 func_003FA9B8(s8 *);
extern char D_00429B78[];
extern char D_004836C0[];
extern char D_004836C8[];

void func_002CF660(void) {
    s32 var_21;
    s32 temp_2;
    s32 var_16;
    s32 var_3;
    s32 sp40;

    var_21 = 0;
    do {
        sp40 = 0;
        temp_2 = func_0030D400(var_21);
        var_16 = -1;
        if (temp_2 != 0) {
            var_16 = func_002CDD80(var_21);
        }
        var_3 = (temp_2 >= 0 && temp_2 < 5) ? temp_2 : 4;
        // store byte 0x20 at sp40+1; sp40[0] = D_00429B78[var_3];
        if (var_16 >= 0) {
            func_003FA310(var_16, D_004836C0, var_16);
        } else {
            func_003FA310(var_16, D_004836C8, var_16);
        }
        var_21 += 0x18;
    } while (var_21 < 0x30);
}
