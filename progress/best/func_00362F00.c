extern u32 D_0040E618[];
extern void func_002B2028(void *);
extern void D_002AD390(void *);

typedef struct {
    s32 *start;   // 0x0
    s32 *end;     // 0x4
    s32 *end2;    // 0x8
} Pool;

typedef struct {
    s32 unk0;     // 0x0
    Pool *pool;   // 0x4
    s32 unk14;    // 0x14
} Arg0;

void func_00362F00(Arg0 *arg0) {
    Pool *pool = arg0->pool;
    s32 *start;
    s32 *end;
    s32 *end2;
    s32 diff;
    s32 n2;
    
    if (pool == NULL) {
        return;
    }
    if (arg0->unk14 == 0) {
        arg0->pool = NULL;
        return;
    }
    
    arg0->pool = NULL;
    
    start = pool->start;
    end = pool->end;
    end2 = pool->end2;
    
    if (start < end) {
        do {
            start = (s32 *)((u8 *)start + 0x30);
        } while (start < end);
    }
    
    diff = (s32)((u8 *)end2 - (u8 *)start);
    n2 = (diff * (s32)0xAAAAAAAB) >> 4;
    
    if (n2 != 0) {
        if ((n2 * 0x30) != 0) {
            func_002B2028(pool);
        } else {
            *start = D_0040E618[-1];
            D_0040E618[-1] = (u32)start;
        }
    }
    
    D_002AD390(pool);
    arg0->unk14 = 0;
}
