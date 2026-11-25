typedef struct Pool {
    u32 f0;
    u32 f4;
    u32 f8;
    u32 fC;
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1C;
    u32 f20;
    u32 f24;
    u32 f28;
    u32 f2C;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3C;
} Pool;

extern Pool D_00426750;
extern Pool D_00426754;
extern u8 D_0040E618[64];
extern u32 D_002AD5A8;

extern void func_0024FDC8(u32 *);
extern void func_001CAED8(u32 *, u32 *);
extern u32 *func_002B1FC0(s32);
extern u32 *func_003D2910(s32);
extern void func_003F93CC(u32 *, s32, u32 *, s32);
extern void func_002B2028(u8 *, s32);
extern void func_00152D28(u32 *);

void func_00252F18(u32 **a0, u32 *a1, u32 *a2, u32 *a3, u32 *a4) {
    volatile char pad[0x40];
    u32 *cur = *a0;
    u32 *head = *cur;
    u32 *field8;
    u32 *iter;
    s32 i;
    s32 d1, d2, limit;
    u32 *alloc;
    s32 size;
    u32 *f8, *fC;
    s32 off;

    if (head == cur) return;

    do {
        field8 = (u32 *)((char *)head + 8);

        if (D_00426750.f4 != D_00426754.f4) {
            (*(void (*)(s32))(u32)&D_002AD5A8)(0x1010);

            iter = (u32 *)((char *)field8 + 0x10);
            *head = 0x40;

            for (i = 63; i >= 0; i--) {
                func_0024FDC8(iter);
                iter = (u32 *)((char *)iter + 0x40);
            }

            if (D_00426750.f20 != D_00426750.f24) {
                if (D_00426750.f20) {
                    *(u32 *)D_00426750.f20 = (u32)field8;
                }
                D_00426750.f20 = (u32)((char *)&D_00426750.f20 + 4);
            }

            func_001CAED8((u32 *)&D_00426750.f1C, a2);
        } else {
            if (D_00426754.f10 != D_00426754.f14) {
                if (D_00426754.f10) {
                    *(u32 *)D_00426754.f10 = D_00426754.f4;
                }
                D_00426754.f10 = (u32)((char *)&D_00426754.f10 + 4);
            }
            func_001CAED8((u32 *)&D_00426754.f1C, a3);
        }

        d1 = ((s32)D_00426750.f8 - (s32)D_00426750.f4) >> 2;
        d2 = ((s32)D_00426750.fC - (s32)D_00426750.f4) >> 2;
        limit = d1 + 0x40;

        if (d2 < limit) {
            alloc = NULL;
            size = limit << 2;
            if (size) {
                alloc = func_002B1FC0(size);
                if (!alloc) alloc = func_003D2910(size);
            }
            func_003F93CC(alloc, d1, (u32 *)D_00426750.f4, d2);
            if (d2) func_002B2028(D_0040E618, d2 << 2);
            D_00426750.fC = D_00426750.f4 + d1;
            D_00426750.f4 = D_00426750.f4 + d2;
            D_00426750.f0 = (u32)alloc;
        }

        for (i = 0; i < 64; i++) {
            f8 = (u32 *)D_00426750.f8;
            fC = (u32 *)D_00426750.fC;
            off = i * 64;
            if (f8 != fC) {
                if (f8) *f8 = off;
                D_00426750.f8 = D_00426750.f4 + d1;
            }
            func_001CAED8((u32 *)&D_00426750.f4, (u32 *)off);
        }

        cur = *a0;
        head = *cur;
    } while (head != cur);
}
