extern void func_00260708(void *, void *, void *, void *);

typedef struct { void *p0; f32 f4; f32 f8; f32 fC; } A;
typedef struct { f32 f0; f32 f4; f32 f8; } B;

void func_00260790(A *arg0, B *arg1, s32 *arg2, s32 *arg3) {
    s32 sp0 = 0;
    s32 sp4 = 0;
    f32 temp_f0;
    f32 half;
    f32 sp0f;

    func_00260708(arg0, arg1, &sp0, &sp4);
    temp_f0 = arg0->fC;
    sp0f = (f32)sp0;
    half = temp_f0 * 0.5f;
    if (half < arg1->f0 - (arg0->f4 + temp_f0 * sp0f)) {
        sp0 += 1;
    }
    *arg2 = sp0;
    {
        f32 temp_f2 = arg0->fC;
        f32 sp4f = (f32)sp4;
        f32 half2 = temp_f2 * 0.5f;
        if (half2 < arg1->f8 - (arg0->f8 + sp4f * temp_f2)) {
            sp4 += 1;
        }
    }
    *arg3 = sp4;
}
