extern u32 D_0040E618[];
extern u32 D_0040E658[];
extern u32 D_004262D0[];
extern u32 D_004870D0[];
extern char D_00487118[];

extern s32 func_00151930(void *);
extern void func_00151A28(void *, void *, s32, s32, u32, s32, s32, s32);
extern s32 func_003FA9B8(void *);
extern s32 func_00153E78(void *, void *, void *);
extern s32 func_001539A0(void *, void *, u32, s32, void *, s32, s32, s32);
extern void func_001537E8(void *, void *, s32, void *);
extern s32 func_00153F40(void *, s32, void *, s32, void *, s32, s32, s32);
extern void func_001D9628(void *, s32, void *);
extern void func_001D9A90(void *, void *);
extern void func_002B2028(void *);
extern void func_002DDA20(void);
extern void func_002FD7D0(void *, void *, s32, void *, void *, s32, s32, void *, s32, s32);

void func_00387478(void *arg0, void *arg1) {
    // Stack frame matching assembly
    void *sp;
    void *fp = arg1;  // $fp = $a1 (saved_a1)
    
    // Allocate frame: addiu $sp, $sp, -0x550
    // We'll simulate with local variables at specific offsets
    char frame[0x550];
    sp = frame;
    
    // Save arg0 at 0x494($sp): sw $4, 0x494($sp)
    *(void **)(frame + 0x494) = arg0;
    
    // Save arg1 at 0x530($sp): sq $30, 0x530($sp)
    // Save $ra at 0x540($sp): sq $31, 0x540($sp)
    // Other callee-saved registers
    
    // First group: 6 calls with offsets 0x8, 0xC, 0x10, 0x14, 0x18, 0x1C
    // Each iteration: load from 0x494($sp), get vtable at +0x10, obj at +0x8
    // offset at obj+0x80, func at obj+0x84
    
    // Call 1: addiu $a1, $fp, 0x8
    void *saved_a0 = *(void **)(frame + 0x494);
    void *vtable = *(void **)((char *)saved_a0 + 0x10);
    void *obj = *(void **)((char *)vtable + 0x8);
    void (*func)(void *) = *(void (**)(void *))((char *)obj + 0x84);
    short offset = *(short *)((char *)obj + 0x80);
    func((char *)vtable + offset);
    
    // Call 2: addiu $a1, $fp, 0xC
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x84);
    offset = *(short *)((char *)obj + 0x80);
    func((char *)vtable + offset);
    
    // Call 3: addiu $a1, $fp, 0x10
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x84);
    offset = *(short *)((char *)obj + 0x80);
    func((char *)vtable + offset);
    
    // Call 4: addiu $a1, $fp, 0x14
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x84);
    offset = *(short *)((char *)obj + 0x80);
    func((char *)vtable + offset);
    
    // Call 5: addiu $a1, $fp, 0x18
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x84);
    offset = *(short *)((char *)obj + 0x80);
    func((char *)vtable + offset);
    
    // Call 6: addiu $a1, $fp, 0x1C
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x84);
    offset = *(short *)((char *)obj + 0x80);
    func((char *)vtable + offset);
    
    // Second group: offsets 0x90/0x94, addiu $a1, $fp, 0x20 through 0x34
    // Call 7: 0x20
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x94);
    offset = *(short *)((char *)obj + 0x90);
    func((char *)vtable + offset);
    
    // Call 8: 0x24
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x94);
    offset = *(short *)((char *)obj + 0x90);
    func((char *)vtable + offset);
    
    // Call 9: 0x28
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x94);
    offset = *(short *)((char *)obj + 0x90);
    func((char *)vtable + offset);
    
    // Call 10: 0x2C
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x94);
    offset = *(short *)((char *)obj + 0x90);
    func((char *)vtable + offset);
    
    // Call 11: 0x30
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x94);
    offset = *(short *)((char *)obj + 0x90);
    func((char *)vtable + offset);
    
    // Call 12: 0x34
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x94);
    offset = *(short *)((char *)obj + 0x90);
    func((char *)vtable + offset);
    
    // Third group: offsets 0x90/0x94, addiu $a1, $fp, 0x38 through 0x4C
    // Call 13: 0x38
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x94);
    offset = *(short *)((char *)obj + 0x90);
    func((char *)vtable + offset);
    
    // Call 14: 0x3C
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x94);
    offset = *(short *)((char *)obj + 0x90);
    func((char *)vtable + offset);
    
    // Call 15: 0x40
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x94);
    offset = *(short *)((char *)obj + 0x90);
    func((char *)vtable + offset);
    
    // Call 16: 0x44
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x94);
    offset = *(short *)((char *)obj + 0x90);
    func((char *)vtable + offset);
    
    // Call 17: 0x48 (stack address 0x480($sp))
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x94);
    offset = *(short *)((char *)obj + 0x90);
    func((char *)vtable + offset);
    
    // Call 18: 0x4C
    saved_a0 = *(void **)(frame + 0x494);
    vtable = *(void **)((char *)saved_a0 + 0x10);
    obj = *(void **)((char *)vtable + 0x8);
    func = *(void (**)(void *))((char *)obj + 0x94);
    offset = *(short *)((char *)obj + 0x90);
    func((char *)vtable + offset);
    
    return;
}
