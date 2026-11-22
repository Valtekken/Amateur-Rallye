extern u32 D_0040E618[];
extern void *func_002B1FC0(u32, u32, void *, u32);
extern void *func_003D2910(u32);
extern void *func_00152D28(u32, u32, void *, u32);
extern void func_002B2028(void *);
extern void func_002DE728(u32, u32, u32, u32, u64, u32, u32);
extern void func_002DE780(u32, u32, void *);
extern void func_002DE7D0(u32, u32, void *, u32, u64, u32, u32);

typedef struct { u32 *begin, *end, *cap; } Vec;

void func_00375DC0(Vec *v, u32 arg1, u32 n, u64 *src) {
    if (n == 0) return;
    u32 count = (u32)(((s32)(v->end - v->begin) * 0xAAAAAAABu) >> 4);
    if (count >= n) {
        // complex path omitted for baseline
    }
}
