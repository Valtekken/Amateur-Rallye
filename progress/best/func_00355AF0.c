void func_00355AF0(void *arg0, s32 arg1) {
    extern u32 D_0040E618[];
    extern u32 D_0040E658[];
    extern u32 D_004262D0[];
    extern s32 func_00151930(void *);
    extern void func_00152720(void);
    extern void func_002B2028(void *);
    extern void func_0033EFF8(void);
    extern void D_002AD390(void *);

    u32 *sp24 = (u32 *)((u8 *)arg0 + 0x105C);
    u32 *sp28 = (u32 *)((u8 *)arg0 + 0x1050);
    u32 *sp30 = (u32 *)((u8 *)arg0 + 0x1040);
    u32 *sp34 = (u32 *)((u8 *)arg0 + 0x103C);
    u32 *sp38 = (u32 *)((u8 *)arg0 + 0x1038);
    u32 *sp3C = (u32 *)((u8 *)arg0 + 0x1034);
    u32 *sp40 = (u32 *)((u8 *)arg0 + 0x1030);
    u32 *sp44 = (u32 *)((u8 *)arg0 + 0x102C);
    u32 sp48 = arg1 & 1;
    
    u32 v18 = *sp24;
    u32 v3 = *sp28;
    u32 *pool_base = D_004262D0;
    u32 *free_list = &D_0040E618[-1];
    
    if (v18 < v3) {
        while ((s32)v18 >= 0) {
            u32 idx = v18;
            u32 val = pool_base[idx];
            
            u32 *record_base = pool_base + 9;
            record_base += val * 2;
            
            u32 refcount = record_base[1] - 1;
            if (refcount != 0) {
                record_base[1] = refcount;
                break;
            }
            
            record_base[1] = 0;
            
            u32 last_idx = pool_base[12] - 1;
            pool_base[12] = last_idx;
            
            u32 *index_array = pool_base + 3;
            u32 removed_val = index_array[last_idx];
            
            if (removed_val == idx) {
                // simple
            }
            
            v18 = *sp24;
            if (v18 >= v3) break;
        }
    }
    
    v18 = *sp28;
    v3 = *sp30;
    if (v18 < v3) {
        while ((s32)v18 >= 0) {
            u32 idx = v18;
            u32 val = pool_base[idx];
            
            u32 *record_base = pool_base + 9;
            record_base += val * 2;
            
            u32 refcount = record_base[1] - 1;
            if (refcount != 0) {
                record_base[1] = refcount;
                break;
            }
            
            record_base[1] = 0;
            
            u32 last_idx = pool_base[12] - 1;
            pool_base[12] = last_idx;
            
            u32 *index_array = pool_base + 3;
            u32 removed_val = index_array[last_idx];
            
            if (removed_val == idx) {
                // simple
            }
            
            v18 = *sp28;
            if (v18 >= v3) break;
        }
    }
}
