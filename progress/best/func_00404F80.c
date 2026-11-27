void func_00404F80(void) {
    extern s32 D_0044111C;
    extern u8 D_0049E480[128];
    extern u8 D_0049E500[64];
    extern u8 D_0049E540[20];
    extern s32 D_0049E554;
    extern u8 D_0049E558[32];
    extern u8 D_0049E580[256];
    extern u8 D_0049E680[128];
    
    extern void func_0040AF58(void);
    extern void func_0040AFA0(void *, s32, s32, s32, void *, void *, s32 *);
    extern void FlushCache_2(s32);
    extern void sceSifSetDChain_2(void);
    extern s32 AddDmacHandler_3(s32, void *, s32);
    extern s32 sceSifGetReg_2(u32);
    extern void sceSifSetReg_2(u32, s32);
    extern void func_00403AE8(s32);
    extern void func_004053F8(s32, void *, s32, s32, s32, s32);
    extern void *func_00404F08;
    extern void *func_00404F28;
    extern void *func_00405478;

    // Long-lived variables that should be allocated to $s0-$s4
    s32 loop_cnt;
    u8 *p558;
    u8 *p558_base;
    u8 *p480_base;
    u8 *p540_base;
    u8 *p580;
    u8 *p680;
    u8 *p540;
    
    func_0040AF58();
    
    if (D_0044111C != 0) {
        func_0040AFA0(NULL, 0, 0, 0, NULL, NULL, &D_0044111C);
        return;
    }
    
    s32 temp_5 = ((u32)&D_0049E500) | 0x20000000;
    s32 temp_6 = ((u32)&D_0049E480) | 0x20000000;
    
    p558_base = D_0049E558;
    p480_base = D_0049E480;
    p540_base = D_0049E540;
    p558 = D_0049E558;
    p580 = D_0049E580;
    p680 = D_0049E680;
    p540 = D_0049E540;
    
    D_0044111C = 1;
    
    // D_0049E558 struct initialization
    *(s32 *)p558 = temp_6;
    *(s32 *)(p558 + 4) = temp_5;
    *(s32 *)(p558 + 8) = 0;
    *(s32 *)(p558 + 0xC) = (s32)p580;
    *(s32 *)(p558 + 0x10) = 0x20;
    *(s32 *)(p558 + 0x14) = 0;
    *(s32 *)(p558 + 0x18) = 0;
    *(s32 *)(p558 + 0x1C) = (s32)p680;
    
    // Initialize D_0049E580 array (32 elements of 8 bytes each)
    loop_cnt = 0x1F;
    do {
        *(s32 *)p580 = 0;
        *(s32 *)(p580 + 4) = 0;
        p580 += 8;
        loop_cnt--;
    } while (loop_cnt >= 0);
    
    // Initialize D_0049E680 + 0x7C backwards (32 elements of 4 bytes)
    s32 *p680_end = (s32 *)(p680 + 0x7C);
    loop_cnt = 0x1F;
    do {
        *p680_end = 0;
        p680_end--;
        loop_cnt--;
    } while (loop_cnt >= 0);
    
    // Set up D_0049E580 fields
    *(s32 *)D_0049E580 = (s32)func_00404F28;
    *(s32 *)(D_0049E580 + 4) = (s32)p558;
    *(s32 *)(D_0049E580 + 8) = (s32)func_00404F08;
    *(s32 *)(D_0049E580 + 0xC) = (s32)p558;
    
    func_0040AFA0(D_0049E580, temp_5, temp_6, 0x20, D_0049E580, D_0049E580, &D_0044111C);
    FlushCache_2(0);
    
    if (*(vu32 *)0x1000E010 & 0x20) {
        *(vu32 *)0x1000E010 = 0x20;
    }
    
    if (!(*(vu32 *)0x1000C000 & 0x100)) {
        sceSifSetDChain_2();
    }
    
    D_0049E554 = AddDmacHandler_3(5, func_00405478, 0);
    func_00403AE8(5);
    
    s32 reg = sceSifGetReg_2(0x80000000);
    *(s32 *)(p558_base + 8) = reg;
    
    if (reg != 0) {
        *(s32 *)(p540_base + 0x10) = (s32)p480_base;
        func_004053F8(0x80000000, p540_base, 0x14, 0, 0, 0);
        return;
    }
    
    do {
    } while (!(sceSifGetReg_2(4) & 0x20000));
    
    reg = sceSifGetReg_2(2);
    *(s32 *)(p558_base + 8) = reg;
    sceSifSetReg_2(0x80000000, reg);
    sceSifSetReg_2(0x80000001, (s32)p558_base);
    
    *(s32 *)(p540_base + 0x10) = (s32)p480_base;
    *(s32 *)(p540_base + 0xC) = 0;
    
    func_004053F8(0x80000002, p540_base, 0x14, 0, 0, 0);
}
