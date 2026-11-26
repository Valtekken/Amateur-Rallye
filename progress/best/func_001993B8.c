extern void func_001E2460(void *, s32);
extern void func_001E2470(void *, const char *, s32);
extern void func_001E25B0(void *, const char *, s32);
extern void func_001E28F8(void *, const char *, s32);
extern char D_00471BB8[];
extern char D_00471BC8[];
extern char D_00471BE0[];
extern char D_00471BF8[];
extern char D_00471C08[];
extern char D_00471C18[];
extern char D_00471C28[];
extern char D_00471C40[];
extern char D_00471C50[];

typedef struct S_func_001993B8_arg0 {
    u8 pad[0x1C];
    s32 unk_1C;
} S_func_001993B8_arg0;

void func_001993B8(S_func_001993B8_arg0 *arg0, s32 arg1, s32 arg2) {
    // $a0=arg0, $a1=arg1, $a2=arg2
    // target: daddu $5, $6, $0  => $a1 = $a2
    // target: sq $16, 0x10($29) => s1 = arg0
    // target: daddu $16, $4, $0 => s1 = arg0
    // target: jal func_001E2460 (with $a0=sp, $a1=arg2)
    
    // To get $a1 = $a2, we call with arg2 as the second arg.
    // To get $a0 = sp, we use a local array to get a stack pointer.
    
    char stack[0x30];
    s32 *sp_ptr = stack;
    
    // We need to pass sp to func_001E2460.
    // If we call func_001E2460(stack, arg2), $a0 will be &stack.
    // This is usually sp + offset.
    
    // Let's try to follow the sequence of calls.
    // Note: $s1 = arg0 (the pointer passed in).
    // The offsets in the target are relative to $s1 (which is $a0).
    // func_001E2470(sp, &D_00471BB8, arg0 + 0xC)
    // func_001E25B0(sp, &D_00471BC8, arg0 + 0x18)
    // func_001E25B0(sp, &D_00471BE0, arg0 + 0x1C)
    // func_001E2470(sp, &D_00471BF8, arg0 + 0x24)
    // func_001E25B0(sp, &D_00471C08, arg0 + 0x10)
    // func_001E28F8(sp, &D_00471C18, arg0 + 0x20)
    // func_001E2470(sp, &D_00471C28, arg0 + 0x2C)
    // func_001E25B0(sp, &D_00471C40, arg0 + 0x30)
    // func_001E25B0(sp, &D_00471C50, arg0 + 0x34)
    // arg0->unk1C = 4;
    
    // Since $a0 is the original arg0, we use it.
    // However, the target calls use $a0 = sp.
    // If we pass stack as the first argument to every call, $a0 will be &stack.
    // Which is $sp + offset.
    
    // Let's try to pass 'stack' as the first argument to every call.
    func_001E2460(stack, arg2);
    func_001E2470(stack, D_00471BB8, (char *)arg0 + 0xC);
    func_001E25B0(stack, D_00471BC8, (char *)arg0 + 0x18);
    func_001E25B0(stack, D_00471BE0, (char *)arg0 + 0x1C);
    func_001E2470(stack, D_00471BF8, (char *)arg0 + 0x24);
    func_001E25B0(stack, D_00471C08, (char *)arg0 + 0x10);
    func_001E28F8(stack, D_00471C18, (char *)arg0 + 0x20);
    func_001E2470(stack, D_00471C28, (char *)arg0 + 0x2C);
    func_001E25B0(stack, D_00471C40, (char *)arg0 + 0x30);
    func_001E25B0(stack, D_00471C50, (char *)arg0 + 0x34);
    arg0->unk_1C = 4;
}
