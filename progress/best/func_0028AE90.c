extern s32 func_0021F4B0(void);
extern void *func_0021EA20(s32, f32 *, f32 *, s32);
extern void func_002A4C88(f32 *, f32 *, f32 *);
extern void func_002A4B70(f32 *, f32 *);

typedef struct ObjA {
    u8 pad[0xC];
    s32 unkC;
    f32 unk10;
    s32 unk14;
} ObjA;

typedef struct Inner {
    u8 pad[0x20];
    f32 m[16];
} Inner;

typedef struct ObjB {
    u8 pad[0x50];
    Inner *p;
} ObjB;

void func_0028AE90(ObjA *arg0, ObjB *arg1) {
    f32 S[40];
    void *obj;
    Inner *p;

    if (arg0->unkC == 0) {
        arg0->unkC = 1;
    }

    p = arg1->p;
    {
        f32 *pp = p->m + 12;
        S[0] = pp[0];
        S[1] = pp[1];
        S[2] = pp[2];
    }
    S[8] = S[0];
    S[10] = S[2];
    S[5] = S[1] + 2.0f;
    S[9] = S[1] - 1000.0f;
    S[4] = S[0];
    S[6] = S[2];

    obj = func_0021EA20(func_0021F4B0(), &S[4], &S[8], -1);

    {
        u8 *vt = *(u8 **)obj;
        s32 (*fn38)(u8 *) = *(s32 (**)(u8 *))(vt + 0x3C);

        if (fn38((u8 *)obj + *(s16 *)(vt + 0x38)) != 0) {
            if (arg0->unk14 == 1) {
                u8 *vt2 = *(u8 **)obj;
                void (*fn18)(u8 *, f32 *) = *(void (**)(u8 *, f32 *))(vt2 + 0x1C);
                f32 yy, zz, xx;
                f32 t2yy, t2zz, t2xx, t2zw, t2xw, t2zx, t2yw, t2zy, t2yx;
                f32 yyzz, xxyy, xxzz;
                f32 one;

                fn18((u8 *)obj + *(s16 *)(vt2 + 0x18), &S[12]);

                S[20] = 0.0f;
                S[21] = 1.0f;
                S[22] = 0.0f;
                func_002A4C88(&S[20], &S[12], &S[16]);
                func_002A4B70(&S[16], &S[16]);

                one = 1.0f;
                yy = S[17] + S[17];
                zz = S[18] + S[18];
                xx = S[16] + S[16];

                t2yy = yy * S[17];
                S[39] = one;
                t2zz = zz * S[18];
                S[27] = 0.0f;
                t2xx = xx * S[16];
                S[31] = 0.0f;
                t2zw = zz * S[19];
                S[35] = 0.0f;
                yyzz = t2yy + t2zz;
                S[36] = 0.0f;
                t2xw = xx * S[19];
                S[37] = 0.0f;
                t2zx = zz * S[16];
                S[38] = 0.0f;
                yyzz = one - yyzz;

                p = arg1->p;
                t2yw = yy * S[19];
                xxyy = t2xx + t2yy;
                t2zy = zz * S[17];
                t2yx = yy * S[16];
                S[24] = yyzz;
                xxzz = t2xx + t2zz;

                S[33] = t2zy + t2xw;
                S[32] = t2zx - t2yw;
                S[28] = t2yx + t2zw;
                xxzz = one - xxzz;
                S[29] = xxzz;
                S[25] = t2yx - t2zw;
                S[30] = t2zy - t2xw;
                S[34] = one - xxyy;
                S[26] = t2zx + t2yw;

                {
                    f32 *r0 = p->m;
                    f32 *r1 = p->m + 4;
                    f32 *r2 = p->m + 8;
                    f32 *r3 = p->m + 12;
                    r0[0] = S[24]; r0[1] = S[25]; r0[2] = S[26]; r0[3] = S[27];
                    r1[0] = S[28]; r1[1] = S[29]; r1[2] = S[30]; r1[3] = S[31];
                    r2[0] = S[32]; r2[1] = S[33]; r2[2] = S[34]; r2[3] = S[35];
                    r3[0] = S[36]; r3[1] = S[37]; r3[2] = S[38]; r3[3] = S[39];
                }
            }

            {
                u8 *vt3 = *(u8 **)obj;
                void (*fn10)(u8 *, f32 *) = *(void (**)(u8 *, f32 *))(vt3 + 0x10);
                fn10((u8 *)obj + *(s16 *)(vt3 + 0x10), &S[0]);
            }
            S[1] += arg0->unk10;
        }
    }

    p = arg1->p;
    p->m[12] = S[0];
    p->m[13] = S[1];
    p->m[15] = 1.0f;
    p->m[14] = S[2];
}
