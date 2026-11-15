extern void func_003A4AB8(s32, s32);
void func_0039DFA0(s32 arg0, s32 arg1, s32 arg2) {
    while (arg0 != arg1) {
        func_003A4AB8(arg0, arg2);
        arg0 += 0xC;
    }
}

extern s32 func_0039DBC8(s32, s32);
void func_0039E018(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    s32 end = arg1;
    s32 cur = arg0;
    s32 src = arg2;
    while (end != 0) {
        func_0039DBC8(src, cur);
        end--;
        cur += 0xC;
        src += 0xC;
    }
}

extern s32 func_003A3EB0(s32);
s32 func_0039E1B8(s32 arg0) {
    if (arg0 != 0) {
        return func_003A3EB0(arg0 * 12);
    }
    return 0;
}

typedef struct { s32 *begin, *end, *cap; } V;
extern s32 func_003AA1C0(V *);
s32 func_0039E598(V *v) {
    s32 cap = (s32)func_003AA1C0(v);
    s32 val = *(s32 *)((char *)v + 8);
    return (val - cap) * 0xAAAAAAAB >> 2;
}
