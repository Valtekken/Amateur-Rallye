typedef struct Node { struct Node *next; struct Node *prev; int data; } Node;

extern int func_00231B00(int, int);
extern int func_00231B48(int, int);
extern Node *func_002B1FC0(int);
extern Node *func_003D2910(int);

void func_00232788(void *arg0) {
    struct {
        Node *sp0;
        char _p0[0xC];
        Node *sp10;
        char _p1[0xC];
        Node *sp20;
        char _p2[0xC];
        int sp30;
        Node *sp34;
    } sp;
    Node *head14;
    Node *cur;
    int v16;
    int v21;
    int v18;
    Node *n;
    Node *it;
    Node *head18;
    int *psp30;

    head14 = *(Node **)((char *)arg0 + 0x14);
    sp.sp0 = head14->next;
    cur = sp.sp0;
    v16 = cur->data;
    cur = cur->next;
    sp.sp0 = head14;
    if (cur != head14) {
        sp.sp34 = head14;
        psp30 = &sp.sp30;
        do {
            v21 = cur->data;
            v18 = func_00231B00(v16, v21);

            head18 = *(Node **)((char *)arg0 + 0x18);
            sp.sp30 = 0;
            it = head18->next;
            if (it != head18) {
                do {
                    it = it->next;
                    (*psp30)++;
                } while (it != head18);
            }

            if (sp.sp30 == 0) {
                int v16b;
                v16b = func_00231B48(v16, v18);
                sp.sp20 = (*(Node **)((char *)arg0 + 0x18))->next;
                n = func_002B1FC0(0xC);
                if (n == 0) {
                    n = func_003D2910(0xC);
                }
                if ((char *)n + 8 != 0) {
                    n->data = v16b;
                }
                n->next = sp.sp20;
                n->prev = sp.sp20->prev;
                sp.sp20->prev->next = n;
                sp.sp20->prev = n;
                sp.sp10 = *(Node **)((char *)arg0 + 0x18);
            } else {
                sp.sp10 = *(Node **)((char *)arg0 + 0x18);
            }

            n = func_002B1FC0(0xC);
            if (n == 0) {
                n = func_003D2910(0xC);
            }
            if ((char *)n + 8 != 0) {
                n->data = v18;
            }
            n->next = sp.sp10;
            n->prev = sp.sp10->prev;
            sp.sp10->prev->next = n;
            sp.sp10->prev = n;

            sp.sp0 = n;
            v16 = v21;
            cur = cur->next;
            head14 = *(Node **)((char *)arg0 + 0x14);
            sp.sp0 = head14;
            sp.sp34 = head14;
        } while (cur != head14);
    }
}
