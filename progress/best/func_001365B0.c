typedef struct { s32 pad[9]; void **start; void **end; } A365;
typedef struct { s32 a; s32 p1; s32 p2; f32 c; s32 b; } O365;
extern void *func_00196E10();
extern void func_00196930(void *, s32, f32);
extern void func_00196C70(void *, s32, s32);
extern s32 func_00196DB0(void *, s32);
extern void func_00196D40(void *, s32, s32);

void func_001365B0(A365 *arg0) {
    void ***p;
    u32 i;
    for (i = 0; i < (u32)(((p = &arg0->start)[1]) - arg0->start); ) {
        void **base = *(void **volatile *)((char *)arg0 + 36);
        O365 *obj = *(O365 **)((char *)base + (i << 2));
        s32 a = obj->a;
        s32 b = obj->b;
        f32 c = obj->c;
        s32 v;
        i++;
        func_00196930(func_00196E10(i * 4), a, c);
        func_00196C70(func_00196E10(), a, b);
        v = func_00196DB0(func_00196E10(), a);
        func_00196D40(func_00196E10(), a, v + b);
    }
}
