typedef struct { s32 v[4]; } S16E;
typedef struct { u8 *start; u8 *end; } RangeE;
extern void func_001E3990(void);
extern s32 func_001E4150(void *, void *);
extern void func_001E4CC8(void *);
extern void func_001E5DE8(void *, s32);
extern void func_001E5E10(s32, void *);
extern void func_001EB7A8(void *, void *, u32, void *);
#define CNT3B(r) ((s32)((u32)((r)->end - (r)->start) * 0xB6DB6DB7u) >> 2)

void func_001E3B20(RangeE *arg0, RangeE *arg1) {
    S16E sp;
    s32 n1, n2, rem, bytes;
    u8 *p, *start, *end;
    func_001E3990();
    start = arg0->start;
    end = arg0->end;
    bytes = (s32)(end - start);
    for (p = start; (u32)p < (u32)end; p += 0x1C) func_001E5DE8(p, 2);
    arg0->end = end - bytes;
    n1 = CNT3B(arg1);
    func_001E4CC8(&sp);
    n2 = CNT3B(arg0);
    if ((u32)n1 < (u32)n2) {
        p = arg0->start + n1 * 0x1C;
        rem = (s32)(arg0->end - p);
        end = arg0->end;
        for (; (u32)p < (u32)end; p += 0x1C) func_001E5DE8(p, 2);
        arg0->end = end - rem;
    } else {
        func_001EB7A8(arg0, arg0->end, n1 - n2, &sp);
    }
    func_001E5DE8(&sp, 2);
    for (p = arg1->start; (u32)p != (u32)arg1->end; p += 0x1C) {
        if ((*(s32 *)(p + 8) ^ 0xC) != 0) func_001E5E10(func_001E4150(arg0, p), p);
    }
}
