extern u32 D_004262D0[];

typedef struct {
    f32 unk3C;
    s32 unk40;
} Arg0Entry;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    f32 unk3C;
} Arg2Entry;

s32 func_0035EE00(Arg0Entry *arg0, Arg0Entry *arg1, Arg2Entry *arg2) {
    Arg2Entry *var_6 = arg2;
    Arg0Entry *var_7 = arg0;
    Arg2Entry *var_8 = arg2;
    
    if (var_7 != arg1) {
        var_6 = (Arg2Entry *)((char *)arg2 + 0x40);
        do {
            if (var_8 != 0) {
                var_6[-16].unk0 = 0;
                var_6[-15].unk0 = 0;
                var_6[-14].unk0 = 0;
                var_6[-13].unk0 = 0;
                var_6[-12].unk0 = 0;
                var_6[-11].unk0 = 0;
                var_6[-10].unk0 = 0;
                var_6[-9].unk0 = 0;
                var_6[-8].unk0 = 0;
                var_6[-7].unk0 = 0;
                var_6[-6].unk0 = 0;
                var_6[-5].unk0 = 0;
                var_6[-4].unk0 = 0;
                var_6[-3].unk0 = 0;
                var_6[-2].unk0 = 0;
                var_6[-1].unk0 = -1;
                
                var_6[-1].unk3C = var_7->unk3C;
                
                s32 temp_5 = var_7->unk40;
                if (temp_5 != -1) {
                    var_6[-1].unk0 = temp_5;
                    if (temp_5 >= 0) {
                        u32 *ptr = (u32 *)D_004262D0[0];
                        u32 idx = ptr[temp_5];
                        Arg2Entry *entry = (Arg2Entry *)((char *)D_004262D0[9] + idx * 8);
                        entry->unk4++;
                    }
                }
            }
            var_7++;
            var_6 = (Arg2Entry *)((char *)var_6 + 0x44);
            var_8 = (Arg2Entry *)((char *)var_8 + 0x44);
        } while (var_7 != arg1);
    }
    return (s32)var_8;
}
