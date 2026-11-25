typedef struct { u8 **begin; u8 **end; } List;
typedef struct { u8 pad[0x18]; u8 **p18; u8 **p1C; } Elem;

void func_002543F0(void *unused, u8 *arg1, u8 *arg2) {
    List *l1 = (List *)(arg1 + 0xC);
    s32 n = l1->end - l1->begin;
    if (n > 0) {
        s32 i = 0;
        do {
            Elem *e = (Elem *)l1->begin[i];
            u8 *p = (u8 *)e->p18;
            u8 *q = *(u8 **)(p + 0x30);
            if (q != NULL) e->p18 = (u8 **)q;
            p = (u8 *)e->p1C;
            q = *(u8 **)(p + 0x30);
            if (q != NULL) e->p1C = (u8 **)q;
            i++;
        } while (i < n);
    }
    List *l2 = (List *)(arg2 + 0xC);
    n = l2->end - l2->begin;
    if (n > 0) {
        s32 i = 0;
        do {
            Elem *e = (Elem *)l2->begin[i];
            u8 *p = (u8 *)e->p18;
            u8 *q = *(u8 **)(p + 0x34);
            if (q != NULL) e->p18 = (u8 **)q;
            p = (u8 *)e->p1C;
            q = *(u8 **)(p + 0x34);
            if (q != NULL) e->p1C = (u8 **)q;
            i++;
        } while (i < n);
    }
}
