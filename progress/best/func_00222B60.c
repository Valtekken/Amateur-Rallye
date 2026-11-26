extern void func_0026E4A0(void *);
extern void func_0027B558(void *, void *);
extern void func_0027B878(void *, void *);

typedef struct { u32 key; u8 pad[0x16c]; } E368;
typedef struct { E368 *begin, *end, *cap; } S;

u32 func_00222B60(S *a, u32 *key) {
    s32 i, n, m;
    E368 *p;
    u32 *q;
    i = 0;
    n = (s32)((u32)((char *)a->end - (char *)a->begin) * 0xE9BD37A7u) >> 4;
    if (n != 0) {
        p = a->begin;
        q = (u32 *)p;
        do {
            if (*q == *key) {
                func_0027B878(p, key);
                return (u32)i;
            }
            i++;
            p++;
            q += 0x170 / 4;
        } while ((u32)i < (u32)n);
    }
    if (a->end != a->cap) {
        if (a->end != 0) func_0027B558(a->end, key);
        a->end = (E368 *)((char *)a->end + 0x170);
    } else {
        func_0026E4A0(a);
    }
    m = (s32)((u32)((char *)a->end - (char *)a->begin) * 0xE9BD37A7u) >> 4;
    return (u32)(m - 1);
}
