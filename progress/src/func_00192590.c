extern void func_00192130(void);
extern void func_001D2900(void *arg0, s32 arg1);
extern void func_001D4040(void *arg0, void *arg1);
extern s32 func_001E4280(void);
extern void func_001E3650(s32 arg0, void *arg1);

void func_00192590(void *arg0) {
    s32 tmp;
    char buf[16];

    do { } while (0);
    func_00192130();
    func_001D2900((char *)arg0 + 0xC, *(s32 *)((char *)arg0 + 0x7C));
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)((char *)arg0 + 0xC));
    func_001E3650(tmp, buf);
}
