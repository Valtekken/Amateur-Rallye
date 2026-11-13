extern s32 func_001D56B0(void *, s32);

void func_002824C8(void *arg0, void *arg1) {
    u8 *a0 = (u8 *)arg0;
    u8 *a1 = (u8 *)arg1;
    *(f32 *)(a0 + 0x2C) = *(f32 *)a1;
    *(f32 *)(a0 + 0x30) = *(f32 *)(a1 + 4);
    *(f32 *)(a0 + 0x34) = *(f32 *)(a1 + 8);
    *(u32 *)(a0 + 0x44) = 1;
    func_001D56B0(a0 + 0x14, 1);
}

extern void func_001D4040(void *, const char *);
extern s32 func_001E00E8(void *);
extern s32 func_001E0BF8(void *, void *, s32 *, void *);

typedef struct Node { s32 x; struct Node *next; } Node;

s32 func_001E28F8(Node ***p, const char *s, s32 *out) {
    struct { s32 b[4]; s32 n; char pad[12]; char a[208]; } l;
    Node *q;
    func_001D4040(l.b, s);
    l.n = 0;
    func_001E00E8(l.a);
    q = **p;
    while (q) {
        if (func_001E0BF8(l.a, q, &l.n, out) && l.n == l.b[0]) return 1;
        q = q->next;
    }
    out[0] = 0;
    return 0;
}

extern s32 func_001E08E0(void *, void *, s32 *, void *);

s32 func_001E26F0(Node ***p, const char *s, s32 *out) {
    struct { s32 b[4]; s32 n; char pad[12]; char a[208]; } l;
    Node *q;
    func_001D4040(l.b, s);
    l.n = 0;
    func_001E00E8(l.a);
    q = **p;
    while (q) {
        if (func_001E08E0(l.a, q, &l.n, out) && l.n == l.b[0]) return 1;
        q = q->next;
    }
    out[0] = 0;
    return 0;
}

extern s32 func_001E0788(void *, void *, s32 *, void *);

s32 func_001E2650(Node ***p, const char *s, s32 *out) {
    struct { s32 b[4]; s32 n; char pad[12]; char a[208]; } l;
    Node *q;
    func_001D4040(l.b, s);
    l.n = 0;
    func_001E00E8(l.a);
    q = **p;
    while (q) {
        if (func_001E0788(l.a, q, &l.n, out) && l.n == l.b[0]) return 1;
        q = q->next;
    }
    out[0] = 0;
    return 0;
}
