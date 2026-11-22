extern void D_002AD390(void *);
extern void func_001D1900(void *);
extern void D_0044DCD8;
extern void D_004739D8;
extern void D_0047D4F8;

void func_001CF318(void *arg0, s32 arg1) {
    void *sub = (u8 *)arg0 + 0x19C;
    *(void **)((u8 *)arg0 + 8) = &D_004739D8;
    *(void **)((u8 *)sub + 8) = &D_0047D4F8;
    func_001D1900((u8 *)arg0 + 0x1B4);
    *(void **)((u8 *)sub + 8) = &D_0044DCD8;
    *(void **)((u8 *)arg0 + 0x178) = &D_0044DCD8;
    *(void **)((u8 *)arg0 + 0x50) = &D_0044DCD8;
    *(void **)((u8 *)arg0 + 0x14) = &D_0044DCD8;
    *(void **)((u8 *)arg0 + 8) = &D_0044DCD8;
    if (arg1 & 1) { D_002AD390(arg0); }
}
