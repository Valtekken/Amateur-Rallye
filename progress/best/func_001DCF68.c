extern s32 D_002AD408(s32);
extern s32 func_001DCB48(s32, s32, s32);
extern void func_001DCC78(s32, s32, s32, u32);

typedef struct {
    s32 pad[2];
    s32 *data;
    s32 w;
    s32 h;
} A;

s32 func_001DCF68(A *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 var_17;
    s32 var_18;
    s32 var_19;
    s32 var_30;
    u32 var_25;
    volatile u32 dummy[4];
    u32 temp_22;
    u32 temp_16;
    s32 halfW, halfH;
    u32 p0, p1, p2, p3, b0, b1, b2, b3, temp_11;
    s32 base;

    temp_22 = arg0->w;
    temp_16 = arg0->h;
    if ((temp_22 & 1) || (temp_16 & 1)) return 0;
    base = D_002AD408(0x14);
    halfW = (s32)(temp_22 + (temp_22 >> 0x1F)) >> 1;
    halfH = (s32)(temp_16 + (temp_16 >> 0x1F)) >> 1;
    var_30 = 0;
    var_19 = 0;
    sp10 = func_001DCB48(base, halfW, halfH);
    if (halfH > 0) {
        sp14 = halfH;
        do {
            var_18 = 0;
            var_17 = 0;
            sp18 = var_30 + 2;
            sp1C = var_19 + 1;
            if ((s32)temp_22 > 0) {
                var_25 = var_30 + 1;
                do {
                    u32 w = arg0->w;
                    p0 = arg0->data[(var_18 + var_30 * w)];
                    p1 = arg0->data[(var_18 + 1 + var_30 * w)];
                    p2 = arg0->data[(var_18 + var_25 * w)];
                    p3 = arg0->data[(var_18 + 1 + var_25 * w)];
                    b0 = (p0 & 0xFF) + (p1 & 0xFF) + (p2 & 0xFF) + (p3 & 0xFF);
                    b1 = ((p0 & 0xFF00) >> 8) + ((p1 & 0xFF00) >> 8) + ((p2 & 0xFF00) >> 8) + ((p3 & 0xFF00) >> 8);
                    b2 = ((p0 & 0xFF0000) >> 16) + ((p1 & 0xFF0000) >> 16) + ((p2 & 0xFF0000) >> 16) + ((p3 & 0xFF0000) >> 16);
                    b3 = ((p0 & 0xFF000000) >> 24) + ((p1 & 0xFF000000) >> 24) + ((p2 & 0xFF000000) >> 24) + ((p3 & 0xFF000000) >> 24);
                    temp_11 = (b0 >> 2) | ((b1 >> 2) << 8) | ((b2 >> 2) << 16);
                    func_001DCC78(sp10, var_17, var_19, temp_11 | ((b3 >> 2) << 24));
                    var_17 += 1;
                    var_18 += 2;
                } while (var_17 < (s32)temp_22);
            }
            var_19 = sp1C;
            var_30 = sp18;
        } while (var_19 < sp14);
    }
    return sp10;
}
