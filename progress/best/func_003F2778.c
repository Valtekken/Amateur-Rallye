extern void func_003F25C0(s32, s32, s32);
extern void func_003F2628(s32);
void func_003F2778(s32 *p) {
    u32 bits = (u32)p[7];
    s32 x = bits & 0x7F;
    s32 n = ((bits >> 16) & 3) + ((bits >> 8) & 0xF);
    s32 base = p[0];
    s32 off = p[2];
    s32 t18 = off + n;
    s32 t17 = base - (n << 4);
    s32 t10 = p[4];
    if (t10 != 0 && p[5] != 0) {
        *(volatile s32 *)0x1000B010 = t10;
        *(volatile s32 *)0x1000B020 = p[5];
        func_003F25C0(p[6] | 0x100, base, t10);
    }
    while (*(volatile s32 *)0x10002010 < 0) {}
    *(volatile s32 *)0x10002000 = x;
    while (*(volatile s32 *)0x10002010 < 0) {}
    if (t17 != 0 && t18 != 0) {
        *(volatile s32 *)0x1000B410 = t17;
        *(volatile s32 *)0x1000B430 = p[1];
        *(volatile s32 *)0x1000B420 = t18;
        func_003F2628(p[3] | 0x100);
    }
}
