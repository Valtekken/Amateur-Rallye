extern void func_002B2028(void *);
extern void func_00273390(void *);
extern void D_002AD390(void *);
extern u32 D_0040E618[];

void func_00237BA0(void *p, s32 flags) {
    s32 *start1;
    s32 *end1;
    s32 n1;
    s32 *start2;
    s32 *end2;
    s32 n2;
    start1 = *(s32 **)((u8 *)p + 0x10);
    end1 = *(s32 **)((u8 *)p + 0x18);
    n1 = (s32)((u8 *)end1 - (u8 *)start1) >> 2;
    if (n1 != 0) {
        if ((s32)(n1 << 2) != 0) {
            func_002B2028(start1);
        } else {
            *start1 = D_0040E618[-1];
            D_0040E618[-1] = (u32)start1;
        }
    }
    end2 = *(s32 **)((u8 *)p + 0xC);
    start2 = *(s32 **)((u8 *)p + 0x4);
    n2 = (s32)((u8 *)end2 - (u8 *)start2) >> 2;
    if (n2 != 0) {
        if ((s32)(n2 << 2) != 0) {
            func_002B2028(start2);
        } else {
            *start2 = D_0040E618[-1];
            D_0040E618[-1] = (u32)start2;
        }
    }
    func_00273390(p);
    func_002B2028(*(void **)p);
    if (flags & 1) {
        D_002AD390(p);
    }
}
