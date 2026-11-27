#include "context.h"

extern f32 func_001E3610(s32, void *);
extern s32 func_001E38C8(s32, void *);
extern s32 func_001E9368(s32, void *);
extern s32 func_001EA098(s32);
extern void *func_002015D8(void);
extern s32 func_0021E9C0(s32, void *);
extern s32 func_0021F4B0(void);
extern s32 func_002C3C48(void);
extern u8 D_0040E748[8];
extern u8 D_0040E850[8];
extern u8 D_0040E858[8];
extern f32 D_004264A0;

void func_0016E1D8(void *arg0) {
    u8 *a0 = (u8 *)arg0;
    void *t2;
    void *p19;
    void *sp0;
    s32 i;
    s32 n;
    void *e22;
    void *e18;
    void *e16;
    void *vt;
    s32 x5;
    s32 off;

    if (*(s32 *)(a0 + 0x58) < 0 && *(s32 *)(a0 + 0x5C) < 0) {
        t2 = (void *)func_001EA098(func_002C3C48());
        if (t2 != NULL) {
            *(s32 *)(a0 + 0x58) = func_001E9368((s32)t2, D_0040E850);
            *(s32 *)(a0 + 0x5C) = func_001E9368((s32)t2, D_0040E858);
        }
    }

    if (func_001E38C8(func_001E4280(), D_0040E748) != 0) {
        D_004264A0 = func_001E3610(func_001E4280(), D_0040E748);
    }

    i = 0;
    p19 = *(void **)((u8 *)func_002015D8() + 0x8);

    sp0 = a0 + 0x2C;
    n = (*(s32 *)(a0 + 0xC) - *(s32 *)(a0 + 0x8)) >> 2;
    if (n > 0) {
        do {
            e22 = (*(void ***)(a0 + 0x8))[i];
            e18 = *(void **)((u8 *)*(void **)((u8 *)e22 + 0xC) + 0x4);
            if (*(s32 *)((u8 *)e18 + 0x1D4) == 0) {
                *(s32 *)((u8 *)e18 + 0x1D4) = func_0021E9C0(func_0021F4B0(), (u8 *)e18 + 0x1D0);
            }
            x5 = *(s32 *)((u8 *)e18 + 0x1D4);
            if (x5 != 0) {
                s32 j;
                s32 jn;
                vt = *(void **)p19;
                off = *(s16 *)((u8 *)vt + 0x20);
                ((void (*)(void *, s32, void *, s32))*(void **)((u8 *)vt + 0x24))
                    ((u8 *)p19 + off, x5, e18, *(s32 *)(a0 + 0x58));
                jn = 0;
                for (j = 3; j >= 0; j--) {
                    e16 = (u8 *)*(void **)((u8 *)e22 + 0x10) + jn;
                    if (*(s32 *)((u8 *)e16 + 0x18C) == 0) {
                        *(s32 *)((u8 *)e16 + 0x18C) = func_0021E9C0(func_0021F4B0(), (u8 *)e16 + 0x188);
                    }
                    x5 = *(s32 *)((u8 *)e16 + 0x18C);
                    if (x5 != 0) {
                        vt = *(void **)p19;
                        off = *(s16 *)((u8 *)vt + 0x20);
                        ((void (*)(void *, s32, void *, s32))*(void **)((u8 *)vt + 0x24))
                            ((u8 *)p19 + off, x5, e18, *(s32 *)(a0 + 0x5C));
                    }
                    jn += 0x190;
                }
            }
            i++;
        } while (i < n);
    }

    n = (*(s32 *)((u8 *)sp0 + 0x4) - *(s32 *)(a0 + 0x2C)) >> 2;
    i = 0;
    if (n > 0) {
        do {
            e16 = (*(void ***)(a0 + 0x2C))[i];
            if (*(s32 *)((u8 *)e16 + 0x1D4) == 0) {
                *(s32 *)((u8 *)e16 + 0x1D4) = func_0021E9C0(func_0021F4B0(), (u8 *)e16 + 0x1D0);
            }
            x5 = *(s32 *)((u8 *)e16 + 0x1D4);
            if (x5 != 0) {
                vt = *(void **)p19;
                off = *(s16 *)((u8 *)vt + 0x20);
                ((void (*)(void *, s32, void *, s32))*(void **)((u8 *)vt + 0x24))
                    ((u8 *)p19 + off, x5, e16, *(s32 *)((u8 *)e16 + 0x1CC));
            }
            i++;
        } while (i < n);
    }

    x5 = func_0021E9C0(func_0021F4B0(), arg0);
    if (x5 != 0) {
        void *e6 = *(void **)(a0 + 0x4);
        vt = *(void **)p19;
        off = *(s16 *)((u8 *)vt + 0x20);
        ((void (*)(void *, s32, void *, s32))*(void **)((u8 *)vt + 0x24))
            ((u8 *)p19 + off, x5, e6, *(s32 *)((u8 *)e6 + 0x1CC));
    }
}
