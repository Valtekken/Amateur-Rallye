extern s32 func_002392C0(void *, void *);

typedef struct {
    void **begin;
    void **end;
} V;

void func_00248ED8(void *arg0, V *v) {
    s32 n = ((s32)v->end - (s32)v->begin) >> 2;
    s32 changed = 0;
    do {
        s32 i;
        changed = 1;
        i = 0;
        do {
            void *p = v->begin[i];
            s32 i1 = i + 1;
            if (p != 0) {
                s32 j = i1;
                if (i1 < n) {
                    do {
                        s32 offj = j << 2;
                        void *q = *(void **)((u8 *)v->begin + offj);
                        j++;
                        if (q != 0) {
                            if (func_002392C0(p, q) != 0) {
                                changed = 0;
                                *(void **)((u8 *)v->begin + offj) = 0;
                            }
                        }
                    } while (j < n);
                }
            }
            i = i1;
        } while (i < n);
    } while (changed == 0);
}
