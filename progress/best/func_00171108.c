f32 func_00171108(void *arg0, void *arg1, void *arg2) {
    f32 f0 = *(f32 *)((char *)arg2 + 0x128);
    f32 f1 = *(f32 *)((char *)arg1 + 0x128);
    f32 f2 = f1 + f0;
    f32 f5 = 0.0f;
    s32 check = *(s32 *)((char *)arg1 + 0x1C);
    f32 f6 = *(f32 *)((char *)arg0 + 0x20);
    f32 f3, f4;
    void *v0, *v1;

    if (check == 0) goto else_branch;

    v0 = *(void **)((char *)arg1 + 0x18);
    v1 = *(void **)((char *)v0 + 0x10);
    f3 = *(f32 *)((char *)v1 + 0x448);
    f0 = *(f32 *)((char *)v1 + 0x5D8);
    goto after_load;

else_branch:
    v0 = *(void **)((char *)arg1 + 0x18);
    v1 = *(void **)((char *)v0 + 0x10);
    f3 = *(f32 *)((char *)v1 + 0x128);
    f0 = *(f32 *)((char *)v1 + 0x2B8);

after_load:
    f32 sum = f0 + f3;
    f32 div1 = sum / f2;
    f32 div2 = f2 / sum;
    f4 = (div1 < div2) ? div2 : div1;

    if (f6 < f4) {
        s32 cond = (f2 > 0.0f) ? 1 : -1;
        if (cond > 0) {
            f3 = (sum < f2) ? f2 : sum;
            f0 = f6 * ((sum < f2) ? sum : f2);
            cond = (sum < f2);
        } else {
            f3 = (sum < f2) ? sum : f2;
            f0 = f6 * ((sum < f2) ? f2 : sum);
            cond = (f2 < sum);
        }
        f5 = f3 - f0;
        if (cond) f5 = -f5;
    }

    return f5 * 0.5f;
}
