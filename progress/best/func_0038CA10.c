extern void *func_00152D28(s32, void *);
extern void *func_002B1FC0(s32);
extern void func_002B2028(void *);
extern void func_00386948(void *, s32);
extern void func_0038C070(void *, void *);
extern void *func_0038C9B0(void *, void *, void *, s32);
extern void func_0038CFB8(void *, s32);
extern void *func_003D2910(s32);

extern u8 D_0040E618[];

void func_0038CA10(void *arg0, void *arg1, s32 arg2)
{
    u8 *v = (u8 *)arg0;
    u8 *a1 = (u8 *)arg1;
    u8 *sp = 0;
    u8 *temp_4 = *(u8 **)(v + 0x4);
    u8 *var_17;
    s32 var_16;
    u8 *var_18;
    s32 temp_21;
    s32 temp_16;
    u8 *var_19;
    u8 *temp_2_3;
    u8 *temp_17;
    u8 *temp_20;
    u8 *var_16_2;
    u8 *var_4;
    s32 temp_3;
    s32 temp_2;
    u8 *temp_4_3;
    u8 *spbuf;
    /* local element buffer at sp */
    u8 splocal[0x48];

    spbuf = splocal;

    if (temp_4 != *(u8 **)(v + 0x8)) {
        if (temp_4 != NULL) {
            func_0038CFB8(temp_4, (s32)(temp_4 - 0x48));
        }
        *(u8 **)(v + 0x4) = *(u8 **)(v + 0x4) + 0x48;
        func_0038CFB8(spbuf, arg2);
        {
            u8 *temp_4_2 = *(u8 **)(v + 0x4);
            var_17 = temp_4_2 - 0x90;
            var_16 = (s32)((var_17 - a1) * 0x38E38E39) >> 3;
            if (var_16 > 0) {
                var_18 = (temp_4_2 - 0x48) - 0x48;
                do {
                    var_17 -= 0x48;
                    func_0038C070(var_18, var_17);
                    var_16 -= 1;
                    var_18 -= 0x48;
                } while (var_16 > 0);
            }
        }
        func_0038C070(a1, spbuf);
        func_00386948(spbuf, 2);
        return;
    }

    temp_2 = (s32)((temp_4 - *(u8 **)(v + 0x0)) * 0x38E38E39) >> 3;
    temp_21 = (temp_2 != 0) ? (temp_2 * 2) : 1;
    if (temp_21 != 0) {
        temp_16 = temp_21 * 0x48;
        if (temp_16 != 0) {
            temp_2_3 = func_002B1FC0(temp_16);
            var_19 = temp_2_3;
            if (temp_2_3 == NULL) var_19 = func_003D2910(temp_16);
        } else if (*(u8 **)(D_0040E618 + 0x0 - 4) != NULL) {
            var_19 = *(u8 **)(D_0040E618 + 0x0 - 4);
            *(u8 **)(D_0040E618 + 0x0 - 4) = *(u8 **)var_19;
        } else {
            var_19 = func_00152D28(0, *(u8 **)(D_0040E618 + 0x0 - 4));
        }
    } else {
        var_19 = NULL;
    }

    temp_2_3 = func_0038C9B0(*(u8 **)(v + 0x0), a1, var_19, 0);
    if (temp_2_3 != NULL) func_0038CFB8(temp_2_3, arg2);
    temp_17 = *(u8 **)(v + 0x4);
    temp_20 = func_0038C9B0(a1, *(u8 **)(v + 0x4), temp_2_3 + 0x48, 0);

    var_16_2 = *(u8 **)(v + 0x0);
    if ((u32)var_16_2 < (u32)temp_17) {
        var_4 = var_16_2;
        do {
            func_00386948(var_4, 2);
            var_16_2 += 0x48;
            var_4 = var_16_2;
        } while ((u32)var_16_2 < (u32)temp_17);
    }

    temp_4_3 = *(u8 **)(v + 0x0);
    temp_3 = (s32)((*(u8 **)(v + 0x8) - temp_4_3) * 0x38E38E39) >> 3;
    if (temp_3 != 0) {
        if ((temp_3 * 0x48) != 0) {
            func_002B2028(temp_4_3);
        } else {
            *(u8 **)temp_4_3 = *(u8 **)(D_0040E618 + 0x0 - 4);
            *(u8 **)(D_0040E618 + 0x0 - 4) = temp_4_3;
        }
    }

    *(u8 **)(v + 0x4) = temp_20;
    *(u8 **)(v + 0x0) = var_19;
    *(u8 **)(v + 0x8) = (temp_21 * 0x48) + var_19;
    (void)sp;
}
