struct Vec4 { f32 x, y, z, w; };

struct TempBlock {
    char pad[0x90];
    struct Vec4 v0, v1, v2, v3;
};

struct Arg0 {
    char pad_0x00[0x0C];
    s32 unkC;
    char pad_0x10[0x08];
    s32 unk18, unk1C, unk20;
    f32 unk24, unk28, unk2C;
    f32 unk30, unk34, unk38;
};

extern void **func_00201350(void);

void func_0027F600(void *arg0) {
    struct Arg0 *a;
    struct TempBlock *tb;
    volatile f32 locals[16];
    volatile f32 *p1, *p2, *p3;
    volatile f32 *dst24, *dst30;
    struct Vec4 *t0, *t0a, *t0b, *t0c;
    
    a = arg0;
    tb = func_00201350()[a->unkC];
    
    p1 = &locals[4];   // sp+0x10
    p2 = &locals[8];   // sp+0x20
    p3 = &locals[12];  // sp+0x30
    
    t0 = &tb->v0; t0a = &tb->v1; t0b = &tb->v2; t0c = &tb->v3;
    
    locals[0] = t0->x; locals[1] = t0->y; locals[2] = t0->z; locals[3] = t0->w;
    p1[0] = t0a->x; p1[1] = t0a->y; p1[2] = t0a->z; p1[3] = t0a->w;
    p2[0] = t0b->x; p2[1] = t0b->y; p2[2] = t0b->z; p2[3] = t0b->w;
    p3[0] = t0c->x; p3[1] = t0c->y; p3[2] = t0c->z; p3[3] = t0c->w;
    
    p2[0] = -p2[0];
    p2[1] = -p2[1];
    p2[2] = -p2[2];
    
    locals[0] = -locals[0];
    locals[1] = -locals[1];
    locals[2] = -locals[2];
    
    dst24 = (volatile f32 *)((char *)a + 0x24);
    dst30 = (volatile f32 *)((char *)a + 0x30);
    
    dst24[0] = p3[0];
    dst24[1] = p3[1];
    dst24[2] = p3[2];
    dst30[0] = p2[0];
    dst30[1] = p2[1];
    dst30[2] = p2[2];
    a->unk18 = 0;
    a->unk1C = 0;
    a->unk20 = 0;
}
