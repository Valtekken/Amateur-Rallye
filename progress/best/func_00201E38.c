extern s32 func_00202000(void *, s32);
extern s32 func_00202050(void *, s32);
extern void func_002020A0(void *, s32, void *);
extern void func_00202120(void *, s32, void *);
extern void func_002021A0(void *, void *, s32 *, s32);
extern void func_002023B8(void *, s32);
extern void func_00202E70(void *, void *, void *);
extern void func_002030F8(void *, void *, f32);
extern f32 D_004783E8;

void func_00201E38(void *arg0, s32 arg1)
{
    f32 sp0;
    s32 sp4;
    f32 temp_f20;
    s32 var_18;

    var_18 = 0;
    if (*(f32 *)(*(char **)((char *)arg0 + 0x24) + (arg1 * 4)) >= -0.0001f)
    {
        var_18 = 1;
        func_00202120(arg0, arg1, (char *)arg0 + 0x70);
    }

    if (var_18 == 0)
    {
        temp_f20 = D_004783E8;
        do
        {
            func_002023B8(arg0, arg1);
            func_00202E70((char *)arg0 + 0xC, (char *)arg0 + 0x30, (char *)arg0 + 0x3C);
            sp0 = temp_f20;
            sp4 = -1;
            func_002021A0(arg0, &sp0, &sp4, arg1);
            if ((sp4 != arg1) && (fabsf(sp0) < 0.0001f))
            {
                var_18 = 1;
                func_00202120(arg0, arg1, (char *)arg0 + 0x70);
            }
            else
            {
                func_002030F8(arg0, (char *)arg0 + 0x30, sp0);
                func_002030F8((char *)arg0 + 0x24, (char *)arg0 + 0x3C, sp0);
                if (func_00202000(arg0, sp4) != 0)
                {
                    func_002020A0(arg0, sp4, (char *)arg0 + 0x6C);
                    func_00202120(arg0, sp4, (char *)arg0 + 0x70);
                }
                else if (func_00202050(arg0, sp4) != 0)
                {
                    func_002020A0(arg0, sp4, (char *)arg0 + 0x70);
                    func_00202120(arg0, sp4, (char *)arg0 + 0x6C);
                }
                else
                {
                    var_18 = 1;
                    func_00202120(arg0, sp4, (char *)arg0 + 0x6C);
                }
            }
        } while (var_18 == 0);
    }
}
