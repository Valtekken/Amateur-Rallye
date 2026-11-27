extern void func_001963C0(void *, void *, s32);
extern void func_001D2488(void *, void *);
extern void func_001D2CD8(void *, char *);
extern void func_001D4040(void *, void *);
extern void func_001E33C8(s32, void *, s32);
extern void func_001E3EC0(s32, void *, s32);

extern char D_00471928[];
extern char D_004713C0[];
extern char D_004713D8[];
extern char D_004713F0[];
extern char D_00471930[];
extern char D_00471940[];
extern char D_00471950[];
extern char D_00471960[];
extern char D_00471970[];
extern char D_00471980[];
extern char D_00471990[];

void *func_00196070(void *arg0)
{
    char sp[0x10];
    u8 *a = (u8 *)arg0;
    u8 *p2C = a + 0x2C;
    u8 *p28 = a + 0x28;
    u8 *p24 = a + 0x24;
    u8 *p20 = a + 0x20;
    u8 *p1C = a + 0x1C;
    u8 *p18 = a + 0x18;
    u8 *p14 = a + 0x14;
    u8 *p10 = a + 0x10;
    u8 *p38 = a + 0x38;
    u8 *p30 = a + 0x30;
    u8 *p34 = a + 0x34;
    s32 saved;

    *(s32 *)(a + 0xC)  = 0;
    *(s32 *)(a + 0x10) = 0;
    *(s32 *)(a + 0x14) = 0;
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = 0;
    *(s32 *)(a + 0x20) = 0;
    *(s32 *)(a + 0x24) = 0;
    *(s32 *)(a + 0x28) = 0;
    *(s32 *)(a + 0x2C) = 0;
    *(s32 *)(a + 0x30) = 0;
    *(s32 *)(a + 0x34) = 0;
    *(s32 *)(a + 0x38) = 0;

    func_001D2CD8(p10, D_00471928);
    func_001D2CD8(p14, D_004713C0);
    func_001D2CD8(p18, D_004713D8);
    func_001D2CD8(p1C, D_004713F0);
    func_001D2CD8(p20, D_00471930);
    func_001D2CD8(p24, D_00471940);
    func_001D2CD8(p28, D_00471950);
    func_001D2CD8(p2C, D_00471960);
    func_001D2CD8(p30, D_00471970);
    func_001D2CD8(p34, D_00471980);
    func_001D2CD8(p38, D_00471990);

    saved = func_001E4280();
    func_001D4040(sp, *(void **)p38);
    func_001E3EC0(saved, sp, 0);

    saved = func_001E4280();
    func_001D4040(sp, *(void **)p38);
    func_001E33C8(saved, sp, 0);

    func_001D2488(sp, p10); func_001963C0(arg0, sp, 1);
    func_001D2488(sp, p14); func_001963C0(arg0, sp, 0);
    func_001D2488(sp, p18); func_001963C0(arg0, sp, 0);
    func_001D2488(sp, p1C); func_001963C0(arg0, sp, 0);
    func_001D2488(sp, p20); func_001963C0(arg0, sp, 2);
    func_001D2488(sp, p24); func_001963C0(arg0, sp, 2);
    func_001D2488(sp, p28); func_001963C0(arg0, sp, 0);
    func_001D2488(sp, p2C); func_001963C0(arg0, sp, 0);
    func_001D2488(sp, p30); func_001963C0(arg0, sp, 0);
    func_001D2488(sp, p34); func_001963C0(arg0, sp, 0);

    return arg0;
}
