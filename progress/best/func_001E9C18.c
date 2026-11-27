extern s32 func_001E9F08(void *, void *);
extern void func_002B2028(void *, void *);
extern u8 D_0040E618[];

typedef struct { void *begin, *end, *cap; } Vec;

s32 func_001E9C18(void *arg0, s32 arg1, s32 arg2) {
    Vec v;
    volatile char pad[0x10];
    void **vtable;
    s16 offset;
    void (*fn)(void *, s32, s32, Vec *);
    s32 ret_val;
    volatile u8 *p;
    s32 n;

    v.begin = v.end = v.cap = NULL;
    vtable = (void **)*(u32 *)((u8 *)arg0 + 0xC);
    offset = *(s16 *)((u8 *)vtable + 8);
    fn = (void (*)(void *, s32, s32, Vec *))*(u32 *)((u8 *)vtable + 0xC);
    fn((u8 *)arg0 + offset, arg1, arg2, &v);

    if (v.begin != v.end) {
        func_001E9F08(arg0, v.begin);
        ret_val = *(s32 *)((u8 *)v.begin + 4);
        p = (u8 *)v.begin + 0x2C;
        while ((u32)p < (u32)v.end) p += 0x2C;
        p += 0x2C;
        n = (s32)(((u32)v.cap - (u32)v.begin) * 0xBA2E8BA3u) >> 2;
        if (n != 0) {
            if (n * 0x2C != 0) {
                func_002B2028(v.begin, &v);
                return ret_val;
            }
            *(u32 *)v.begin = *(u32 *)((u8 *)D_0040E618 - 4);
            *(u32 *)((u8 *)D_0040E618 - 4) = (u32)v.begin;
            return ret_val;
        }
        return ret_val;
    }
    p = (u8 *)v.begin + 0x2C;
    while ((u32)p < (u32)v.end) p += 0x2C;
    p += 0x2C;
    n = (s32)(((u32)v.cap - (u32)v.begin) * 0xBA2E8BA3u) >> 2;
    if (n != 0) {
        if (n * 0x2C != 0) {
            func_002B2028(v.begin, &v);
            return 0;
        }
        *(u32 *)v.begin = *(u32 *)((u8 *)D_0040E618 - 4);
        *(u32 *)((u8 *)D_0040E618 - 4) = (u32)v.begin;
        return 0;
    }
    return 0;
}
