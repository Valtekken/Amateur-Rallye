extern void func_003F9698(void *, ...);
extern char D_00486B18[];
extern char D_00486B30[];
extern char D_00486B68[];

typedef struct {
    u8 *begin;
    u8 *end;
    u8 pad[4];
    u8 *ids;
} List;

typedef struct {
    u8 pad[4];
    s32 next;
    s32 prev;
    u16 id;
} Node;

void func_00377AC0(List *arg0) {
    s32 count = 0;
    s32 i = 0;
    func_003F9698(D_00486B18, (s32)(arg0->end - arg0->begin) >> 4);
    do {
        Node *n = (Node *)(arg0->begin + i * 16);
        u16 id = n->id;
        u16 id_copy = id;
        s32 next = n->next;
        s32 prev = n->prev;
        s16 back = -2;
        if ((s16)id != -1) {
            s32 idx = (s16)id * 2;
            back = *(s16 *)((u8 *)arg0->ids + idx);
        }
        func_003F9698(D_00486B30, prev, next, i, (s16)id, back, &id_copy);
        i = next;
        count++;
    } while (i != -1);
    func_003F9698(D_00486B68, count);
}
