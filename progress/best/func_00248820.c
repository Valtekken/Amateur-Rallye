extern s32 func_00243718(void *, void *, s32, void *, void *, void *, void *, void *);

typedef struct { s32 unk0; s32 unk4; s32 unk8; void *unkC; } Node;
typedef struct { Node *a; Node *b; } Item;
typedef struct { s32 pad[0x58/4]; Item **arr; Item **end; } Root;
typedef struct { f32 x, y, z; } V3;

void func_00248820(Root *arg0, void *arg1, void *arg2) {
    V3 sp0, sp10;
    s32 sp20;
    s32 n, i;
    s32 *q = (s32 *)&sp0;
    Item *item;

    n = ((s32)arg0->end - (s32)arg0->arr) >> 2;
    q[2] = (q[1] = (q[0] = 0));
    q[6] = (q[5] = (q[4] = 0));
    i = n - 1;
    if (i >= 0) {
        do {
            item = arg0->arr[i];
            if (item->a->unk4 == -1) {
                arg0->arr[i] = NULL;
            } else {
                if (item->b->unk4 == -1) {
                    arg0->arr[i] = NULL;
                } else if (func_00243718(arg1, arg2, 0, item->a->unkC, item->b->unkC, &sp10, &sp0, &sp20) == 0) {
                    arg0->arr[i] = NULL;
                }
            }
            i--;
        } while (i >= 0);
    }
}
