extern void func_001D4040(void *, const char *);
extern s32 func_001E3EC0(s32, void *, s32);
extern s32 func_001E4280(void);
extern char D_0044B030[];
extern char D_0044B2D8[];

void func_0013BB70(void *arg0, s32 arg1) {
    s32 ret1;
    s32 ret2;
    s32 sp_buf[4];

    if (arg1 < 7) {
        *(s32 *)((char *)arg0 + 0x10) = 0;
        *(s32 *)((char *)arg0 + 0x14) = arg1;
    } else if (arg1 < 0xF) {
        *(s32 *)((char *)arg0 + 0x10) = 1;
        *(s32 *)((char *)arg0 + 0x18) = arg1 - 7;
    } else {
        *(s32 *)((char *)arg0 + 0x10) = 2;
        *(s32 *)((char *)arg0 + 0x1C) = arg1 - 0xF;
    }

    ret1 = func_001E4280();
    func_001D4040(sp_buf, D_0044B030);
    func_001E3EC0(ret1, sp_buf, *(s32 *)((char *)arg0 + 0x10));
    ret2 = func_001E4280();
    func_001D4040(sp_buf, D_0044B2D8);
    func_001E3EC0(ret2, sp_buf, arg1);
}
