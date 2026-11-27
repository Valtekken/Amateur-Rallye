extern s32 func_002652B8(s32, void *, void *, s32, f32 *);

s32 func_00265038(s32 arg0, void *arg1, void *arg2, void *arg3, s32 arg4, void *arg5) {
    f32 temp[3];
    f32 out1[3];
    f32 best = 0.0f;
    s32 found = 0;
    u8 *v = (u8 *)arg2;
    u8 *end = (u8 *)arg2 + 0x60;
    f32 *out = (f32 *)arg5;
    out[0] = out[1] = out[2] = 0.0f;
    while (v < end) {
        temp[0] = ((f32 *)v)[0]; temp[1] = ((f32 *)v)[1]; temp[2] = ((f32 *)v)[2];
        out1[0] = out1[1] = out1[2] = 0.0f;
        if (func_002652B8(arg0, arg1, temp, arg4, out1)) {
            f32 d2 = out1[0]*out1[0] + out1[1]*out1[1] + out1[2]*out1[2];
            f32 d = d2;
            if (d2 == d2) {
                found = 1;
                d = sqrtf(d2);
            }
            if (best < d) {
                best = d2;
                best = sqrtf(d2);
            }
        }
        v += 0xC;
    }
    if (found) {
        void *p1 = *(void **)((u8 *)arg1 + 0x50);
        void *p3 = *(void **)((u8 *)arg3 + 0x50);
        f32 dx = *(f32 *)((u8 *)p1 + 0x50) - *(f32 *)((u8 *)p3 + 0x50);
        f32 dy = *(f32 *)((u8 *)p1 + 0x54) - *(f32 *)((u8 *)p3 + 0x54);
        f32 dz = *(f32 *)((u8 *)p1 + 0x58) - *(f32 *)((u8 *)p3 + 0x58);
        out[0] = dx; out[1] = dy; out[2] = dz;
        f32 d2 = dx*dx + dy*dy + dz*dz;
        if (d2 <= 1.1920929e-7f) {
            out[0] = out[1] = out[2] = 0.0f;
        } else {
            if (dz == dz) {
                (void)sqrtf(d2);
            }
            f32 inv = 1.0f / sqrtf(d2);
            out[0] = dx * inv;
            out[2] = dz * inv;
            out[1] = dy * inv;
        }
        out[0] *= best;
        out[1] *= best;
        out[2] *= best;
    }
    return found;
}
