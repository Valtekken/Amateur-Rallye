extern void *D_002AD408(int);
extern void func_001D4040(char *, const char *);
extern void func_00262E20(void *, void *);
extern void func_003FA310(char *, const char *, u32);
extern s32 D_0040E89C;
extern s32 D_004267AC, D_004267B0;
extern char D_0044EC10[], D_0044ED48[];
extern char D_0048DD70[];

typedef struct {
    char pad0[8]; s32 field8; s32 flags; char pad10[8];
    s32 active; s32 field1C; f32 volume; char pad24[4]; f32 f28, f2C;
} Sound;
typedef struct {
    char pad0[0xC]; Sound *sound; char name[4]; f32 f14, f18;
} Obj;
typedef struct { char pad[0x70]; u64 q; } Q;
typedef struct {
    s32 flags; char pad[0x4C]; Q *p;
} Other;
extern Sound *func_00262BD8(void *, char *);

void func_0015FEC8(Obj *a, Other *b) {
    char buf[32];
    Sound *s0, *t, *t2, *t3;
    f32 threshold;
    u64 mask64;
    if (D_0040E89C == 0) {
        func_001D4040(D_0048DD70, D_0044ED48);
        D_0040E89C = 1;
    }
    threshold = 0.05f;
    s0 = func_00262BD8(D_002AD408(0x70), D_0048DD70);
    a->sound = s0;
    s0->flags |= 8;
    t = a->sound; t->f2C = a->f14; t->field8 = 1;
    t2 = a->sound; t2->f28 = a->f18; t2->field8 = 1;
    a->sound->field1C = 1;
    t3 = a->sound;
    if (t3->volume >= threshold) D_004267B0--;
    t3->field8 = 1;
    t3->volume = 0;
    func_00262E20(a->sound, b);
    t3 = a->sound;
    if (!t3->active) {
        if (t3->volume >= threshold) D_004267B0++;
        D_004267AC++;
    }
    t3->active = 1;
    mask64 = 0xFFFFFFFEFFFFFFFFULL;
    b->p->q &= mask64;
    func_003FA310(buf, D_0044EC10, (u32)mask64);
    func_001D4040(a->name, buf);
    b->flags &= ~1;
}
