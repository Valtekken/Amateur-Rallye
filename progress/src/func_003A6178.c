typedef struct { u32 a, b; } Item;

s32 func_003A6178(register s32 arg0) {
    register Item *p = (Item *)func_003AD3E0(arg0);
    return (s32)(p - (Item *)func_003AD3A8(arg0));
}
