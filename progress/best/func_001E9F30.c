extern void func_002B2028(s32, s32, void *);
extern s32 D_004263B0;
extern char D_0040E618[];
typedef struct { s32 begin, end, cap; } Loc;

void *func_001E9F30(s32 *arg0, char *arg1, s32 arg2, s32 arg3) {
    Loc l;
    volatile char pad[0x20];
    s32 sp20, n, size;
    char *it;
    char *vt;

    l.begin = 0;
    l.end = 0;
    l.cap = 0;
    vt = *(char **)(arg1 + 0xC);
    ((void (*)(char *, s32, s32, void *))*(void **)(vt + 0xC))(arg1 + *(s16 *)(vt + 8), arg2, arg3, &l);
    sp20 = (l.begin != l.end) ? *(s32 *)l.begin : D_004263B0;
    *arg0 = sp20;
    if ((u32)l.begin < (u32)l.end) {
        it = (char *)l.begin + 0x2C;
        while ((u32)it < (u32)l.end) it += 0x2C;
    }
    n = (s32)((l.cap - l.begin) * 0xBA2E8BA3) >> 2;
    if (n != 0) {
        size = n * 0x2C;
        if (size == 0) {
            char *head = D_0040E618;
            *(s32 **)l.begin = *(s32 **)(head - 4);
            *(s32 **)(head - 4) = (s32 *)l.begin;
        } else {
            func_002B2028(l.begin, l.end, &l);
        }
    }
    return arg0;
}
