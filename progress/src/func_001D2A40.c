extern s32 D_002AD530(s32);
extern s32 D_002AD5A8(s32);
extern s32 func_003F931C(s32, s32, s32);
extern s32 func_003FA9B8(s32);

void func_001D2A40(s32 *arg0, s32 arg1, s32 arg2) {
    s32 p = *arg0;
    if (p != 0) {
        s32 len = func_003FA9B8(p);
        s32 n, newlen, buf;
        if (len < arg2) arg2 = len;
        if (arg1 <= -1) arg1 = 0;
        if (arg1 != arg2) {
            s32 q;
            n = len - arg2;
            newlen = arg1 + n;
            buf = D_002AD5A8(newlen + 1);
            func_003F931C(buf, *arg0, arg1);
            func_003F931C(buf + arg1, *arg0 + arg2, n);
            q = *arg0;
            *(u8 *)(buf + newlen) = 0;
            if (q != 0) D_002AD530(q);
            *arg0 = buf;
        }
    }
}
