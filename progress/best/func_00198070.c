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

typedef struct S_func_00198070_ret {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} S_func_00198070_ret;

typedef struct S_func_00189118_arg2 {
    S_func_00198070_ret *unk_00;
    void *unk_04;
    s32 unk_08;
} S_func_00189118_arg2;

void func_00198070(S_func_00189118_arg2 *arg0, s32 arg1, s32 arg2) {
    char stack[0x60];
    s32 s1, s4, s0;
    s32 var_20 = 0;
    s32 res;
    
    // $a0=arg0, $a1=arg1, $a2=arg2
    // daddu $5, $6, $0  => $a1 = $a2
    // sq $16, 0x20($29) => s1 = arg0
    // daddu $16, $4, $0 => s1 = arg0
    // sq $17, 0x30($29) => s4 = arg0
    // daddu $4, $29, $0 => $a0 = sp
    // sq $31, 0x40($29) => ra = stack[0x40]

    // daddu $5, $6, $0 is $a1 = $a2
    // I'll just use arg2 where the code needs $a1.

    func_0018FC48(stack, arg2, arg1);
    // wait, the assembly says:
    // daddu $5, $6, $0 -> $a1 = $a2
    // jal func_0018FC48
    // daddu $6, $2, $0 -> $a2 = $v0
    // jal D_002AD408
    // This means D_002AD408 is called with $a2 as its argument.
    
    // Re-read carefully:
    // daddu $5, $6, $0
    // sq $16, 0x20($29)
    // daddu $16, $4, $0
    // sq $17, 0x30($29)
    // daddu $4, $29, $0
    // sq $31, 0x40($29)
    // jal func_0018FC48
    // daddu $6, $2, $0  <-- $a2 = $v0
    // jal D_002AD408    <-- calls D_002AD408 with $a0, $a1, $a2?
    // If D_002AD408 only takes 1 arg, it takes $a0.
    
    // Let's try to write it as a loop.
}
