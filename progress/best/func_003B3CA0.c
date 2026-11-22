void func_003B3CA0(s32 arg0, u32 arg1, s32 arg2) {
    register s32 s2 = arg0;
    register u32 s1 = arg1;
    register s32 s0 = arg2;
    register s32 s3;
    register u32 v0;
    register s32 v1;

    v0 = func_003A3948(s2);
    if (s1 < v0) {
        s3 = func_003B3C30(s2) + (s1 * 8);
        v1 = func_003B4260(s2);
        func_003B4298(s2, s3, v1);
    } else {
        s3 = func_003B4260(s2);
        v0 = func_003A3948(s2);
        v1 = s1 - v0;
        func_001D9628(s2, s3, v1, s0);
    }
}
