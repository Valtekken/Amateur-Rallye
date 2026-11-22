/* identical to func_003A10A0 (matched), with its names changed by decompdecomp */
typedef struct {s32 *begin, *end, *cap;} VecP;
extern s32* func_003A40D0(VecP*, u32);
extern s32 func_003A41B8(s32*, s32*, s32*);
s32* func_003AC308(register VecP* a, register u32 n, register s32* b, register s32* c) {
    s32* p = func_003A40D0(a, n);
    func_003A41B8(b, c, p);
    return p;
}
