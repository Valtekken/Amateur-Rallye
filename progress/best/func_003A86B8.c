extern s32 func_003A0BD8(register s32 arg0, register s32 arg1);
extern void func_00219DA8(register s32 arg0, register s32 arg1);
extern s32 func_003A80D0(s32);
extern s32 func_003A8118(s32);
extern void func_003AEF40(s32, s32, s32);
extern s32 func_003AF070(s32);
extern s32 func_003AEFD0(s32);
extern s32 func_002AFEB8(s32, s32);
extern s32 func_003A51C8(s32, s32);
extern s32 func_0033F628(void *, s32, s32);
extern s32 func_003AF288(s32);

s32 func_003A8230(register s32 arg0) {
    register s32 s1 = arg0;
    register s32 end = func_003AF070(s1);
    register s32 begin = func_003AEFD0(s1);
    register s32 diff = end - begin;
    return (s32)((diff * 0xAAAAAAABLL) >> 4);
}

void func_003A8528(register s32 arg0, register s32 arg1) {
    register s32 s0 = arg0;
    register s32 s1 = arg1;
    register s32 p = func_002AFEB8(0x30, s0);
    if (p != 0) {
        func_003A51C8(p, s1);
    }
}

void func_003A85A8(register void *arg0, register s32 arg1) {
    typedef struct { s32 *begin, *end, *cap; } V;
    V *vec = (V *)arg0;
    if (vec->end != vec->cap) {
        func_003A8528((s32)vec->end, arg1);
        vec->end = (s32 *)((char *)vec->end + 0x30);
    } else {
        func_0033F628(vec, (s32)func_003A8118(arg0), arg1);
    }
}

s32 func_003A86B8(register s32 arg0, register s32 arg1) {
    return func_003AF288(arg0) + (arg1 << 3);
}
