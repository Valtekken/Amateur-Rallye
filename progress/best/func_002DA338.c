extern void func_002DA188(void *base, s32 idx, s32 count, void *sp, s32 i0, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7);

typedef struct {
    f32 f[8];
} Vec8f;

void func_002DA338(Vec8f *arg0, Vec8f *arg1) {
    s32 count;
    s32 loop_count;
    s32 i;
    char *ptr;
    s32 stack_i0;
    f32 stack_f0, stack_f1, stack_f2, stack_f3, stack_f4, stack_f5, stack_f6, stack_f7;
    
    count = ((char *)arg1 - (char *)arg0) >> 5;
    if (count < 2) {
        return;
    }
    loop_count = (count - 1) >> 1;
    ptr = (char *)arg0 + loop_count * 32 + 16;
    i = loop_count;
    
    do {
        stack_i0 = *(s32 *)(ptr - 16);
        stack_f0 = *(f32 *)(ptr - 12);
        stack_f1 = *(f32 *)(ptr - 8);
        stack_f2 = *(f32 *)(ptr - 4);
        stack_f3 = *(f32 *)(ptr + 0);
        stack_f4 = *(f32 *)(ptr + 4);
        stack_f5 = *(f32 *)(ptr + 8);
        stack_f6 = *(f32 *)(ptr + 12);
        
        func_002DA188(arg0, i, count, &stack_i0, stack_i0, stack_f0, stack_f1, stack_f2, stack_f3, stack_f4, stack_f5, stack_f6, 0);
        
        ptr -= 32;
        i--;
    } while (i != 0);
}
