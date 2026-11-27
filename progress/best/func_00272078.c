extern void func_0027C0D8(void *, s32);
extern void func_00231F78(void *, void *);
extern void func_00231EB0(void *, s32);
extern void *func_00271D40(void *, void *, void *, s32);
extern void *func_002B1FC0(s32);
extern void func_002B2028(void *);
extern void *func_003D2910(s32);
extern void *func_00152D28(s32, void *);
extern void *D_0040E618;

typedef struct {
    void *unk0;
    void *unk4;
    void *unk8;
} S_func_00272078_arg0;

void func_00272078(S_func_00272078_arg0 *arg0, void *arg1, s32 arg2) {
    void *temp_17;
    void *temp_20;
    void *temp_4;
    void *var_17;
    void *var_18;
    void *var_19;
    void *var_16_2;
    void *var_4;
    s32 temp_16;
    s32 temp_21;
    s32 temp_2;
    s32 temp_3;
    s32 var_16;
    volatile char pad[0x10]; // Force 0x90 byte frame

    temp_4 = arg0->unk4;
    if (temp_4 != arg0->unk8) {
        if (temp_4 != NULL) {
            func_0027C0D8(temp_4, (s32)temp_4 - 0x1C);
        }
        arg0->unk4 = (void *)((s32)arg0->unk4 + 0x1C);
        func_0027C0D8(&temp_4, arg2);
        temp_4 = arg0->unk4;
        var_17 = (void *)((s32)temp_4 - 0x38);
        var_16 = (s32)(((s32)var_17 - (s32)arg1) * 0xB6DB6DB7) >> 2;
        if (var_16 > 0) {
            var_18 = (void *)((s32)temp_4 - 0x1C - 0x1C);
            do {
                var_17 = (void *)((s32)var_17 - 0x1C);
                func_00231F78(var_18, var_17);
                var_16 -= 1;
                var_18 = (void *)((s32)var_18 - 0x1C);
            } while (var_16 > 0);
        }
        func_00231F78(arg1, &temp_4);
        func_00231EB0(&temp_4, 2);
        return;
    }
    temp_2 = (s32)(((s32)temp_4 - (s32)arg0->unk0) * 0xB6DB6DB7) >> 2;
    temp_21 = (temp_2 != 0) ? (temp_2 * 2) : 1;
    if (temp_21 != 0) {
        temp_16 = temp_21 * 0x1C;
        if (temp_16 != 0) {
            temp_2 = (s32)func_002B1FC0(temp_16);
            var_19 = (void *)temp_2;
            if (temp_2 == 0) {
                var_19 = func_003D2910(temp_16);
            }
        } else if (*(void **)((s32)&D_0040E618 - 4) != NULL) {
            var_19 = *(void **)((s32)&D_0040E618 - 4);
            *(void **)((s32)&D_0040E618 - 4) = *(void **)*(void **)((s32)&D_0040E618 - 4);
        } else {
            var_19 = func_00152D28(0, *(void **)((s32)&D_0040E618 - 4));
        }
    } else {
        var_19 = NULL;
    }
    temp_2 = (s32)func_00271D40(arg0->unk0, arg1, var_19, 0);
    if (temp_2 != 0) {
        func_0027C0D8((void *)temp_2, arg2);
    }
    temp_17 = arg0->unk4;
    temp_20 = func_00271D40(arg1, arg0->unk4, (void *)((s32)temp_2 + 0x1C), 0);
    var_16_2 = arg0->unk0;
    if ((u32)var_16_2 < (u32)temp_17) {
        var_4 = var_16_2;
        do {
            func_00231EB0(var_4, 2);
            var_16_2 = (void *)((s32)var_16_2 + 0x1C);
            var_4 = var_16_2;
        } while ((u32)var_16_2 < (u32)temp_17);
    }
    temp_4 = arg0->unk0;
    temp_3 = (s32)(((s32)arg0->unk8 - (s32)temp_4) * 0xB6DB6DB7) >> 2;
    if (temp_3 != 0) {
        if ((temp_3 * 0x1C) != 0) {
            func_002B2028(temp_4);
        } else {
            *(void **)temp_4 = *(void **)((s32)&D_0040E618 - 4);
            *(void **)((s32)&D_0040E618 - 4) = temp_4;
        }
    }
    arg0->unk4 = temp_20;
    arg0->unk0 = var_19;
    arg0->unk8 = (void *)((s32)var_19 + temp_21 * 0x1C);
}
