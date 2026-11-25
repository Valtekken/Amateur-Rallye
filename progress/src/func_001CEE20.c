extern u32 D_0040E618[];
extern void func_002B2028(void *);
extern void D_002AD390(void *);

typedef struct {
    s32 *start2;   // 0x0
    s32 *end2;     // 0x4
    s32 *end2_2;   // 0x8
    s32 *start1;   // 0xC
    s32 padding;   // 0x10
    s32 *end1;     // 0x14
} S_func_001CEE20_arg0;

void func_001CEE20(S_func_001CEE20_arg0 *p, s32 flags) {
    s32 *start1 = p->start1;
    s32 *end1 = p->end1;
    s32 n1 = (s32)((u8 *)end1 - (u8 *)start1) >> 2;
    
    if (n1 != 0) {
        if ((n1 * 4) != 0) {
            func_002B2028(start1);
        } else {
            *start1 = D_0040E618[-1];
            D_0040E618[-1] = (u32)start1;
        }
    }
    
    s32 *start2 = p->start2;
    s32 *end2 = p->end2;
    
    if (start2 < end2) {
        do {
            start2 = (s32 *)((u8 *)start2 + 0xC);
        } while (start2 < end2);
    }
    
    s32 *end2_2 = p->end2_2;
    s32 diff = (s32)((u8 *)end2_2 - (u8 *)p->start2);
    s32 n2 = (diff * (s32)0xAAAAAAAB) >> 2;
    
    if (n2 != 0) {
        if ((n2 * 0xC) != 0) {
            func_002B2028(p->start2);
        } else {
            s32 *tmp = p->start2;
            *tmp = D_0040E618[-1];
            D_0040E618[-1] = (u32)tmp;
        }
    }
    
    if (flags & 1) {
        D_002AD390(p);
    }
}
