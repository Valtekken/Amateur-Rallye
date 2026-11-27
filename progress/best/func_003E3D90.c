typedef struct {
    u8 pad[0x838];
    s32 unk838;
    s32 unk83C;
    u8 pad2[0x18];
    s32 unk858;
} S_func_003E3D90_arg0;

#define D_1000B020 (*(volatile u32 *)0x1000B020)
#define D_10002010 (*(volatile u32 *)0x10002010)
#define D_10002020 (*(volatile u32 *)0x10002020)
#define D_1000B420 (*(volatile u32 *)0x1000B420)
#define D_1000B400 (*(volatile u32 *)0x1000B400)
#define D_1000B000 (*(volatile u32 *)0x1000B000)
#define D_1000F520 (*(volatile u32 *)0x1000F520)
#define D_1000F590 (*(volatile u32 *)0x1000F590)
#define D_10002030 (*(volatile u64 *)0x10002030)

extern s32 func_003E0EA0(s32, s32 *, s32);
extern void func_003E1708(void *, const char *);
extern void func_003E4F70(void);
extern void func_0040AF58(void);
extern s32 func_0040AFA0(u32, u32, u32, u32);
extern const char D_00489C70[];

s32 func_003E3D90(S_func_003E3D90_arg0 *arg0) {
    volatile u32 sp20[16];
    s32 var_22 = 1;
    s64 temp_4;
    s32 temp_3;
    s32 var_2;

    func_003E4F70();

    if (D_1000B020 != 0) {
        if ((D_10002010 & 0x4000) == 0) {
            while (1) {
                if (D_1000B420 == 0 && (D_1000B400 & 0x100) == 0) {
                    sp20[0] = 1;
                    func_003E0EA0(arg0->unk858, &sp20[0], 1);
                }
                if (D_1000B020 != 0) {
                    if (D_10002010 & 0x4000) {
                        break;
                    }
                } else {
                    break;
                }
            }
        }
    }

    temp_4 = D_10002030;
    arg0->unk838 = (s32)temp_4;

    if (temp_4 < 0) {
        temp_3 = D_10002020 & 0x1F;
        if (temp_3 != 0) {
            var_2 = 0x20 - temp_3;
        } else {
            var_2 = 0;
        }
    } else {
        var_2 = 0x20;
    }
    arg0->unk83C = var_2;

    if (D_10002010 & 0x4000) {
        var_22 = 0;
        func_003E1708(arg0, D_00489C70);
        sp20[0] = 2;
        func_003E0EA0(arg0->unk858, &sp20[0], 2);
        D_10002010 = 0x40000000;
        sp20[0] = 3;
        func_003E0EA0(arg0->unk858, &sp20[0], 3);
        func_0040AF58();
        D_1000F590 = D_1000F520 | 0x10000;
        D_1000B000 = 0;
        D_1000F590 = D_1000F520 & 0xFFFEFFFF;
        func_0040AFA0(0xFFFEFFFF, D_1000F520, D_1000F590, 0x10000);
        D_1000B020 = 0;
    }

    return var_22;
}
