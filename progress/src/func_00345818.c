extern void *D_00485F40;
extern u32 D_0040E618[];
extern void func_00220F80(void *, s32);
extern void func_00219B10(void *);
extern void func_002B2028(void *);
extern void func_0034C240(void *);
extern void func_001D2040(void *, s32);

void func_00345818(void *p, s32 arg1) {
    s32 *start1, *cap1, *start2, *cap2;
    s32 n1, n2;
    *(u32 *)p = (u32)&D_00485F40;
    start1 = *(s32 **)((u8 *)p + 0x4);
    if (start1) func_00220F80(start1, 3);
    func_00219B10((u8 *)p + 0x38);
    start1 = *(s32 **)((u8 *)p + 0x3C);
    cap1 = *(s32 **)((u8 *)p + 0x44);
    n1 = (s32)((u8 *)cap1 - (u8 *)start1) >> 2;
    if (n1 != 0) {
        if ((s32)(n1 << 2) != 0) func_002B2028(start1);
        else { *start1 = D_0040E618[-1]; D_0040E618[-1] = (u32)start1; }
    }
    func_0034C240((u8 *)p + 0x10);
    start2 = *(s32 **)((u8 *)p + 0x14);
    cap2 = *(s32 **)((u8 *)p + 0x1C);
    n2 = (s32)((u8 *)cap2 - (u8 *)start2) >> 2;
    if (n2 != 0) {
        if ((s32)(n2 << 2) != 0) func_002B2028(start2);
        else { *start2 = D_0040E618[-1]; D_0040E618[-1] = (u32)start2; }
    }
    func_001D2040(p, arg1);
}
