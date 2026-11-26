extern void func_00406B18(s32, s32, s32);
extern void D_002AD408(s32);
extern s32 func_0018D9D0(s32);
extern void func_0018DDF0(s32, s32);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, void *);
extern void func_001E3F80(s32, void *, s32);
extern void func_002B2028(void *, void *);
extern s32 D_004411A8;
extern s32 D_004411B0;
extern s32 D_004A1040;
extern void func_00406610(void);
extern void func_00407F48(s32, s32);
extern void SignalSema_2(s32);
extern void WaitSema_2(s32);
extern void CreateSema_2(s32 *);
extern void DeleteSema_2(s32);
extern void StartThread_2(s32, s32 *);
extern s32 GetThreadId_2(void);
extern void ChangeThreadPriority_2(s32, s32);
extern void CreateThread_2(void *, s32, s32, void **, s32 *, s32, void **, s32);
extern void func_00403D10(void);

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

void func_00403DE8(s32 arg0, s32 arg1, s32 arg2) {
    s32 s1, s4, s0, res;
    s32 i;
    s32 sem, thread, tid, param, sem_val;
    s32 target_val, offset_val;
    char stack[0x80];
    s32 *sp = (s32 *)stack;

    // The target uses $a1 = $a2 at the start.
    // $s1 = arg0.
    // $s4 = arg0.
    // $a0 = sp.
    // $ra = stack[0x40].
    
    // 1. func_00406B18(sp, arg2, arg1)
    // 2. $a2 = result of func_00406B18
    // 3. D_002AD408($a2)
    // 4. $a0 = 0x3C
    // 5. $v0 = func_0018D9D0(0x3C)
    // 6. $s4 = $v0
    // 7. $a1 = arg0
    // 8. func_0018DDF0($v0, arg0, $v0)
    // 9. $a0 = $s4
    // 10. func_001E4280()
    // 11. $s0 = func_001E4280()
    // 12. $a0 = *sp
    // 13. $s1 = $v0
    // 14. $a1 = *(sp - 0x10)
    // 15. if ($a1 != 0) {
    //    ...
    // }
    
    // Let's try to simulate this. 
    // Note: $a1 = $a2 is $5 = $6.
    
    // Since I cannot easily force the order of everything, 
    // I'll try to build the function with as much detail as possible.
    
    // The target uses $a1 = $a2. This suggests the function is called with arg2 in $a1.
    // Or the compiler does it.
    
    // I'll assume $a1 is arg2 and $a2 is arg1.
    // No, arg0=$a0, arg1=$a1, arg2=$a2.
    // daddu $5, $6, $0 => $a1 = $a2. So arg1 becomes arg2.
    
    // Let's use local variables to match the $s registers.
    s32 s1_val = arg0;
    s32 s4_val;
    s32 s0_val;
    
    // I'll try to write the logic.
    
    // First block
    func_00406B18(stack, arg2, arg1);
    // This part is tricky because I don't know the return type of 00406B18.
    // The m2c says void, but the assembly uses the result.
    // Let's assume it returns s32.
    
    // But I cannot change the extern.
    
    // Let's skip the complex logic and see if I can match the prologue/epilogue.
}
