extern void *func_002B1FC0(int);
extern void *func_003D2910(int);

typedef struct Node { struct Node *next; u32 key; u32 extra; } Node;
typedef struct { u32 f0; s32 begin; s32 end; u32 fC; u32 count; } Table;
typedef struct { u32 key; u32 extra; } Key;
typedef struct { Node *node; Table *table; u32 flag; } Result;
typedef struct { void *p; void *q; } P;

void *func_0036EBD8(Result *out, Table *tbl, Key *key) {
    s32 begin = tbl->begin;
    u32 n = (tbl->end - begin) >> 2;
    u32 idx = key->key % n;
    Node *head = *(Node **)(begin + (idx << 2));
    Node *cur = head;
    if (cur != NULL) {
        while (cur->key != key->key) {
            cur = cur->next;
            if (cur == NULL) break;
        }
    }
    if (cur != NULL) {
        P pr;
        pr.p = cur;
        pr.q = tbl;
        *(P *)out = pr;
        out->flag = 0;
        return out;
    }
    {
        Node *node = (Node *)func_002B1FC0(0xC);
        if (node == NULL) node = (Node *)func_003D2910(0xC);
        if (node != NULL) {
            node->next = NULL;
            *(u64 *)&node->key = *(u64 *)key;
        }
        node->next = head;
        *(Node **)(begin + (idx << 2)) = node;
        tbl->count++;
        {
            P pr;
            pr.p = node;
            pr.q = tbl;
            *(P *)out = pr;
            out->flag = 1;
        }
    }
    return out;
}
