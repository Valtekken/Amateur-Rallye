extern void *func_002AFEB8(s32, void *);

typedef struct { u8 b[24]; } Block24;

void *func_003A61F0(register void *arg0, register void *arg1) {
    register Block24 *ret;
    ret = (Block24 *)func_002AFEB8(0x18, arg0);
    if (ret != 0) {
        *ret = *(Block24 *)arg1;
    }
    return ret;
}
extern u16 D_00428FA0[];

s64 func_002C8070(void *arg0, s32 arg1) {
    s32 r = 0;
    if (*(s32 *)((u8 *)arg0 + 8) != 0) {
        u16 n = *(u16 *)((u8 *)arg0 + 0x18);
        if (arg1 < (s32)n && n < 0x11) {
            u64 mask = *(u64 *)((u8 *)arg0 + 0x90);
            r = (s64)(s32)((((u16 *)&D_00428FA0)[arg1] & mask) != 0);
        }
    }
    return r;
}

s64 func_002C8018(void *arg0, s32 arg1) {
    s32 r = 0;
    if (*(s32 *)((u8 *)arg0 + 8) != 0) {
        u16 n = *(u16 *)((u8 *)arg0 + 0x18);
        if (arg1 < (s32)n && n < 0x11) {
            u64 mask = *(u64 *)((u8 *)arg0 + 0x88);
            r = (s64)(s32)((((u16 *)&D_00428FA0)[arg1] & mask) != 0);
        }
    }
    return r;
}

void func_002C76C0(void *arg0) {
    u64 *p = (u64 *)((u8 *)arg0 + 0x10);
    u64 *q = (u64 *)((u8 *)arg0 + 0x30);
    *p |= 1;
    *q |= (u64)0x8000 << 18;
    *p |= 2;
    *p |= 0x40;
    *q |= (u64)0x8000 << 19;
    *p |= 0x80;
    *(u16 *)((u8 *)arg0 + 0x1A) = 4;
    *(u16 *)((u8 *)arg0 + 0x18) = 16;
}
