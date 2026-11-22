extern void func_00192130(void);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, s32);
extern void func_001E3598(void *, void *);

void func_001925F0(void *arg0) {
    s32 tmp;
    char buf[16];

    do { } while (0);
    func_00192130();
    func_001D2900((char *)arg0 + 0xC, *(s32 *)((char *)arg0 + 0x80));
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)((char *)arg0 + 0xC));
    func_001E3598(tmp, buf);
}
