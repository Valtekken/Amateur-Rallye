extern void func_00344EC8(void *, void *, void *, void *, void *, void *, void *, void *, s32, s32);

#define CPY4(d, s) do { \
    (d)[0] = (s)[0]; (d)[1] = (s)[1]; (d)[2] = (s)[2]; (d)[3] = (s)[3]; } while (0)

void func_00342D38(u8 *arg0, u8 *arg1)
{
    f32 sp[4];

    CPY4((f32 *)(arg0 + 0x80), (f32 *)(arg1 + 0x50));
    CPY4((f32 *)(arg0 + 0x90), (f32 *)(arg1 + 0x60));
    CPY4((f32 *)(arg0 + 0xA0), (f32 *)(arg1 + 0x70));
    CPY4((f32 *)(arg0 + 0xB0), (f32 *)(arg1 + 0x80));
    CPY4((f32 *)(arg0 + 0xC0), (f32 *)(arg1 + 0x90));
    CPY4((f32 *)(arg0 + 0xD0), (f32 *)(arg1 + 0xA0));
    CPY4((f32 *)(arg0 + 0xE0), (f32 *)(arg1 + 0xB0));
    CPY4((f32 *)(arg0 + 0xF0), (f32 *)(arg1 + 0xC0));

    sp[0] = 0.0f;
    sp[1] = 0.0f;
    sp[2] = *(f32 *)(arg1 + 0x0);
    sp[3] = 1.0f;

    func_00344EC8(arg0 + 0x80, sp, sp, arg0 + 0x90, arg1 + 0x60, arg1 + 0x70, arg0 + 0xA0, arg1 + 0x80, 0, 0);

    *(f32 *)(arg0 + 0x118) = *(f32 *)(arg1 + 0x8);
    *(f32 *)(arg0 + 0x114) = sp[2];
    *(f32 *)(arg0 + 0x11C) = *(f32 *)(arg1 + 0xC);
}
