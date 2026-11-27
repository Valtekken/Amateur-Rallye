typedef struct Node {
    struct Node *next;
    s32 pad1;
    s32 a[4];
    s32 b[3];
    s32 c[3];
    s32 d[3];
} Node;

typedef struct List {
    Node *node;
} List;

extern void func_001FBB08(f32 *out, void *arg0, s32 *tri);

s32 func_001FB950(void *arg0, List *arg1, s32 arg2, s32 arg3, s32 *arg4) {
    f32 n1[3];
    s32 tri[13];
    f32 n2[3];
    f32 *pn2;
    s32 *p7;
    s32 idx;
    Node *n;

    idx = 0;
    n = arg1->node->next;
    if (n != arg1->node) {
        p7 = &tri[7];
        pn2 = n2;
        do {
            s32 *src = n->a;
            s32 *pb = n->b;
            s32 *pc = n->c;
            s32 *pd = n->d;
            s32 i;
            s32 *p;
            func_001FBB08(n1, arg0, src);
            tri[0] = src[0];
            tri[1] = src[1];
            tri[2] = src[2];
            tri[3] = src[3];
            tri[4] = pb[0];
            tri[5] = pb[1];
            tri[6] = pb[2];
            tri[7] = pc[0];
            tri[8] = pc[1];
            tri[9] = pc[2];
            tri[10] = pd[0];
            tri[11] = pd[1];
            tri[12] = pd[2];
            p = p7;
            for (i = 2; i >= 0; i--) {
                if (*p == arg2) {
                    *p = arg3;
                }
                p++;
            }
            func_001FBB08(pn2, arg0, tri);
            if ((n1[0] * n2[0] + n1[1] * n2[1] + n1[2] * n2[2]) < 0.0f) {
                *arg4 = idx;
                return 1;
            }
            n = n->next;
            idx++;
        } while (n != arg1->node);
    }
    *arg4 = -1;
    return 0;
}
