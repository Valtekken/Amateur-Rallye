typedef struct { f32 x, y, z, w; } V;
extern f32 D_00472CA4;

u32 func_001B0878(void *arg0, void *arg1) {
    volatile V tv, pv;
    f32 ty = *(f32 *)((char *)arg0 + 0x74);
    s32 base = *(s32 *)((char *)arg1 + 0);
    void *t = (char *)arg0 + 0x74;
    tv.x = ty;
    u32 i = 0;
    f32 thr = D_00472CA4;
    tv.y = *(f32 *)((char *)t + 4);
    u32 best = 0;
    f32 tx = *(f32 *)((char *)t + 8);
    tv.y = 0.0f;
    s32 n = (s32)((*(s32 *)((char *)arg1 + 4) - base) * 0xCCCCCCCD) >> 4;
    tv.z = tx;
    f32 mid = tv.y;
    if (n != 0) {
        void *p = (char *)base + 0x40;
        do {
            f32 px = *(f32 *)p;
            pv.x = px;
            f32 dx = px - ty;
            pv.y = *(f32 *)((char *)p + 4);
            f32 pz = *(f32 *)((char *)p + 8);
            pv.y = 0.0f;
            f32 dz = pz - tx;
            f32 dist = dx * dx + mid + dz * dz;
            pv.z = pz;
            if (dist < thr) {
                thr = dist;
                best = i;
            }
            i++;
            p = (char *)p + 0x50;
        } while (i < (u32)n);
    }
    return best;
}
