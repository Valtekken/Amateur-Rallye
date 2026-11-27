typedef struct S_float4 {
    f32 unk_0;
    f32 unk_4;
    f32 unk_8;
    f32 unk_C;
} S_float4;

typedef struct S_func_001B0E48_arg1_50 {
    u8 unk_00[0x50];
    f32 unk_50;
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
} S_func_001B0E48_arg1_50;

typedef struct S_func_001B0E48_arg1 {
    u8 unk_00[0x50];
    S_func_001B0E48_arg1_50 *unk_50;
} S_func_001B0E48_arg1;

typedef struct S_func_001B0E48_arg0 {
    u8 unk_00[0xC];
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
} S_func_001B0E48_arg0;

extern s32 func_001D5F70(void);
extern f32 func_001D5E70(s32, f32, f32);
extern void func_001B0F88(f32 *, void *, f32);

void func_001B0E68(S_func_001B0E48_arg0 *arg0, S_func_001B0E48_arg1 *arg1) {
    S_float4 volatile *p2;
    S_func_001B0E48_arg1_50 *ptr;
    f32 out[3];
    f32 v24;

    v24 = arg0->unk_24;
    if (arg0->unk_1C < 0.35f) {
        arg0->unk_1C += func_001D5E70(func_001D5F70(), 0.001f, 0.05f) / 30.0f;
    }
    arg0->unk_28 += func_001D5E70(func_001D5F70(), 0.1f, 2.5f) / 30.0f;
    arg0->unk_2C += arg0->unk_28 / 30.0f;

    ptr = arg1->unk_50;
    p2 = (S_float4 volatile *)((char *)ptr + 0x50);
    func_001B0F88(out, arg0, v24);
    ptr->unk_50 = out[0];
    p2->unk_4 = out[1];
    p2->unk_C = (p2->unk_8 = out[2], 1.0f);
}
