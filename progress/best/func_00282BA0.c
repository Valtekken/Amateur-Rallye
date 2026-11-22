extern void *func_00262FF8(s32);
typedef struct { f32 x, y, z, w; } V;
#define F(p,o) (*(f32*)((char*)(p)+(o)))
#define S(p,o) (*(s32*)((char*)(p)+(o)))
#define P(p,o) (*(void**)((char*)(p)+(o)))

void func_00282BA0(void *arg0, void *arg1) {
    volatile V a, b;
    s32 h = S(arg1,0x50);
    S(arg0,0x28) = 0;
    a.x = 0.0f; a.y = 0.0f; a.z = 0.0f;
    b.x = 0.0f; b.y = 0.0f; b.z = 0.0f;
    if (h != 0 && func_00262FF8(h) != 0) {
        void *r2 = func_00262FF8(S(arg1,0x50));
        a.x = F(r2,0x14); a.y = F(r2,0x18); a.z = F(r2,0x1C);
        void *r3 = func_00262FF8(S(arg1,0x50));
        b.x = F(r3,0x20); b.y = F(r3,0x24); b.z = F(r3,0x28);
    }
    u32 sel = S(arg0,0xC);
    switch (sel) {
    case 0: {
        f32 by = b.y;
        f32 dy = __builtin_fabsf(by - a.y), dz = __builtin_fabsf(b.z - a.z);
        S(arg0,0x1C) = 0; S(arg0,0x20) = 0; S(arg0,0x24) = 0;
        F(arg0,0x14) = dz * 0.5f - 0.12f;
        F(arg0,0x18) = by - dy / 100.0f * 5.0f;
        break;
    }
    case 1: {
        f32 dy = __builtin_fabsf(b.y - a.y), dz = __builtin_fabsf(b.z - a.z);
        S(arg0,0x1C) = 0; S(arg0,0x20) = 0; S(arg0,0x24) = 0;
        F(arg0,0x14) = dz * 0.5f - 0.12f;
        F(arg0,0x18) = dy / 100.0f * 25.0f;
        break;
    }
    case 2: {
        f32 dy = __builtin_fabsf(b.y - a.y), dz = __builtin_fabsf(b.z - a.z);
        S(arg0,0x20) = 1; S(arg0,0x1C) = 0; S(arg0,0x24) = 0;
        F(arg0,0x14) = -(dz * 0.5f - 0.1f);
        F(arg0,0x18) = dy / 100.0f * 50.0f;
        break;
    }
    case 3:
        F(arg0,0x14) = -0.6f; F(arg0,0x18) = 0.5f;
        F(arg0,0x1C) = a.x - 0.9f; S(arg0,0x20) = 0; S(arg0,0x24) = 0;
        break;
    case 4:
        F(arg0,0x14) = -0.6f; F(arg0,0x18) = 0.5f;
        F(arg0,0x1C) = b.x + 0.9f; S(arg0,0x20) = 0; S(arg0,0x24) = 0;
        break;
    case 5:
        S(arg0,0x1C) = 0; F(arg0,0x14) = -0.3f; S(arg0,0x20) = 0;
        F(arg0,0x18) = b.y + 0.2f; S(arg0,0x24) = 0;
        break;
    }
    void *vt = P(arg0,8);
    void (*fn)(void *, void *) = (void (*)(void *, void *))P(vt,0x2C);
    fn((char *)arg0 + *(s16 *)((char *)vt + 0x28), arg1);
}
