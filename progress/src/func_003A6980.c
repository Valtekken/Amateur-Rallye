/* identical to func_003A6178 (matched), with its names changed by decompdecomp */
typedef struct { u32 a, b; } Item;

s32 func_003A6980(register s32 arg0) {
    register Item *p = (Item *)func_003AD820(arg0);
    return (s32)(p - (Item *)func_003AD7E8(arg0));
}
