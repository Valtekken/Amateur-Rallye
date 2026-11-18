extern void func_003F3E80(void *, f32);

void func_00204588(void *arg0, void *arg1) {
    f32 *p = *(f32 **)arg1;
    f32 *end = *(f32 **)((char *)arg1 + 4);
    f32 acc = 0.0f;
    f32 last = 0.0f;
    s32 n = (end - p);
    if (n > 0) {
        do {
            f32 x = *p++;
            last = x * x;
            acc += last;
            n--;
        } while (n != 0);
    }
    if (last != last) {
        func_003F3E80(arg0, acc);
    }
}
