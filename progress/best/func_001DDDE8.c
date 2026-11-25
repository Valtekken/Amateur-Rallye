extern void *D_002AD408(s32);
extern void D_002AD390(void *);
extern s32 func_002B54B8(void *, s32, s32);
extern s32 func_002B5590(void *, void *, s32, s32, s32, s32);
extern void func_002B5608(void *);

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} Arg2Struct;

s32 func_001DDDE8(s32 arg0, void *arg1, Arg2Struct *arg2) {
    s32 var_19 = 0;
    void *temp_2 = D_002AD408(0xC);
    s32 *p = (s32 *)temp_2;
    
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    
    if (func_002B54B8(temp_2, (s32)arg1, 1) != 0) {
        s16 sp0 = 0x3039;
        s16 sp2 = 1;
        s16 sp4 = (s16)arg2->unkC;
        s16 sp6 = (s16)arg2->unk10;
        
        struct {
            s16 f0;
            s16 f2;
            s16 f4;
            s16 f6;
        } stack_struct = { sp0, sp2, sp4, sp6 };
        
        if (func_002B5590(temp_2, &stack_struct, 8, sp6, 0x3039, 1) != 0) {
            s32 mult_result = (s32)sp4 * (s32)sp6;
            var_19 = func_002B5590(temp_2, (void *)arg2->unk8, mult_result * 4, 0, 0, 0);
        }
        func_002B5608(temp_2);
    }
    
    if (temp_2 != NULL) {
        if (p[1] != 0) {
            func_002B5608(temp_2);
        }
        D_002AD390(temp_2);
    }
    
    return var_19;
}
