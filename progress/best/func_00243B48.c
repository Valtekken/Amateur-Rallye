typedef struct V { f32 x, y, z; } V;
typedef struct S {
    V *a;          /* 0x00 */
    V *b;          /* 0x04 */
    u8  pad[0x10]; /* 0x08 */
    void *unk18;   /* 0x18 */
    void *unk1C;   /* 0x1C */
} S;

typedef struct Ctx {
    u8 pad[0x20];  /* 0x00 */
    S **unk20;     /* 0x20 */
    S **unk24;     /* 0x24 */
} Ctx;

extern s32 func_00243FD0(void *, S *, S *);
extern f32 func_00243D68(void *, S *, S *);
extern void func_00243E78(void *, S *, S *);
extern f32 D_004264A0;
extern f32 D_00479B6C;

void func_00243B48(Ctx *s)
{
    s32 n = (s32)(s->unk24 - s->unk20);
    s32 i, j, changed, iNext;
    s32 bestIdx;
    f32 best, thr;
    S *p, *q;

    /* phase 1 */
    i = 0;
    do {
        changed = 0;
        if (n > 0) {
            do {
                p = s->unk20[i];
                iNext = i + 1;
                if (p != 0) {
                    j = 0;
                    if (n > 0) {
                        do {
                            q = s->unk20[j];
                            if (q != 0) {
                                if (func_00243FD0(s, p, q) != 0) {
                                    changed = 1;
                                    s->unk20[j] = 0;
                                }
                            }
                            j++;
                        } while (j < n);
                    }
                }
                i = iNext;
            } while (i < n);
        }
        i = 0;
    } while (changed);

    thr = D_004264A0 * 10.0f;
    thr = thr * thr;

    /* phase 2 */
    do {
        changed = 0;
        if (n > 0) {
            do {
                p = s->unk20[i];
                iNext = i + 1;
                if (p != 0) {
                    bestIdx = -1;
                    best = D_00479B6C;
                    if (iNext < n) {
                        j = iNext;
                        do {
                            q = s->unk20[j];
                            if (q != 0) {
                                f32 d = func_00243D68(s, p, q);
                                if (d < best) {
                                    best = d;
                                    bestIdx = j;
                                }
                            }
                            j++;
                        } while (j < n);
                    }
                    if (i < bestIdx && best < thr) {
                        changed = 1;
                        func_00243E78(s, p, s->unk20[bestIdx]);
                        s->unk20[bestIdx] = 0;
                    }
                }
                i = iNext;
            } while (i < n);
        }
        i = 0;
    } while (changed);
}
