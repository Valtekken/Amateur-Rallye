extern void *D_002AD408(int);
extern void *func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *);
extern void func_001E2C78(void *, const char *, int);

extern const char D_0044C598[];
extern const char D_0044BC38[];
extern void *D_0044DD18[];

typedef struct {
    int a;
    int b;
    int c;
} Sub14;

typedef struct {
    int unk00;
    int unk04;
    int unk08;
    int unk0C;
    void **vptr;
    Sub14 sub;
    int unk20;
} Obj24;

static inline void InitSub14(Sub14 *s) {
    s->a = 0;
    s->b = 0;
    s->c = 0;
}

Obj24 *func_0014EC98(void) {
    int sp0[8];
    int sp1[4];
    Obj24 *obj = (Obj24 *)D_002AD408(0x24);

    func_001D4040(sp0, D_0044C598);
    obj->unk08 = 0;
    obj->unk0C = 0;
    obj->unk04 = 0;
    obj->unk00 = 0;
    obj->vptr = D_0044DD18;
    InitSub14(&obj->sub);
    obj->unk20 = sp0[0];

    func_001E2460(sp1, obj);
    func_001E2C78(sp1, D_0044BC38, 0);
    return obj;
}
