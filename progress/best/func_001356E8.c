typedef struct { s32 pad[3]; f32 c; s32 k; } Obj36;
typedef struct { s32 pad[9]; Obj36 **start; Obj36 **end; } A36;
typedef struct { s32 f0; s32 f4; } T4;

void func_001356E8(A36 *arg0, s32 arg1) {
    T4 *p = (T4 *)((char *)arg0 + 0x24);
    u32 var_6, var_7, temp_13, temp_14;
    u8 *var_8;
    Obj36 *t5, *t4_2;
    f32 f1, f0;
    if (((s32)(p->f4 - (s32)arg0->start) >> 2) - 1 != 0) {
        var_7 = 0;
        do {
            var_6 = var_7 + 1;
            temp_14 = var_7 * 4;
            temp_13 = var_6;
            if (var_6 < (u32)((s32)(p->f4 - (s32)arg0->start) >> 2)) {
                var_8 = (u8 *)((char *)arg0->start + temp_13 * 4);
                do {
                    if (arg1 == 0) {
                        f1 = (*(Obj36 **)var_8)->c;
                        f0 = arg0->start[var_7]->c;
                    } else {
                        t5 = *(Obj36 **)var_8;
                        t4_2 = arg0->start[var_7];
                        if (t5->k != t4_2->k) {
                            if (t4_2->k < t5->k) var_7 = var_6;
                            goto next36;
                        }
                        f1 = t5->c;
                        f0 = t4_2->c;
                    }
                    if (f1 < f0) var_7 = var_6;
next36:
                    var_6++;
                    var_8 += 4;
                } while (var_6 < (u32)((s32)(p->f4 - (s32)arg0->start) >> 2));
            }
            {
                Obj36 **aa = (Obj36 **)((char *)arg0->start + var_7 * 4);
                Obj36 **bb = (Obj36 **)((char *)arg0->start + temp_14);
                Obj36 *t = *aa;
                *aa = *bb;
                *bb = t;
            }
            var_7 = temp_13;
        } while (temp_13 < (u32)(((s32)(p->f4 - (s32)arg0->start) >> 2) - 1));
    }
}
