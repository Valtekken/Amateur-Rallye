extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern s32 func_001E38C8(s32, void *);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E33C8(s32, void *, s32);
extern char D_00471750[];

void func_00193EF0(s32 arg0, s32 arg1) {
    s32 s1, s2, s3, s4;
    // Matching the target's sq pattern exactly using volatile
    // sq $19, 0x50($29) -> s3
    // sq $18, 0x40($29) -> s2
    // sq $16, 0x20($29) -> s1
    // sq $31, 0x60($29) -> ra
    // sq $17, 0x30($29) -> s4
    
    volatile s32 v_s3_offset; // 0x50
    volatile s32 v_s2_offset; // 0x40
    volatile s32 v_s1_offset; // 0x20
    volatile s32 v_s4_offset; // 0x30
    volatile s32 v_ra_offset; // 0x60
    
    // Instead of trying to name them and hope for the best, 
    // let's look at the assembly's prologue.
    // addiu $sp, $sp, -0x70
    // sq $19, 0x50($sp)
    // sq $18, 0x40($sp)
    // daddu $19, $5, $0  <-- s3 = arg1
    // sq $16, 0x20($sp)
    // sq $31, 0x60($sp)
    // jal func_001E4280
    // sq $17, 0x30($sp)
    
    // This implies:
    // s3 = arg1;
    // func_001E4280();
    // s1 = func_001E4280();
    // s2 = &D_00471750;
    // func_001D4040(arg0, s2);
    // if (func_001E38C8(s1, arg0) ^ 1) { ... }

    // Let's try to use the variables and see if GCC gives us the correct sq/lq.
    // Since the stack frame is 0x70, declaring 4 s32 locals + 1 ra is not enough.
    // We need to match the offsets 0x20, 0x30, 0x40, 0x50, 0x60.
    
    // Using a struct for the stack locals is the cleanest way to force offsets.
    struct Stack {
        char pad0[0x20];
        s32 s1;
        s32 s4;
        s32 s2;
        s32 s3;
        s32 ra_pad;
    } *st;
    // But wait, I can't easily access $sp in pure C without some tricks or assuming the compiler uses it.
    // Actually, the compiler will use the frame pointer or $sp.
    // In EE-GCC, locals are usually at $sp + offset.
    
    // Let's try to just use the variables and see what happens.
    // If I use:
    // s32 s1, s2, s3, s4;
    // s3 = arg1;
    // func_001E4280();
    // s1 = func_001E4280();
    // s2 = (s32)&D_00471750;
    // ...
    
    s3 = arg1;
    func_001E4280();
    s1 = func_001E4280();
    s2 = (s32)&D_00471750;
    func_001D4040(arg0, (const char *)s2);
    if ((func_001E38C8(s1, (void *)arg0) ^ 1) != 0) {
        func_001E4280();
        func_001D4040((void *)(arg0 + 0x10), (const char *)s2);
        func_001E3D10(func_001E4280(), (void *)(arg0 + 0x10), 0);
        func_001E4280();
        func_001D4040((void *)(arg0 + 0x10), (const char *)s2);
        func_001E33C8(func_001E4280(), (void *)(arg0 + 0x10), 0);
    }
    func_001E4280();
    func_001D4040(arg0, (const char *)s2);
    func_001E3D10(func_001E4280(), arg0, arg1);
}
