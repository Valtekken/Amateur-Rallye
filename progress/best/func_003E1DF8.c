extern void func_003E1708(void *, char *);
extern void func_003E3D68(int);
extern u32 func_003E5438(void *, int);
extern char D_00489AD0[];
extern char D_00489AF8[];

void func_003E1DF8(void *arg0) {
    u32 t;
    int chroma, profile, level, chroma2;
    int a, b, c, d, e, f;
    int v124, v128, v134, v138;

    *(int *)((char *)arg0 + 0x848) = 1;
    func_003E3D68(0);
    t = func_003E5438(arg0, 0x1C);
    chroma = (t >> 1) & 0xFFF;
    *(int *)((char *)arg0 + 0x140) = (t >> 17) & 3;
    if (((t >> 17) & 3) != 1) {
        func_003E1708(arg0, D_00489AD0);
    }
    *(int *)((char *)arg0 + 0x13C) = (t >> 19) & 1;
    profile = t >> 20;
    level = func_003E5438(arg0, 0x10) >> 8;
    if (profile != 0x48 && profile != 0x58 && profile != 0x44) {
        func_003E1708(arg0, D_00489AF8);
    }
    v124 = *(int *)((char *)arg0 + 0x124);
    v128 = *(int *)((char *)arg0 + 0x128);
    v134 = *(int *)((char *)arg0 + 0x134);
    v138 = *(int *)((char *)arg0 + 0x138);
    chroma2 = (t >> 13) & 3;
    a = (t >> 15) & 3;
    v138 = v138 + (level << 10);
    v124 = ((a) << 12) | (v124 & 0xFFF);
    v128 = (chroma2 << 12) | (v128 & 0xFFF);
    v134 = v134 + (chroma << 18);
    *(int *)((char *)arg0 + 0x138) = v138;
    *(int *)((char *)arg0 + 0x124) = v124;
    *(int *)((char *)arg0 + 0x128) = v128;
    *(int *)((char *)arg0 + 0x134) = v134;
}
