extern void func_00317470(void *, void *, void *, void *, void *, void *, void *);
extern void func_00317770(void *, void *, void *);
extern void func_0031E8D8(void *, void *, s32);
extern s32 *func_00340CD0(void);

extern u8 D_0042D690[];
extern u16 D_0042DA10;
extern s32 D_0042DE00;
extern s32 D_0042DE04;
extern s32 D_0042DE08;
extern u8 D_0042DE20[];
extern u8 D_0042E020[];
extern u8 D_0042E230[];
extern u8 D_0042E270[];
extern u8 D_0042E2B0[];
extern u8 D_0042E2F0[];
extern u8 D_0042E330[];
extern u8 D_0042E370[];
extern u8 D_0042E3B0[];

typedef struct {
    u8 pad0[0x114];
    f32 unk114; /* 0x114 */
} S_arg0;

void func_0031C228(S_arg0 *arg0) {
    s32 idx;
    u8 *base;
    s32 temp_4;
    s32 var_4;
    s32 var_8;
    s64 *a;
    s64 *b;
    s32 eq;
    f32 sp[4];
    s16 tmp;

    tmp = (s16)(u16)D_0042DA10;
    idx = tmp;
    base = D_0042D690 + idx * 0xE0;

    var_4 = func_00340CD0()[0x14 / 4];
    if (var_4 == -1 || var_4 != D_0042DE04) {
        sp[0] = 0.2f;
        sp[1] = 0.2f;
        sp[2] = 1.0f;
        sp[3] = arg0->unk114;
        func_00317470(base, sp, D_0042E2B0, D_0042E2F0, D_0042E330, D_0042E370, D_0042E3B0);
        func_00340CD0()[0x14 / 4] = D_0042DE04;
    }

    var_4 = func_00340CD0()[0x10 / 4];
    if (var_4 == -1 || var_4 != D_0042DE00) {
        func_00317770(base, D_0042E230, D_0042E270);
        func_00340CD0()[0x10 / 4] = D_0042DE00;
    }

    temp_4 = *func_00340CD0();
    var_8 = 0;
    if (temp_4 != -1) {
        if (temp_4 != D_0042DE08) {
            a = (s64 *)(D_0042DE20 + 0x10);
            b = (s64 *)(D_0042E020 + 0x10);
            eq = 0;
            if (a[0] == b[0] && a[1] == b[1]) {
                eq = (a[2] == b[2]);
            }
            if (eq != 0) {
                var_8 = 1;
            }
        } else {
            var_8 = 1;
        }
    }

    if (var_8 == 0) {
        s64 *dst;
        s64 *src;
        func_0031E8D8(base, D_0042DE20, 0x40);
        *func_00340CD0() = D_0042DE08;
        dst = (s64 *)(D_0042E020 + 0x10);
        src = (s64 *)(D_0042DE20 + 0x10);
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
    }
}
