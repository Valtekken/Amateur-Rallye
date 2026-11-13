extern s32 func_002503D0(s32, s32);

typedef struct S_args {
    u8 pad0[0x0C];
    u8 *beginA;
    u8 *endA;
    u8 pad1[0x04];
    u8 *beginB;
    u8 *endB;
} S_args;

s32 func_00240DE8(S_args *arg0) {
    register S_args *s3 = arg0;
    register s32 countA = (s3->endA - s3->beginA) >> 2;
    register s32 i = 0;
    if (countA <= 0) return 1;
    do {
        register s32 valA = *(s32 *)(s3->beginA + i * 4);
        register s32 countB = (s3->endB - s3->beginB) >> 2;
        register s32 j = 0;
        register s32 found = 0;
        if (countB > 0) {
            do {
                if (func_002503D0(*(s32 *)(s3->beginB + j * 4), valA) != 0) found = 1;
                j++;
            } while (j < countB);
        }
        if (!found) return 0;
        i++;
    } while (i < countA);
    return 1;
}
