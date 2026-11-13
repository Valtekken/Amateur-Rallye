/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 func_003D7E50(void *arg0) {
    s32 temp_5;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x10) < (u32) M2C_FIELD(arg0, u32 *, 0x14)) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s32 (**)(void *, M2C_UNK), 0x14)(arg0, -1) != -1) {
            goto block_5;
        }
        return -1;
    }
block_5:
    temp_5 = M2C_FIELD(arg0, s32 *, 0);
    if (!(temp_5 & 0x100)) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
        if ((u32) M2C_FIELD(arg0, u32 *, 8) < M2C_FIELD(arg0, u32 *, 0x14)) {
            M2C_FIELD(arg0, u32 *, 8) = M2C_FIELD(arg0, u32 *, 0x14);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    }
    M2C_FIELD(arg0, u32 *, 0x10) = M2C_FIELD(arg0, u32 *, 0x14);
    M2C_FIELD(arg0, u32 *, 4) = M2C_FIELD(arg0, u32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_5 & ~0x800);
    M2C_FIELD(arg0, u32 *, 0x18) = M2C_FIELD(arg0, u32 *, 0x14);
    M2C_FIELD(arg0, u32 *, 0x14) = M2C_FIELD(arg0, u32 *, 0x14);
    return 0;
}
