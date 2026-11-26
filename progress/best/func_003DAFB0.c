extern s32 func_002B1FC0(u32);
extern void func_003D82C8(void *, s32, s32, s32);
extern s32 func_00403690(s32);
extern void *D_0043ADB8;
typedef struct { s32 f0; s32 pad[13]; s32 f38; s32 pad2[5]; void *f50; } A;
typedef struct { s32 pad0; s32 f4; s32 pad[16]; s64 f48; s32 pad2[8]; } CB;
s32 func_003DAFB0(A *arg0) {
    CB sp;
    s32 v17;
    s32 v18;
    s32 r2;
    if (D_0043ADB8 != 0) ((void (*)(void))D_0043ADB8)();
    if (arg0->f38 < 0) { v17 = 0; v18 = 0x400; }
    else if (((s32 (*)(A *, CB *))(*(void **)(*(void **)((u8 *)arg0 + 0x50) + 0x8C)))(arg0, &sp) < 0) { v17 = 0; v18 = 0x400; }
    else {
        v18 = 0x400;
        v17 = (sp.f4 & 0xF000) == 0x2000;
        v18 = (sp.f48 < 1) ? v18 : (s32)((sp.f48 << 0x20) >> 0x20);
    }
    r2 = func_002B1FC0(v18);
    if (r2 == 0) return -1;
    func_003D82C8(arg0, r2, r2 + v18, 1);
    if (v17 != 0 && func_00403690(arg0->f38) != 0) arg0->f0 |= 0x200;
    return 1;
}
