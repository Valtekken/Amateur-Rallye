extern s32 D_004297F4;
extern s32 D_004297F8;
extern void *func_002D04D0(void);
extern s32 func_0030C930(s32, s32, s32);

void func_002CEDC8(f32 fparg0) {
    s32 var_16;
    s32 var_17;
    s32 temp;
    void *ptr;
    f32 f1;
    f32 prod;
    s32 clamped;
    
    if (D_004297F4 != 0) {
        var_17 = 0;
        var_16 = 0;
    } else {
        ptr = func_002D04D0();
        f1 = *(f32*)((u8*)ptr + 0x14);
        prod = fparg0 * 16382.0f * f1;
        temp = (s32)prod;
        
        if (temp >= 0) {
            clamped = (temp < 0x3000) ? temp : 0x2FFF;
        } else {
            clamped = 0;
        }
        var_17 = clamped;
        var_16 = clamped;
    }
    
    if (D_004297F8 != var_16) {
        func_0030C930(0, var_16, var_17);
        func_0030C930(1, var_16, var_17);
        D_004297F8 = var_16;
    }
}
