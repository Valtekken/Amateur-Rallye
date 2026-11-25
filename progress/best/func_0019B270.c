extern s32 func_001E3598(s32, s32);
extern void **func_00201350(void);

struct Arg0 {
    char pad_1E4[0x1E4];
    s32 unk1E4;
    s32 unk1E8;
    s32 unk1EC;
    s32 unk1F0;
    char pad_1F4[0x34];
    s32 unk228;
};

struct Child {
    char pad_C[0xC];
    s32 unkC;
    char pad_28[0x1C];
    s32 unk28;
    char pad_6C[0x44];
    s32 unk6C;
};

struct Arg1 {
    char pad_10[0x10];
    struct Child *unk10;
    char pad_50[0x40];
    void *unk50;
};

struct JumpTableEntry {
    char pad_D0[0xD0];
    s32 unkD0;
};

void func_0019B270(struct Arg0 *arg0, struct Arg1 *arg1) {
    s32 result = func_001E3598(func_001E4280(), (s32)arg0 + 0x210);
    
    if (result != arg0->unk1F0) {
        struct JumpTableEntry *entry = func_00201350()[arg0->unk228];
        entry->unkD0 = 2;
        arg0->unk1F0 = result;
        
        if (arg1 != NULL) {
            s32 val = arg0->unk1E8;
            if (val == 0) {
                if (arg1->unk10 != NULL) {
                    arg1->unk10->unk6C = result;
                }
            } else if (val == 1) {
                if (arg1->unk10 != NULL) {
                    s32 var_2 = 2;
                    if (result != val) {
                        var_2 = arg0->unk1E4;
                    }
                    arg1->unk10->unk28 = val;
                    arg1->unk10->unkC = var_2;
                }
            }
        }
        arg0->unk1F0 = result;
    }
    arg0->unk1F0 = result;
}
