typedef struct NodeSub {
    void *ptr;
    s32 count;
    s32 index;
} NodeSub;

typedef struct Node {
    struct Node *next;
    struct Node *unk04;
    NodeSub sub;
} Node;

typedef struct Pool {
    u8 pad[0x44];
    Node *end;
} Pool;

typedef struct Frame {
    Node *cur;
    char pad[0xC];
    Node *end;
} Frame;

s32 func_003B88F8(void *arg0) {
    Frame fr;
    Node *cur;
    Node *end;

    end = ((Pool *)arg0)->end;
    cur = end->next;
    fr.end = end;
    fr.cur = cur;
    if (fr.cur == fr.end) goto infinite;

loop:
    cur = fr.cur;
    {
        Node *n = cur;
        NodeSub *sub = &n->sub;
        s32 cnt = sub->count;
        if (cnt <= 0) goto notfound;
        cnt--;
        sub->count = cnt;
        return (s32)((u8 *)n->sub.ptr + (n->sub.index++ << 2));
    }

notfound:
    cur = cur->next;
    fr.cur = cur;
    end = ((Pool *)arg0)->end;
    fr.end = end;
    if (fr.cur != fr.end) goto loop;

infinite:
    for (;;) {
    }
    return 0;
}
