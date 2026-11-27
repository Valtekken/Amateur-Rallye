extern void *func_001FDE60(void);
extern void *func_001FDBA8(void *, void *);
extern void func_001B6BA8(void *, void *, void *, void **, void **);
extern void func_001B6C70(void *, void *, void *, void *, void *);

s32 func_001B68D0(void *arg0) {
    f32 sp[3];
    void *sp10, *sp14;

    *(s32 *)((char *)arg0 + 0xCC) = 0;
    if (*(s32 *)((char *)arg0 + 0x18) == 0) {
        *(f32 *)((char *)arg0 + 0x7C) = *(f32 *)((char *)arg0 + 0x1C);
        *(f32 *)((char *)arg0 + 0x80) = *(f32 *)((char *)arg0 + 0x20);
        *(f32 *)((char *)arg0 + 0x84) = *(f32 *)((char *)arg0 + 0x24);
        return 1;
    }

    func_001B6BA8(arg0, func_001FDBA8(func_001FDE60(), (char *)arg0 + 0x14), (char *)arg0 + 0x64, &sp10, &sp14);

    if (sp10 != NULL) {
        char *s10 = (char *)sp10 + 0x40;
        sp[0] = *(f32 *)s10;
        sp[1] = *(f32 *)(s10 + 4);
        sp[2] = *(f32 *)(s10 + 8);
        *(f32 *)((char *)arg0 + 0x7C) = sp[0];
        *(f32 *)((char *)arg0 + 0x80) = sp[1];
        *(f32 *)((char *)arg0 + 0x84) = sp[2];
        {
            char *s14 = (char *)sp14 + 0x40;
            sp[0] = *(f32 *)s14;
            sp[1] = *(f32 *)(s14 + 4);
            sp[2] = *(f32 *)(s14 + 8);
        }
        func_001B6C70(arg0, (char *)arg0 + 0x7C, sp, (char *)arg0 + 0x64, (char *)arg0 + 0x70);
        {
            void *old = *(void **)((char *)arg0 + 0x28);
            *(void **)((char *)arg0 + 0x28) = sp10;
            *(s32 *)((char *)arg0 + 0xCC) = (sp10 != old);
        }
        return 1;
    }

    sp[0] = 0;
    sp[1] = 0;
    sp[2] = 0;
    *(f32 *)((char *)arg0 + 0x7C) = sp[0];
    *(f32 *)((char *)arg0 + 0x80) = sp[1];
    *(f32 *)((char *)arg0 + 0x84) = sp[2];
    return 0;
}
