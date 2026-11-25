extern s32 func_00196E10(void);
extern void func_00196930(s32, s32, f32);
extern f32 func_00196A70(s32, s32);
extern void func_00196A00(s32, s32, f32);

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    f32 unkC;
} S_UnkStruct;

typedef struct {
    s32 unk0[9];
    s32 array_base;
    s32 array_end;
} S_func_001364D0_arg0;

void func_001364D0(S_func_001364D0_arg0 *arg0) {
    s32 *array = (s32 *)arg0->array_base;
    s32 base = arg0->array_base;
    s32 end = arg0->array_end;
    s32 count = (end - base) >> 2;
    
    if (count != 0) {
        s32 i = 0;
        do {
            s32 idx = i << 2;
            s32 *elem_ptr = (s32 *)((u8 *)array + idx);
            S_UnkStruct *elem = (S_UnkStruct *)*elem_ptr;
            s32 val = elem->unk0;
            f32 fval = elem->unkC;
            
            s32 r1 = func_00196E10();
            func_00196930(r1, val, fval);
            
            s32 r2 = func_00196E10();
            f32 fval2 = func_00196A70(r2, val);
            
            s32 r3 = func_00196E10();
            func_00196A00(r3, val, fval2 + fval);
            
            i++;
        } while (i < count);
    }
}
