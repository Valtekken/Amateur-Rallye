extern void func_002633B8(void);
extern f32 func_003F2F50(f32);
extern f32 func_003F3140(f32, f32, s32, s32, s32);
extern void func_00152108(void *, f32 *, void *);
extern f32 D_00479C98;

typedef struct { f32 x, y, z, w; } V4;
typedef struct { void *vtable; void *unk4; f32 x,y,z,w; u8 pad[0x20]; V4 at0x30; } Obj;

void func_0017DF68(Obj *obj, void *arg3, f32 fparg0) {
    f32 sp10_x, sp10_y, sp10_z, sp10_w;
    f32 sp20_x, sp20_y, sp20_z, sp20_w;
    s32 sp30;
    f32 sp40_x, sp40_y, sp40_z, sp40_w;
    f32 sp50_x, sp50_y, sp50_z, sp50_w;
    f32 sp80_x, sp80_y, sp80_z, sp80_w;
    V4 *temp_20;
    V4 *temp_3;
    f32 temp_f20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f1b;

    temp_20 = &obj->at0x30;
    func_002633B8();
    temp_3 = obj->unk4;

    sp10_x = 0.0f; sp10_y = 0.0f; sp10_z = 0.0f; sp10_w = 0.0f;
    sp10_w = 1.0f;
    sp20_x = 0.0f; sp20_y = 0.0f; sp20_z = 0.0f; sp20_w = 0.0f;
    sp20_w = 1.0f;
    sp30 = 0;
    sp30 = 1;

    temp_f20 = (temp_3->x + (temp_3->y * fparg0 * D_00479C98)) * 0.5f;

    sp20_x = 1.0f;
    sp20_y = 0.0f;
    sp20_z = 0.0f;

    temp_f0 = func_003F3140(temp_f20, 1.0f, 0, 0, 0);

    sp40_x = temp_f0 * obj->x;
    sp40_y = temp_f0 * obj->y;
    sp40_z = temp_f0 * obj->z;

    temp_f0_2 = func_003F2F50(temp_f20);
    temp_f1 = 2.0f * sp40_y;
    temp_f4 = 2.0f * sp40_z;
    sp40_w = temp_f0_2;
    temp_f8 = 2.0f * sp40_x;
    temp_f12 = temp_f1 * temp_f0_2;
    temp_f11 = temp_f1 * sp40_y;
    temp_f10 = temp_f4 * temp_f0_2;
    temp_f2 = temp_f4 * sp40_z;
    temp_f1b = temp_f1 * sp40_x;
    temp_f7 = temp_f8 * sp40_x;
    temp_f8_2 = temp_f8 * temp_f0_2;
    temp_f9 = temp_f4 * sp40_x;
    temp_f4 = temp_f4 * sp40_y;

    sp50_x = temp_f1b + temp_f10;
    sp50_y = temp_f4 - temp_f8_2;
    sp50_z = 1.0f - (temp_f7 + temp_f2);
    sp50_w = 0.0f;

    sp20_x = temp_f9 - temp_f12;
    sp20_y = temp_f4 + temp_f8_2;
    sp20_z = 1.0f - (temp_f7 + temp_f11);
    sp20_w = 0.0f;

    sp30 = 0;
    sp30 = 1;

    func_00152108(obj, &sp50_x, &sp80_x);

    sp80_x = obj->x;
    sp80_w = 1.0f;
    sp80_y = temp_20->y;
    sp80_z = temp_20->z;

    obj->z = sp50_z;
    obj->w = sp50_w;
    obj->x = sp50_x;
    obj->y = sp50_y;
    temp_20->x = sp50_x;
    temp_20->y = sp50_y;
    temp_20->z = sp50_z;
    obj->x = sp80_x;
    temp_20->x = sp80_y;
    temp_20->y = sp80_z;
    temp_20->z = sp80_w;
}
