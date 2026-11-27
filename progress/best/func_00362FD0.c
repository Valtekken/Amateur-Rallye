extern s32 func_002C6528(void *, u32, s32, void *);
extern void *func_002DDA20(void);
extern s32 func_00303038(void *, void *);
extern void func_00362B50(void *);
extern void func_00362C48(void *, s32);
extern void func_003631E0(void *);
extern void func_003688F0(void *, u32, s32, void *);

typedef struct Vec {
    u8 *begin;
    u8 *end;
    u8 *cap;
} Vec;

typedef struct ObjA {
    u8 pad[0x20];
    Vec v20;
} ObjA;

typedef struct Inner {
    u8 pad[0x14];
    Vec v14;
    void *unk20;
} Inner;

typedef struct Node {
    s32 a;
    void *b;
} Node;

typedef struct Elem {
    u8 pad[0x2C];
    void *unk2C;
} Elem;

void func_00362FD0(ObjA *arg0, s32 *arg1) {
    char sp10[0x30];
    s32 sp0[2];
    void *obj;
    Inner *inner;
    s32 idx;

    func_003631E0((u8 *)arg0 + 8);
    if (*arg1 == 0) {
        return;
    }

    inner = *(Inner **)func_002DDA20();
    obj = 0;
    idx = *arg1;
    if (idx != 0) {
        Vec *v = &inner->v14;
        s32 count = (s32)(v->end - v->begin) >> 3;
        if (idx >= count) {
            u32 newcap = (idx + 0x20) & ~0x1F;
            s32 cur = (s32)(v->end - v->begin) >> 3;
            if (newcap < (u32)cur) {
                u8 *newend = v->begin + newcap * 8;
                if (newend < v->end) {
                    u8 *it = newend + 8;
                    while (it < v->end) {
                        it += 8;
                    }
                }
                v->end = newend;
            } else {
                sp0[0] = 0;
                sp0[1] = 0;
                func_002C6528(v, newcap, newcap - cur, sp0);
            }
        }
        {
            Node *n = (Node *)(inner->v14.begin + idx * 8);
            if (n->b != inner->unk20) {
                n->a = func_00303038(inner, arg1);
                n->b = inner->unk20;
            }
            obj = (void *)n->a;
        }
    }

    if (obj == 0) {
        return;
    }

    {
        Vec *v2 = &arg0->v20;
        s32 cnt = (s32)((u32)(v2->end - v2->begin) * 0xAAAAAAABu) >> 4;
        s32 want = *(s32 *)((u8 *)obj + 0x60);
        if (want < cnt) {
            u32 newcnt = want + 1;
            func_00362B50(sp10);
            {
                s32 cur2 = (s32)((u32)(v2->end - v2->begin) * 0xAAAAAAABu) >> 4;
                if (newcnt < (u32)cur2) {
                    u8 *p = v2->begin + newcnt * 0x30;
                    u8 *end = v2->end;
                    s32 sz = end - p;
                    if (p < end) {
                        do {
                            Elem *e = (Elem *)p;
                            void *vt = e->unk2C;
                            void (*fn)(u8 *, s32) = *(void (**)(u8 *, s32))((u8 *)vt + 0xC);
                            fn((u8 *)e + *(s16 *)((u8 *)vt + 8), 2);
                            p += 0x30;
                        } while (p < end);
                    }
                    v2->end = v2->end - sz;
                } else {
                    func_003688F0(v2, newcnt, newcnt - cur2, sp10);
                }
            }
            func_00362C48(sp10, 2);
        }
    }
}
