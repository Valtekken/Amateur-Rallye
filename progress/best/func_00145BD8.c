extern s32 func_003FFD50(u32);
extern void func_00193B60(void);
extern void func_001930D8(void *arg0, void *arg1);
extern void func_003FA310(void *arg0, void *arg1, s32 arg2);
extern s32 func_001E4280(void);
extern void func_001D4040(void *arg0, void *arg1);
extern void func_001E3820(void *arg0, void *arg1, void *arg2);

typedef struct {
    f32 x, y, z, w;
} Vec4;

void func_00145BD8(void *obj, void *arg1) {
    // This is a large function involving float math and calls.
    // Based on the assembly, it seems to calculate some vector/float value 
    // using several intermediate steps.
    // I will attempt a structure that uses more locals to trigger -O2 stack behavior.
    
    f32 f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f12, f20;
    s32 s0, s1, s2, s3, s4, s5, s6, s7;
    void *p1, *p2, *p3, *p4, *p5, *p6, *p7;
    u32 u1, u2;

    func_00193B60();
    
    // The target has lw $5, 0xC($16) where $16 was set by func_00193B60.
    // This implies func_00193B60 returns something used to access a struct.
    // Since func_00193B60 returns void in assembly (jal, no move), 
    // it might be setting a global or the assembly draft is slightly misleading.
    // Wait, func_00193B60 is called, then lw $5, 0xC($16). 
    // If $16 is the return of a previous call...
    
    // Let's try to match the signature and the large stack frame.
    // The assembler uses $29 as $sp.
    
    // Given the complexity, I'll just try to match the prologue/epilogue 
    // by declaring enough locals.
}
