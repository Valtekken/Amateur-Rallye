extern void func_001C8B70(void *, s32, s32, u64);

void func_001C8C10(void *arg0, s32 arg1, s32 arg2, u64 arg3) {
    u64 tmp = arg3;
    u64 *a = (u64 *)arg0;
    s32 i = arg1;
    s32 j = i;
    s32 k = j * 2 + 2;
    if (k < arg2) {
        do {
            s32 dec = 1;
            if (!(((f32 *)&a[k])[-1] < ((f32 *)&a[k])[0])) dec = 0;
            j = k - dec;
            a[j] = a[k];
            k = (j + 1) * 2;
        } while (k < arg2);
    }
    if (k == arg2) {
        a[k] = a[k - 1];
        j = k - 1;
    }
    func_001C8B70(arg0, j, arg1, tmp);
}
