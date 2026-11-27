extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void *D_002AD5A8(s32);
extern void D_002AD530(void *);
extern void func_00237840(void *);

typedef struct Arr { void *data; s32 size; s32 cap; } Arr;
typedef struct Node { struct Node *next, *prev; Arr arr; } Node;
typedef struct Obj { u8 pad[0x44]; Node *head; } Obj;

s32 func_003B8428(Obj *a, s32 n, s32 step) {
    s32 total = 0, count, i;
    Node *volatile head;
    Node *node;
    Arr tmp;
    char *mem;
    void **p, **end;

    while (n > 0) {
        count = step < n ? step : n;
        head = a->head;
        tmp.data = NULL;
        tmp.size = 0;
        tmp.cap = 0;
        node = func_002B1FC0(0x14);
        if (!node) node = func_003D2910(0x14);
        if (&node->arr) node->arr = tmp;
        node->next = head;
        node->prev = head->prev;
        head->prev->next = node;
        head->prev = node;
        if (tmp.data) {
            p = (void **)tmp.data;
            end = p + *(s32 *)((char *)p - 16);
            while (p != end) {
                void *v;
                --end;
                v = *end;
                (*(void (**)(void *, s32))(*(char **)v + 0x14))((char *)end + *(s16 *)(*(char **)v + 0x10), 0);
            }
            D_002AD530((char *)tmp.data - 16);
        }
        node = a->head->prev;
        node->arr.size = count;
        mem = (char *)D_002AD5A8(count * 4 + 16);
        *(s32 *)mem = count;
        mem += 16;
        {
            char *q = mem;
            for (i = count - 1; i != -1; i--, q += 4) {
                func_00237840(q);
            }
        }
        node->arr.data = mem;
        n -= count;
        total += count;
    }
    return total;
}
