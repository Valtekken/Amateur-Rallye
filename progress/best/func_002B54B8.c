typedef struct S_func_002B54B8_arg0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} S_func_002B54B8_arg0;

extern s32 func_002B1FC0(s32);
extern s32 func_002B53F8(s32);
extern void func_002B5608(s32, s32);
extern void func_003F931C(s32, s32, s32);
extern void func_003F9698(char *fmt, s32, s32);
extern s32 func_003FA9B8(s32);
extern s32 func_00406EA8(s32, s32);

extern char D_0047EAB8[];
extern char D_0047EAF0[];

void func_002B54B8(S_func_002B54B8_arg0 *arg0, s32 arg1) {
    s32 var_19 = 0;
    s32 temp_2;
    s32 temp_16;
    s32 temp_2_2;
    s32 temp_2_3;

    if (arg0->unk4 != 0) {
        func_002B5608((s32)arg0, arg1);
    }

    temp_2 = func_002B53F8(arg1);
    
    temp_16 = func_003FA9B8(temp_2);
    temp_2_3 = temp_2 + 1;
    temp_2_2 = func_002B1FC0(temp_2_3);
    arg0->unk8 = temp_2_2;
    func_003F931C(temp_2_2, temp_2, temp_2_3);

    temp_2_3 = func_00406EA8(temp_2, 0x603);
    if (temp_2_3 >= 0) {
        func_003F9698(D_0047EAB8, temp_2_3, temp_2);
        var_19 = 1;
        arg0->unk0 = temp_2 + 1;
        arg0->unk4 = temp_2;
    } else {
        func_003F9698(D_0047EAF0, temp_2, 0); // Added a dummy arg to satisfy compiler
    }
}
