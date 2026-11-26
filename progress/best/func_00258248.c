extern s32 func_0024C7B0(s32);

typedef struct N N;
struct N { N *next; N *other; s32 val; };

s32 func_00258248(N **p1, N **p2) {
    volatile s32 count = 0;
    volatile s32 *pc = &count;
    N *list2 = *p2;
    N *q = list2->next;
    if (q != list2) {
        do {
            q = q->next;
            *pc = *pc + 1;
        } while (q != list2);
    }
    {
        s32 n = 0;
        N *node = (*p1)->next;
        s32 v = (*p1)->other->val;
        if (node != *p1) {
            do {
                s32 vnext = node->val;
                if (func_0024C7B0(v) != 0) {
                    if (func_0024C7B0(vnext) != 0)
                        n++;
                }
                node = node->next;
                v = vnext;
            } while (node != *p1);
        }
        return n == *pc;
    }
}
