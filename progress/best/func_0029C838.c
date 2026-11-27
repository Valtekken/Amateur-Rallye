extern void func_002063A0(s32, void *);
extern s32 func_00206588(s32);
extern void func_002068C0(s32, s32, s32 *, s32 *);
extern void D_002AD390(s32);

void func_0029C838(void *arg0, s32 arg1, s32 *arg2, s32 arg3)
{
    s32 sp10 = 0, sp14 = 0;
    s32 unk30;
    f32 buf[3];
    s32 mode = *(s32 *)((char *)arg0 + 0x2C);

    buf[2] = 0.0f;

    switch (mode)
    {
    case 0:
        unk30 = *(s32 *)((char *)arg0 + 0x30);
        if (arg3)
        {
            buf[0] = 2.0f;
            buf[1] = (f32)(unk30 - 2);
        }
        else
        {
            buf[0] = 0.0f;
            buf[1] = (f32)unk30;
        }
        func_002063A0(arg1, buf);
        break;

    case 1:
        if (func_00206588(arg1))
            func_002068C0(func_00206588(arg1), *arg2, &sp10, &sp14);
        unk30 = *(s32 *)((char *)arg0 + 0x30);
        if (arg3)
        {
            buf[0] = (f32)(2 - sp10 / 2);
            buf[1] = (f32)(unk30 - 2);
        }
        else
        {
            buf[0] = (f32)((-sp10) / 2);
            buf[1] = (f32)unk30;
        }
        func_002063A0(arg1, buf);
        break;

    case 2:
        if (func_00206588(arg1))
            func_002068C0(func_00206588(arg1), *arg2, &sp10, &sp14);
        unk30 = *(s32 *)((char *)arg0 + 0x30);
        if (arg3)
        {
            buf[0] = (f32)(2 - sp10);
            buf[1] = (f32)(unk30 - 2);
        }
        else
        {
            buf[0] = (f32)(-sp10);
            buf[1] = (f32)unk30;
        }
        func_002063A0(arg1, buf);
        break;
    }

    D_002AD390(*arg2);
}
