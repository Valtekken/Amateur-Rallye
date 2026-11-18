void *func_0022FA48(void *arg0, void *arg1) {
    f32 ax = *(f32 *)arg0;
    f32 ay = *(f32 *)((u8 *)arg0 + 4);
    f32 az = *(f32 *)((u8 *)arg0 + 8);
    f32 bx = *(f32 *)arg1;
    f32 by = *(f32 *)((u8 *)arg1 + 4);
    f32 bz = *(f32 *)((u8 *)arg1 + 8);
    f32 dx = ax - bx;
    f32 dy = ay - by;
    f32 dz = az - bz;
    f32 best = dx*dx + dy*dy + dz*dz;
    void *bestp = arg0;
    s32 n = (*(s32 *)((u8 *)arg0 + 0x2C) - (s32)arg0? 0 : 0) >> 4; /* placeholder */
    /* fix n below */
    n = (*(s32 *)((u8 *)arg0 + 0x2C) - (s32)bestp) >> 4;
    if (n > 1) {
        s32 i = n - 1;
        void *p = (u8 *)bestp + 0x10;
        f32 bx2 = bx;
        f32 bz2 = bz;
        do {
            f32 px = *(f32 *)p;
            f32 py = *(f32 *)((u8 *)p + 4);
            f32 pz = *(f32 *)((u8 *)p + 8);
            f32 ddx = px - bx2;
            f32 ddy = py - by;
            f32 ddz = pz - bz2;
            f32 dist = ddx*ddx + ddy*ddy + ddz*ddz;
            i--;
            if (dist < best) {
                best = dist;
                bestp = p;
            }
            p = (u8 *)p + 0x10;
        } while (i != 0);
    }
    return bestp;
}

extern void func_0022C9E0(void *, s32);
extern void func_002441A0(void *, s32);
extern void D_002AD390(void *);

void func_00230560(void *arg0, s32 arg1) {
    void *p0 = *(void **)((u8 *)arg0 + 0);
    if (p0 != 0) {
        func_0022C9E0(p0, 3);
    }
    void *p1 = *(void **)((u8 *)arg0 + 4);
    if (p1 != 0) {
        func_002441A0(p1, 3);
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

extern s32 func_00232380(void *, void *);

s32 func_0022F0E8(void *unused, void *arg1, s32 n, void *off) {
    s32 i = 0;
    s32 ret = 1;
    if (n > 0) {
        void *p = off;
        do {
            ret = func_00232380(arg1, p);
            if (ret > 0) return ret;
            i++;
            p = (u8 *)p + 0xC;
        } while (i < n);
    }
    return 1;
}

extern s32 func_00231FE0(void *, void *);

s32 func_0022F048(void *arg0, void *arg1) {
    void *begin = *(void **)((u8 *)arg0 + 0x10);
    void *end = *(void **)((u8 *)arg0 + 0x14);
    s32 n = (s32)((u8 *)end - (u8 *)begin) / 28;
    s32 i = 0;
    s32 off = 0;
    if (n > 0) {
        do {
            if (func_00231FE0(arg1, (u8 *)begin + off) != 0) return 0;
            i++;
            off += 0x1C;
        } while (i < n);
    }
    return 1;
}
