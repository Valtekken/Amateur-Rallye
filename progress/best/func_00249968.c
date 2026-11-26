typedef struct {
    u8 pad[0x10];
    s32 key;
} S10;

typedef struct {
    u8 pad[0x74];
    void *items;
    s32 end;
} S;

void func_00249968(S *arg0) {
    s32 n = (arg0->end - (s32)arg0->items) >> 2;
    s32 i = 0;
    if (n > 0) {
        do {
            void *b = arg0->items;
            S10 *p = *(S10 **)((u8 *)b + i * 4);
            s32 i2 = i + 2;
            if (p != 0) {
                S10 *q = *(S10 **)((u8 *)b + (i + 1) * 4);
                if (q != 0) {
                    s32 kq = q->key;
                    s32 kp = p->key;
                    s32 j = i2;
                    if (i2 < n) {
                        s32 off = i2 * 4 + 4;
                        do {
                            s32 offj = j * 4;
                            void *b2 = arg0->items;
                            S10 *t = *(S10 **)((u8 *)b2 + offj);
                            if (t != 0) {
                                S10 *u = *(S10 **)((u8 *)b2 + off);
                                s32 j1 = j + 1;
                                if (u != 0) {
                                    s32 kt = t->key;
                                    s32 ku = u->key;
                                    if ((kp == kt && kq == ku) || (kp == ku && kq == kt)) {
                                        *(S10 **)((u8 *)b2 + offj) = 0;
                                        *(S10 **)((u8 *)arg0->items + j1 * 4) = 0;
                                    }
                                }
                            }
                            j += 2;
                            off += 8;
                        } while (j < n);
                    }
                }
            }
            i = i2;
        } while (i < n);
    }
}
