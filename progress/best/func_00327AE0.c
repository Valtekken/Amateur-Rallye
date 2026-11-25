extern u32 D_0042DB58[3];
extern u32 D_0042DB64;
extern u32 D_0040E618[16];
extern void func_002B2028(u32);
extern s32 func_003F93CC(void *, void *, s32);

void func_00327AE0(void) {
    volatile char pad[0x20];
    u32 *vec = D_0042DB58;
    u32 begin = vec[0];
    u32 end = vec[1];
    u32 cap = vec[2];

    func_003F93CC((void *)begin, (void *)end, 0);

    u32 end2 = vec[1];
    u32 diff = end2 - begin;
    u32 begin2 = end2 - diff;
    u32 begin3 = vec[0];

    D_0042DB64 = -1;
    vec[0] = 0;
    vec[2] = 0;
    vec[1] = 0;

    s32 count = (s32)(cap - begin) >> 2;
    if (count != 0) {
        u32 bytes = count * 4;
        if (bytes != 0) {
            func_002B2028(begin);
            return;
        }
        u32 *free_head = (u32 *)((u8 *)&D_0040E618 - 4);
        u32 *begin_ptr = (u32 *)begin;
        *begin_ptr = *free_head;
        *free_head = begin;
    }
}
