extern void func_00297130(void *, void *);

void func_00296D38(void *a, void *b)
{
    f32 s0, s4, s8;
    f32 f1;
    void *temp_6;
    void *m;

    f1 = *(f32 *)((char *)a + 0x5C);
    if (*(f32 *)((char *)a + 0x28) < f1 && f1 < *(f32 *)((char *)a + 0x2C)) {
        s0 = s4 = s8 = 0.0f;
        func_00297130(&s0, a);
        if (*(s32 *)((char *)a + 0x60) == 0) { s0 = -s0; s4 = -s4; s8 = -s8; }

        temp_6 = (char *)a + 0x34;
        *(f32 *)temp_6 = *(f32 *)temp_6 + s0;
        *(f32 *)((char *)temp_6 + 4) = *(f32 *)((char *)temp_6 + 4) + s4;
        *(f32 *)((char *)temp_6 + 8) = *(f32 *)((char *)temp_6 + 8) + s8;

        m = *(void **)((char *)b + 0x4C);
        if (m == 0) m = *(void **)((char *)b + 0x50);
        {
            f32 *M = (f32 *)((char *)m + 0x20);
            M[0] = 1.0f; M[1] = 0.0f; M[2] = 0.0f; M[3] = 0.0f;
            M[4] = 0.0f; M[5] = 1.0f; M[6] = 0.0f; M[7] = 0.0f;
            M[8] = 0.0f; M[9] = 0.0f; M[10] = 1.0f; M[11] = 0.0f;
            M[12] = 0.0f; M[13] = 0.0f; M[14] = 0.0f; M[15] = 1.0f;
            M[12] = *(f32 *)temp_6;
            M[13] = *(f32 *)((char *)temp_6 + 4);
            M[14] = *(f32 *)((char *)temp_6 + 8);
            M[15] = 1.0f;
        }
    }
}
