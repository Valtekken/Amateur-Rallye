typedef struct { u8 pad[0x2C]; s32 *begin; s32 end; } S16;
s32 func_0016F040(S16 *arg0, s32 arg1) {
    s32 end = arg0->end;
    s32 *p = arg0->begin;
    s32 n = (end - (s32)p) >> 2;
    s32 i = 0;
    if (n > 0) { do { if (*p == arg1) return 1; i++; p++; } while (i < n); }
    return 0;
}
