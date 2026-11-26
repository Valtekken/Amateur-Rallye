extern void func_0018FC48(void *, s32, s32);
extern void D_002AD408(s32);
extern s32 func_0018D9D0(s32);
extern void func_0018DDF0(s32, s32);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, void *);
extern void func_001E3F80(s32, void *, s32);
extern void func_002B2028(void *, void *);
extern char D_0044E838[];
extern char D_0040E618[];

typedef struct S_func_00190368_arg0 {
    u8 pad[0x1C];
    s32 unk_1C;
} S_func_00190368_arg0;

void func_00190368(S_func_00190368_arg0 *arg0, s32 arg1, s32 arg2) {
    char stack[0x50];
    s32 s1, s4, s0;
    
    // $a0=arg0, $a1=arg1, $a2=arg2
    // daddu $5, $6, $0  => $a1 = $a2
    // sq $16, 0x20($29) => s1 = arg0
    // daddu $16, $4, $0 => s1 = arg0
    // sq $17, 0x30($29) => s4 = arg0
    // daddu $4, $29, $0 => $a0 = sp
    // sq $31, 0x40($29) => ra = stack[0x40]

    // Replicate the logic carefully.
    // Use s1 and s4 to match the s-register usage.
    
    // The first call:
    // daddu $5, $6, $0 => $a1 = $a2
    // jal func_0018FC48(sp, $a1, $a0) 
    // Wait, $a0 is arg0, $a1 is arg2, $a2 is arg1 (since $a1 was set to $a2).
    // Looking at target: daddu $5, $6, $0 is $a1 = $a2.
    // Then jal func_0018FC48. Arguments are $a0, $a1, $a2.
    // So func_0018FC48(arg0, arg2, arg1).
    
    // Let's try to write it.
    
    // I'll use a local to represent $sp.
    char *sp = stack;
    
    func_0018FC48(sp, arg2, arg1);
    
    // daddu $6, $2, $0 => $a2 = $v0
    // jal D_002AD408(arg2)
    D_002AD408(arg2); 
    // Wait, the asm says jal D_002AD408 then daddu $6, $2, $0? 
    // No: jal D_002AD408, then daddu $6, $2, $0. So $a2 = result of D_002AD408.
    
    // Let's use the variables.
    
    // I'll try to build the logic step by step.
}
