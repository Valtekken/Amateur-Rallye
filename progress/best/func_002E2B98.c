extern void func_002E2C88(void);
extern void func_002B2028(void *);
extern void func_002013F8(void *, s32);
extern u32 D_0040E618[];
extern u32 D_00484110[];

void func_002E2B98(void *arg0, s32 arg1) {
    s32 *p = (s32 *)arg0;
    s32 *begin;
    s32 *end;
    s32 count;
    s32 saved_arg1;

    p[0] = (s32)D_00484110;
    func_002E2C88();
    saved_arg1 = arg1;

    // First array: unk1C (0x1C) to unk24 (0x24)
    begin = (s32 *)p[7];
    end = (s32 *)p[9];
    count = (s32)((u8 *)end - (u8 *)begin) >> 2;
    if (count != 0) {
        if ((count << 2) != 0) {
            func_002B2028(begin);
        } else {
            *begin = D_0040E618[-1];
            D_0040E618[-1] = (u32)begin;
        }
    }

    // Second array: unk10 (0x10) to unk18 (0x18) - load end first
    end = (s32 *)p[6];
    begin = (s32 *)p[4];
    count = (s32)((u8 *)end - (u8 *)begin) >> 2;
    if (count != 0) {
        if ((count << 2) != 0) {
            func_002B2028(begin);
        } else {
            *begin = D_0040E618[-1];
            D_0040E618[-1] = (u32)begin;
        }
    }

    func_002013F8(arg0, saved_arg1);
}
