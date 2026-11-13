extern u32 D_0040E618[];
extern void *func_00152D28(s32);
extern void *func_002B1FC0(s32);
extern void func_002B2028(void *);
extern void *func_003D2910(s32);
extern void func_003F93CC(void *, void *, s32);

typedef struct { void *begin; void *end; void *cap; } Vec;

void func_002E7E80(Vec *arg0, void *arg1, void **arg2) {
    void **temp_16_2;
    void *temp_16;
    void *temp_16_3;
    void *temp_2_2;
    void *temp_4_3;
    void *temp_5;
    void *var_17;
    s32 temp_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_4_2;
    s32 temp_6;
    s32 temp_6_2;
    s32 var_20;
    void *temp_3;
    void *temp_4;

    temp_3 = arg0->end;
    if (temp_3 != arg0->cap) {
        if (temp_3 != NULL) {
            *(s32 *)temp_3 = *(s32 *)((char *)temp_3 - 4);
        }
        temp_4 = arg0->end;
        arg0->end = (void *)((char *)temp_4 + 4);
        temp_6 = (s32)(((char *)temp_4 - 4) - (char *)arg1) >> 2;
        temp_6 = temp_6 * 4;
        temp_16 = *arg2;
        func_003F93CC((char *)temp_4 - temp_6, arg1, temp_6);
        *(void **)arg1 = temp_16;
        return;
    }
    temp_2 = (s32)((char *)temp_3 - (char *)arg0->begin) >> 2;
    temp_4_2 = (temp_2 != 0) ? (temp_2 * 2) : 1;
    var_20 = temp_4_2 * 4;
    if (temp_4_2 != 0) {
        if (var_20 != 0) {
            temp_2_2 = func_002B1FC0(var_20);
            var_17 = temp_2_2;
            if (temp_2_2 == NULL) {
                var_17 = func_003D2910(var_20);
            }
        } else if (D_0040E618[-1] != 0) {
            var_17 = (void *)D_0040E618[-1];
            D_0040E618[-1] = *(u32 *)D_0040E618[-1];
        } else {
            var_17 = func_00152D28(0);
        }
    } else {
        var_17 = NULL;
        var_20 = 0;
    }
    temp_5 = arg0->begin;
    temp_2_3 = (s32)((char *)arg1 - (char *)temp_5);
    temp_16_2 = (void **)((char *)var_17 + temp_2_3);
    func_003F93CC(var_17, temp_5, (temp_2_3 >> 2) * 4);
    if (temp_16_2 != NULL) {
        *temp_16_2 = *arg2;
    }
    temp_16_3 = (void *)((char *)temp_16_2 + 4);
    temp_6_2 = (s32)((char *)arg0->end - (char *)arg1);
    func_003F93CC(temp_16_3, arg1, (temp_6_2 >> 2) * 4);
    temp_4_3 = arg0->begin;
    temp_2_4 = (s32)((char *)arg0->cap - (char *)temp_4_3) >> 2;
    if (temp_2_4 != 0) {
        if ((temp_2_4 * 4) != 0) {
            func_002B2028(temp_4_3);
        } else {
            *(void **)temp_4_3 = (void *)D_0040E618[-1];
            D_0040E618[-1] = (u32)temp_4_3;
        }
    }
    arg0->end = (void *)((char *)temp_16_3 + temp_6_2);
    arg0->cap = (void *)((char *)var_17 + var_20);
    arg0->begin = var_17;
}
