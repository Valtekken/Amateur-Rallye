typedef struct {float key;u32 v;} __attribute__((packed)) E;
static inline s32 less(E *a,E *b){return *(float*)b > *(float*)a;}
extern void func_001C9160(E*,E);

void func_001C91C8(E *p, E *end) {
    if (p != end) {
        E *r = p + 1;
        if (r != end) {
            E *q = p;
            do {
                E tmp = *r;
                if (less(q, &tmp)) {
                    E *src = r, *dst = r + 1;
                    s32 n = r - p;
                    while (n > 0) { *--dst = *--src; n--; }
                    *q = tmp;
                } else {
                    E value = tmp;
                    func_001C9160(r, value);
                }
                r++;
            } while (r != end);
        }
    }
}
