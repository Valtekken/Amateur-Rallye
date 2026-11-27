extern void func_001E2460(void *, s32);
extern void func_001E2470(void *, void *, void *);
extern s32 func_001E25B0(void *, void *, void *);
extern void func_001E28F8(void *, void *, void *);
extern void func_001E2998(void *, void *, void *);
extern void func_001E2A48(void *, void *, void *);
extern s32 func_001D4010(s32, s32);
extern s32 func_001E4280(void);
extern s32 func_001E3700(s32, s32);
extern void func_00296640(s32, void *, void *);
extern s32 func_00296710(void);
extern void func_00298FF0(void *, s32);
extern void func_00299050(void *, s32, s32);
extern void func_002990C0(void *, s32);
extern void func_002991D0(void *, void *);
extern void func_00299938(void *, void *);

extern char D_0047BC08[];
extern char D_0047BC10[];
extern char D_0047BC18[];
extern char D_0047BC28[];
extern char D_0047BC38[];
extern char D_0047BC48[];
extern char D_0047BC50[];
extern char D_0047BC70[];
extern char D_0047BC88[];
extern char D_0047BC98[];
extern char D_0047BCA8[];
extern char D_0047BCB0[];

void func_00298CA8(u8 *arg0, u8 *arg1, s32 arg2)
{
    f32 color[4];
    f32 out[4];
    u32 sp20;
    s32 sp24;
    s32 sp28;
    u8 *temp_19;
    u8 *temp_21;
    u8 *temp_20;

    if (arg1 == NULL) {
        return;
    }
    temp_19 = *(u8 **)(arg1 + 0x4C);
    if (temp_19 == NULL) {
        return;
    }
    temp_20 = arg0 + 0x5C;
    temp_21 = arg0 + 0x58;

    func_001E2460(&sp20, arg2);

    sp24 = 0;
    sp28 = 0;
    color[0] = 0.0f;
    color[1] = 1.0f;
    color[2] = 0.0f;
    color[3] = 1.0f;

    func_001E25B0(&sp20, D_0047BC08, arg0 + 0xC);
    func_001E28F8(&sp20, D_0047BC10, temp_21);
    func_001E25B0(&sp20, D_0047BC18, arg0 + 0x50);
    func_001E25B0(&sp20, D_0047BC28, arg0 + 0x54);
    func_001E28F8(&sp20, D_0047BC38, temp_20);
    func_001E2A48(&sp20, D_0047BC48, arg0 + 0x10);
    func_001E25B0(&sp20, D_0047BC50, &sp24);
    *(s32 *)(arg0 + 0x1C) = sp24;
    func_001E25B0(&sp20, D_0047BC70, &sp28);
    *(s32 *)(arg0 + 0x20) = sp28;
    func_001E25B0(&sp20, D_0047BC88, arg0 + 0x24);
    func_001E25B0(&sp20, D_0047BC98, arg0 + 0x28);
    func_001E2998(&sp20, D_0047BCA8, color);
    func_001E2470(&sp20, D_0047BCB0, arg0 + 0x60);

    {
        s32 temp_4 = func_00296710();
        out[0] = color[0];
        out[1] = color[1];
        out[2] = color[2];
        out[3] = color[3];
        func_00296640(temp_4, arg1, out);
    }

    {
        f32 *temp_2 = (f32 *)(temp_19 + 0x50);
        f32 *temp_3 = (f32 *)(arg0 + 0x2C);
        temp_3[0] = temp_2[0];
        temp_3[1] = temp_2[1];
        temp_3[2] = temp_2[2];
    }

    if (*(s32 *)(arg0 + 0x58) != 0) {
        s32 temp_4 = func_001E4280();
        s32 temp_5 = func_001E3700(temp_4, (s32)temp_21);
        func_002990C0(arg0, func_001D4010(temp_5, (s32)temp_21));
    } else {
        s32 temp_5 = *(s32 *)(arg0 + 0x50);
        if (temp_5 != 0) {
            s32 temp_6 = *(s32 *)(arg0 + 0x54);
            if (temp_6 != 0) {
                func_00299050(arg0, temp_5, temp_6);
            } else {
                func_00298FF0(arg0, temp_5);
            }
        } else {
            func_002990C0(arg0, func_001D4010((s32)temp_20, temp_5));
        }
    }

    func_002991D0(arg0, arg1);
    func_00299938(arg0, arg1);
    *(s32 *)(arg0 + 0x44) = 1;
}
