extern s32 func_001E4280(void);
extern s32 func_001E3D10(s32, void*, s32);

typedef struct {
    u8 unk_00[0x18];
    s32 unk_18;
    s32 unk_1C;
    f32 unk_20;
    f32 unk_24;
    s32 unk_28;
    f32 unk_2C;
    s32 unk_30;
    f32 unk_34;
    f32 unk_38;
    s32 unk_3C;
    f32 unk_40;
    s32 unk_44;
} S_arg0;

typedef struct {
    u8 unk_00[0x4C];
    struct {
        u8 unk_00[0x50];
        f32 unk_50;
        f32 unk_54;
    } *unk_4C;
} S_arg1;

void func_0029CEA8(S_arg0 *arg0, S_arg1 *arg1) {
    f32 f1, f0, f2, f3;
    
    if (arg0->unk_1C != 0) {
        f1 = arg0->unk_24;
        f3 = (f32)arg0->unk_30;
        f0 = arg0->unk_2C;
        f1 = f1 + f0;
        f2 = fabsf(f3);
        f0 = fabsf(f1);
        if (f2 <= f0) {
            arg0->unk_24 = f1;
            arg1->unk_4C->unk_50 = f3;
        } else {
            arg0->unk_24 = f1;
            arg1->unk_4C->unk_50 = f1;
        }
        
        f1 = arg0->unk_38;
        f3 = (f32)arg0->unk_44;
        f0 = arg0->unk_40;
        f1 = f1 + f0;
        f2 = fabsf(f3);
        f0 = fabsf(f1);
        if (f2 <= f0) {
            arg0->unk_38 = f1;
            arg1->unk_4C->unk_54 = f3;
        } else {
            arg0->unk_38 = f1;
            arg1->unk_4C->unk_54 = f1;
        }
        
        f1 = (f32)arg0->unk_30;
        f0 = arg0->unk_24;
        f0 = fabsf(f0);
        f1 = fabsf(f1);
        if (f1 <= f0) {
            f1 = (f32)arg0->unk_44;
            f0 = arg0->unk_38;
            f0 = fabsf(f0);
            f1 = fabsf(f1);
            if (f1 <= f0) {
                s32 v = func_001E4280();
                func_001E3D10(v, (void*)((char*)arg0 + 0x10), 1);
                arg0->unk_1C = 0;
            }
        }
    } else {
        f1 = arg0->unk_24;
        f3 = arg0->unk_20;
        f0 = arg0->unk_2C;
        f1 = f1 - f0;
        f2 = fabsf(f3);
        f0 = fabsf(f1);
        if (f0 <= f2) {
            arg0->unk_24 = f1;
            arg1->unk_4C->unk_50 = f3;
        } else {
            arg0->unk_24 = f1;
            arg1->unk_4C->unk_50 = f1;
        }
        
        f1 = arg0->unk_38;
        f3 = arg0->unk_34;
        f0 = arg0->unk_40;
        f1 = f1 - f0;
        f2 = fabsf(f3);
        f0 = fabsf(f1);
        if (f0 <= f2) {
            arg0->unk_38 = f1;
            arg1->unk_4C->unk_54 = f3;
        } else {
            arg0->unk_38 = f1;
            arg1->unk_4C->unk_54 = f1;
        }
        
        f1 = arg0->unk_24;
        f0 = arg0->unk_20;
        f0 = fabsf(f0);
        f1 = fabsf(f1);
        if (f1 <= f0) {
            f1 = arg0->unk_38;
            f0 = arg0->unk_34;
            f0 = fabsf(f0);
            f1 = fabsf(f1);
            if (f1 <= f0) {
                s32 v = func_001E4280();
                func_001E3D10(v, (void*)((char*)arg0 + 0xC), 0);
                arg0->unk_18 = 0;
            }
        }
    }
}
