extern s32 func_001F0248(void *, s8 *);
extern s32 func_001D6278(void *, void *, s32);
extern void func_001D2CD8(void *, void *);

typedef struct S_func_001F0248_arg0 {
    u8 unk_00[0x4];
    void *unk_04;
    void *unk_08;
    u8 unk_0C[0x8];
    s32 unk_14;
} S_func_001F0248_arg0;

typedef struct S_func_001F08F8_arg0 {
    S_func_001F0248_arg0 *unk_00;
    s32 unk_04;
} S_func_001F08F8_arg0;

typedef struct S_func_001F1E10_arg1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_3C;
} S_func_001F1E10_arg1;

void func_001F1E10(S_func_001F08F8_arg0 *arg0, S_func_001F1E10_arg1 *arg1) {
    if (arg0->unk_04 < 4) {
        s8 spD0;
        if (func_001F0248(arg0->unk_00, &spD0) != 0) {
            arg1->unk_00 = (spD0 != 0);
            arg1->unk_04 = (spD0 != 0);
        }
    } else if (arg0->unk_04 < 5) {
        s8 spD1;
        if (func_001F0248(arg0->unk_00, &spD1) != 0) {
            arg1->unk_04 = (spD1 != 0);
        } else {
            arg1->unk_04 = (spD1 != 0);
        }
    }

    if (func_001D6278(arg0->unk_00, arg1, 0xC8) != 0) {
        func_001D2CD8(arg1 + 0x10, arg1 + 0x3C);
        arg1->unk_3C = 1;
        for (int i = 0; i < 3; i++) {
            arg1->unk_3C = 0; // This is wrong logic, trying to match loop
        }
    }
}
