extern void func_001E00E8(void *);
extern int func_001E0368(void *, void *, void *, int *);
extern int func_001E04D8(void *, void *, void *, float *);
extern int func_001E0630(void *, void *, void *, int *);
extern int func_001E0788(void *, void *, void *, void *);
extern int func_001E0A38(void *, void *, void *, void *);
extern int func_001E0BF8(void *, void *, void *, void *);
extern int func_001E1320(void *, void *, void *, void *);
extern void func_001E3D10(void *, void *, int);
extern void func_001E3E90(void *, void *, float);
extern void func_001E3EC0(void *, void *, int);
extern void func_001E3EF0(void *, void *, void *);
extern void func_001E3F50(void *, void *, void *);
extern void func_001E3FB0(void *, void *, void *);
extern void func_001E40A0(void *, void *, void *);

int func_002250C8(void *a0, void *a1, void *a2) {
    struct {
        int sp0;
        char _pad0[0xC];
        char sp10[0x40];
        int sp50;
        char _pad1[0xC];
        char sp60[0x10];
        char sp70[0xD0];
        int sp140;
        float sp144;
        int sp148;
    } sp;

    sp.sp0 = 0;
    sp.sp50 = 0;
    func_001E00E8(sp.sp70);
    if (func_001E0368(sp.sp70, a1, &sp.sp0, &sp.sp140) != 0) {
        func_001E3D10(a2, &sp.sp0, sp.sp140);
        return 1;
    }
    if (func_001E04D8(sp.sp70, a1, &sp.sp0, &sp.sp144) != 0) {
        func_001E3E90(a2, &sp.sp0, sp.sp144);
        return 1;
    }
    if (func_001E0630(sp.sp70, a1, &sp.sp0, &sp.sp148) != 0) {
        func_001E3EC0(a2, &sp.sp0, sp.sp148);
        return 1;
    }
    if (func_001E0788(sp.sp70, a1, &sp.sp0, &sp.sp50) != 0) {
        func_001E3EF0(a2, &sp.sp0, &sp.sp50);
        return 1;
    }
    if (func_001E0A38(sp.sp70, a1, &sp.sp0, sp.sp10) != 0) {
        func_001E3F50(a2, &sp.sp0, sp.sp10);
        return 1;
    }
    if (func_001E0BF8(sp.sp70, a1, &sp.sp0, &sp.sp50) != 0) {
        func_001E3FB0(a2, &sp.sp0, &sp.sp50);
        return 1;
    }
    if (func_001E1320(sp.sp70, a1, &sp.sp0, sp.sp60) != 0) {
        func_001E40A0(a2, &sp.sp0, sp.sp60);
        return 1;
    }
    return 0;
}
