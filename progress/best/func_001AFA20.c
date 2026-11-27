extern void func_001577C8(void *, void *, void *);
extern s32 func_001B06D8(void *);
extern f32 func_001D5E70(s32, f32, f32);
extern s32 func_001D5EB0(s32, s32, s32);
extern s32 func_001D5F70(void);

typedef struct { f32 x, y, z, w; } Vec;
typedef struct { s32 b, e; } QH;

void func_001AFA20(char *arg0) {
    Vec v0, v10;
    void *itemLocal[1];
    void **tail = (void **)(arg0 + 0x38);
    f32 *pf = (f32 *)(arg0 + 0x1C);

    if (tail[0] != tail[1]) {
        QH *q = *(QH **)(arg0 + 0xAC);
        if (q != NULL) {
            if (((s32)((u32)(q->e - q->b) * 0xCCCCCCCDu) >> 4) != 0) {
                f32 c1 = 0.1f;
                f32 c2 = 1.0f;
                if (func_001D5E70(func_001D5F70(), c1, c2) < (*pf += 0.003f) * c1) {
                    s32 rnd, cnt, n, idx, i;
                    Vec *v, *ref;
                    f32 refx, refy, refz, dx, dy, dz, d2, t2, m2;

                    *pf = 0.0f;
                    rnd = func_001D5EB0(func_001D5F70(), 0, *(s32 *)(arg0 + 0x2C));
                    cnt = (s32 *)tail[1] - (s32 *)tail[0];
                    n = (u32)cnt < (u32)rnd ? cnt : rnd;
                    if (n > 0) {
                        idx = func_001B06D8(arg0);
                        v = (Vec *)((char *)*(s32 **)(arg0 + 0xAC) + idx * 0x50 + 0x40);
                        ref = (Vec *)(arg0 + 0x74);
                        refx = ref->x;
                        m2 = *(f32 *)(arg0 + 0x18) * *(f32 *)(arg0 + 0x18);
                        t2 = *(f32 *)(arg0 + 0x14) * *(f32 *)(arg0 + 0x14);

                        v0.x = v->x;
                        dx = v0.x - refx;
                        v0.y = v->y;
                        dy = v0.y - v0.y;
                        v0.z = v->z;
                        refy = ref->y;
                        v10.x = refx;
                        refz = ref->z;
                        v10.y = refy;
                        v10.y = v0.y;
                        dz = v0.z - refz;
                        d2 = dx * dx;
                        d2 = d2 + dy * dy;
                        d2 = d2 + dz * dz;
                        v10.z = refz;

                        if (t2 < d2) {
                            if (d2 < m2 && n > 0) {
                                void **loopTail = tail;
                                void **pItem = itemLocal;
                                f32 one = c2;
                                for (i = 0; i < n; i++) {
                                    char *item;
                                    Vec *dst;
                                    void **wq = (void **)(arg0 + 0x68);
                                    void *h = wq[0];

                                    item = *(char **)((char *)loopTail[1] - 4);
                                    *pItem = item;
                                    loopTail[1] = (void **)((char *)loopTail[1] - 4);
                                    dst = (Vec *)((char *)*(s32 *)item + 0x50);
                                    dst->x = v0.x;
                                    dst->y = v0.y;
                                    dst->z = v0.z;
                                    dst->w = one;

                                    if (wq[1] != wq[2] && h == wq[1]) {
                                        if (h != NULL) *(void **)h = item;
                                        wq[1] = (void **)((char *)wq[1] + 4);
                                    } else {
                                        func_001577C8(wq, h, pItem);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
