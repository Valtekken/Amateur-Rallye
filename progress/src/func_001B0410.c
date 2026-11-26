extern void func_002060F8(void *);
extern void func_002062A8(void *, s32 *);
extern void func_00205CE0(void *, s16);
extern void *func_001B16A8(void *);
extern void func_0021E620(void *, u32, void *);
extern void *D_002AD408(s32);

void func_001B0410(s32 arg0, void *arg1, s32 arg2) {
    void *temp = *(void **)((u8 *)arg1 + 0x4C);
    if (temp == 0) return;

    func_002060F8(temp);
    func_002062A8(temp, (s32 *)(arg0 + 0x28));

    *(s32 *)((u8 *)temp + 0x74) = 1;
    *(s32 *)((u8 *)temp + 0x88) += 2;
    *(u64 *)((u8 *)temp + 0x78) = (((*(u64 *)((u8 *)temp + 0x78) & -3) | 2) & -5) | 4;

    *(s32 *)((u8 *)temp + 0x64) = 0;
    if (arg2 == 0) {
        void *ptr = D_002AD408(0x20);
        void *obj = func_001B16A8(ptr);
        func_00205CE0(temp, 0);
        *(s32 *)((u8 *)obj + 0x14) = 0;
        *(s32 *)((u8 *)obj + 0x18) = 2;
        *(s32 *)((u8 *)obj + 0x1C) = 3;
        func_0021E620(arg1, 1, obj);
    } else {
        func_00205CE0(temp, 3);
    }
}
