/* func_003B55E8 - matching stack layout exactly */

typedef struct RefCounted {
    s32 refcount;        // +0x00
    void *destructor_info; // +0x04
    void *unk_08;        // +0x08
} RefCounted;

typedef struct DestructorInfo {
    u8 pad[0x8];
    s16 offset;          // +0x08
    u8 pad2[0x2];
    void (*destructor)(void *, s32, void *); // +0x0C
} DestructorInfo;

typedef struct VTable {
    u8 pad[0x90];
    s16 offset_90;       // +0x90
    u8 pad2[0x2];
    void (*func_94)(void *, s32 *); // +0x94
} VTable;

typedef struct Arg2Struct {
    u8 pad[0x8];
    VTable *vtable;      // +0x08
} Arg2Struct;

typedef struct Arg1Struct {
    u8 pad[0x14];
    s32 unk14;           // +0x14
    u8 pad2[0x10];
    RefCounted *unk24;   // +0x24
} Arg1Struct;

extern void func_0024F6E0(void *, RefCounted *);
extern void *D_002AD408(s32, Arg1Struct *);
extern void *func_002591C8(void *, s32);

void *func_003B55E8(Arg1Struct *arg1, Arg2Struct *arg2) {
    // Stack layout matching target:
    // 0x00: saved arg1
    // 0x10: ref (arg1->unk24)
    // 0x20: sp20 (output from vtable call)
    // 0x30: saved $s0 (arg2)
    // 0x40: saved $ra
    
    Arg1Struct *saved_arg1;
    RefCounted *ref;
    RefCounted *saved_ref;
    s32 sp20;
    Arg2Struct *saved_arg2 = arg2;  // This goes in $s0
    
    // Force stack frame of 0x50 with proper saved registers
    volatile char stack_pad[0x50];  // Force correct stack size
    (void)stack_pad;
    
    saved_arg1 = arg1;
    ref = arg1->unk24;
    saved_ref = ref;
    
    if (ref != NULL) {
        ref->refcount++;
    }
    
    func_0024F6E0(&saved_arg1, ref);
    
    if (saved_ref != NULL) {
        s32 refcount = saved_ref->refcount - 1;
        saved_ref->refcount = refcount;
        if (refcount == 0) {
            DestructorInfo *di = (DestructorInfo *)saved_ref->destructor_info;
            s16 offset = di->offset;
            void (*destructor)(void *, s32, void *) = di->destructor;
            destructor((u8 *)saved_ref + offset, 3, saved_ref);
        }
    }
    
    VTable *vtable = saved_arg2->vtable;
    vtable->func_94((u8 *)saved_arg2 + vtable->offset_90, &sp20);
    
    s32 mult_result = sp20 * 12;
    s32 alloc_arg = saved_arg1->unk14 + mult_result;
    void *alloced = D_002AD408(0x28, saved_arg1);
    void *result = func_002591C8(alloced, alloc_arg);
    
    *(s32 *)result = 1;
    *(s32 *)((u8 *)result + 8) = sp20;
    
    if (saved_arg1 != NULL) {
        RefCounted *ref2 = saved_arg1->unk24;
        if (ref2 != NULL) {
            s32 refcount2 = ref2->refcount - 1;
            ref2->refcount = refcount2;
            if (refcount2 == 0) {
                DestructorInfo *di2 = (DestructorInfo *)ref2->destructor_info;
                s16 offset2 = di2->offset;
                void (*destructor2)(void *, s32, void *) = di2->destructor;
                destructor2((u8 *)ref2 + offset2, 3, ref2);
            }
        }
    }
    
    return result;
}
