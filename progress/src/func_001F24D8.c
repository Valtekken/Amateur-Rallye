typedef struct {
    s32 begin;
    s32 end;
} S_func_001F2480_arg0;

extern s32 func_001F2398(s32, s32);

s32 func_001F24D8(S_func_001F2480_arg0 *arg0, s32 arg1) {
    if (arg1 < 0)
        return 0;
    
    s32 begin = arg0->begin;
    s32 end = arg0->end;
    s32 diff = end - begin;
    s32 count = (s32)((s32)(diff * (s32)0xBA2E8BA3) >> 3);
    
    if ((u32)arg1 < (u32)count)
        return func_001F2398(begin + arg1 * 0x58, arg1);
    return 0;
}
