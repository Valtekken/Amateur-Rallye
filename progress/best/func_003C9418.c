extern u8 D_004360F8[16];
extern u8 D_00436108[16];
extern u8 D_00436118[16];

typedef struct {
    u8 b0, b1, b2, b3;
    u16 w4, w6, w8, wA;
    u32 dC, d10;
} S_003C9418;
extern S_003C9418 D_00436128;

s32 func_003C9418(void *arg0) {
    S_003C9418 *p = (S_003C9418*)arg0;
    u32 r0 = *(volatile u32*)0x1000E000;
    u32 r1 = *(volatile u32*)0x1000E020;
    u32 r2 = *(volatile u32*)0x1000E030;
    u32 r3;
    r1 = *(volatile u32*)0x1000E050;
    u32 r4 = *(volatile u32*)0x1000E040;

    if (p->b0 >= 0xA) return -1;
    if (p->b1 >= 0xA) return -2;
    if (p->b2 >= 0xA) return -3;
    if (p->b3 >= 7) return -4;

    r0 = (r0 & 0xFFFFFFCFu) | ((u32)D_004360F8[p->b0] << 4);
    r0 = (r0 & 0xFFFFFF3Fu) | ((u32)D_00436108[p->b1] << 6);
    r0 = (r0 & 0xFFFFFFF3u) | ((u32)D_00436118[p->b2] << 2);
    if (p->b3 != 0) {
        r0 |= 2;
        r0 = (r0 & 0xFFFFFCFFu) | ((u32)(p->b3 - 1) << 8);
    } else {
        r0 = r0 & 0xFFFFFFFDu;
    }

    r1=((u32)p->w4 << 16) | p->w6;
    r2=((u32)p->wA << 16) | p->w8;
    r4=p->d10;
    r3=p->dC;
    *(volatile u32*)0x1000E000=r0;
    *(volatile u32*)0x1000E020=r1;
    *(volatile u32*)0x1000E030=r2;
    *(volatile u32*)0x1000E050=r3;
    *(volatile u32*)0x1000E040=r4;

    D_00436128 = *p;
    return 0;
}
