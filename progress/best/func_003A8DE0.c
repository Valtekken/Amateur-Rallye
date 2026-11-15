typedef struct {
    s32 dummy;
    s32 *end;
    s32 *cap;
} V;

extern void func_003A8D70(s32, s32);
extern s32 func_003A5A10(s32);
extern void func_0039BC70(s32, s32, s32);

void func_003A8DE0(register V *a, register s32 b) {
    register s32 *end = a->end;
    register s32 *cap = a->cap;

    if (end != cap) {
        func_003A8D70((s32)end, b);
        a->end = (s32 *)((u32)end + 8);
    } else {
        func_0039BC70((s32)a, func_003A5A10((s32)a), b);
    }
}
