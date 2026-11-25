typedef struct { s32 *f0; s32 f4; s32 f8; s32 fC; s32 f10[2]; } Vec;

extern s32 D_0043C000;
extern u8 D_0042DEC0[8];
extern u8 D_1BE0[];
extern void D_002AD530(s32);
extern s32 D_002AD5A8(s32, s32);
extern void func_003F931C(void *, void *, s32);

void func_0031E478(void *arg0) {
    Vec *p = ((Vec **)arg0)[5];
    if ((p->f8 - p->fC) < 0x34) {
        s32 one = 1;
        u32 size = p->fC + 0x54;
        s32 i = 0;
        s32 power, cap, raw, aligned;
        D_0043C000 = p->f10[0];
        while ((u32)(one << i) < size) i++;
        power = one << i;
        cap = power - 0x20;
        raw = D_002AD5A8(power << 2, size);
        aligned = (raw + 0x7F) & 0xFFFFFF80;
        if (p->fC > 0) func_003F931C((void *)aligned, (void *)p->f0, p->fC << 2);
        if (p->f4 != 0) D_002AD530(p->f4);
        p->f4 = raw;
        p->f0 = (s32 *)aligned;
        p->f8 = cap;
        D_0043C000 = 0;
    }
    p->f0[p->fC++] = 0x1000000B;
    p->f0[p->fC++] = 0;
    p->f0[p->fC++] = 0x01000404;
    p->f0[p->fC++] = 0x6C0B8000;
    {
        s32 k = p->fC;
        func_003F931C(&p->f0[k], D_0042DEC0, 0xB0);
    }
    {
        s32 j = p->fC + 0x2C;
        p->fC = j + 1;
        p->f0[j] = 0x10000000;
        j++;
        p->fC = j + 1;
        p->f0[j] = 0;
        j++;
        p->fC = j + 1;
        p->f0[j] = 0;
        j++;
        p->fC = j + 1;
        p->f0[j] = ((u32)&D_1BE0 >> 3) | 0x14000000;
    }
}
