typedef struct { u32 w0, w1; } Key;
struct Node { struct Node *next; Key key; };
struct Vec { u32 u0; u32 begin; u32 end; u32 uC; s32 count; };
typedef struct { u32 d[2]; } S8;

extern void *func_002B1FC0(u32, void *);
extern void *func_003D2910(u32, void *);

void *func_002DFCA8(void *arg0, struct Vec *arg1, Key *arg2) {
    s32 count, index, flag;
    struct Node *head, *cur, *node;
    S8 tmp;

    count = (s32)(arg1->end - arg1->begin) >> 2;
    index = (s32)((u32)arg2->w0 % (u32)count);
    head = *(struct Node **)(arg1->begin + ((u32)index << 2));
    flag = 0;
    cur = head;
    while (cur != 0) {
        if (cur->key.w0 == arg2->w0) {
            tmp.d[0] = (u32)cur;
            tmp.d[1] = (u32)arg1;
            *(S8 *)arg0 = tmp;
            *(s32 *)((char *)arg0 + 8) = flag;
            return arg0;
        }
        cur = cur->next;
    }
    node = func_002B1FC0(0xC, 0);
    if (node == 0) node = func_003D2910(0xC, 0);
    node->next = 0;
    if ((char *)node + 4 != 0)
        *(S8 *)((char *)node + 4) = *(S8 *)arg2;
    node->next = head;
    *(struct Node **)(arg1->begin + ((u32)index << 2)) = node;
    arg1->count++;
    tmp.d[0] = (u32)node;
    tmp.d[1] = (u32)arg1;
    *(S8 *)arg0 = tmp;
    flag = 1;
    *(s32 *)((char *)arg0 + 8) = flag;
    return arg0;
}
