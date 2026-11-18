extern void func_002618C8(s32, s32);
extern f32 func_0027DF58(void);
extern s32 func_001CE2F8(void *);
extern s32 func_001D24B8(void *, s32, s32, void *);

extern char D_00479B98[];

void func_00261830(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
    f32 f2;
    f32 f0;
    f32 f3;
    f32 f1;
    s32 i1;
    s32 i0;
    f2 = *arg4;
    f0 = *arg3;
    f3 = *arg2;
    f1 = *arg1;
    f2 = f2 - f3;
    f0 = f0 - f1;
    f2 = f2 / *arg5;
    f0 = f0 / *arg5;
    i1 = (s32)f2;
    i0 = (s32)f0;
    if (i1 < 0) i1 = -i1;
    if (i0 < 0) i0 = -i0;
    func_002618C8(i1, i0);
    *(f32 *)((u8*)arg0 + 4) = f3; /* need arg2? */
    *(f32 *)((u8*)arg0 + 8) = *arg2;
}

typedef struct U2 { u8 pad[0x14]; void *field14; s32 field18; } U2;
typedef struct V2 { u32 field0; s32 field4; f32 field8; } V2;

V2 *func_00260D30(V2 *arg0, U2 *arg1, f32 f12) {
    f32 v;
    s32 *p;
    s32 cnt;
    s32 iv;
    s32 *q;
    v = func_0027DF58() * f12;
    p = (s32*)arg1->field14;
    cnt = (arg1->field18 - (s32)p) >> 3;
    iv = (s32)v;
    if ((u32)iv < (u32)cnt) {
        q = p + iv * 2;
        arg0->field0 = q[0];
        arg0->field8 = *(f32*)(q + 1);
    } else {
        arg0->field0 = 0;
        arg0->field8 = 1.0f;
    }
    arg0->field4 = 0;
    return arg0;
}

typedef struct Node { struct Node *first; struct Node *next; } Node;

Node *func_002602B0(Node *arg0, Node *arg1) {
    void *loc;
    Node *p;
    Node *r;
    loc = (u8 *)arg1 + 0x14;
    if (func_001D24B8(loc, 0, func_001CE2F8(loc), &D_00479B98) != -1) {
        return arg1;
    }
    p = arg1->first;
    if (p != NULL) {
        do {
            r = func_002602B0(arg0, p);
            if (r != NULL) return r;
            p = p->next;
        } while (p != NULL);
    }
    return NULL;
}
