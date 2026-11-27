typedef int (*func34_t)(void *obj, const void *data, int size);

struct unk50 {
    func34_t func;
};

struct arg0 {
    struct unk50 *unk50;
};

extern const char D_004895C0[16];
extern const char D_004895D0[16];

u64 func_003D9CF8(void *arg0, s8 arg1, s64 arg2) {
    const char *var_19;
    s32 var_16 = 0xF;
    s64 var_16_2;
    s64 var_18 = 0;
    volatile char pad[16]; /* force frame size 0x70 */

    if (arg1 == 0x20) {
        var_19 = D_004895C0;
    } else if (arg1 == 0x30) {
        var_19 = D_004895D0;
    } else {
        var_19 = D_004895C0;
    }

    var_16_2 = (s64)((arg2 << 0x20) >> 0x20);

    if (var_16_2 >= 0x10) {
        for (;;) {
            int temp_2 = ((struct arg0 *)arg0)->unk50->func(arg0, var_19, 0x10);
            var_18 += temp_2;
            if (temp_2 != 0x10) {
                break;
            }
            var_16_2 -= 0x10;
            if (var_16_2 < 0x10) {
                break;
            }
        }
    } else {
        if (var_16_2 > 0) {
            var_18 += ((struct arg0 *)arg0)->unk50->func(arg0, var_19, (int)var_16_2);
        }
    }

    return (u64)((var_18 << 0x20) >> 0x20);
}
