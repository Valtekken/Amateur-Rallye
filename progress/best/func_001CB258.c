typedef struct { float f[16]; } Mat_001CB258;

void func_001CB258(Mat_001CB258 *a, Mat_001CB258 *b) {
    float f4, f1, f0, f2, inv, t3, t8, t6, t1, t9, t7, t4, t11, t10;
    unsigned int ui;
    float thr;
    float *t, *u, *v;
    Mat_001CB258 tmp;
    if (a != b) {
        f4 = a->f[0];
        f1 = a->f[1];
        f0 = a->f[2];
        f2 = f4*f4 + f1*f1 + f0*f0;
        t = b->f + 4;
        u = b->f + 8;
        v = b->f + 12;
        ui = 0x34000000u;
        thr = *(float*)&ui;
        if (thr < f2) {
            inv = 1.0f / f2;
            t3 = f4 * inv;
            b->f[0] = t3;
            t8 = a->f[1] * inv;
            b->f[4] = t8;
            t6 = a->f[2] * inv;
            b->f[8] = t6;
            t1 = a->f[4] * inv;
            b->f[1] = t1;
            t9 = a->f[5] * inv;
            b->f[5] = t9;
            t7 = a->f[6] * inv;
            b->f[9] = t7;
            t4 = a->f[8] * inv;
            b->f[2] = t4;
            t11 = a->f[9] * inv;
            b->f[6] = t11;
            t10 = a->f[10] * inv;
            b->f[10] = t10;
            b->f[12] = -(t3*a->f[12] + t8*a->f[13] + t6*a->f[14]);
            b->f[13] = -(t1*a->f[12] + t9*a->f[13] + t7*a->f[14]);
            b->f[15] = 1.0f;
            b->f[3] = 0.0f;
            b->f[7] = 0.0f;
            b->f[11] = 0.0f;
            b->f[14] = -(t4*a->f[12] + t11*a->f[13] + t10*a->f[14]);
        } else {
            b->f[1] = 0.0f;
            b->f[0] = 1.0f;
            b->f[2] = 0.0f;
            b->f[3] = 0.0f;
            b->f[4] = 0.0f;
            t[3] = 0.0f;
            t[1] = 1.0f;
            t[2] = 0.0f;
            u[0] = 0.0f;
            u[3] = 0.0f;
            u[1] = 0.0f;
            u[2] = 1.0f;
            v[0] = 0.0f;
            v[3] = 1.0f;
            v[1] = 0.0f;
            v[2] = 0.0f;
        }
    } else {
        func_001CB258(a, &tmp);
        a->f[0]=tmp.f[0]; a->f[1]=tmp.f[1]; a->f[2]=tmp.f[2]; a->f[3]=tmp.f[3];
        a->f[4]=tmp.f[4]; a->f[5]=tmp.f[5]; a->f[6]=tmp.f[6]; a->f[7]=tmp.f[7];
        a->f[8]=tmp.f[8]; a->f[9]=tmp.f[9]; a->f[10]=tmp.f[10]; a->f[11]=tmp.f[11];
        a->f[12]=tmp.f[12]; a->f[13]=tmp.f[13]; a->f[14]=tmp.f[14]; a->f[15]=tmp.f[15];
    }
}
