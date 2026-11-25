extern void func_001D4040(void*,const char*);
extern void *D_002AD408(u32);
extern s32 func_001EE2F8(void*);
extern s32 func_001E6128(s32*, void*, s32, s32);
extern void func_001E4338(s32, s32);
extern char D_00476FD0[];

typedef struct Node { s32 x; struct Node *next; } Node;
typedef struct { Node *head; u8 pad[0x1C]; s32 f20; } Arg1;

s32 func_001E6050(s32 *out, Arg1 *a1, s32 *arg2, s32 arg3) {
    u32 k[4];
    Node *q;
    s32 h;
    func_001D4040(k, D_00476FD0);
    if (a1->f20 != k[0]) return 0;
    *out = *arg2;
    h = func_001EE2F8(D_002AD408(0x10));
    q = a1->head;
    while (q != 0) {
        if (func_001E6128(out, q, h, arg3) == 0) {
            if (h != 0) func_001E4338(h, 3);
            return 0;
        }
        q = q->next;
    }
    return h;
}
