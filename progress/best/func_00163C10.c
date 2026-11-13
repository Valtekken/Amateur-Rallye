extern void *D_002AD408(s32);
extern s32 func_001D4340(void);
extern void func_001D4040(s32 *, const char *);
extern void *func_00262BD8(void *, s32 *);
extern void func_00262E20(void *, s32);
extern void func_003FA310(void *, const char *, u64);

extern s32 D_004267AC;
extern s32 D_004267B0;
extern const char D_0044EC10[];
extern const char D_0044F120[];
extern const char D_0044F138[];

typedef struct {
    s32 tag;
    s32 ctx;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    f32 f20;
    f32 f24;
    f32 f28;
    f32 f2C;
    s32 f30;
    s32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
} EnvObj;

typedef struct {
    s32 flags;
    s32 _pad[0x13];
    void *f50;
} A;

typedef struct {
    s64 _pad[0x0E];
    u64 f70;
} P;

void func_00163C10(void *this, A *arg1)
{
    s32 sp;
    s32 sp2;
    void *pool;
    EnvObj *temp;
    const float k = 0.05f;
    u32 mask;
    P *p;

    mask = 0xFFFFFFFFu;

    pool = D_002AD408(0x70);
    func_001D4040(&sp, D_0044F120);
    temp = (EnvObj *)func_00262BD8(pool, &sp);
    *(void **)((char *)this + 0xC) = temp;
    temp->f2C = *(f32 *)((char *)this + 0x18);
    temp->f8 = 1;
    temp->f8 = 1;
    temp->f28 = *(f32 *)((char *)this + 0x1C);
    temp->f1C = 1;
    if (k <= temp->f20)
        D_004267B0--;
    temp->f8 = 1;
    temp->f20 = 0.0f;
    func_00262E20(temp, arg1);
    if (temp->f18 == 0) {
        if (k <= temp->f20)
            D_004267B0++;
        D_004267AC++;
    }
    temp->f18 = 1;

    pool = D_002AD408(0x70);
    func_001D4040(&sp2, D_0044F138);
    temp = (EnvObj *)func_00262BD8(pool, &sp2);
    *(void **)((char *)this + 0x10) = temp;
    temp->f2C = *(f32 *)((char *)this + 0x24);
    temp->f8 = 1;
    temp->f8 = 1;
    temp->f28 = *(f32 *)((char *)this + 0x28);
    temp->f1C = 1;
    if (k <= temp->f20)
        D_004267B0--;
    temp->f8 = 1;
    temp->f20 = 0.0f;
    func_00262E20(temp, arg1);
    if (temp->f18 == 0) {
        if (k <= temp->f20)
            D_004267B0++;
        D_004267AC++;
    }
    temp->f18 = 1;

    p = (P *)arg1->f50;
    p->f70 = p->f70 & (u64)mask;
    func_003FA310(&sp2, D_0044EC10, (u64)mask);
    func_001D4040((s32 *)((char *)this + 0x14), (const char *)&sp2);
    arg1->flags = arg1->flags & ~1;
}
