extern f32 func_003F3E80(f32);
extern void func_00205628(void *, void *, u32, u32);
extern void func_0027C7A0(void *);

void func_00267E00(void *arg0) {
    char *s0 = (char*)arg0;
    u32 v0, v1;
    f32 sq_len1, sq_len2;
    f32 temp, sqrt_len2, z2_sq;
    s32 *counter;

    // First vector (0x11C): compute sq_len1 = x1^2 + y1^2 + z1^2
    // Force register allocation order: load x1,y1,z1 then multiply in that order
    v0 = (u32)s0 + 0x11C;
    f32 x1 = *(f32*)v0;           // want f1
    f32 y1 = *(f32*)(v0 + 4);     // want f2
    f32 z1 = *(f32*)(v0 + 8);     // want f0
    f32 x1sq = x1 * x1;
    f32 y1sq = y1 * y1;
    f32 z1sq = z1 * z1;
    sq_len1 = x1sq + y1sq + z1sq; // want f12

    // NaN check on incoming f20
    f32 first_len; // in f20
    if (first_len != first_len) {
        first_len = func_003F3E80(sq_len1);
    }

    // Second vector (0x128): compute sq_len2
    v0 = (u32)s0 + 0x128;
    f32 x2 = *(f32*)v0;           // want f1
    f32 y2 = *(f32*)(v0 + 4);     // want f2
    f32 z2 = *(f32*)(v0 + 8);     // want f0
    f32 x2sq = x2 * x2;
    f32 y2sq = y2 * y2;
    z2_sq = z2 * z2;              // want f0 for NaN check
    sq_len2 = x2sq + y2sq + z2_sq; // want f12

    // Second NaN check on z2^2 (in z2_sq, which should be in f0)
    temp = first_len + z2_sq;
    if (z2_sq == z2_sq) {
        // not NaN
    } else {
        sqrt_len2 = func_003F3E80(sq_len2);
        temp = first_len + sqrt_len2;
    }

    if (temp < 0.3f) {
        // Copy 3 floats from 0x144 to 0xA0
        v0 = (u32)s0 + 0x144;
        v1 = (u32)s0 + 0xA0;
        *(f32*)v1 = *(f32*)v0;
        *(f32*)(v1 + 4) = *(f32*)(v0 + 4);
        *(f32*)(v1 + 8) = *(f32*)(v0 + 8);

        // Unaligned copy 32 bytes from 0x150 to 0xBC using struct
        typedef struct { u32 data[8]; } S32;
        *(S32*)((u32)s0 + 0xBC) = *(S32*)((u32)s0 + 0x150);

        // Copy word from 0x170 to 0xDC
        *(u32*)((u32)s0 + 0xDC) = *(u32*)((u32)s0 + 0x170);

        // Load values for func_00205628 args 3,4
        u32 val1 = *(u32*)((u32)s0 + 0x160);
        u32 val2 = *(u32*)((u32)s0 + 0x168);
        func_00205628((void*)((u32)s0 + 0xAC), (void*)((u32)s0 + 0xBC), val1, val2);
        func_0027C7A0(s0);

        counter = (s32*)((u32)s0 + 0x1C4);
        *counter = *counter + 1;
        return;
    }

    counter = (s32*)((u32)s0 + 0x1C4);
    *counter = 0;
}
