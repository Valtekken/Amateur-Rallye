typedef struct{u8 data[24];}Item;
extern Item* func_002C5160(Item*,Item*,Item*,Item*);

Item* func_003978C8(register Item* a, register Item* b, register Item* c, register Item* d) {
    return func_002C5160(a, b, c, (Item*)0);
}

extern void **func_0015E848(void);

typedef void (*VFunc)(void *, void *);

void func_002A1350(void) {
    void **p;
    char *vt;
    VFunc f;
    p = func_0015E848();
    vt = *(char **)p;
    f = *(VFunc *)(vt + 0x54);
    f((char *)p + *(u16 *)(vt + 0x58), f);
}

void func_002A1320(void) {
    void **p;
    char *vt;
    VFunc f;
    p = func_0015E848();
    vt = *(char **)p;
    f = *(VFunc *)(vt + 0x50);
    f((char *)p + *(u16 *)(vt + 0x50), f);
}

extern int D_00426860;
extern char D_0047C3B8[];
extern int D_00494B68;
extern void func_001D4040(void *a0, char *s);
extern void func_002A1530(void *arg0, void *arg1);

typedef struct { s32 unk0; s32 unk4; s32 unk8; s32 unkC; } S1408;

void func_002A1408(S1408 *arg0, int arg1) {
    s32 v;
    if (arg1 != 0) {
        v = arg0->unk8;
        if (arg0->unkC == 1)
            arg0->unk0 = arg0->unk4;
        func_002A1530(arg0, &v);
    } else {
        if (D_00426860 == 0) {
            func_001D4040(&D_00494B68, D_0047C3B8);
            D_00426860 = 1;
        }
        arg0->unk0 = D_00494B68;
    }
}
