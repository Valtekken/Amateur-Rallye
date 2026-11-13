typedef struct { void **begin; void **end; } VecP27380;

extern void *func_00227868(VecP27380 *, s32);
extern s32 func_00229A48(void *, void *);
extern s32 func_00229AD8(void *, void *);
extern void func_00227610(VecP27380 *, void *, s32, void *, void *);
extern s32 func_002274D0(VecP27380 *, void *, void *, s32 *);
extern void func_00227558(VecP27380 *, void *, void *, void *, void *);
extern void func_00227AB8(VecP27380 *, void *, void *, void *);

void func_00227380(VecP27380 *arg0, void *arg1, void *arg2, void *arg3) {
    s32 i;
    s32 count;
    s32 sp0;
    void *elem;

    count = (s32)((u32)arg0->end - (u32)arg0->begin) >> 2;
    for (i = 0; i < count; i++) {
        elem = func_00227868(arg0, i);
        if (func_00229A48(elem, arg1) == 1) {
            if (func_00229AD8(elem, arg1) != 0) {
                func_00227610(arg0, elem, -1, arg2, arg3);
            } else {
                func_00227610(arg0, elem, 1, arg2, arg3);
            }
        } else if (func_002274D0(arg0, arg1, elem, &sp0) != 0) {
            func_00227558(arg0, arg1, elem, arg2, arg3);
        } else {
            func_00227610(arg0, elem, sp0, arg2, arg3);
        }
    }
    func_00227AB8(arg0, arg1, arg2, arg3);
}
