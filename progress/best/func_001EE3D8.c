extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void func_001F8020(s32, char *, void *, s32);
extern void func_001EE4B0(s32 *, void *);
extern void func_003F9698(char *, s32);
extern void func_0020EFD0(void *);
extern void func_002B2028(void *);
extern char D_004772B0[];
extern char D_004772B8[];

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} Node;

void func_001EE3D8(s32 *arg0, s32 arg1)
{
    Node *node;
    Node *head;
    Node *current;
    Node *next_node;

    *arg0 = arg1;
    node = (Node *)func_002B1FC0(0xC);
    if (node == NULL) {
        node = (Node *)func_003D2910(0xC);
    }
    head = node;
    node->next = node;
    node->prev = node;
    func_001F8020(arg1, D_004772B0, head, 0);
    current = node->next;
    if (current != node) {
        do {
            next_node = (Node *)current->unk8;
            func_003F9698(D_004772B8, next_node->unk14);
            func_001EE4B0(arg0, next_node);
            current = current->next;
        } while (current != head);
    }
    func_0020EFD0(head);
    func_002B2028(head);
}
