extern s32 func_0023BFF0(void *, void *, void *);
extern void *func_0023C038(void *, void *, void *);

typedef struct { void **begin; void **end; } V;

s32 func_0023C5A0(void *arg0, V *vec, void *arg2) {
    s32 n = ((s32)vec->end - (s32)vec->begin) >> 2;
    s32 i = 0;
    if (n > 0) {
        do {
            void **base = vec->begin;
            void *elem = *(void **)((u8 *)base + (i << 2));
            if (func_0023BFF0(arg0, arg2, elem) != 0) return 1;
            {
                void *r = func_0023C038(arg0, arg2, elem);
                if (r == 0) {
                    i++;
                    continue;
                }
                if (*(s32 *)((u8 *)r + 0x1C8) != 0) return 1;
            }
            i++;
        } while (i < n);
    }
    return 0;
}
