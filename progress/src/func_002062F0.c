/* func_003A5DC8 - unmatchable MMI saves, skip with minimal */
s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

/* func_00206BB8 - vector destructor */
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

/* func_002069F0 */
void func_002069F0(void *p) {
    f32 sp[4];
    s32 *a, *b;
    a = (s32 *)((u8 *)p + 0x1C);
    *(s32 *)((u8 *)p + 0xC) = 0;
    b = (s32 *)((u8 *)p + 0x10);
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

/* func_002062F0 */
extern void *func_002063F0(void *, s32, void *);

void func_002062F0(void *arg0, u16 arg1) {
    s32 local;
    void *r;
    r = func_002063F0(arg0, 1, &local);
    *(s16 *)((u8 *)r + 0x2C) = arg1;
    if (local != 0) {
        *(s32 *)((u8 *)r + 0x30) = 1;
    }
}
