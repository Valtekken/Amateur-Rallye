extern void func_001D1F58(void*);
extern void func_003F931C(void*, void*, s32, s32);
typedef struct { u32 pad; s8 *cur; s8 *end; } S;
s32 func_001D1E68(S *s, s8 ch, s8 *dst, s32 n) {
    s8 *p = s->cur;
    s8 *end = s->end;
    if (p < end && *p != ch && n > 0) {
        p++;
        while (p < end) {
            n--;
            if (*p == ch || n <= 0) {
                if (*p == ch) break;
            }
            p++;
        }
    }
    if (n <= 0) return 0;
    if (*p != ch) return 0;
    {
        s8 *begin = s->cur;
        s32 len = p - begin;
        func_003F931C(dst, begin, len, n);
        dst[len] = 0;
        s->cur = p + 1;
        func_001D1F58(s);
    }
    return 1;
}
