extern void D_002AD390(void *);
extern void func_0011DF88(s32, s32);
extern void func_00151A28(void **, s32, s32, void *, s32);
extern void func_00153EE0(void *, s32);
extern s32 func_00153F40(void *, void **, s32, s32);
extern void func_00195AD0(s32, s32, s32);
extern s32 func_00196028(void *);
extern void func_001D4040(void *, void *);
extern void *func_001E3700(s32, void *);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E3FB0(s32, void *, void *);
extern s32 func_002A1700(void);
extern void func_002A1290(s32, void *, s32);
extern void func_0021E4F0(s32);
extern void func_002B2028(void *, void *);
extern s32 func_003FA9B8(void *);
extern u8 D_0040E618[];
extern u8 D_0040E658[];
extern u8 D_00444870[];
extern u8 D_00445BE0[];
extern u8 D_004481B8[];
extern u8 D_00449118[];
extern u8 D_00449128[];
extern u8 D_00449138[];
extern u8 D_00449148[];
extern u8 D_00449158[];
extern u8 D_00449168[];
extern u8 D_00449178[];
extern u8 D_00449188[];
extern u8 D_004491A8[];
extern u8 D_004491B8[];
extern void *D_0044D168;
extern void *D_0044DCD8;

typedef struct {
    u8 pad0[8];
    void *vtbl;
    void *unkC;
    void *unk10;
    u8 pad14[0x14];
    void *unk24;
    u8 pad28[0x10];
    void *unk34;
    s32 unk38;
    void *unk40;
    u8 pad44[8];
    void *unk4C;
    u8 pad50[8];
    void *unk58;
    u8 pad5C[0x20];
    s32 unk7C;
} PObj;

typedef struct {
    void *nextFree;
    void *next;
    s32 ref;
} PBlock;

static void release_block(void *user) {
    PBlock *h = (PBlock *)((u8 *)user - 0x10);
    h->ref--;
    if (h->ref == 0) {
        if (h->next != NULL) {
            func_002B2028(h, user);
        } else {
            h->nextFree = *(void **)(D_0040E618 - 4);
            *(void **)(D_0040E618 - 4) = h;
        }
    }
}

static s32 pcheck(PObj *o, u8 *name) {
    void *s;
    s32 len;
    s32 r;
    if (*(s32 *)(D_0040E658 + 0xC) != 0) {
        s = (void *)func_00151930(D_0040E658);
    } else {
        s = D_0040E658 + 0x10;
        *(s32 *)(D_0040E658 + 8) = *(s32 *)(D_0040E658 + 8) + 1;
    }
    len = func_003FA9B8(name);
    func_00151A28(&s, 0, -1, name, len);
    r = func_00153F40((u8 *)o + 0x40, &s, 0, -1);
    release_block(s);
    return r;
}

static void pcam(s32 on) {
    void *s;
    s32 h = func_001E4280();
    func_001D4040(&s, D_00449188);
    func_001E3D10(h, &s, on);
}

void func_0012AF98(PObj *arg0, s32 arg1) {
    s32 failed;
    s32 code;
    s32 i;
    s32 n;
    void *q;
    void *s;
    void *front;
    u8 *p;
    u32 d;

    failed = 0;
    code = 0;
    arg0->vtbl = &D_0044D168;
    if (!pcheck(arg0, D_00449118)) { failed = 1; code = 3; goto done; }
    if (!pcheck(arg0, D_00449128)) { failed = 1; code = 1; goto done; }
    if (!pcheck(arg0, D_00449138)) { failed = 1; code = 0; goto done; }
    if (!pcheck(arg0, D_00449148)) { failed = 1; code = 2; goto done; }
    if (!pcheck(arg0, D_00449158)) { failed = 1; code = 4; goto done; }
    if (!pcheck(arg0, D_00449168)) { failed = 1; code = 6; goto done; }
    if (!pcheck(arg0, D_00449178)) { failed = 1; pcam(1); goto done; }
    if (!pcheck(arg0, D_004491A8)) { failed = 1; pcam(0); goto done; }
    if (!pcheck(arg0, D_004491B8)) {
        failed = 1;
        func_00195AD0(func_00196028(D_0040E658), 3, 0);
        func_00195AD0(func_00196028(D_0040E658), 1, 0);
        func_00195AD0(func_00196028(D_0040E658), 0, 0);
        func_00195AD0(func_00196028(D_0040E658), 2, 0);
        func_00195AD0(func_00196028(D_0040E658), 4, 0);
        func_00195AD0(func_00196028(D_0040E658), 6, 0);
        pcam(0);
        goto done;
    }
done:
    if (failed) {
        func_00195AD0(func_00196028(D_0040E658), code, 1);
    } else {
        s = NULL;
        q = func_001E3700(func_001E4280(), &s);
        front = *(void **)q;
        if (((PBlock *)((u8 *)arg0->unk40 - 0x10))->next == NULL) {
            front = D_00444870;
        } else {
            *(u8 *)((PBlock *)((u8 *)arg0->unk40 - 0x10))->next = 0;
            front = arg0->unk40;
        }
        func_001D4040(&s, front);
        func_001E3FB0(func_001E4280(), &s, &front);
        func_002A1290(func_002A1700(), &s, 3);
    }
    n = (*(s32 *)((u8 *)arg0 + 0x14) - *(s32 *)((u8 *)arg0 + 0x10)) / 7;
    if (n > 0) {
        i = 0;
        while (i < n) {
            p = (u8 *)((u8 *)arg0->unk10 + i * 0x1C);
            func_0021E4F0(*(s32 *)(p + 8));
            i++;
        }
    }
    n = *(s32 *)((u8 *)arg0 + 0x38) >> 5;
    if (n > 0) {
        i = 0;
        q = arg0->unk34;
        while (i < n) {
            func_0021E4F0(*(s32 *)((u8 *)q + i * 0x20));
            i++;
        }
    }
    if (arg0->unk58 != NULL) func_0021E4F0((s32)arg0->unk58);
    if (arg0->unk7C != 0) {
        func_0021E4F0(*(s32 *)arg0->unk7C);
        D_002AD390((void *)arg0->unk7C);
    }
    if (arg0->unkC != NULL) func_0011DF88((s32)arg0->unkC, 3);
    if (*(s32 *)((u8 *)arg0->unk4C + 4) != 0) {
        func_00153EE0(arg0->unk4C, *(s32 *)((u8 *)arg0->unk4C + 4));
        *(void **)((u8 *)arg0->unk4C + 8) = arg0->unk4C;
        *(s32 *)((u8 *)arg0->unk4C + 4) = 0;
        *(void **)((u8 *)arg0->unk4C + 0xC) = arg0->unk4C;
    }
    func_002B2028((u8 *)arg0->unk4C - 0x10, arg0->unk40);
    release_block(arg0->unk40);
    d = (u32)(*(u8 **)((u8 *)arg0 + 0x34 + 4) - (u8 *)arg0->unk34) >> 5;
    if (d != 0) {
        if ((d << 5) != 0) func_002B2028(arg0->unk34, arg0->unk34);
        else {
            *(void **)arg0->unk34 = *(void **)(D_0040E618 - 4);
            *(void **)(D_0040E618 - 4) = arg0->unk34;
        }
    }
    if (arg0->unk24 != NULL) {
        q = *(void **)((u8 *)arg0->unk24 + 0x18);
        ((void (*)(void *, s32, void *))((u8 *)q + *(s32 *)((u8 *)q + 8)))((u8 *)q, 3, arg0->unk24);
    }
    n = (*(s32 *)((u8 *)arg0 + 0x14) - *(s32 *)((u8 *)arg0 + 0x10)) / 7;
    if (n != 0) {
        d = (u32)(n * 0x1C);
        if (d != 0) func_002B2028((u8 *)arg0 + 0x10, (u8 *)arg0 + 0x10);
        else {
            *(void **)((u8 *)arg0 + 0x10) = *(void **)(D_0040E618 - 4);
            *(void **)(D_0040E618 - 4) = (u8 *)arg0 + 0x10;
        }
    }
    arg0->vtbl = &D_0044DCD8;
    if (arg1 & 1) D_002AD390(arg0);
}
