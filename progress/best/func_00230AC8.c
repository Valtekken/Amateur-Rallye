typedef unsigned char u8;

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    int data;
} Node;

extern void *func_002B1FC0(int);
extern void *func_003D2910(int);
extern void func_00231B68(void *);
extern void func_00231B78(void *);
extern void func_0022CF10(s32, s32);
extern s32 func_00230B18(void);
extern void func_00230BB0(void *, s32, void *, s32);

void func_002319E8(void *arg0, s32 arg1) {
    Node *lst = *(Node **)((u8 *)arg0 + 0x34);
    Node *n = (Node *)func_002B1FC0(0xC);
    if (n == NULL)
        n = (Node *)func_003D2910(0xC);
    n->data = arg1;
    n->next = lst;
    n->prev = lst->prev;
    lst->prev->next = n;
    lst->prev = n;
}

int func_00232520(void *arg0, int arg1) {
    Node *list = *(Node **)((u8 *)arg0 + 0x14);
    Node *cur = list->next;
    if (cur != list) {
        do {
            if (arg1 == cur->data)
                return 1;
            cur = cur->next;
        } while (cur != list);
    }
    return 0;
}

void func_00232948(void *arg0) {
    Node *list = *(Node **)((u8 *)arg0 + 0x14);
    Node *cur = list->next;
    if (cur != list) {
        do {
            void *item = (void *)cur->data;
            func_00231B68(item);
            func_00231B78(item);
            cur = cur->next;
            list = *(Node **)((u8 *)arg0 + 0x14);
        } while (cur != list);
    }
    {
        Node *list2 = *(Node **)((u8 *)arg0 + 0x18);
        Node *cur2 = list2->next;
        while (cur2 != list2) {
            cur2 = cur2->next;
        }
    }
}

void func_00230AC8(void *arg0, s32 arg1) {
    s32 tmp = 0;
    func_0022CF10(*(s32 *)arg0, func_00230B18());
    func_00230BB0(arg0, arg1, &tmp, 0);
}
