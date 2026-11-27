extern void func_001D4040(void *, const char *);
extern char D_0044F108[];
extern char D_00474208[];

void *func_00163B70(void *arg0) {
    s32 k[4];
    f32 one, f180, f20, f80, f40;
    func_001D4040(k, D_0044F108);
    one = 1.0f;
    f180 = 180.0f;
    f20 = 20.0f;
    f80 = 80.0f;
    f40 = 40.0f;
    ((s32 *)arg0)[1] = k[0];
    ((s32 *)arg0)[0] = -1;
    ((void **)arg0)[2] = (void *)D_00474208;
    ((f32 *)arg0)[6] = f180;
    ((f32 *)arg0)[7] = f20;
    ((f32 *)arg0)[9] = f80;
    ((f32 *)arg0)[10] = f40;
    ((f32 *)arg0)[11] = one;
    ((s32 *)arg0)[5] = 0;
    ((s32 *)arg0)[3] = 0;
    ((s32 *)arg0)[4] = 0;
    return arg0;
    ((f32 *)arg0)[8] = one;
}
