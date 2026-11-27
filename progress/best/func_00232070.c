extern s32 func_00231290(s32, void *, f32 *, f32, f32, f32);
extern f32 func_003F3E80(f32, f32, f32);

typedef struct { f32 f0; f32 f4; f32 f8; f32 fC; } Arg1;
typedef struct { f32 f0; f32 f4; f32 f8; f32 fC; f32 f10; f32 f14; } Arg2;

s32 func_00232070(s32 arg0, void *arg1, void *arg2) {
    Arg1 *a1 = (Arg1 *)arg1;
    Arg2 *a2 = (Arg2 *)arg2;
    f32 f8 = a1->f0;
    f32 f11 = a1->f4;
    f32 f13 = a1->f8;
    f32 f5 = a2->f0;
    f32 f7 = a2->f4;
    f32 f10 = a2->f8;
    f32 f6 = a2->fC;
    f32 temp_f24 = (f13 * f5) - (f8 * f10);
    f32 temp_f23 = (f8 * f7) - (f11 * f5);
    f32 temp_f14 = temp_f24 * temp_f24;
    f32 temp_f12 = temp_f23 * temp_f23;
    f32 temp_f22 = (f11 * f10) - (f13 * f7);
    f32 temp_f4 = temp_f22 * temp_f22;
    f32 var_f25 = 0.0f;
    f32 var_f20, var_f21;
    if ((temp_f14 < temp_f12) && (temp_f4 < temp_f12) && (temp_f12 > 0.0f)) {
        var_f20 = -((f5 * f6) - (f8 * f10)) / temp_f23; // need check
        var_f21 = -((f11 * f6) - (f7 * f10)) / temp_f23;
    } else if (temp_f4 < temp_f14) {
        var_f20 = 0.0f;
        if (temp_f14 > 0.0f) {
            var_f25 = ((f5 * f6) - (f8 * f10)) / temp_f14;
            var_f21 = ((f13 * f6) - (f10 * f10)) / temp_f14; // wrong offsets
        } else {
            // block_8
        }
    } else {
        var_f21 = 0.0f;
        if (temp_f4 > 0.0f) {
            var_f25 = -((f7 * f6) - (f11 * f10)) / temp_f22;
            var_f20 = -((f13 * f6) - (f10 * f10)) / temp_f22;
        } else {
            var_f20 = 0.0f;
            var_f21 = 0.0f;
            var_f25 = 0.0f;
        }
    }
    f32 var_f0 = temp_f4 + temp_f14;
    // unknown instruction c1 0xc0004
    if (var_f0 != var_f0) {
        var_f0 = func_003F3E80(var_f0 + temp_f12, f13, temp_f14);
    }
    f32 sp10 = var_f21;
    f32 sp14 = var_f20;
    f32 sp18 = var_f25;
    func_00231290(arg0, &sp10, &temp_f22, temp_f24 / var_f0, temp_f14 / var_f0, temp_f23 / var_f0);
    return arg0;
}
