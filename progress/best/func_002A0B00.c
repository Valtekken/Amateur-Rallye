extern void *func_001E37E8(s32, s32);
extern s32 func_001D4810(void *, s32, s32 *, u32, s32);
extern void func_00262F88(void *, void *);
extern void func_001525D8(f32 *, f32 *, f32);
/* func_001E4280, func_001E3650 from context.h */

typedef struct { s32 *begin; s32 *end; s32 *cap; } IVec;

void func_002A0B00(void *arg0, void *arg1)
{
    char *o0 = (char *)arg0;
    char *o1 = (char *)arg1;
    char *t17 = *(char **)(o1 + 0x50);

    if (t17 != NULL)
    {
        IVec *temp_2;
        s32 count;
        u32 t2_2, t3, t7;
        s32 *elem;
        s32 spbuf[1];
        f32 mtx[16];
        f32 s50, s54, s58;
        int i;

        *(s32 *)(t17 + 0x60) = 1;

        temp_2 = (IVec *)func_001E37E8(func_001E4280(), (s32)(o0 + 0x10));
        if (temp_2 != NULL && ((((u32)temp_2->end - (u32)temp_2->begin) >> 2) != 0))
        {
            t2_2 = (u32)func_001E3650(func_001E4280(), (s32)(o0 + 0xC));
            count = (s32)(((u32)temp_2->end - (u32)temp_2->begin) >> 2);

            t3 = (t2_2 < (u32)count) ? t2_2 : (u32)(count - 1);
            t7 = ((s32)t3 > -1) ? t3 : 0;

            elem = temp_2->begin + t7;
            spbuf[0] = 0;
            func_001D4810(spbuf, *elem, elem, t7, 0);
            func_00262F88(t17, spbuf);

            /* build identity matrix */
            for (i = 0; i < 16; i++) mtx[i] = 0.0f;
            mtx[0] = 1.0f; mtx[5] = 1.0f; mtx[10] = 1.0f; mtx[15] = 1.0f;

            func_001525D8(mtx, mtx, *(f32 *)(o0 + 0x14));

            /* preserve temp_17->unk50..58 then copy 4x4 to +0x20 */
            s50 = *(f32 *)(t17 + 0x50);
            s54 = *(f32 *)(t17 + 0x54);
            s58 = *(f32 *)(t17 + 0x58);
            mtx[12] = s50; mtx[13] = s54; mtx[14] = s58;

            ((f32 *)(t17 + 0x20))[0]  = mtx[0];
            ((f32 *)(t17 + 0x20))[1]  = mtx[1];
            ((f32 *)(t17 + 0x20))[2]  = mtx[2];
            ((f32 *)(t17 + 0x20))[3]  = mtx[3];
            ((f32 *)(t17 + 0x30))[0]  = mtx[4];
            ((f32 *)(t17 + 0x30))[1]  = mtx[5];
            ((f32 *)(t17 + 0x30))[2]  = mtx[6];
            ((f32 *)(t17 + 0x30))[3]  = mtx[7];
            ((f32 *)(t17 + 0x40))[0]  = mtx[8];
            ((f32 *)(t17 + 0x40))[1]  = mtx[9];
            ((f32 *)(t17 + 0x40))[2]  = mtx[10];
            ((f32 *)(t17 + 0x40))[3]  = mtx[11];
            *(f32 *)(t17 + 0x50) = mtx[12];
            *(f32 *)(t17 + 0x54) = mtx[13];
            *(f32 *)(t17 + 0x58) = mtx[14];
            *(f32 *)(t17 + 0x5C) = mtx[15];
        }
    }
}
