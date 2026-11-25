extern void func_001EAA00(void *, void **, void *);

typedef struct S_func_001DEA18_arg0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} S_func_001DEA18_arg0;

typedef struct S_func_001DEA18_arg1_4 {
    u8 unk_00[0x10];
    s16 unk_10;
    u8 unk_12[0x2];
    s32 unk_14;
} S_func_001DEA18_arg1_4;

typedef struct S_func_001DEA18_arg1 {
    u8 unk_00[0x4];
    S_func_001DEA18_arg1_4 *unk_04;
} S_func_001DEA18_arg1;

void func_001DEA18(S_func_001DEA18_arg0 *arg0, S_func_001DEA18_arg1 *arg1) {
    S_func_001DEA18_arg1_4 *base = arg0->unk_04; // This doesn't match the layout guess
    // Let's use raw offsets from assembly for now to get a match.
}
