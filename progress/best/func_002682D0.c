extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern u32 D_0040E618[];

#define FREEB(bo, eo) do { \
    s32 end = *(s32 *)((u8 *)a + (eo)); \
    s32 base = *(s32 *)((u8 *)a + (bo)); \
    s32 n = (end - base) >> 2; \
    if (n != 0) { \
        if ((n << 2) != 0) func_002B2028((void *)(u32)base); \
        else { *(u32 *)(u32)base = D_0040E618[-1]; D_0040E618[-1] = (u32)base; } \
    } \
} while (0)

#define FREEBF(bo, eo) do { \
    s32 base = *(s32 *)((u8 *)a + (bo)); \
    s32 end = *(s32 *)((u8 *)a + (eo)); \
    s32 n = (end - base) >> 2; \
    if (n != 0) { \
        if ((n << 2) != 0) func_002B2028((void *)(u32)base); \
        else { *(u32 *)(u32)base = D_0040E618[-1]; D_0040E618[-1] = (u32)base; } \
    } \
} while (0)

void func_002682D0(void *a, s32 flag) {
    FREEBF(0x74, 0x7C);
    FREEB(0x68, 0x70);
    FREEB(0x5C, 0x64);
    FREEB(0x50, 0x58);
    FREEB(0x44, 0x4C);
    FREEB(0x38, 0x40);
    FREEB(0x2C, 0x34);
    FREEB(0x20, 0x28);
    FREEB(0x10, 0x18);
    if (flag & 1) D_002AD390(a);
}
