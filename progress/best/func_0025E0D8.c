extern void func_003F93CC(s32, s32 *, void *);
extern void func_00273B58(void *, s32 *, void *);

typedef struct { char pad[4]; s32 *cur; s32 *end; } V;
typedef struct { s32 *begin; s32 *end; } Src;

void func_0025E0D8(void *arg0, Src *arg1) {
    V *v = (V *)((char *)arg0 + 0x98);
    s32 i = 0;
    s32 *cur = v->cur;
    s32 base = *(s32 *)((char *)arg0 + 0x98);
    s32 n;
    func_003F93CC(base, cur, 0);
    v->cur = (s32 *)((char *)v->cur - ((char *)cur - (char *)base));
    n = ((char *)arg1->end - (char *)arg1->begin) >> 2;
    if (n > 0) {
        do {
            s32 value = arg1->begin[i];
            if (v->cur != v->end) {
                if (v->cur != 0)
                    *v->cur = value;
                v->cur = (s32 *)((char *)v->cur + 4);
            } else {
                func_00273B58(v, v->cur, &value);
            }
            i++;
        } while (i < n);
    }
}
