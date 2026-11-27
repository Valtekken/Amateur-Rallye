typedef struct Node { s32 unk4; s32 unk8; s32 unk10; } Node;
extern s32 func_002B1FC0(s32, s32); extern s32 func_0034CA60(s32 *, s32 *); extern s32 func_003D2910(s32);
void *func_0034CB68(void *arg0, void *arg1, s32 *arg2) {
    s32 temp_5 = *(s32 *)((char *)arg1 + 4);
    s32 temp_hi = (u32)*arg2 % (u32)(((s32)*(s32 *)((char *)arg1 + 8) - temp_5) >> 2);
    s32 var_5 = temp_5 + (temp_hi * 4);
    void *temp_19;
    s32 var_16; s32 var_4_2;
    if (temp_19 != NULL) {
        s32 var_3 = ((Node *)temp_19)->unk4;
    loop_2:
        if (var_3 != *arg2) {
            temp_19 = *(void **)((char *)temp_19);
            if (temp_19 != NULL) {
                var_3 = ((Node *)temp_19)->unk4;
                goto loop_2;
            }
        }
        return arg0;
    }
    var_16 = func_002B1FC0(0x14, var_5);
    var_4_2 = var_16 + 4;
    if (var_16 == 0) {
        var_16 = func_003D2910(0x14);
        var_4_2 = var_16 + 4;
    }
    * (s32 *)((char *)var_16) = 0;
    if (var_4_2 != 0) {
        func_0034CA60(var_4_2, arg2);
    }
    temp_19 = *(void **)((char *)var_5);
    *(void **)((char *)var_5) = (void *)var_16;
    *(s32 *)((char *)arg1 + 8) = (s32)(((s32 *)arg1)[1] + (temp_hi * 4));
    *(s32 *)((char *)arg1 + 0xC) = (s32)(((s32 *)arg1)[2] + 1);
    ((s32 *)arg0)[1] = 1;
    return arg0;
}
