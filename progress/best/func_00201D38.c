extern void func_00156C38(void *, void *);
extern void func_00201E38(void *, s32);
extern void func_00217CB0(void *);
extern void func_003F93CC(void *, s32, s32);
void func_00201D38(void *arg0, void *arg1) {
    s32 n = (*(s32 *)((char *)arg0 + 0x10) - *(s32 *)((char *)arg0 + 0xC)) * (s32)0xAAAAAAAB >> 2;
    s32 i = 0;
    if (n > 0) {
        do { *(s32 *)(*(void **)arg0 + (i * 4)) = 0; i++; } while (i < n);
    }
    {
        char *p18 = (char *)arg0 + 0x18;
        char *p24 = (char *)arg0 + 0x24;
        func_00156C38(p24, p18);
    }
    {
        s32 j = 0;
        func_00217CB0((char *)arg0 + 0x6C);
        func_00217CB0((char *)arg0 + 0x70);
        if (n > 0) {
            do { func_00201E38(arg0, j); j++; } while (j < n);
        }
    }
    {
        s32 len = *(s32 *)((char *)arg1 + 4);
        s32 ptr = (s32)*(void **)arg1;
        s32 d = len - ptr;
        func_003F93CC((void *)ptr, len, 0);
        *(s32 *)((char *)arg1 + 4) = *(volatile s32 *)((char *)arg1 + 4) - d;
    }
    func_00156C38(arg1, arg0);
}
