typedef struct { u32 d[4]; } S16;
extern void func_00214400(void *, void *);
extern void func_002142F0(void *, s32, s32, void *);
extern void func_002144A8(void *, void *);

void func_00214580(void *arg0, void *arg1, void *arg2) {
    void *base;
    void *p;
    s32 len;
    S16 tmp;
    f32 key;
    s32 swap;

    func_00214400(arg0, arg1);
    if ((u32)arg1 < (u32)arg2) {
        p = arg1;
        base = arg0;
        len = (s32)((u8 *)arg1 - (u8 *)arg0);
        key = *(f32 *)arg1;
        do {
            swap = (key < *(f32 *)base);
            if (swap) {
                tmp = *(S16 *)p;
                *(S16 *)p = *(S16 *)base;
                func_002142F0(base, 0, len >> 4, &tmp);
            }
            p = (u8 *)p + 0x10;
            key = *(f32 *)p;
        } while ((u32)p < (u32)arg2);
    }
    func_002144A8(arg0, arg1);
}
