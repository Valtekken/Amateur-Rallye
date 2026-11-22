s32 func_00194E30(s32 arg1, u32 arg2, s32 arg3) {
    s32 var_8;
    switch (arg2) {
        case 0:
            if (arg1 != 1) {
                if (arg1 < 2) {
                    if (arg1 != 0) {
                        return -1;
                    }
                    var_8 = arg3 + 1;
                } else {
                    if (arg1 != 2) {
                        return -1;
                    }
                    var_8 = arg3 + 0x29;
                }
            } else {
                var_8 = arg3 + 0x15;
            }
            break;
        case 1:
            if (arg1 != 1) {
                if (arg1 < 2) {
                    if (arg1 != 0) {
                        return -1;
                    }
                    var_8 = arg3 + 5;
                } else {
                    if (arg1 != 2) {
                        return -1;
                    }
                    var_8 = arg3 + 0x2D;
                }
            } else {
                var_8 = arg3 + 0x19;
            }
            break;
        case 2:
            if (arg1 != 1) {
                if (arg1 < 2) {
                    if (arg1 != 0) {
                        return -1;
                    }
                    var_8 = arg3 + 9;
                } else {
                    if (arg1 != 2) {
                        return -1;
                    }
                    var_8 = arg3 + 0x31;
                }
            } else {
                var_8 = arg3 + 0x1D;
            }
            break;
        case 3:
            if (arg1 != 1) {
                if (arg1 < 2) {
                    if (arg1 != 0) {
                        return -1;
                    }
                    var_8 = arg3 + 0xD;
                } else {
                    if (arg1 != 2) {
                        return -1;
                    }
                    var_8 = arg3 + 0x35;
                }
            } else {
                var_8 = arg3 + 0x21;
            }
            break;
        case 4:
            if (arg1 != 1) {
                if (arg1 < 2) {
                    if (arg1 != 0) {
                        return -1;
                    }
                    var_8 = arg3 + 0x11;
                } else {
                    if (arg1 != 2) {
                        return -1;
                    }
                    var_8 = arg3 + 0x39;
                }
            } else {
                var_8 = arg3 + 0x25;
            }
            break;
        case 5:
            var_8 = arg3 + 0x6A;
            break;
    }
    return var_8;
}
