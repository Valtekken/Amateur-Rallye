/* identical to func_003A6178 (matched), with its names changed by decompdecomp */
typedef struct { u32 a, b; } Item;

s32 func_003A8640(register s32 arg0) {
    register Item *p = (Item *)func_003AF2C0(arg0);
    return (s32)(p - (Item *)func_003AF288(arg0));
}
