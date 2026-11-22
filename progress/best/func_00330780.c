extern void func_001D4010(void *);
extern void *D_002AD408(s32);
extern void *func_00362458(void *);
extern void func_003615A0(void *, void *);
extern void func_00362FD0(void *, void *);
extern void func_002631A0(void *, void *);

void func_00330780(u8 *a0, u8 *a1)
{
    u8 *d = *(u8 **)(a1 + 0x50);
    s32 v18;

    func_001D4010(d + 0xC);
    func_001D4010(a1 + 0x5C);
    if (*(s32 *)(d + 0xC) == 0)
        return;
    if ((*(u32 *)(d + 0x74) & 1) == 0)
        return;
    v18 = *(s32 *)(d + 0x78);
    if (v18 == 0) {
        v18 = (s32)func_00362458(D_002AD408(0xC0));
        func_003615A0((void *)v18, d);
        func_00362FD0((void *)v18, d + 0xC);
        func_002631A0(d, (void *)v18);
    }
    (void)a0;
    (void)v18;
}
