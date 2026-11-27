/* func_003D9BF0: simple char loop */ 
void func_003D9BF0(s32 arg0, s32 arg1) {
    s32 var_8 = 0xFF;
    s32 var_2 = arg0 + 0xFF;
    s32 var_7 = arg1;
    s32 var_9 = 0;
    s32 temp_8;
    s32 temp_8_2;
    
    if (var_7 == 0x5E) {
        var_9 = 1;
    }
    
    do {
        var_2 = var_2 - 1;
        *((char *)var_2) = (char)var_9;
    } while (var_8 >= 0);
    
    temp_8 = 1 - var_9;
    
    for (;;) {
        if (*((char *)var_7) == 0x2D) {
            temp_8_2 = *((char *)var_7 + 1);
            if (temp_8_2 != 0x5D) {
                if ((s32)temp_8_2 >= var_7) {
                    var_7 = 0x2D;
                    goto loop_8;
                }
            } else {
                var_7 = 0x2D;
                goto loop_8;
            }
            goto loop_9;
        }
loop_9:;
    }
loop_8:
    ;
}
