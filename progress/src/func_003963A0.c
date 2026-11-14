extern void func_003A6370(s32, s32);

s32 func_00398830(register s32 arg0, register s32 arg1, register s32 arg2, register s32 arg3, register s32 arg4) {
    register s32 n = (arg1 - arg0) >> 3;
    while (n > 0) {
        func_003A6370(arg2, arg0);
        arg0 += 8;
        arg2 += 8;
        n--;
    }
    return arg2;
}

extern s32 func_003A35D0(void *);
extern void func_00396310(s32, s32);

typedef struct { s8 value; } Tag;
s32 func_003963A0(s32 arg0, s32 arg1, s32 arg2, Tag arg3) {
    s32 sp10 = arg0;
    while (arg1) {
        func_00396310(func_003A35D0(sp10), arg2);
        arg1--;
        sp10 += 4;
    }
    return sp10;
}
