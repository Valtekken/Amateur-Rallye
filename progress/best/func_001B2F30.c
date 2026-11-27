#define A(p,t,o) (*(t*)((char*)(p)+(o)))
extern void func_001B21D8(void);
extern void func_001C8310(u32, u32, u32, u32);
extern u32 func_002B1FC0(u32, void *);
extern u32 func_003D2910(u32);
extern void func_002B2028(u32);
extern s32 D_0040E618[];
extern char D_00473168[];

void *func_001B2F30(void *arg0) {
    volatile char pad[0x40];
    u32 p, it, b, old;
    s32 t19, cnt, n;
    char *v, *vec, *vec2, *vec3;
    func_001B21D8();
    v = (char *)arg0 + 0x108;
    vec = (char *)arg0 + 0xE0;
    vec2 = (char *)arg0 + 0xEC;
    vec3 = (char *)arg0 + 0xF8;
    A(arg0, u32, 0xE0) = 0;
    A(arg0, void *, 0xDC) = &D_00473168;
    A(vec, u32, 4) = 0;
    A(vec, u32, 8) = 0;
    A(arg0, u32, 0xEC) = 0;
    A(vec2, u32, 4) = 0;
    A(vec2, u32, 8) = 0;
    A(arg0, u32, 0xF8) = 0;
    A(vec3, u32, 8) = 0;
    A(vec3, u32, 4) = 0;
    A(arg0, u32, 0x108) = 0;
    A(arg0, f32, 0x104) = 2.0f;
    A(v, u32, 4) = 0;
    A(v, u32, 8) = 0;
    t19 = A(arg0, s32, 0x108);
    if ((u32)((s32)((-(u32)t19) * 0xBA2E8BA3u) >> 2) < 4) {
        cnt = (s32)((-(u32)t19) * 0xBA2E8BA3u) >> 2;
        p = func_002B1FC0(0xB0, vec3);
        if (p == 0) p = func_003D2910(0xB0);
        func_001C8310((u32)t19, 0, p, 0);
        b = A(v, u32, 4);
        it = A(arg0, u32, 0x108);
        if (it < b) { do { it += 0x2C; } while (it < b); }
        n = (s32)((u32)(A(v, u32, 8) - A(v, u32, 0)) * 0xBA2E8BA3u) >> 2;
        if (n != 0) {
            if (n * 0x2C != 0) func_002B2028(A(v, u32, 0));
            else { old = A(v, u32, 0); A((void *)old, s32, 0) = D_0040E618[-1]; D_0040E618[-1] = old; }
        }
        A(v, u32, 8) = p + 0xB0;
        A(v, u32, 0) = p;
        A(v, u32, 4) = p + cnt * 0x2C;
    }
    return arg0;
}
