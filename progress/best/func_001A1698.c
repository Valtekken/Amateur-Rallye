extern void func_001D4040(void *, const char *);
extern void *func_00193B60(void *, void *, void *);
extern s32 func_001918C0(void *);
extern char D_00472518[];
extern void *D_00473368;

void *func_001A1698(void *arg0) {
    s32 sp0[4];
    volatile char pad[0x50];
    
    func_001D4040(sp0, D_00472518);
    
    s32 *s0 = (s32 *)arg0;
    
    // Load sp0[0] - should go to $a0
    s32 a0_val = sp0[0];
    
    // Compute vtable address - should go to $v0 via lui/addiu
    void *v0_ptr = D_00473368;
    
    // -1 in $v1
    s32 v1_val = -1;
    
    // Store sp0[0] at +4
    s0[1] = a0_val;
    
    // Compute a1 = s0 + 0x28/4 = s0 + 10
    s32 *a1_ptr = s0 + 10;
    
    // Store -1 at +0
    s0[0] = v1_val;
    
    // Compute a0 = s0 + 0x34/4 = s0 + 13
    s32 *a0_ptr = s0 + 13;
    
    // Store vtable at +8
    *(void **)(s0 + 2) = v0_ptr;
    
    // Compute v1 = s0 + 0x40/4 = s0 + 16
    s32 *v1_ptr = s0 + 16;
    
    // Store 0 at +0x14
    s0[5] = 0;
    
    // Compute v0 = s0 + 0x4c/4 = s0 + 19
    s32 *v0_ptr2 = s0 + 19;
    
    // Store 0 at +0x28
    s0[10] = 0;
    
    // Compute a2 = s0 + 0x58/4 = s0 + 22
    s32 *a2_ptr = s0 + 22;
    
    // Now the pointer stores in target order
    a1_ptr[2] = 0;  // sw $zero, 8($a1)
    a1_ptr[1] = 0;  // sw $zero, 4($a1)
    
    s0[13] = 0;     // sw $zero, 0x34($s0)
    
    a0_ptr[2] = 0;  // sw $zero, 8($a0)
    a0_ptr[1] = 0;  // sw $zero, 4($a0)
    
    s0[16] = 0;     // sw $zero, 0x40($s0)
    
    v1_ptr[2] = 0;  // sw $zero, 8($v1)
    v1_ptr[1] = 0;  // sw $zero, 4($v1)
    
    s0[19] = 0;     // sw $zero, 0x4c($s0)
    
    v0_ptr2[2] = 0; // sw $zero, 8($v0)
    v0_ptr2[1] = 0; // sw $zero, 4($v0)
    
    s0[22] = 0;     // sw $zero, 0x58($s0)
    
    a2_ptr[2] = 0;  // sw $zero, 8($a2)
    a2_ptr[1] = 0;  // sw $zero, 4($a2)
    
    s0[3] = func_001918C0(func_00193B60(a0_ptr, a1_ptr, a2_ptr));
    
    s0[6] = 0;
    s0[7] = 0;
    s0[8] = 0;
    s0[9] = 0;
    
    return (void *)s0;
}
