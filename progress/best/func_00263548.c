typedef struct {
    void *begin;
    void *end;
    void *cap;
} Vec;

typedef struct {
    void *begin;
    void *end;
} Vec2;

extern s32 D_002AD408(s32);
extern s32 func_001577C8(void *, s32 *, s32 *);
extern s32 func_0021E290(s32);
extern s32 func_0021E9C0(s32, s32 *, s32 *);
extern s32 func_0021F4B0(s32);

void func_00263548(Vec *arg0, Vec2 *arg1) {
    s32 stack[16];
    
    Vec2 *s2 = arg1;
    Vec *s0 = arg0;
    s32 s1 = 0;
    s32 count;
    char *element;
    s32 res1;
    s32 res2;
    s32 res3;
    
    count = ((char*)s2->end - (char*)s2->begin) >> 5;
    if (count == 0) goto L_end;
    
L_loop:
    element = (char*)s2->begin + s1 * 32;
    
    stack[0] = *(s32*)element;
    *(f32*)&stack[1] = *(f32*)(element + 4);
    *(f32*)&stack[2] = *(f32*)(element + 8);
    *(f32*)&stack[3] = *(f32*)(element + 12);
    *(f32*)&stack[4] = *(f32*)(element + 16);
    *(f32*)&stack[5] = *(f32*)(element + 20);
    *(f32*)&stack[6] = *(f32*)(element + 24);
    *(f32*)&stack[7] = *(f32*)(element + 28);
    
    res1 = func_0021F4B0(*(s32*)element);
    stack[8] = *(s32*)element;
    
    res2 = func_0021E9C0(res1, (s32*)(element + 4), &stack[8]);
    
    if (res2 == 0) goto L_res2_zero;
    
    stack[12] = (s32)(element + 4);
    if (s0->end == s0->cap) goto L_full_res2_nonzero;
    
L_not_full_res2_nonzero:
    if (s0->end != NULL) {
        *(s32*)s0->end = (s32)(element + 4);
    }
    s0->end = (char*)s0->end + 4;
    goto L_loop_inc;
    
L_full_res2_nonzero:
    func_001577C8(s0, (s32*)&s0->end, &stack[12]);
    goto L_loop_inc;
    
L_res2_zero:
    res3 = func_0021E290(D_002AD408(0x7C));
    stack[13] = res3;
    if (s0->end == s0->cap) goto L_full_res2_zero;
    
L_not_full_res2_zero:
    stack[13] = (s32)(element + 4);
    
L_full_res2_zero:
    func_001577C8(s0, (s32*)&s0->end, &stack[13]);
    
L_loop_inc:
    s1++;
    if (s1 < count) goto L_loop;
    
L_end:
    return;
}
