extern void func_00251AC8(s32);

typedef struct {
    s32 b0;      /* 0x00 */
    s32 e0;      /* 0x04 */
    s32 unk8;    /* 0x08 */
    s32 b1;      /* 0x0C */
    s32 e1;      /* 0x10 */
    s32 unk14;   /* 0x14 */
    s32 *arr;    /* 0x18 */
    s32 arrEnd;  /* 0x1C */
} S;

void func_00241460(S *arg0) {
    s32 i, n1, n2, n3;
    s32 *q;

    n1 = (arg0->e0 - arg0->b0) >> 2;
    if (n1 > 0) {
        i = arg0->e1;
        do { i--; } while (i != 0);
    }
    n2 = (arg0->e1 - arg0->b1) >> 2;
    if (n2 > 0) {
        i = n2;
        do { i--; } while (i != 0);
    }
    q = (s32 *)((char *)arg0 + 0x18);
    n3 = (q[1] - q[0]) >> 2;
    if (n3 > 0) {
        i = 0;
        do {
            func_00251AC8(arg0->arr[i]);
            i++;
        } while (i < n3);
    }
}
