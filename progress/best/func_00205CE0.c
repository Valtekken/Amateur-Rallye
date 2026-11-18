/* func_002069F0 */
void func_002069F0(void *p) {
    f32 sp[4];
    s32 *a, *b;
    a = (s32 *)((u8 *)p + 0x1C);
    b = (s32 *)((u8 *)p + 0x10);
    *(s32 *)((u8 *)p + 0xC) = 0;
    *(s32 *)((u8 *)p + 0x4) = 0;
    *(s32 *)((u8 *)p + 0x8) = 0;
    *(s32 *)((u8 *)p + 0x0) = 0;
    *(f32 *)((u8 *)a + 0x8) = 1.0f;
    *(f32 *)((u8 *)a + 0x4) = 1.0f;
    *(f32 *)((u8 *)p + 0x1C) = 1.0f;
    *(f32 *)((u8 *)a + 0xC) = 1.0f;
    *(s32 *)((u8 *)p + 0x10) = 0;
    *(s32 *)((u8 *)b + 0x8) = 0;
    *(s32 *)((u8 *)b + 0x4) = 0;
    sp[0] = 1.0f; sp[1] = 1.0f; sp[2] = 1.0f; sp[3] = 1.0f;
    *(s32 *)((u8 *)p + 0xC) = 0;
    *(f32 *)((u8 *)p + 0x1C) = sp[0];
    *(f32 *)((u8 *)a + 0x4) = sp[1];
    *(f32 *)((u8 *)a + 0x8) = sp[2];
    *(f32 *)((u8 *)a + 0xC) = sp[3];
    *(s16 *)((u8 *)p + 0x2C) = 0;
    *(s32 *)((u8 *)p + 0x30) = 0;
}

/* func_00206BB8 */
extern void func_003F93CC(void *, s32, s32);
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern u32 D_0040E618[];

typedef struct { u32 *begin, *end, *cap; } V;

void func_00206BB8(V *p, s32 f) {
    u32 *b;
    s32 n;
    func_003F93CC(p->begin, p->end - p->begin, 0);
    b = p->begin;
    n = p->cap - b;
    p->end = p->begin;
    if (n) {
        if (n * 4) func_002B2028(b);
        else { *b = D_0040E618[-1]; D_0040E618[-1] = (u32)b; }
    }
    if (f & 1) D_002AD390(p);
}

/* func_00205CE0 */
extern void *func_002063F0(void *, s32, void *);
extern void func_00218A68(void *, void *, void *);

void func_00205CE0(void *arg0, s16 arg1) {
    s16 sp4;
    void *r;
    sp4 = arg1;
    r = func_002063F0(arg0, 0, (void *)((u8 *)&sp4 + 4));
    *(s16 *)((u8 *)&sp4) = arg1;
    {
        s32 *o = (s32 *)r;
        s32 a = o[1];
        s32 b = o[2];
        if (a != b) {
            if (a != 0) *(s16 *)a = arg1;
            a += 2;
            o[1] = a;
        } else {
            func_00218A68(r, arg0, (void *)((u8 *)&sp4));
        }
    }
    ((s32 *)arg0)[0x21] += 1;
}

/* func_00205BF8 */
extern void *D_004785B0;
extern void func_00205EA0(void *);

void func_00205BF8(void *arg0) {
    *(void **)((u8 *)arg0) = &D_004785B0;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(f32 *)((u8 *)arg0 + 0x10) = 1.0f;
    *(f32 *)((u8 *)arg0 + 0x14) = 1.0f;
    *(f32 *)((u8 *)arg0 + 0x18) = 1.0f;
    *(f32 *)((u8 *)arg0 + 0x1C) = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x84) = -2;
    *(s32 *)((u8 *)arg0 + 0x88) = -2;
    func_00205EA0(arg0);
}
