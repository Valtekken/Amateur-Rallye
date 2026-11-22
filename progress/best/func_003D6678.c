extern s32 func_003D9E30(s32 arg0, s8 *buf, s32 size, s8 c, s32 arg4, s32 *out);
extern s32 func_003DA6B8(s32 arg0);
extern s32 func_003F931C(s32 dest, s8 *src, s64 len);
extern s64 D_002AD5A8(s64 size);

s32 func_003D6678(s32 arg0, s64 *arg1, s8 arg2) {
    s8 buf[0x200];
    s32 sp200;
    s32 minus1 = -1;
    s32 c = arg2;
    s32 temp18;
    s64 temp20;

    temp18 = func_003D9E30(arg0, buf, 0x200, c, minus1, &sp200);
    if (sp200 == minus1) {
        sp200 = func_003DA6B8(arg0);
    }

    temp20 = *arg1;
    *arg1 = temp20 + (u64)(u32)temp18;
    if (sp200 != minus1 && sp200 != c) {
        *arg1 = *arg1 + 1;
        arg0 = func_003D6678(arg0, arg1, arg2);
        if (arg0 != 0) {
            func_003F931C(arg0 + (s32)temp20, buf, (s64)temp18);
            *(s8 *)(arg0 + (s32)temp20 + (u32)temp18) = (s8)sp200;
        }
    } else {
        arg0 = (s32)D_002AD5A8((s64)((s32)(*arg1 + 1)));
        if (arg0 != 0) {
            *(s8 *)(arg0 + (s32)*arg1) = 0;
            func_003F931C(arg0 + (s32)*arg1, buf, (s64)temp18);
        }
    }
    return arg0;
}
