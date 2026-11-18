typedef struct Node {
    struct Node *next;
} Node;

typedef struct S {
    Node *field0;
    Node *field4;
} S;

void func_00251AC8(S *arg0) {
    Node *a = arg0->field0;
    Node *start = a;
    do {
        a = a->next;
    } while (a != start);
    a = arg0->field4;
    start = a;
    do {
        a = a->next;
    } while (a != start);
}

typedef struct Node2 {
    struct Node2 *next;
    u8 pad[4];
    struct Node2 *field8;
} Node2;

typedef struct X {
    u8 pad[4];
    s32 field4;
} X;

typedef struct S2 {
    Node2 *field0;
} S2;

s32 func_00251898(S2 *arg0) {
    Node2 *head = arg0->field0;
    Node2 *cur = head->next;
    if (cur == head) return 0;
    X *x = (X*)cur->field8;
    while (1) {
        s32 v = x->field4;
        if (v != 0) return v;
        cur = cur->next;
        if (cur == head) return 0;
        x = (X*)cur->field8;
    }
}

s32 func_00251D20(s32 unused, void *arg1) {
    void **begin = *(void***)arg1;
    void **end = *(void***)((char*)arg1 + 4);
    s32 n = ((char*)end - (char*)begin) >> 2;
    s32 i = 0;
    void **p = begin;
    if (n <= 0) return 0;
    do {
        void *elem = *p;
        if (*(s32*)((char*)elem + 4) == 0) return 1;
        i++;
        if (i >= n) return 0;
        p++;
    } while (1);
}
