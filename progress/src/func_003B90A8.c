typedef struct Item Item;
typedef struct Vt {
    char pad[16];
    s16 delta;
    u16 pad2;
    void (*destroy)(void*, s32);
} Vt;
struct Item { Vt* vt; };
typedef struct Node { struct Node* next; struct Node* prev; Item* items; } Node;
extern void D_002AD530(void*);
extern void func_002B2028(void*);

static inline __attribute__((always_inline)) void destroy_items(Item** slot) {
    Item* p = *slot;
    if (p) {
        Item* end = p + ((s32*)p)[-4];
        while (*slot != end) {
            --end;
            end->vt->destroy((char*)end + end->vt->delta, 0);
        }
        D_002AD530((char*)*slot - 16);
    }
}

void func_003B90A8(register Node** a) {
    Node* next = (*a)->next;
    while (next != *a) {
        Node* n = next;
        next = next->next;
        destroy_items(&n->items);
        func_002B2028(n);
    }
    (*a)->next = *a;
    (*a)->prev = *a;
}
