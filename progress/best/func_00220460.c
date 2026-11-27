typedef struct Elem12 { s32 pad0; void *a; void *b; } Elem12;
extern void *func_00201350(void);

void func_00220460(void *arg0)
{
    s32 count;
    s32 i;
    void *temp_9;
    void *var_5;
    void *var_6;
    void *base;
    f32 var_f5, var_f1;
    s32 var_2;
    s8 temp_4, temp_3_3;
    void *temp_3_2, *temp_2_2, *temp_3_4, *temp_4_2, *temp_2_3, *temp_5, *temp_2;
    void *p;
    f32 t1, t2, t0;

    i = 0;
    count = *(s32 *)((char *)func_00201350() + 0x10);
    if (count <= 0) return;

    do {
        temp_9 = ((void **)func_00201350())[i];
        base = (char *)arg0 + i * 0xC;
        var_5 = *(void **)(*(void **)((char *)base + 4));
        if (var_5 != 0) {
            temp_2 = *(void **)((char *)var_5 + 0x50);
            p = (char *)temp_9 + 0xC0;
            t1 = *(f32 *)p - *(f32 *)((char *)temp_2 + 0x50);
            temp_2 = (char *)temp_2 + 0x50;
            t2 = *(f32 *)((char *)p + 4) - *(f32 *)((char *)temp_2 + 4);
            t0 = *(f32 *)((char *)p + 8) - *(f32 *)((char *)temp_2 + 8);
            var_6 = *(void **)(*(void **)((char *)((char *)var_5 + i * 0xC) + 0x1C));
            var_f5 = t1 * t1 + t2 * t2 + t0 * t0;
            if (var_6 != 0) {
                void *temp_7 = p;
                s32 temp_10 = 0xC;
                do {
                    var_2 = *(s32 *)((char *)var_6 + 0x4C);
                    if (var_2 == 0) var_2 = *(s32 *)((char *)var_6 + 0x50);
                    temp_3_2 = (char *)var_2 + 0x20;
                    temp_2_2 = (char *)temp_3_2 + 0x30;
                    var_f1 = 0;
                    t1 = *(f32 *)p - *(f32 *)((char *)temp_3_2 + 0x30);
                    t2 = *(f32 *)((char *)temp_7 + 4) - *(f32 *)((char *)temp_2_2 + 4);
                    temp_4 = *(s8 *)((char *)var_6 + 0x48);
                    temp_3_3 = *(s8 *)((char *)var_5 + 0x48);
                    t0 = *(f32 *)((char *)temp_7 + 8) - *(f32 *)((char *)temp_2_2 + 8);
                    var_f1 = t1 * t1 + t2 * t2 + t0 * t0;
                    {
                        s32 sel = 0;
                        if (temp_3_3 < temp_4 || (temp_4 == temp_3_3 && var_f5 < var_f1)) sel = 1;
                        if (sel != 0) {
                            var_6 = var_5;
                            var_f1 = var_f5;
                            temp_3_4 = (char *)var_5 + i * temp_10 + 0x18;
                            temp_4_2 = *(void **)((char *)temp_3_4 + 4);
                            temp_2_3 = *(void **)((char *)temp_3_4 + 8);
                            *(void **)((char *)temp_4_2 + 8) = temp_2_3;
                            *(void **)((char *)temp_2_3 + 4) = temp_4_2;
                            temp_5 = *(void **)((char *)temp_4_2 + 4);
                            *(void **)((char *)temp_3_4 + 8) = temp_4_2;
                            *(void **)((char *)temp_3_4 + 4) = temp_5;
                            *(void **)((char *)temp_5 + 8) = temp_3_4;
                            *(void **)((char *)(*(void **)((char *)temp_3_4 + 8)) + 4) = temp_3_4;
                        }
                    }
                    var_5 = var_6;
                    var_6 = *(void **)(*(void **)((char *)((char *)var_5 + i * temp_10) + 0x1C));
                    var_f5 = var_f1;
                } while (var_6 != 0);
            }
        }
        i += 1;
    } while (i < count);
}
