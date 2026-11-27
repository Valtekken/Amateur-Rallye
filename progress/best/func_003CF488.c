typedef struct PoolHeader {
    void *free_list;
    s32 size;
    s32 count;
    void *unkC;
} PoolHeader;

typedef struct PoolItem {
    struct PoolItem *next;
    s32 size;
    s32 refcount;
    PoolHeader *pool;
} PoolItem;

extern PoolHeader D_00436208;
extern void *D_00437E18[16];

extern PoolItem *func_003CD828(PoolHeader *);
extern void func_003CD948(PoolItem **, s32, s32, s32, s32);
extern void func_003CDC40(PoolItem **, PoolHeader *, s32, s32, s32, s32);
extern s32 func_003FA9B8(s32);
extern void func_002B2028(void *, void *, void *);
extern void func_002AE2F0(void);
extern void func_002AE718(void);

PoolItem **func_003CF488(PoolItem **arg0, s32 arg1, s32 arg2) {
    PoolItem *var_3;
    PoolItem *var_3_2;
    PoolHeader *pool;
    PoolItem *sp_slot;
    s32 temp_2;
    s32 temp_3;
    s32 idx;
    void **free_list;
    PoolHeader *free_pool;

    // Prologue: $s3=arg0, $s1=arg1, $s2=arg2, $s0=sp, save registers
    // Stack frame: 0x60 bytes, save $s3@0x40, $s2@0x30, $s1@0x20, $s0@0x10, $ra@0x50

    if (D_00436208.unkC != NULL) {
        var_3 = func_003CD828(&D_00436208);
    } else {
        var_3 = (PoolItem *)((u8 *)&D_00436208 + 0x10);
        D_00436208.count++;
    }
    sp_slot = var_3;
    
    // func_003CD948(sp_slot, 0, -1, arg1, func_003FA9B8(arg1))
    // $a0=$s0(sp), $a1=0, $a2=-1(lui/ori), $a3=$s1(arg1), stack=$v0(func_003FA9B8)
    func_003CD948(&sp_slot, 0, -1, arg1, func_003FA9B8(arg1));
    
    // func_003CDC40(sp_slot, sp_slot-0x10, 0, arg2, 0, -1)
    // $a0=$s0, $a1=$s0-0x10, $a2=0, $a3=$s2, $t0=0, $t1=-1(lui/ori)
    func_003CDC40(&sp_slot, (PoolHeader *)((u8 *)sp_slot - 0x10), 0, arg2, 0, -1);
    
    pool = (PoolHeader *)((u8 *)sp_slot - 0x10);
    if (pool->unkC == NULL) {
        var_3_2 = sp_slot;
        pool->count++;
    } else {
        var_3_2 = func_003CD828(pool);
    }
    *arg0 = var_3_2;
    
    // First decrement
    pool = (PoolHeader *)((u8 *)sp_slot - 0x10);
    temp_2 = pool->count - 1;
    pool->count = temp_2;
    if (temp_2 != 0) {
        return arg0;
    }
    
    temp_3 = pool->size;
    if ((u32)(temp_3 + 0x10) >= 0x81) {
        func_002B2028(pool, pool, sp_slot);
    } else {
        idx = (((temp_3 + 0x17) >> 3) - 1);
        free_list = &((void **)D_00437E18)[idx];
        free_pool = (PoolHeader *)*free_list;
        pool->unkC = free_pool;
        *free_list = pool;
    }
    
    func_002AE2F0();
    
    // Second decrement
    pool = (PoolHeader *)((u8 *)sp_slot - 0x10);
    temp_2 = pool->count - 1;
    pool->count = temp_2;
    if (temp_2 != 0) {
        func_002AE718();
        return arg0;
    }
    
    temp_3 = pool->size;
    if ((u32)(temp_3 + 0x10) >= 0x81) {
        func_002B2028(pool, pool, sp_slot);
    } else {
        idx = (((temp_3 + 0x17) >> 3) - 1);
        free_list = &((void **)D_00437E18)[idx];
        free_pool = (PoolHeader *)*free_list;
        pool->unkC = free_pool;
        *free_list = pool;
    }
    
    func_002AE718();
    return arg0;
}
