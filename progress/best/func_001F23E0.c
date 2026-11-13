s32 func_001F21A0(s32, s32);

typedef struct { s32 start; s32 end; } Range;

s32 func_001F23E0(Range *arg0, s32 arg1, s32 *arg2) {
    s32 cur = arg0->start;
    s32 magic = 0xBA2E8BA3;

    while (cur != arg0->end) {
        if (func_001F21A0(cur, arg1)) {
            *arg2 = ((cur - arg0->start) * magic) >> 3;
            return 1;
        }
        cur += 0x58;
    }
    return 0;
}
