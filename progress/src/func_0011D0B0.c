extern void func_0011D8E8(void *, s32);
extern void func_001E2460(void *, s32);
extern void func_001E2470(void *, const char *, void *);
extern void func_001E25B0(void *, const char *, void *);
extern void func_001E28F8(void *, const char *, void *);
extern char D_00444D00[], D_004465C0[], D_00447348[], D_00447350[], D_00447358[], D_00447360[], D_00447370[], D_00447380[];

void func_0011D0B0(void *arg0, s32 arg1, s32 arg2) {
    char sp[0x10];
    func_001E2460(sp, arg2);
    func_001E25B0(sp, D_00444D00, (char *)arg0 + 0x10);
    func_001E25B0(sp, D_00447348, (char *)arg0 + 0x18);
    func_001E25B0(sp, D_00447350, (char *)arg0 + 0x14);
    func_001E28F8(sp, D_00447358, (char *)arg0 + 0x20);
    func_001E2470(sp, D_004465C0, (char *)arg0 + 0xC);
    func_001E25B0(sp, D_00447360, (char *)arg0 + 0x34);
    func_001E25B0(sp, D_00447370, (char *)arg0 + 0x38);
    func_001E2470(sp, D_00447380, (char *)arg0 + 0x3C);
    if (*(s32 *)((char *)arg0 + 0x18) == -1) {
        *(s32 *)((char *)arg0 + 0x1C) = 1;
    } else {
        *(s32 *)((char *)arg0 + 0x1C) = 0;
    }
    func_0011D8E8(arg0, arg1);
}
