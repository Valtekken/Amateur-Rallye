extern void func_003F93CC(void *, void *, s32);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void *func_00152D28(s32);
extern void func_002B2028(void *);
extern u32 D_0040E618[];

void func_002D9828(void *arg0, u16 *arg1, u16 *arg2) {
    void *unk0 = *(void **)((char *)arg0 + 0);
    void *unk4 = *(void **)((char *)arg0 + 4);
    void *unk8 = *(void **)((char *)arg0 + 8);

    if (unk4 != unk8) {
        if (unk4 != 0) {
            *(u16 *)unk4 = *(u16 *)((char *)unk4 - 2);
        }
        void *t4 = unk4;
        *(void **)((char *)arg0 + 4) = (void *)((char *)t4 + 2);
        s32 diff = (s32)((char *)t4 - 2 - (char *)arg1);
        diff = (diff >> 1) << 1;
        u16 saved = *arg2;
        func_003F93CC((void *)((char *)t4 - diff), arg1, diff);
        *arg1 = saved;
        return;
    }

    s32 d = (s32)((char *)unk4 - (char *)unk0);
    d = d >> 1;
    s32 t3 = d << 1;
    s32 factor = (d != 0) ? t3 : 1;
    void *var17;
    s32 var20;
    if (factor == 0) {
        var17 = 0;
        var20 = 0;
    } else {
        var20 = factor << 1;
        if (var20 != 0) {
            var17 = func_002B1FC0(var20);
            if (var17 == 0) {
                var17 = func_003D2910(var20);
            }
        } else {
            if (D_0040E618[-1] != 0) {
                var17 = (void *)D_0040E618[-1];
                D_0040E618[-1] = *(u32 *)D_0040E618[-1];
            } else {
                var17 = func_00152D28(0);
            }
        }
    }

    void *p5 = unk0;
    s32 diff2 = (s32)((char *)arg1 - (char *)p5);
    u16 *temp16_2 = (u16 *)((char *)var17 + diff2);
    func_003F93CC(var17, p5, (diff2 >> 1) << 1);
    if (temp16_2 != 0) {
        *temp16_2 = *arg2;
    }
    u16 *temp16_3 = temp16_2 + 1;
    void *t6 = unk4;
    s32 diff3 = (s32)((char *)t6 - (char *)arg1);
    u16 *end = (u16 *)((char *)temp16_3 + diff3);
    func_003F93CC(temp16_3, arg1, (diff3 >> 1) << 1);

    void *old0 = unk0;
    void *old8 = unk8;
    s32 cnt = (s32)((char *)old8 - (char *)old0) >> 1;
    if (cnt != 0) {
        s32 bytes = cnt << 1;
        if (bytes != 0) {
            func_002B2028(old0);
        } else {
            *(u32 *)old0 = D_0040E618[-1];
            D_0040E618[-1] = (u32)old0;
        }
    }

    *(void **)((char *)arg0 + 4) = end;
    *(void **)((char *)arg0 + 8) = (void *)((char *)var17 + var20);
    *(void **)((char *)arg0 + 0) = var17;
}
