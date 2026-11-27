typedef struct { u32 b, e, c; char pad[0x44]; } Elem; typedef struct { Elem **b, **e; } Outer; extern void func_002B2028(u32, u32, u32); extern int D_002AD390(void*); extern u32 D_0040E618[];
void func_001FDBE0(Outer *outer, u32 *pidx) {
    u32 off, start, b, e; s32 n; void *elt;
    if (*pidx < (u32)(outer->e - outer->b)) {
        off = *pidx << 2;
        elt = *(void**)((u32)outer->b + off);
        if (elt) {
            b = *(u32*)elt;
            e = *(u32*)((u32)elt + 4);
            start = b;
            if (b < e) { do { b += 0x50; } while (b < e); }
            n = (s32)(((s32)(*(u32*)((u32)elt + 8)) - (s32)start) * 0xCCCCCCCD) >> 4;
            if (n) {
                if ((s32)(n * 0x50) != 0) func_002B2028(start, b, e);
                else { *(u32*)start = D_0040E618[-1]; D_0040E618[-1] = start; }
            }
            D_002AD390(elt);
        }
        *(u32*)((u32)outer->b + off) = 0;
    }
}
