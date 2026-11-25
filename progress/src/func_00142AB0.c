typedef struct E { void *pad; struct E *next; u8 rest[0x24 - 8]; } E;
typedef struct { E *b, *e; } V;
typedef struct {
    u8 pad0[0xA4];
    V v;
    u8 pad1[0xB0 - 0xAC];
    s32 fB0;
    s32 fB4;
    u8 pad2[0xC0 - 0xB8];
    s32 fC0;
    s32 fC4;
} A;

void func_00142AB0(A *arg0) {
    V *v = &arg0->v;
    if ((v->e - arg0->v.b) != 0) {
        E *last = v->e - 1;
        if (last->next == 0) {
            last->next = (E *)1;
            arg0->fB4 = 0;
        }
        if (arg0->fB4 == arg0->fB0) {
            E *p = v->e - 1;
            if (p->next == (E *)2) v->e = p;
            if (arg0->fC4 == arg0->fC0) {
                E *q = v->e - 1;
                if (q->next == (E *)1) q->next = (E *)2;
                if ((u32)(v->e - arg0->v.b) >= 2) {
                    E *w = v->e - 2;
                    if (w->next == 0) w->next = (E *)1;
                }
                arg0->fB4 = 0;
                arg0->fC4 = 0;
            } else {
                arg0->fC4 = arg0->fC4 + 1;
            }
        } else {
            arg0->fB4 = arg0->fB4 + 1;
        }
    }
}
