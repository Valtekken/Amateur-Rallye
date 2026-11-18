void func_00200460(void *arg0, f32 fparg0) {
    f32 neg = -fparg0;
    f32 *b = (f32*)((char*)arg0 + 0xB0);
    f32 *c = (f32*)((char*)arg0 + 0xC0);
    f32 t0 = b[0] * neg;
    f32 t1 = b[1] * neg;
    f32 t2 = b[2] * neg;
    volatile f32 sp8 = neg;
    volatile f32 sp10 = t0;
    volatile f32 sp14 = t1;
    volatile f32 sp18 = t2;
    (void)sp8;(void)sp10;(void)sp14;(void)sp18;
    c[0] += t0;
    c[1] += t1;
    c[2] += t2;
}
