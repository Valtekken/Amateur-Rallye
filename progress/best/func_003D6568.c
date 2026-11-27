/* func_003D6568: with struct types */ 
typedef struct {
    s32 unk4;
    void *unk0;
} S_func_003D5D00_arg0;

extern s32 func_003D4D70(s32, s32, s32);
extern s32 func_003D9E30(void *, s32, s32, s8, s32, s32);

void func_003D6568(void *arg0, s32 arg1, s32 arg2, s8 arg3) {
    S_func_003D5D00_arg0 *p0 = (S_func_003D5D00_arg0 *)arg0;
    
    p0->unk4 = 0;
    
    if (arg2 <= 0) {
        /* temp_4 = arg0->unk0; */
        /* temp_4->unk1A = (u8)(temp_4->unk1A | 2); */
        /* return arg0; */
        return;
    }
    
    /* temp_3 = arg0->unk0; */
    /* temp_2 = temp_3->unk1A; */
    /* if (temp_2 != 0) */;
    /*     var_4 = 0; */
    /*     temp_3->unk1A = (u8)(temp_2 | 2); */
    /* } else { */
    /*     temp_5 = temp_3->unk4; */
    /*     var_4 = 1; */
    /*     if (temp_5 != 0) */;
    /*         temp_2_2 = temp_3->unk0; */
    /*         var_4 = 1; */
    /*         if (temp_2_2->unk8 == temp_2_2->unk4) */;
    /*             func_003D4D70(temp_5, temp_5, arg3 << 0x18); */
    /*             var_4 = 1; */
    /*         */;
    /*     */;
    /* } */
    /* if (var_4 != 0) */;
    /*     temp_2_3 = func_003D9E30(arg0->unk0->unk0, arg1, arg2 - 1, arg3, -1, sp); */
    /*     arg0->unk4 = temp_2_3; */
    /*     if ((temp_2_3 == 0) && (sp0 == -1)) */;
    /*         temp_3_2 = arg0->unk0; */
    /*         temp_3_2->unk1A = (u8)(temp_3_2->unk1A | 3); */
    /*     */;
    /* */;
    /* *(arg1 + arg0->unk4) = 0; */
    /* return; */
}
