extern void func_0017B1C8(void *, s32, void *, void *, f32, f32);
extern void func_001C83A8(void *, void *, void *);
extern char D_0040E8D0[];

void func_0017B038(void *arg0, f32 arg1, f32 arg2) {
    f32 sp0[3];
    f32 sp10[3];
    f32 buf[14];
    f32 extra[3];
    s32 i;
    s32 count;
    char **vec;

    count = *(s32 *)((char *)arg0 + 0xAC);
    for (i = 0; i < count; i++) {
        sp0[0] = 0.0f; sp0[1] = 0.0f; sp0[2] = 0.0f;
        sp10[0] = 0.0f; sp10[1] = 0.0f; sp10[2] = 0.0f;
        func_0017B1C8(arg0, i, sp10, sp0, arg1, arg2);

        buf[1] = sp10[1];
        buf[2] = sp10[2];
        buf[3] = sp0[0];
        buf[4] = sp0[1];
        buf[5] = sp0[2];
        buf[13] = 0.0f;
        buf[0] = sp10[0];
        extra[0] = sp0[0];
        extra[1] = sp0[1];
        extra[2] = sp0[2];

        vec = (char **)D_0040E8D0;
        if (vec[1] != vec[2]) {
            char *dst = vec[1];
            if (dst != 0) {
                char *d0c = dst + 0xC;
                char *d18 = dst + 0x18;
                char *d24 = dst + 0x24;
                ((f32 *)dst)[0] = buf[0];
                ((f32 *)dst)[1] = buf[1];
                ((f32 *)dst)[2] = buf[2];
                *(f32 *)(d0c + 0) = buf[3];
                *(f32 *)(d0c + 4) = buf[4];
                *(f32 *)(d0c + 8) = buf[5];
                *(f32 *)(d18 + 0) = buf[6];
                *(f32 *)(d18 + 4) = buf[7];
                *(f32 *)(d18 + 8) = buf[8];
                *(f32 *)(d24 + 0) = buf[9];
                *(f32 *)(d24 + 4) = buf[10];
                *(f32 *)(d24 + 8) = buf[11];
                ((s32 *)dst)[12] = ((s32 *)buf)[12];
                ((s32 *)dst)[13] = ((s32 *)buf)[13];
            }
            vec[1] += 0x38;
        } else {
            func_001C83A8(D_0040E8D0, vec[1], buf);
        }
    }
}
