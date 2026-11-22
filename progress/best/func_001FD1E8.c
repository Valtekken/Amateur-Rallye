typedef struct { f32 x, y, z, w; } V;
extern f32 func_003F3E80(f32);
#define F(p,o) (*(f32*)((char*)(p)+(o)))
#define S(p,o) (*(s32*)((char*)(p)+(o)))
s32 func_001FD1E8(void *arg0, void *arg1) {
    volatile V v;
    f32 temp_f0, temp_f3, temp_f12, var_f0;
    s32 var_2;
    void *t1, *t2;
    if ((S(arg0,0x24) != 0) || (var_2 = 1, (S(arg0,0x2C) != 0))) {
        t1 = (char *)arg1 + 0x40; t2 = (char *)arg0 + 0x30;
        temp_f3 = F(arg1,0x40) - F(arg0,0x30); v.x = temp_f3;
        temp_f0 = F(t1,4) - F(t2,4); v.y = temp_f0;
        f32 d = F(t1,8) - F(t2,8); var_f0 = d * d;
        temp_f12 = (temp_f3 * temp_f3) + (temp_f0 * temp_f0) + var_f0; v.z = d;
        if (temp_f12 <= 1.1920929e-7f) { v.x = 0.0f; v.y = 0.0f; v.z = 0.0f; }
        else {
            var_f0 = func_003F3E80(temp_f12);
            f32 inv = 1.0f / var_f0;
            v.x *= inv; v.z *= inv; v.y *= inv;
        }
        f32 dot = (v.x * F(arg0,0)) + (v.y * F(arg0,4)) + (v.z * F(arg0,8));
        if ((S(arg0,0x24) == 0) || (var_2 = 0, !(F(arg0,0x20) <= dot))) {
            var_2 = 1;
            if (S(arg0,0x2C) != 0) { var_2 = 0; if (!(dot <= F(arg0,0x28))) var_2 = 1; }
        }
    }
    return var_2;
}
