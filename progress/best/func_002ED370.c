extern void func_001CB258(void *arg0, void *arg1);

void func_002ED370(void *arg0, void *arg1) {
    f32 *src = (f32 *)arg0;
    f32 *dst = (f32 *)arg1;
    u32 *dstu = (u32 *)arg1;

    f32 x0 = src[0];
    f32 x1 = src[1];
    f32 x2 = src[2];
    f32 sum = x0 * x0 + x1 * x1 + x2 * x2;

    if (sum > 1.1920929e-7f) {
        f32 inv = 1.0f / sum;
        f32 m0 = x0 * inv;
        f32 m1 = x1 * inv;
        f32 m2 = x2 * inv;
        dst[0] = m0;
        dst[4] = m1;
        dst[8] = m2;
        dst[1] = src[4] * inv;
        dst[5] = src[5] * inv;
        dst[9] = src[6] * inv;
        dst[2] = src[8] * inv;
        dst[6] = src[9] * inv;
        dst[10] = src[10] * inv;
        dst[12] = -((m0 * src[12]) + (m1 * src[13]) + (m2 * src[14]));
        dst[13] = -(((src[4] * inv) * src[12]) + ((src[5] * inv) * src[13]) + ((src[6] * inv) * src[14]));
        dst[14] = -(((src[8] * inv) * src[12]) + ((src[9] * inv) * src[13]) + ((src[10] * inv) * src[14]));
        dst[15] = 1.0f;
        dstu[3] = 0;
        dstu[7] = 0;
        dstu[11] = 0;
    } else {
        dst[0] = 1.0f;
        dst[5] = 1.0f;
        dst[10] = 1.0f;
        dst[15] = 1.0f;
        dstu[1] = 0;
        dstu[2] = 0;
        dstu[3] = 0;
        dstu[4] = 0;
        dstu[7] = 0;
        dstu[8] = 0;
        dstu[11] = 0;
        dstu[12] = 0;
        dstu[13] = 0;
        dstu[14] = 0;
    }
}
