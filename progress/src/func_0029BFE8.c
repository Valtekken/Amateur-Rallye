extern s32 D_00426850;
extern void *D_00494B48;
extern const char D_0047AD68[];

extern void func_001D4040(void *, const char *);
extern s32 func_001E4280(void);
extern s32 func_001E3598(s32, s32);
extern s32 func_001E3650(s32, s32);
extern void func_001E3D10(s32, s32, s32);
extern void func_0029C110(void *);
extern void func_0029C1C8(void *, s32);

void func_0029BFE8(void *arg0, s32 arg1) {
    if (D_00426850 == 0) {
        func_001D4040(&D_00494B48, D_0047AD68);
        D_00426850 = 1;
    }
    if (func_001E3598(func_001E4280(), (s32)((u8 *)arg0 + 0x18)) != 0) {
        if (func_001E3598(func_001E4280(), (s32)((u8 *)arg0 + 0x1C)) != 0) {
            func_001E3D10(func_001E4280(), (s32)((u8 *)arg0 + 0x1C), 0);
            func_0029C1C8(arg0, arg1);
        }
    } else if (func_001E3650(func_001E4280(), (s32)&D_00494B48) <= 0) {
        if (func_001E3650(func_001E4280(), (s32)((u8 *)arg0 + 0x14)) != *(s32 *)((u8 *)arg0 + 0x10)) {
            *(s32 *)((u8 *)arg0 + 0x24) = 1;
        } else {
            *(s32 *)((u8 *)arg0 + 0x24) = 0;
            *(s32 *)((u8 *)arg0 + 0x28) = 0;
        }
        if (*(s32 *)((u8 *)arg0 + 0x24) != 0) {
            func_0029C110(arg0);
        }
    }
}
