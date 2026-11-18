s32 func_00234D50(s32 *arg0, s32 *arg1) {
    s32 a0 = arg0[6];
    s32 b0 = arg1[6];

    if (a0 == b0) {
        return b0;
    } else {
        s32 b1 = arg1[7];
        if (a0 == b1) {
            return b1;
        } else {
            s32 a1 = arg0[7];
            s32 ret = a1;
            if (a1 == b0) {
                return ret;
            } else {
                s32 xorv = a1 ^ b1;
                ret = 0;
                if (xorv == 0) {
                    ret = a1;
                }
                return ret;
            }
        }
    }
}
