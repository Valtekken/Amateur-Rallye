extern s32 func_001E4280(void);
extern void func_001D2458(void *, const char *);
extern void func_001D2900(void *, u32);
extern void func_001D4040(char *, const char *);
extern void func_001E33C8(s32, char *, s32);
extern void func_001E3D10(s32, char *, s32);
extern void func_001E3E90(s32, char *, f32);
extern void func_001E3EC0(s32, char *, s32);
extern void func_001E3F50(s32, char *, f32 *, void *, f32, f32, f32, f32);
extern void func_001E3FE0(s32, char *, void *);
extern void func_001E40D0(s32, char *, f32 *);
extern void func_00192130(void *, s32);
extern void D_002AD390(void *);

extern u8 D_0044E840[8];
extern f32 D_00426030[16];
extern f32 D_00425EF0[4];

void func_00191368(void *arg0, u32 *arg1, u32 arg2) {
    s32 i;
    char sp0[0x10];
    f32 sp10[4];
    f32 sp20[16];

    i = 0;
    do {
        func_00192130(arg0, i);
        func_001D2900((char *)arg0 + 0xC, *arg1);

        switch (arg2) {
        case 0: {
            s32 temp = func_001E4280();
            char *unkC = *(char **)((char *)arg0 + 0xC);
            func_001D4040(sp0, unkC);
            func_001E3D10(temp, sp0, 0);
            break;
        }
        case 1: {
            s32 temp = func_001E4280();
            char *unkC = *(char **)((char *)arg0 + 0xC);
            func_001D4040(sp0, unkC);
            func_001E3EC0(temp, sp0, 0);
            break;
        }
        case 2: {
            s32 temp = func_001E4280();
            char *unkC = *(char **)((char *)arg0 + 0xC);
            func_001D2458(sp0, unkC);
            func_001D2458((char *)sp10, (const char *)D_0044E840);
            func_001E3FE0(temp, sp0, (void *)sp10);
            D_002AD390((void *)*(u32 *)sp10);
            D_002AD390((void *)*(u32 *)sp0);
            break;
        }
        case 3: {
            s32 temp = func_001E4280();
            char *unkC = *(char **)((char *)arg0 + 0xC);
            func_001D4040(sp0, unkC);
            func_001E3E90(temp, sp0, 0.0f);
            break;
        }
        case 4: {
            s32 temp = func_001E4280();
            char *unkC = *(char **)((char *)arg0 + 0xC);
            func_001D4040(sp0, unkC);
            {
                f32 *p0 = D_00426030;
                f32 *p4 = &D_00426030[4];
                f32 *p8 = &D_00426030[8];
                f32 *p12 = &D_00426030[12];
                sp20[0] = p0[0]; sp20[1] = p0[1]; sp20[2] = p0[2]; sp20[3] = p0[3];
                sp20[4] = p4[0]; sp20[5] = p4[1]; sp20[6] = p4[2]; sp20[7] = p4[3];
                sp20[8] = p8[0]; sp20[9] = p8[1]; sp20[10] = p8[2]; sp20[11] = p8[3];
                sp20[12] = p12[0]; sp20[13] = p12[1]; sp20[14] = p12[2]; sp20[15] = p12[3];
                func_001E3F50(temp, sp0, sp20, p4, p4[3], p12[0], p8[3], p12[3]);
            }
            break;
        }
        case 5: {
            s32 temp = func_001E4280();
            char *unkC = *(char **)((char *)arg0 + 0xC);
            func_001D4040(sp0, unkC);
            sp10[0] = D_00425EF0[0];
            sp10[1] = D_00425EF0[1];
            sp10[2] = D_00425EF0[2];
            sp10[3] = D_00425EF0[3];
            func_001E40D0(temp, sp0, sp10);
            break;
        }
        }

        i++;
        {
            s32 temp = func_001E4280();
            char *unkC = *(char **)((char *)arg0 + 0xC);
            func_001D4040(sp0, unkC);
            func_001E33C8(temp, sp0, 0);
        }
    } while (i < 4);

    D_002AD390((void *)(u32)*arg1);
}
