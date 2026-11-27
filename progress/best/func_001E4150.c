extern void func_001E4CC8(void *);
extern void func_001E5DE8(void *, s32);
extern void func_001EB7A8(void *, u32, s32, void *);

void func_001E4150(char *arg0, s32 *arg1) {
    char sp[0x20];
    s32 magic = 0xB6DB6DB7;
    u32 begin = *(u32 *)arg0, end = *(u32 *)(arg0 + 4);
    s32 temp_20 = *arg1;
    s32 count = (s32)((end - begin) * magic) >> 2;
    u32 temp_16, var_16, p;
    s32 temp_19, count2;

    if (temp_20 >= count) goto end_label;
    temp_16 = (temp_20 + 0x400) & -0x400;
    func_001E4CC8(sp);
    count2 = (s32)((end - begin) * magic) >> 2;
    if (temp_16 < (u32)count2) {
        var_16 = temp_16 * 0x1C + begin;
        temp_19 = end - var_16;
        if (var_16 < end) {
            for (p = var_16; p < end; p += 0x1C) func_001E5DE8((void *)p, 2);
        }
        *(u32 *)(arg0 + 4) = end - temp_19;
    } else {
        func_001EB7A8(arg0, end - begin, temp_16 - count2, sp);
    }
    func_001E5DE8(sp, 2);
end_label:
    *(u32 *)(begin + temp_20 * 0x1C) = (u32)temp_20;
}
