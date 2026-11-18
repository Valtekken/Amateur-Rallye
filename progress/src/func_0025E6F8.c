f32 func_0025E6F8(void *a, void *b) {
    return -*(f32*)((u8*)b + 0x1C);
}

typedef struct V {
    void **begin;
    void **end;
} V;

extern void func_0025E788(void *, s32, f32);

void func_0025E708(V *arg0) {
    s32 n = (s32)((u8*)arg0->end - (u8*)arg0->begin) >> 2;
    s32 i = 0;
    if (n > 0) {
        do {
            void **p = arg0->begin;
            s32 *q = (s32*)arg0->begin; /* need field0 */
            func_0025E788(arg0, (s32)p[i], *(f32*)(q + i));
            i++;
        } while (i < n);
    }
}

void func_0025E670(V *arg0) {
    /* need proper offsets: 0x98,0x9C,0x18 */
}
