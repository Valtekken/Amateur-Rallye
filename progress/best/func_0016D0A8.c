extern f32 fabsf(f32);
extern void func_0016D178(void *, void *);
extern void func_0016D198(void *, void *);
extern void func_0016D1B8(void *, f32);
extern void func_0016D220(void *, f32);
extern f32 func_0016D2F0(void);

void func_0016D0A8(void *arg0) {
    f32 sp0;
    f32 v = func_0016D2F0();
    f32 t;
    if (*(s32 *)((char *)arg0 + 0x14) == 0) func_0016D1B8(arg0, v);
    if (*(s32 *)((char *)arg0 + 0x18) == 0) func_0016D220(arg0, v);
    sp0 = 0.0f;
    if (*(s32 *)((char *)arg0 + 0x14) != 0) func_0016D178(arg0, &sp0);
    if (*(s32 *)((char *)arg0 + 0x18) != 0) func_0016D198(arg0, &sp0);
    t = sp0 * (fabsf(v * 10.0f) + 0.5f);
    sp0 = t;
    sp0 = ((f32 (*)(f32, f32, f32))func_0015ACE0)(t, -20.0f, 25.0f);
}
